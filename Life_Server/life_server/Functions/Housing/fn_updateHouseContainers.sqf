#include "\life_server\Liga_Macros.hpp"
/*
	BLAH BLAH
	I LOVE NOTEPAD++ GET OVER IT
	BLAH!
*/
private["_house","_houseID","_containers","_query"];
_house = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _house) exitWith {systemChat "House null";};
_houseID = _house GVAR["house_id",-1];
_containers = _house GVAR ["containers",[]];

	diag_log "╔══════════════════════════════════════════════════╗";
	diag_log "║-------------------------------  Update Trunk !! DB LOG----------------------------  ";
	diag_log "╠══════════════════════════════════════════════════╣";
	diag_log format["║ _houseID: %1",_houseID];
	
	diag_log format["║ _house: %1",_house];
	diag_log format["║ _containers: %1",_containers];
	diag_log "╚══════════════════════════════════════════════════╝";
	
if(_houseID isEqualTo -1) exitWith {};



//systemChat format["Number of containers found: %1",count _containers];
_arr = [];
{
	_className = typeOf _x;
	_weapons = getWeaponCargo _x;
	_magazines = getMagazineCargo _x;
	_items = getItemCargo _x;
	_backpacks = getBackpackCargo _x;
	
	_arr pushBack [_className,[_weapons,_magazines,_items,_backpacks]];
} foreach _containers;

diag_log format["║ _containers: %1",_containers];
diag_log "╚══════════════════════════════════════════════════╝";
//_arr = [_arr] call DB_fnc_mresArray;
_arr = call compile format ["%1",_arr];

_query = format["houseUpdateContainer:%1:%2",(str _arr),_houseID];

[_query,1] call DB_fnc_asyncCall;
//systemChat "Query ran?";