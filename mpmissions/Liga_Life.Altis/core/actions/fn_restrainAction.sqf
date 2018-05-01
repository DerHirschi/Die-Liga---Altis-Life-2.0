#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine
	Edited by Hirschi Die Liga

	Description:
	Retrains the target.
*/
private["_ex"];
_unit = cursorTarget;
if(isNull _unit) 						exitWith {};
if((_unit GVAR "restrained")) 			exitWith {};
if(cursorTarget distance player > 3.5)	exitWith {};
if(EQUAL(player,_unit)) 				exitWith {};
if(!isPlayer _unit) 					exitWith {};
_ex = false;
if(EQUAL(playerSide,civilian)) then {
	if!([false,"zipties",1] call life_fnc_handleInv) then {
		hint "Du hast keine Kabelbinder.";
		_ex = true;
	}else{
		hint "Du hast die Person festgenommen!";
	};	
};
if(_ex)exitWith{};
playSound "hand";
//Broadcast!
_unit SVAR["restrained",true,true];
[player] remoteExec ["life_fnc_restrain",_unit];
[0,"STR_NOTF_Restrained",true,[_unit GVAR["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
