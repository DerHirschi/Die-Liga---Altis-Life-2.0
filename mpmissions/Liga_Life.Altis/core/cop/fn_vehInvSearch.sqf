#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_vehInvSearch.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Searches the vehicle for illegal items.
*/
private["_vehicle","_vehicleInfo","_value"];
_vehicle = cursorTarget;
if(isNull _vehicle) exitWith {};
if(!(KIND_TRUNK_KH(_vehicle))) exitWith {};

_vehicleInfo = _vehicle GVAR ["Trunk",[]];
if(EQUAL(count _vehicleInfo,0)) exitWith {hint localize "STR_Cop_VehEmpty"};

_value = 0;
{
	_var = SEL(_x,0);
	_val = SEL(_x,1);	
	
	if!( (ITEM_ILLEGAL(_var)) isEqualTo -1 ) then {
		_value = _value + (_val * (ITEM_ILLEGAL(_var)) );
	};
} foreach (SEL(_vehicleInfo,0));

if(_value > 0) then
{
	[0,"STR_NOTF_VehContraband",true,[[_value] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
	ADD(BANK,_value);
	_vehicle SVAR["Trunk",[],true];
}
	else
{
	hint localize "STR_Cop_NoIllegalVeh";
};