#include "..\..\Liga_script_macros.hpp"
/*
	Author: Hirschi - Die Liga
	Vorlage:Tonic´s Altis RPG (fn_initHouses.sqf)

	LIGACL_fnc_InitTank 
	
*/

if(EQUAL(count liga_tankhouses,0)) exitWith {}; //Nothing to do.

{
	_house = nearestObject [SEL(_x,0),"Land_fs_feed_F"];	 
	_house SVAR["uid",round(random 99999),true];	
	_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");	
	_marker = createMarkerLocal [format["tankst_%1",(_house GVAR "uid")],SEL(_x,0)];
	_marker setMarkerTextLocal _houseName;
	_marker setMarkerColorLocal "ColorYellow";
	_marker setMarkerTypeLocal "mil_dot";
	
} foreach liga_tankhouses;
