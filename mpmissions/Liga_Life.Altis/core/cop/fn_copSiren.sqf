#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_copSiren.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the cop siren sound for other players
*/
private["_vehicle"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_mode	 = [_this,1,"",[""]] call BIS_fnc_param;

if(isNull _vehicle) exitWith {};
if(isNil {_vehicle GVAR "siren"}) exitWith {};

switch (_mode) do {

	case "mimi" : {
			_vehicle say3D "SirenLong";
			uiSleep 3.98;		
		while {true} do
		{
			if(!(_vehicle GVAR "siren")) exitWith {};
			if(EQUAL(count(crew(_vehicle)),0)) then {_vehicle SVAR["siren",false,true]};
			if(!alive _vehicle) exitWith {};
			if(isNull _vehicle) exitWith {};
			_vehicle say3D "SirenLong_mi";
			uiSleep 0.852;
			if(!(_vehicle GVAR "siren")) exitWith {};
		};
	};

	default {
		while {true} do
		{
			if(!(_vehicle GVAR "siren")) exitWith {};
			if(EQUAL(count(crew(_vehicle)),0)) then {_vehicle SVAR["siren",false,true]};
			if(!alive _vehicle) exitWith {};
			if(isNull _vehicle) exitWith {};
			_vehicle say3D "SirenLong";
			uiSleep 3.98;
			if(!(_vehicle GVAR "siren")) exitWith {};
		};
	};
};