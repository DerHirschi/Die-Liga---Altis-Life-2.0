#include "..\..\Liga_script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	Edit: Hirschi & Otti Liga-Life
	
	Description:
	Buys the house?
	
*/
private["_uid","_action","_houseCfg"];

_uid = steamid;

if(isNull life_pInact_curTarget) exitWith {};
if(!(life_pInact_curTarget isKindOf "House_F")) exitWith {};
if((life_pInact_curTarget GVAR ["house_owned",false])) exitWith {hint "This house is already owned even though you shouldn't be seeing this hint..."};
if(!isNil {(life_pInact_curTarget GVAR "house_sold")}) exitWith {hint localize "STR_House_Sell_Process"};
if(!lci_home) exitWith {hint localize "STR_House_License"};
if(count life_houses >= (__GETC__(life_houseLimit))) exitWith {hint format[localize "STR_House_Max_House",__GETC__(life_houseLimit)]};
closeDialog 0;

_houseCfg = [(typeOf life_pInact_curTarget)] call life_fnc_houseConfig;
if(EQUAL(count _houseCfg,0)) exitWith {};

[life_pInact_curTarget,player,0] remoteExec ["TON_fnc_preCheckHouse",RSERV];

waitUntil{	!isNil "kaufmich" };
if!(kaufmich) exitWith {hint "Dieses Haus gehoert bereits jemanden... "};

kaufmich = nil;

_action = [
	format[localize "STR_House_BuyMSG",
	[(_houseCfg select 0)] call life_fnc_numberText,
	(_houseCfg select 1)],localize "STR_House_Purchase",localize "STR_Global_Buy",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if(_action) then {
	if(BANK < (_houseCfg select 0)) exitWith {hint format [localize "STR_House_NotEnough"]};
	[_uid,life_pInact_curTarget] remoteExec ["TON_fnc_addHouse",RSERV];	
	life_pInact_curTarget setVariable ["house_owner",[_uid,profileName],true];
	life_pInact_curTarget setVariable ["locked",true,true];	
	life_pInact_curTarget setVariable ["Trunk",[[],0],true];	
	life_pInact_curTarget setVariable ["containers",[],true];	
	life_pInact_curTarget setVariable ["uid",floor(random 99999),true];
	_flag = SEL(_houseCfg,0);
	BANK = BANK - _flag;
	_log = [player, player, -_flag, 8, BANK, CASH];
	LOG_to_HC(0,_log);
	[6] call SOCK_fnc_updatePartial;
	life_vehicles pushBack life_pInact_curTarget;
	life_houses pushBack [str(getPosATL life_pInact_curTarget),[]];
	_marker = createMarkerLocal [format["house_%1",(life_pInact_curTarget GVAR "uid")],getPosATL life_pInact_curTarget];
	_houseName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf life_pInact_curTarget), "displayName");
	_marker setMarkerTextLocal _houseName;
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerTypeLocal "loc_Lighthouse";
	_numOfDoors = FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,(typeOf life_pInact_curTarget),"numberOfDoors");

	private["_var"];
	for "_i" from 1 to _numOfDoors do {
		//_house SVAR [format["bis_disabled_Door_%1",_i],0,true];
		_var = format["bis_disabled_Door_%1",_i];
		SVARALL(life_pInact_curTarget,_var,1);
	};
	["buyHouse"] spawn mav_ttm_fnc_addExp;
};