#include "..\Liga_script_macros.hpp"
/*
	File: fn_initCiv.sqf
	Author: Bryan "Tonic" Boardwine
	Edited by Hirschi Liga-Life
	
	Description:
	Initializes the civilian.
*/
//private["_spawnPos"];
/*
if!(playerSide isEqualTo civilian) then {
	waitUntil { (!isNil "life_adminlevel")  }; 
	if((__GETC__(life_adminlevel) < 5)) exitWith
	{
		["SpyGlass",false,false] execVM "\a3\functions_f\Misc\fn_endMission.sqf";
		sleep 35;
	};
};
*/
civ_spawn_1 = nearestObjects[getMarkerPos  "civ_spawn_1", ["Land_i_Shop_01_V1_F","Land_i_Shop_02_V1_F","Land_i_Shop_03_V1_F","Land_i_Stone_HouseBig_V1_F"],250];
civ_spawn_2 = nearestObjects[getMarkerPos  "civ_spawn_2", ["Land_i_Shop_01_V1_F","Land_i_Shop_02_V1_F","Land_i_Shop_03_V1_F","Land_i_Stone_HouseBig_V1_F"],250];
civ_spawn_3 = nearestObjects[getMarkerPos  "civ_spawn_3", ["Land_i_Shop_01_V1_F","Land_i_Shop_02_V1_F","Land_i_Shop_03_V1_F","Land_i_Stone_HouseBig_V1_F"],250];
civ_spawn_4 = nearestObjects[getMarkerPos  "civ_spawn_4", ["Land_i_Shop_01_V1_F","Land_i_Shop_02_V1_F","Land_i_Shop_03_V1_F","Land_i_Stone_HouseBig_V1_F"],250];
waitUntil {!(isNull (findDisplay 46))};

cutText["","BLACK FADED"];

if(liga_first) then 
{	
	playSound "startf";
	[]execVM "scripts\fwelcome.sqf";
}
else
{
	if(life_is_arrested) then
	{
		life_is_arrested = false;
		[player,true] spawn life_fnc_jail;
		
		[] call life_fnc_hudSetup;
	}
	else
	{
		[] call life_fnc_spawnMenu;
		waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
		waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
		
		if(__GETC__(life_adminlevel) < 4)then{playSound "start";};
		
		
		[] call life_fnc_hudSetup;
	};
};

player addRating 999999999;
//player addRating -100000000;