#include "..\..\Liga_script_macros.hpp"
/*
    File: fn_gather.sqf
    Author: Devilfloh
	Edited: Hirschi - Die Liga

    Description:
    Main functionality for gathering.
*/
private ["_flag","_exit","_maxGather","_curConfig","_diff","_diff1","_valItem","_valItem_b"];
if (life_action_inUse)				exitWith {};
if!(isNull objectParent player) 	exitWith {};
if (player getVariable "restrained")exitWith {hint localize "STR_NOTF_isrestrained";};
//if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};
_resourceCfg 	= missionConfigFile >> "LigaGather" >> "Resources_1";
_zone			= "";
for "_i" from 0 to count(_resourceCfg)-1 do {
    _curConfig 	= _resourceCfg select _i;    
    {
        if ((player distance (getMarkerPos _x)) < getNumber(_curConfig >> "zoneSize")) exitWith {_zone = _x;};
    } forEach ( getArray(_curConfig >> "zones") );
    if!(_zone isEqualTo "") exitWith {};
};
if (_zone isEqualTo "") exitWith {};

life_action_gathering 	= true;
life_action_inUse 		= true;
_maxGather 				= getNumber(_curConfig >> "amount");
_boostItem 				= getArray(_curConfig >> "boostitem");
_requiredItem 			= getText(_curConfig >> "item");
_boosterItem 			= _boostItem select 0;
_exit 					= false;
_valItem   				= 0;
_valItem_b 				= 0;

if!( (_requiredItem isEqualTo "") && (_boosterItem isEqualTo "") ) then {
	if!(_requiredItem isEqualTo "")then {
		_valItem   = missionNamespace getVariable [("liga_inv_" + _requiredItem),0];
	};	
	if!(_boosterItem isEqualTo "")then {
		_valItem_b = missionNamespace getVariable [("liga_inv_" + _boosterItem),0];		
	};	
    if ((_valItem <= 0) && (_valItem_b <= 0)) exitWith {
		hint ( getText(_curConfig >> "noItemHint") );
        _exit = true;
    };
	if (_valItem_b > 0) then { _maxGather = (SEL(_boostItem,1)); };
};
if (_exit) exitWith {life_action_inUse = false;};

_resource 	= configName _curConfig;
_zusRes		= getArray(_curConfig >> "zusaResou");
_zusReIt	= SEL(_zusRes,0);
_zuGath 	= SEL(_zusRes,1); 
	// XP SYS
_maxGather 	= _maxGather * (missionNamespace getVariable ["mav_ttm_var_gatherMultiplier", 1]);

if!( _zuGath isEqualTo -1) then {
	_amount = round(random(_maxGather)) + 1;
	_diff  	= [_resource,_amount,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

	_amount = round(random(_zuGath)) + 1;
	_diff1 	= [_zusReIt,_amount,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;	
	_flag	= _diff + _diff1;
}else{
	_amount = round(random(_maxGather)) + 1;
	_diff  	= [_resource,_amount,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
	_flag	= _diff;
}; 
if ( _flag isEqualTo 0 ) exitWith {
    hint localize "STR_NOTF_InvFull";
    life_action_inUse 		= false;	
};

if!((currentWeapon player isEqualTo "") && (player GVAR ["restrained", false])) then {
	life_curWep_h = currentWeapon player;
	player action ["SwitchWeapon", player, player, 100];
	player switchcamera cameraView;
};
_sound		= getText(_curConfig >> "sound");
if(_sound isEqualTo "") then {	player say3D "harvest";	}else{	player say3D _sound;	};

for "_i" from 0 to 4 do {
    player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	sleep 0.5;
};

if ([true,_resource,_diff] call life_fnc_handleInv) then {
	_itemName = M_CONFIG(getText,"VirtualLigaItems",_resource,"displayName");
	titleText[format [localize "STR_NOTF_Gather_Success",_itemName,_diff],"PLAIN"];
};
if!(_zuGath isEqualTo -1) then {
	if ([true,_zusReIt,_diff1] call life_fnc_handleInv) then {
		for "_i" from 0 to 2 do {
			player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
			waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
			sleep 0.5;
		};
		_itemName = M_CONFIG(getText,"VirtualLigaItems",_zusReIt,"displayName");
		titleText[format [localize "STR_NOTF_Gather_Success",_itemName,_diff1],"PLAIN"];
	};	
};
sleep 0.5;
life_action_inUse 		= false;
// Maveric XP SYS 
["ItemGather"] spawn mav_ttm_fnc_addExp;