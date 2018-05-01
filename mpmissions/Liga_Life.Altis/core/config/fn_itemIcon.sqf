#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_itemIcon.sqf
	Author: EdgeKiller
	Edited by Otti & Hirschi - Die Liga

	Description:
	Return the icon for each altis life item.
*/
private["_var","_class"];
_var = [_this,0,"",[""]] call BIS_fnc_param;
if(_var isEqualTo "") exitWith {""};

_class = (_var splitString "_.");
reverse _class; 
_class = SEL(_class,0);

if(isClass (missionConfigFile >> "VirtualLigaItems" >> _class)) exitWith {
	M_CONFIG(getText,"VirtualLigaItems",_class,"icon");
};

""