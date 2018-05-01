#include "..\..\Liga_script_macros.hpp"
/*
	Author: Hirschi - Die Liga
	Vorlage:Tonic´s Altis RPG (fn_buyHouse.sqf)

	LIGACL_fnc_buyTank
	
*/

private["_house","_uid","_action","_houseCfg"];

_house = param [0,ObjNull,[ObjNull]];
_uid = steamid;

if(isNull _house) exitWith {};
if(!(_house isKindOf "Land_fs_feed_F")) exitWith {};
if((_house GVAR ["house_owned",false])) exitWith {hint "Diese Tankstelle ist bereits verkauft"};
if(!isNil {(_house GVAR "house_sold")}) exitWith {hint localize "STR_House_Sell_Process"};
/*!!!!!!!!! Lizenz ändern !!!!!!!!!!!!!!*/
if(!lci_home) 							exitWith {hint "Du besitzt keine Lizenz"}; 
/*!!!!!!!!! Lizenz ändern !!!!!!!!!!!!!!*/

if(count liga_tankhouses >= (M_CONFIG(getNumber,"Ligaworld","Liga_Tankstellen","TankstLimit"))) exitWith {hint format[localize "STR_House_Max_House",M_CONFIG(getNumber,"Ligaworld","Liga_Tankstellen","TankstLimit")]};
_preis = M_CONFIG(getNumber,"Ligaworld","Liga_Tankstellen","TankstKaufPreis");
_action = [
	format["Diese Tankstelle gibt es für %1",
	[_preis] call life_fnc_numberText
	],"Tankstelle kaufen",localize "STR_Global_Buy",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;


if(_action) then {
	liga_fuwait_tr = false;
	[[61,62,201]] call life_fnc_getPVC;
	if(BANK < _preis) exitWith {hint format [localize "STR_House_NotEnough"]};
	waitUntil{liga_fuwait_tr};
	liga_fuwait_tr = false;
	[_uid,_house,fuel_super,fuel_diesel,fuel_Kerosin] remoteExec ["TON_fnc_addTank",RSERV];

	_house SVAR ["house_owner",[_uid,profileName],true];
	_house SVAR ["locked",true,true];
	_house SVAR ["Trunk",[[],0],true];
	_house SVAR ["Kasse",0,true];
/*							 [BENZ,DIESEL,KERO]				*/	

	_house SVAR ["TankPreis",[fuel_super,fuel_diesel,fuel_Kerosin],true];
	_house SVAR ["uid",floor(random 99999),true];

	_flag = _preis;
	BANK = BANK - _flag;
	_log = [player, player, -_flag, 8, BANK, CASH];
	LOG_to_HC(0,_log);
	[6] call SOCK_fnc_updatePartial;
	life_vehicles pushBack _house;
	liga_tankhouses pushBack [str(getPosATL _house),[]];
	
	/*MARKER !!! ????? */
	_marker = createMarkerLocal [format["tankst_%1",(_house GVAR "uid")],getPosATL _house];
	_houseName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _house), "displayName");
	_marker setMarkerTextLocal _houseName;
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerTypeLocal "loc_Lighthouse";

	["buyTankst"] spawn mav_ttm_fnc_addExp;
};