/*
	File: fn_updateRequest.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Ain't got time to describe it, READ THE FILE NAME!
*/
private["_uid","_side","_cash","_bank","_licenses","_gear","_name","_query","_thread"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_name = [_this,1,"",[""]] call BIS_fnc_param;
_side = [_this,2,sideUnknown,[civilian]] call BIS_fnc_param;
_cash = [_this,3,0,[0]] call BIS_fnc_param;
_bank = [_this,4,5000,[0]] call BIS_fnc_param;
_licenses = [_this,5,[],[[]]] call BIS_fnc_param;
_gear = [_this,6,[],[[]]] call BIS_fnc_param;

//Get to those error checks.
if((_uid isEqualTo "") OR (_name isEqualTo "")) exitWith {};

//Parse and setup some data.
_cash = [_cash] call DB_fnc_numberSafe;
_bank = [_bank] call DB_fnc_numberSafe;

//Does something license related but I can't remember I only know it's important?
for "_i" from 0 to count(_licenses)-1 do {
	_bool = [(_licenses select _i) select 1] call DB_fnc_bool;
	_licenses set[_i,[(_licenses select _i) select 0,_bool]];
};

//PLAYTIME
_playtime = [_uid] call TON_fnc_getPlayTime;
_playtime_update = [];

{
    if ((_x select 0) isEqualTo _uid) exitWith
    {
        _playtime_update pushBack [_x select 1];
    };
} forEach TON_fnc_playtime_values_request;
_playtime_update = (_playtime_update select 0) select 0;
switch (_side) do {
    case west: {_playtime_update set[1,_playtime];};
    case civilian: {_playtime_update set[0,_playtime];};
    case independent: {_playtime_update set[2,_playtime];};
    case east: {_playtime_update set[3,_playtime];};
};

_playtime_update = [_playtime_update] call DB_fnc_mresArray;


switch (_side) do {
	case west: {_query = format["playerWestUpdate:%1:%2:%3:%4:%5:%6:%7",_name,_cash,_bank,_gear,_licenses,_uid,_playtime_update];};
	case civilian: {_query = format["playerCivilianUpdate:%1:%2:%3:%4:%6:%7:%5:%8",_name,_cash,_bank,_licenses,_uid,_gear,[_this select 7] call DB_fnc_bool,_playtime_update];};
	case independent: {_query = format["playerIndependentUpdate:%1:%2:%3:%4:%6:%5:%7",_name,_cash,_bank,_licenses,_uid,_gear,_playtime_update];};
	case east: {_query = format["playerEastUpdate:%1:%2:%3:%4:%6:%5:%7",_name,_cash,_bank,_licenses,_uid,_gear,_playtime_update];};
};

_queryResult = [_query,1] call DB_fnc_asyncCall;