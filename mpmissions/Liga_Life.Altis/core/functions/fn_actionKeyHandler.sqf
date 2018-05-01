#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_actionKeyHandler.sqf
	Author: Bryan "Tonic" Boardwine  
	Cleaned up  by Hirschi // Fuck - von wegen Cleanup .. Das war einmal
	
	Description:
	Master action key handler, handles requests for picking up various items and
	interacting with other players (Cops = Cop Menu for unrestrain,escort,stop escort, arrest (if near cop hq), etc).
*/
private["_curTarget","_isWater","_exit","_handle"];
if(life_action_inUse) 		exitWith {}; //Action is in use, exit to prevent spamming.
if(life_action_gathering) 	exitWith {}; //Action is in use, exit to prevent spamming.
//Temp fail safe.
if(life_interrupted) 		exitWith {life_interrupted = false;};
if(dialog) exitWith {}; //Don't bother when a dialog is open.
if!(isNull objectParent player) exitWith {};
{player reveal _x;} foreach (player nearObjects 30);
_curTarget 	= cursorTarget;
_objarr 	= nearestObjects [position player,["Land_Device_assembled_F"],3];
if!((count _objarr) isEqualTo 0)exitWith {
	_curTarget = SEL(_objarr,0); 
	if(SKY_HC_aktiv_1 &&  (_curTarget in life_vehicles) && ( player distance _curTarget < 8))then {  	[_curTarget,1]spawn LIGACL_fnc_TurmMenu;};
};
if(EQUAL(typeOf _curTarget,"Land_Research_house_V1_F"))exitWith {
	if(SKY_HC_aktiv_1 && (_curTarget in life_vehicles) && ( player distance _curTarget < 8))exitWith {  [_curTarget,0]spawn LIGACL_fnc_TurmMenu; };
	if(SKY_HC_aktiv_1 && ( player distance _curTarget < 8))exitWith {  [] spawn ligafn_alac_vehinfo; };
};

if(isNull _curTarget) exitWith {
	if(!life_action_gathering && !life_action_inUse) exitWith {
		private ["_fish"];
		if((surfaceIsWater (getPosASL player))) then {		
			_fish = ((nearestObjects[getPos player,["Salema_F","Ornate_random_F","Mackerel_F","Tuna_F","Mullet_F","CatShark_F"],3]) select 0); 
			if(!isNil "_fish") exitWith {	[_fish] call life_fnc_catchFish;	};		
			_fish = ((nearestObjects[getPos player,["Turtle_F"],3]) select 0); 
			if(!isNil "_fish") exitWith {	if!( alive _fish) then {[_fish] call life_fnc_gutAnimal;};	};
		} else {		
			_fish = ((nearestObjects[getPos player,["Hen_random_F","Cock_random_F","Goat_random_F","Sheep_random_F","Rabbit_F"],3]) select 0); 
			if(!isNil "_fish") then {	
				if!( alive _fish) then {
					life_action_gathering 	= true;
					_handle = [_fish] spawn life_fnc_gutAnimal;
					waitUntil {scriptDone _handle};	
					life_action_gathering 	= false;
				}else{
					life_action_gathering 	= true;
					_handle = [] spawn life_fnc_whereAmI;
					waitUntil {scriptDone _handle};	
					life_action_gathering 	= false;					
				};
			}else{	
				life_action_gathering 	= true;
				_handle = [] spawn life_fnc_whereAmI;
				waitUntil {scriptDone _handle};	
				life_action_gathering 	= false;
			};
		};
	};
};
/*
if(_curTarget isKindOf "Animal" && {!alive _curTarget}) exitWith {
	_turtle = ((nearestObjects[getPos player,["Salema_F","Ornate_random_F","Mackerel_F","Tuna_F","Mullet_F","CatShark_F","Turtle_F","Hen_random_F","Cock_random_F","Goat_random_F","Sheep_random_F","Rabbit_F"],3]) select 0); 
	[_turtle] call life_fnc_gutAnimal;
}; 
*/
//if(_curTarget isKindOf "Animal" ) exitWith {[_turtle] call life_fnc_gutAnimal;}; 

