#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_wantedGrab.sqf
	Author: ColinM
	
	Description:
	Prepare the array to query the crimes.
*/
private["_display","_tab","_criminal"];
disableSerialization;
_display = findDisplay 2400;
_tab = _display displayCtrl 2402;
_criminal = lbData[2401,(lbCurSel 2401)];
if(EQUAL(_criminal,""))exitWith {};

_criminal = call compile format["%1", _criminal];

[player,_criminal] remoteExecCall ["life_fnc_wantedCrimes",RSERV];