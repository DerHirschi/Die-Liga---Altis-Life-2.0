#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_wantedMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Opens the Wanted menu and connects to the APD.
*/
private["_display","_list","_units"];
disableSerialization;

createDialog "life_wanted_menu";

_display = findDisplay 2400;
_list = _display displayCtrl 2401;
lbClear _list;
_units = [];

ctrlSetText[2404,"Establishing connection..."];

if!(side player isEqualTo west) then
{
	if(__GETC__(life_adminlevel) < 4) then {  	 ctrlShow[2405,false];ctrlShow[2406,false]; ctrlShow[2408,false]; ctrlShow[2407,false]; };
};

_ent = "level_" + (str (__GETC__(life_coplevel)));

if( ( getNumber (missionConfigFile >> "Liga_Fraktionen" >> "cops" >> _ent >> "delWanted") )   isEqualTo 0 ) then {	ctrlShow[2405,false];	};
if( ( getNumber (missionConfigFile >> "Liga_Fraktionen" >> "cops" >> _ent >> "WantedAdd") )   isEqualTo 0 ) then {	ctrlShow[2406,false];	};
if( ( getNumber (missionConfigFile >> "Liga_Fraktionen" >> "cops" >> _ent >> "ConAir") )  	  isEqualTo 0 ) then {	ctrlShow[2407,false];	};
if( ( getNumber (missionConfigFile >> "Liga_Fraktionen" >> "cops" >> _ent >> "Sperrzone") )   isEqualTo 0 ) then {	ctrlShow[2408,false];	};


[player] remoteExecCall ["life_fnc_wantedFetch",RSERV];