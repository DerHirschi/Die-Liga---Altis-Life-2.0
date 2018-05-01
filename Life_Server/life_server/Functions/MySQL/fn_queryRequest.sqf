#include "\life_server\Liga_Macros.hpp"
/*
	File: fn_queryRequest.sqf
	Author: Bryan "Tonic" Boardwine
	Edit: Hirschi - Die Liga

	Return:
	ARRAY - If array has 0 elements it should be handled as an error in client-side files.
	STRING - The request had invalid handles or an unknown error and is logged to the RPT.
*/
private["_uid","_side","_query","_queryResult","_tickTime"];
_uid 		= [_this,0,"",[""]] call BIS_fnc_param;
_side 		= [_this,1,sideUnknown,[civilian]] call BIS_fnc_param;
_ownerID 	= [_this,2,ObjNull,[ObjNull]] call BIS_fnc_param;

if(isNull _ownerID) exitWith {};

_query 		= switch(_side) do {
	case west: 			{format["playerWestInfo:%1",_uid];};
	case civilian: 		{format["playerCivInfo:%1",_uid];};
	case independent: 	{format["playerIndependentInfo:%1",_uid];};
	case east: 			{format["playerEastInfo:%1",_uid];};
	case default 		{format["playerCivInfo:%1",_uid];};
};

_tickTime 		= diag_tickTime;
_queryResult 	= [_query,2,true] call DB_fnc_asyncCall;

if((EQUAL(EXTDB_SETTINGS("MySQL_Query"),1))) then {
	["diag_log",[
		"------------- Client Query Request -------------",
		format["QUERY: %1",_query],
		format["Time to complete: %1 (in seconds)",(diag_tickTime - _tickTime)],
		format["Result: %1",_queryResult],
		"------------------------------------------------"
	]] call TON_fnc_logIt;
};

if(typeName _queryResult isEqualTo "STRING") exitWith {
	[] remoteExecCall ["SOCK_fnc_insertPlayerInfo",_ownerID];
};

if(count _queryResult isEqualto 0) exitWith {
	[] remoteExecCall ["SOCK_fnc_insertPlayerInfo",_ownerID];
};
_queryResult 	= _queryResult select 0;

//Blah conversion thing from a2net->extdb
private["_tmp"];
_tmp = _queryResult select 2;
_queryResult set[2,[_tmp] call DB_fnc_numberSafe];
_tmp = _queryResult select 3;
_queryResult set[3,[_tmp] call DB_fnc_numberSafe];

//Convert tinyint to boolean
_old = _queryResult select 6;
for "_i" from 0 to (count _old)-1 do
{
	_data = _old select _i;
	_old set[_i,[_data select 0, ([_data select 1,1] call DB_fnc_bool)]];
};

_queryResult set[6,_old];

	/*
		[
			ID						0
			STEAM ID				1
			CASH					2
			BANK					3
			life_adminlevel			4
			life_donator			5
			licenses				6
			life_is_arrested		7
			life_gear				8			
			life_house				9
			life_gangData			10
			life_blacklisted		11			
			_keyArr					12
			liga_tankhouses			13
			life_coplevel			14
			life_mediclevel			15
			liga_ladenhouses		16
		]
	*/
//Playtime

_quest = ([format["playerEXPcheck:%1", _uid], 2] call DB_fnc_asyncCall) select 0;
if(_quest) then {
	
	[format["playerEXPinsert:%1:%2:%3", _uid,"old",([[0,0,0,0]] call DB_fnc_mresArray)], 2] call DB_fnc_asyncCall; 
};
_queryResultEXP 	= [(format["playerCivInfoEXP:%1",_uid]),2,true] call DB_fnc_asyncCall;
//diag_log format ["<<<%1",_queryResultEXP];
_new = [((_queryResultEXP select 0) select 0)] call DB_fnc_mresToArray;
//diag_log format ["<<<_new%1",_new];
if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
//diag_log format ["<<<_new%1",_new];

_index = TON_fnc_playtime_values_request find [_uid, _new];
//diag_log format ["<<<_index%1",_index];
if!(_index isEqualTo -1) then {
	TON_fnc_playtime_values_request set[_index,-1];
	TON_fnc_playtime_values_request = TON_fnc_playtime_values_request - [-1];
	TON_fnc_playtime_values_request pushBack [_uid, _new];
} else {
	TON_fnc_playtime_values_request pushBack [_uid, _new];
};	

//Parse data for specific side.
switch (_side) do {

	case east: {
		 //Playtime
		[_uid,_new select 3] call TON_fnc_setPlayTime;	       	
	};
	case west: 			{
        //Playtime
		[_uid,_new select 1] call TON_fnc_setPlayTime;			
	};
	case independent: 	{		
        //Playtime
        [_uid,_new select 2] call TON_fnc_setPlayTime;		
	};

	case default {
		_queryResult set[7,([_queryResult select 7,1] call DB_fnc_bool)];
		_queryResult set[11,(_queryResult select 9)];
		/*Housing*/
		_houseData = _uid spawn TON_fnc_fetchPlayerHouses;
		waitUntil {scriptDone _houseData};
		_queryResult set [9,(GVAR_MNS[format["houses_%1",_uid],[]])];
		/*Gang*/
		_gangData = _uid spawn TON_fnc_queryPlayerGang;
		waitUntil{scriptDone _gangData};
		_queryResult set [10,(GVAR_MNS[format["gang_%1",_uid],[]])];
		/*Tankstellen*/
		_tankData = _uid spawn TON_fnc_fetchPlayerTanks;
		waitUntil{scriptDone _tankData};
		_queryResult set [13,(GVAR_MNS[format["tankst_%1",_uid],[]])];
		/*Läden*/
		_ladenData = [_uid,_side] spawn TON_fnc_fetchPlayerLaden;
		waitUntil {scriptDone _ladenData};
		_queryResult set [16,(GVAR_MNS[format["laden_%1",_uid],[]])];			
		

        [_uid,_new select 0] call TON_fnc_setPlayTime;	
	
	
	};	
};

_keyArr = GVAR_MNS [format["%1_KEYS_%2",_uid,_side],[]];
_queryResult set[12,_keyArr];
_queryResult remoteExec ["SOCK_fnc_requestReceived",_ownerID];

//[_ownerID,_side,true] call TON_fnc_ManagPlCount;