_exit = false;
if(_curTarget isKindOf "House_F" && {player distance _curTarget < 18} OR ((nearestObject [[16019.5,16952.9,0],"Land_Dome_Big_F"]) isEqualTo _curTarget OR (nearestObject [[16019.5,16952.9,0],"Land_Research_house_V1_F"]) isEqualTo _curTarget)) exitWith {
	// Ligahaus
	{
		if(player distance (getMarkerPos _x) < 50) exitWith 
		{
			hint "Du kannst dieses Gebäude nicht kaufen!";
			_exit = true;
		};
	} foreach ["house_1","house_2","house_3","house_4","house_5","house_6","house_7","house_8","house_9","house_10","house_11","house_12"];
	if (_exit) exitWith {};
		
	life_action_inUse = true;
	[]spawn {		
		sleep 2;
		waitUntil {isNull (findDisplay 37400)};
		life_action_inUse = false;	
	};
	[_curTarget] call life_fnc_houseMenu;
	sleep 1.5;
	life_action_inUse = false;	
};

//Check if it's a dead body.
if(_curTarget isKindOf "Man" && {!alive _curTarget} && {playerSide in [west,independent]}) exitWith {
	//Hotfix code by ins0
	if(((playerSide isEqualTo blufor && {(call life_revive_cops)}) || playerSide isEqualTo independent) && {"Medikit" in (items player)}) then {
		[_curTarget] call life_fnc_revivePlayer;
	};
};

if(_curTarget isKindOf "Man" && (alive _curTarget) && (playerSide isEqualTo east)) 	exitWith { closeDialog 0; [_curTarget,0]spawn life_fnc_adacInteractionMenu;};
if(_curTarget isKindOf "Man" && (alive _curTarget) && !(life_blacklisted isEqualTo 0))  exitWith { closeDialog 0; [_curTarget,1]spawn life_fnc_adacInteractionMenu;};

if(isPlayer _curTarget && _curTarget isKindOf "Man") then {
	if(/*(_curTarget getVariable["restrained",false]) && */!dialog && playerSide isEqualTo west) then 
	{
		if((player distance _curTarget > 3)) exitWith {};
		life_action_inUse = true;
		[_curTarget] call life_fnc_copInteractionMenu;
		sleep 1.5;
		life_action_inUse = false;
	};
		if((_curTarget getVariable["restrained",false]) && !dialog && playerSide isEqualTo independent) then 
	{
		if((player distance _curTarget > 3)) exitWith {};
		life_action_inUse = true;
		[_curTarget] call life_fnc_medInteractionMenu;
		sleep 1.5;
		life_action_inUse = false;
	};
	if((_curTarget getVariable["restrained",false]) && !dialog && playerSide isEqualTo civilian) then 
	{
		if((player distance _curTarget > 3)) exitWith {};
		life_action_inUse = true;
		[_curTarget] call life_fnc_civInteractionMenu;
		sleep 1.5;
		life_action_inUse = false;
	};
};
	private["_isVehicle","_miscItems","_money"];
	_isVehicle = if(KIND_TRUNK_KH(_curTarget)) then {true} else {false};
	_miscItems = ["Land_BottlePlastic_V1_F","Land_TacticalBacon_F","Land_Can_V3_F","Land_CanisterFuel_F","Land_Suitcase_F"];
	_money = "Land_Money_F";
	
	if(_isVehicle) then 
	{
		if(!dialog) then 
		{
			if(player distance _curTarget < ((boundingBox _curTarget select 1) select 0) + 2) then 
			{				
				life_action_inUse = true;
				[_curTarget] spawn life_fnc_vInteractionMenu;
				sleep 1.5;
				life_action_inUse = false;
			};
		};
	};	
	if((typeOf _curTarget) in _miscItems) then {
		[_curTarget,player,false] remoteExecCall ["TON_fnc_pickupAction",RSERV];
	} else {
		//It wasn't a misc item so is it money?
	if(EQUAL((typeOf _curTarget),_money) && {!(_curTarget GVAR ["inUse",false])}) then {
			[_curTarget,player,true] remoteExecCall ["TON_fnc_pickupAction",RSERV];
		};
	}; 