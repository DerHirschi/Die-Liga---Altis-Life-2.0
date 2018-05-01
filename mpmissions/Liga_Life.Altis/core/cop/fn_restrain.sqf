#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_restrain.sqf
	Author: Bryan "Tonic" Boardwine
	Edited by Hirschi - Die Liga
	
	Description:
	Retrains the client.
*/
private["_cop","_player"];
_cop = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_player = player;
if(isNull _cop) exitWith {};


//Monitor excessive restrainment
[] spawn
{
	private["_time"];
	_timeSet	= getNumber(missionConfigFile >> "Liga_Fraktionen" >> "cops" >> "restrainTime");
	_westDist 	= getNumber(missionConfigFile >> "Liga_Fraktionen" >> "cops" >> "restrainDist");

	while {true} do
	{
		_time = time;
		waitUntil {sleep 0.5;(time - _time) > (_timeSet * 60)};
		
		if(!(player GVAR["restrained",false])) exitWith {};
		if(!([west,getPos player,_westDist] call life_fnc_nearUnits) && (player GVAR["restrained",false]) && vehicle player == player) exitWith {
			player SVAR["restrained",false,true];
			player SVAR["Escorting",false,true];
			player SVAR["transporting",false,true];
			knebel = nil;
			detach player;
			titleText[localize "STR_Cop_ExcessiveRestrain","PLAIN"];
		};
	};
};
if((player GVAR["surrender",false])) then { player SVAR["surrender",false,true]; player switchMove ""; };
titleText[format["Du wurdest festgenommen von %1",name _cop],"PLAIN"];
				
while {player GVAR "restrained"} do
{
	if(vehicle player isEqualTo player) then {
		player playMove "AmovPercMstpSnonWnonDnon_Ease";
	};
	
	_state = vehicle player;
	waitUntil {animationState player != "AmovPercMstpSnonWnonDnon_Ease" || !(player GVAR "restrained") || vehicle player != _state};
			
	if(!alive player) exitWith
	{
		player SVAR ["restrained",false,true];
		player SVAR ["Escorting",false,true];
		player SVAR ["transporting",false,true];
		detach _player;
	};
	
	if(!alive _cop) exitWith {
		player SVAR ["Escorting",false,true];
		detach player;
	};
	
	if(vehicle player != player) then
	{
		//disableUserInput true;
		if(driver (vehicle player) isEqualTo player) then {player action["eject",vehicle player];};
	};
};
		
if(alive player) then
{
	player switchMove "AmovPercMstpSlowWrflDnon_SaluteIn";
	player SVAR ["Escorting",false,true];
	player SVAR ["transporting",false,true];
	detach player;
};