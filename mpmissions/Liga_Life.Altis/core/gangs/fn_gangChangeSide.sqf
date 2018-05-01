#include "..\..\Liga_script_macros.hpp"
/* Author: Hirschi - Die Liga */

if!(playerSide isEqualTo civilian) exitWith {}; //What in the hell?
_side 	= [_this,0,civilian,[civilian]] call BIS_fnc_param;	
if(_side isEqualTo (side player)) exitWith {};	
_temp 	= group player;
[player] join (createGroup _side);
if(isNull _temp) then { deleteGroup _temp;};
if((count life_gangData) isEqualTo 0) exitWith {}; //Dafuq?

sleep round(random(5));

//Loop through to make sure there is not a group already created with the gang.
/*
_exitLoop = false;
{
	_groupName = _x GVAR "gang_name";
	if(!isNil "_groupName") then {
		_groupOwner = _x GVAR ["gang_owner",""];
		_groupID = _x GVAR "gang_id";
		if(EQUAL(_groupOwner,"") OR isNil "_groupID") exitWith {}; //Seriously?
		if(EQUAL(SEL(life_gangData,0),_groupID) && {EQUAL(SEL(life_gangData,1),_groupOwner)}) exitWith {_group = _x; _exitLoop = true;};
	};
} foreach allGroups;
*/

{[_x]join group player}forEach (units _temp);
_group = grpPlayer;
_group SVAR ["gang_id",SEL(life_gangData,0),true];	
_group SVAR ["gang_owner",SEL(life_gangData,1),true];
_group SVAR ["gang_name",SEL(life_gangData,2),true];
_group SVAR ["gang_maxMembers",SEL(life_gangData,3),true];
_group SVAR ["gang_bank",SEL(life_gangData,4),true];
_group SVAR ["gang_members",SEL(life_gangData,5),true];

deleteGroup _temp;

