/*
	File: openEmpMenu.sqf
	Author: © 2014 nano2K - written for we-are-friendly.de
	
	Description:
	Opens the EMP operator menu
*/
if(!alive player || dialog ) exitWith {};
_ent = "level_" + (str (call life_coplevel));
if( ( getNumber (missionConfigFile >> "Liga_Fraktionen" >> "cops" >> _ent >> "EMP") )   isEqualTo 0 ) exitWith {	};


createDialog "nanoEMPConsole";	
disableSerialization;
waitUntil {!isNull (findDisplay 3494)};
[] spawn life_fnc_scanVehicles;
