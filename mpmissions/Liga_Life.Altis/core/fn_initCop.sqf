#include "..\Liga_script_macros.hpp"
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine
	Edited by Hirschi Liga-Life
	
	Description:
	Cop Initialization file.
*/

player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};

if((__GETC__(life_coplevel) isEqualTo 0) && (__GETC__(life_adminlevel) < 5)) exitWith
{
	["NotWhitelisted",false,true] call BIS_fnc_endMission;
	sleep 35;
};

_ent = "level_" + (str (__GETC__(life_coplevel)));

life_paycheck = getNumber (missionConfigFile >> "Liga_Fraktionen" >> "cops" >> _ent >> "paycheck");

player SVAR["rank",(__GETC__(life_coplevel)),true];

[] call life_fnc_spawnMenu;

waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.


_gef = nearestObject [[15201,17364,0.00143814], "Land_Cargo_House_V1_F"];
_gef addAction["<t color='#B40404'>Abschließen</t>"	  ,  { (_this select 0) setVariable["bis_disabled_Door_1",1,true];  } ,"",0,false,false,""," side player isEqualTo WEST "	];   	
_gef addAction["<t color='#01DF3A'>Aufschließen</t>"	  ,  { (_this select 0) setVariable["bis_disabled_Door_1",0,true];  } ,"",0,false,false,""," side player isEqualTo WEST "	];   	