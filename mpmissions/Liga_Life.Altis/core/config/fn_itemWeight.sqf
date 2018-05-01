#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_itemWeight.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gets the items weight and returns it.
*/
private["_item"];
_item = [_this,0,"",[""]] call BIS_fnc_param;
if(_item isEqualTo "") exitWith {};

/*NEU*/ 
if(isClass (missionConfigFile >> "VirtualLigaItems" >> _item)) exitWith { //ÜSys
	M_CONFIG(getNumber,"VirtualLigaItems",_item,"weight");
};	
/*NEU ENDE*/  
1