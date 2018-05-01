#include "\life_server\Liga_Macros.hpp"
/*
	File: fn_vehicleStore.sqf
	Author: Bryan "Tonic" Boardwine
	Edited by Hirschi Liga Life
	
	Description:
	Stores the vehicle in the 'Garage'
*/
private["_vehicle","_impound","_repcount","_vInfo","_tuv","_vInfo","_plate","_uid","_query","_unit","_dam_ar","_trunk","_cargo"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_impound = [_this,1,false,[true]] call BIS_fnc_param;
_unit 	 = [_this,2,ObjNull,[ObjNull]] call BIS_fnc_param;


_resourceItems = [];
{
	if( (M_CONFIG(getNumber,"VirtualLigaItems",(configName _x),"saveable") ) isEqualTo 1 ) then {
		_resourceItems pushBack (configName _x);
	};	
} forEach ("true" configClasses (missionConfigFile >> "VirtualLigaItems"));


if(isNull _vehicle OR isNull _unit) exitWith {life_impound_inuse = false; (owner _unit) publicVariableClient "life_impound_inuse";life_garage_store = false;(owner _unit) publicVariableClient "life_garage_store";}; //Bad data passed.

_vInfo 		=  _vehicle GVAR["dbInfo",[]];
_repcount 	=  _vehicle GVAR["tuv",[]];

if(count _vInfo > 0) then
{
	_plate 	= SEL(_vInfo,1);
	_uid 	= SEL(_vInfo,0);
};

if(count _repcount isEqualTo 0) then {_repcount = 0;_tuv = 0;}else{_tuv = _repcount select 0;_repcount = _repcount select 1;};
_trunk = _vehicle getVariable ["Trunk", [[], 0]];
_itemList = _trunk select 0;
_totalweight = 0;
_items = [];

{
	if ((_x select 0) in _resourceItems) then {
		_items pushBack[(_x select 0),(_x select 1)];
		_weight = (ITEM_WEIGHT(_x select 0)) * (_x select 1);
		_totalweight = _weight + _totalweight;
	};
}forEach _itemList;		
		
_trunk = [_items, _totalweight];
		
_vehItems = getItemCargo _vehicle;
_vehMags = getMagazineCargo _vehicle;
_vehWeapons = getWeaponCargo _vehicle;
_vehBackpacks = getBackpackCargo _vehicle;
_cargo = [_vehItems,_vehMags,_vehWeapons,_vehBackpacks];
		// no items? clean the array so the database looks pretty
if ((count (_vehItems select 0) isEqualTo 0) && (count (_vehMags select 0) isEqualTo 0) && (count (_vehWeapons select 0) isEqualTo 0) && (count (_vehBackpacks select 0) isEqualTo 0)) then {_cargo = [];};

		// prepare
//_trunk = [_trunk] call DB_fnc_mresArray;
//_cargo = [_cargo] call DB_fnc_mresArray;

// update
//_query = format ["UPDATE vehicles SET active='0', inventory='%3', gear='%4', fuel='%5', damage='%6' WHERE pid='%1' AND plate='%2'", _uid, _plate, _trunk, _cargo, _fuel, _damage];
_dam_ar = [_vehicle] call TON_fnc_getHit;

if(_impound) then
{
	if(count _vInfo isEqualTo 0) then 
	{
		life_impound_inuse = false;
		(owner _unit) publicVariableClient "life_impound_inuse";
		if(!isNil "_vehicle" && {!isNull _vehicle}) then {
			deleteVehicle _vehicle;
		};
	} 
		else
	{
		_query = format["vehicleUpdateActivePlate:0:%1:%2:%3:%4:%5:%6:%7",_uid,_plate,_dam_ar,_repcount,_tuv,_trunk,_cargo];
		/*
		diag_log "╔════════════════════════════════╗";
		diag_log "║------------------ Client Query Request -----------------";
		diag_log "╠════════════════════════════════╣";
		diag_log "║------------- Fahrzeug einparken DB LOG ------------";
		diag_log format["║ QUERY: %1",_query];
		diag_log "╚════════════════════════════════╝";
*/
		[_query,1] call DB_fnc_asyncCall;
		
		if(!isNil "_vehicle" && {!isNull _vehicle}) then {
			deleteVehicle _vehicle;
		};
		life_impound_inuse = false;
		(owner _unit) publicVariableClient "life_impound_inuse";
	};
}
	else
{
	if(count _vInfo isEqualTo 0) exitWith
	{
		[1,(localize "STR_Garage_Store_NotPersistent")] remoteExecCall ["life_fnc_broadcast",(owner _unit)];
		life_garage_store = false;
		(owner _unit) publicVariableClient "life_garage_store";
	};
	
	if(_uid != getPlayerUID _unit) exitWith
	{
		[1,(localize "STR_Garage_Store_NoOwnership")] remoteExecCall ["life_fnc_broadcast",(owner _unit)];
		life_garage_store = false;
		(owner _unit) publicVariableClient "life_garage_store";
	};	 
	_query = format["vehicleUpdateActivePlate:0:%1:%2:%3:%4:%5:%6:%7",_uid,_plate,_dam_ar,_repcount,_tuv,_trunk,_cargo];
	/*
	diag_log "╔════════════════════════════════╗";
	diag_log "║------------------ Client Query Request -----------------";
	diag_log "╠════════════════════════════════╣";
	diag_log "║------------- Fahrzeug einparken DB LOG ------------";
	diag_log format["║ QUERY: %1",_query];
	diag_log "╚════════════════════════════════╝";
	*/
	[_query,1] call DB_fnc_asyncCall;
	if(!isNil "_vehicle" && {!isNull _vehicle}) then {
		deleteVehicle _vehicle;
	};
	life_garage_store = false;
	(owner _unit) publicVariableClient "life_garage_store";
	[1,(localize "STR_Garage_Store_Success")] remoteExecCall ["life_fnc_broadcast",(owner _unit)];
};