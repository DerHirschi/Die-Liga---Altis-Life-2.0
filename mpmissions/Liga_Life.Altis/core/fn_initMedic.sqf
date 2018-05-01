#include "..\Liga_script_macros.hpp"
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine
	Edited by Hirschi Liga-Life
	
	Description:
	Initializes the medic..
*/

player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if((__GETC__(life_medicLevel) isEqualTo 0) && (__GETC__(life_adminlevel) < 5))  exitWith 
{
	["Notwhitelisted",false,true] call BIS_fnc_endMission;
	sleep 35;
};

_ent = "level_" + (str (__GETC__(life_mediclevel)));

life_paycheck = getNumber (missionConfigFile >> "Liga_Fraktionen" >> "medic" >> _ent >> "paycheck");

[] call life_fnc_spawnMenu;

waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.