#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_onPlayerRespawn.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Does something but I won't know till I write it...
*/
private["_unit","_corpse"];
_unit = SEL(_this,0);
_corpse = SEL(_this,1);
life_corpse = _corpse;

//Comment this code out if you want them to keep the weapon on the ground.
private["_containers"];
_containers = nearestObjects[getPosATL _corpse,["WeaponHolderSimulated"],5]; //Fetch list of containers (Simulated = weapons)
{deleteVehicle _x;} foreach _containers; //Delete the containers.

//Set some vars on our new body.
_unit SVAR["restrained",false,true];
_unit SVAR["Escorting",false,true];
_unit SVAR["transporting",false,true]; //Again why the fuck am I setting this? Can anyone tell me?
_unit SVAR["steam64id",(getPlayerUID player),true]; //Reset the UID.
_unit SVAR["realname",profileName,true]; //Reset the players name.

//_unit addRating 999999999; //Set our rating to a high value, this is for a ARMA engine thing.
while {rating _unit < 100000} do { 
	_unit addRating 500000000; 
};
player playMoveNow "amovppnemstpsraswrfldnon";

[] call life_fnc_setupActions;
[] spawn IL_Liga_Taru_Init;

[_unit,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];

if(playerSide isEqualTo east) then {
	[] spawn life_fnc_adacDefault;
};