#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_updateRequest.sqf
	Author: Tonic
*/
private["_packet","_array","_flag"];

_packet = [getPlayerUID player,(profileName),playerSide,CASH,BANK];
_array = [];
_flag = switch(side player) do {case west: {"cop"}; case civilian: {"civ"}; case independent: {"med"};case east: {"adac"}; default {"civ"};};
{
	if(EQUAL(SEL(_x,1),_flag)) then
	{		
		_array pushBack [SEL(_x,0),(missionNamespace GVAR (SEL(_x,0)))];		
	};
} foreach life_licenses;
_packet pushBack _array;
[] call life_fnc_saveGear;
_packet pushBack life_gear;
switch (playerSide) do {
case civilian: {
		_packet pushBack life_is_arrested;
	};
};
_packet remoteExecCall ["DB_fnc_updateRequest",RSERV];

SVAR_PRONS ["liga_thi",life_thirst];	
SVAR_PRONS ["liga_hun",life_hunger];
SVAR_PRONS ["liga_dam",damage player];

[0] call mav_ttm_fnc_clientSendUpdateToServer;
[1] call mav_ttm_fnc_clientSendUpdateToServer;
[2] call mav_ttm_fnc_clientSendUpdateToServer;
[3] call mav_ttm_fnc_clientSendUpdateToServer;