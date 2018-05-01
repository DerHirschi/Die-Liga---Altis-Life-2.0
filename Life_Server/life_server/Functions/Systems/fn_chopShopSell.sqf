#include "\life_server\Liga_Macros.hpp"
/*
	File: fn_chopShopSell.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Checks whether or not the vehicle is persistent or temp and sells it.
*/
private["_unit","_vehicle","_price","_dam_ar","_repcount","_tuv","_trunk"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_vehicle = [_this,1,objNull,[objNull]] call BIS_fnc_param;
_price = [_this,2,500,[0]] call BIS_fnc_param;

_resourceItems = [];
{
	if( (M_CONFIG(getNumber,"VirtualLigaItems",(configName _x),"saveable") ) isEqualTo 1 ) then {
		_resourceItems pushBack (configName _x);
	};	
} forEach ("true" configClasses (missionConfigFile >> "VirtualLigaItems"));


//Error checks
if(isNull _vehicle OR isNull _unit) exitWith 
{
	[0,_vehicle] remoteExec ["life_fnc_chopRecv",_unit];
};

_displayName = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
_unit = owner _unit;
_repcount 	=  _vehicle getVariable["tuv",[]];
if(count _repcount isEqualTo 0) then {_repcount = 0;_tuv = 0;}else{_tuv = _repcount select 0;_repcount = _repcount select 1;};

_dbInfo = _vehicle getVariable["dbInfo",[]];
if(count _dbInfo > 0) then {
	_trunk = _vehicle getVariable ["Trunk",[[],0]];
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
	
	_uid = _dbInfo select 0;
	_plate = _dbInfo select 1;
	_dam_ar = [_vehicle] call TON_fnc_getHit;	
	_query = format["vehicleUpdateActivePlateCHOP:2:%1:%2:%3:%4:%5:%6:%7:%8",_uid,_plate,_dam_ar,"CHOP",_repcount,_tuv,_trunk,_cargo];
	[_query,1] call DB_fnc_asyncCall;
};
deleteVehicle _vehicle;
[_price,_vehicle] remoteExec ["life_fnc_chopRecv",_unit];