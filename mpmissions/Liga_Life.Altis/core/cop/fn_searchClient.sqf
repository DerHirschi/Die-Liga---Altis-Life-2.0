#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_searchClient.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Searches the player and he returns information back to the player.
*/
private["_inv","_val","_robber"];
params [
	["_cop",objNull,[objNull]]
];
if(isNull _cop) exitWith {};

_inv = [];
_robber = false;

_illegal_items = [];
{
	if!( (ITEM_ILLEGAL(configName _x)) isEqualTo -1 ) then {
		_illegal_items pushBack (configName _x);
	};	
} forEach ("true" configClasses (missionConfigFile >> "VirtualLigaItems"));

//Illegal items
{	
	_val = GVAR_MNS ("liga_inv_" + _x);
	if(_val > 0) then
	{
		_inv pushBack [_x ,_val];
		[false,_x,_val] call life_fnc_handleInv;
	};
} foreach _illegal_items;

if(!life_use_atm) then  {
	CASH = 0;
	_robber = true;
};

[player,_inv,_robber] remoteExec ["life_fnc_copSearch",_cop];