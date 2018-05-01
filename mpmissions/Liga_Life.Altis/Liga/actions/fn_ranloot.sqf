#include "..\..\Liga_script_macros.hpp"
/*
	╔══════════════════════════════════════════════════╗
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║
	║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║
	║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	╠══════════════════════════════════════════════════╝
	║	File: fn_gather.sqf	
	║		
	║	Author:  	Hirschi - Die Liga		
	║	Vorlage:  	Bryan "Tonic" Boardwine,Devilfloh 		
	║	Vorlage:  	Altis-Life RPG Vers. 3.1.4.8 - 5.0 		
	╚══════════════════════════════════════════════════╝
*/
private["_curConfig","_diff","_gather","_val","_iin","_exit"];
if (life_action_inUse)				exitWith {};
if!(isNull objectParent player) 	exitWith {};
if (player getVariable "restrained")exitWith {hint localize "STR_NOTF_isrestrained";};

_zone 	 		= "";
_requiredItem 	= "";
_resourceCfg 	= missionConfigFile >> "LigaGather" >> "RandLoot_1";

for "_i" from 0 to count(_resourceCfg)-1 do {
    _curConfig 	= _resourceCfg select _i;    
    {
        if ((player distance (getMarkerPos _x)) < getNumber(_curConfig >> "zoneSize")) exitWith {_zone = _x;};
    } forEach ( getArray(_curConfig >> "zones") );
    if!(_zone isEqualTo "") exitWith {};
};
if (_zone isEqualTo "") exitWith {};

_requiredItem 	= getText(_curConfig >> "item");
_exit 			= false;
if!(_requiredItem isEqualTo "") then {
    _valItem = missionNamespace getVariable "liga_inv_" + _requiredItem;
    if (_valItem < 1) exitWith {
       	hint ( getText(_curConfig >> "noItemHint") );        
        _exit = true;
    };
};
if (_exit) exitWith {};

life_action_gathering 	= true;
life_action_inUse 		= true;
_requiredItem 			= getText(_curConfig >> "item");
_iin 					= false;

_val = round random [1,0,7];
if!(EQUAL(_val,0))then {
	_iin 	= false;
	_arr	= getArray(_curConfig >> "zloot");
	_gather = SEL(_arr,(round (random ((count _arr)-1))));		
	_diff 	= [_gather,_val,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
}else{
	_iin 	= true;
	_arr	= getArray(_curConfig >> "iloot");
	_gather = SEL(_arr,(round (random ((count _arr) - 1))));
	_val 	= floor random [1,0,4];
	_val 	= _val min 1;		
	_diff	= 1;
};	
if(EQUAL(_diff,0)) exitWith {
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
/*	// XP SYS
_loop 	= _maxGather * (missionNamespace getVariable ["mav_ttm_var_gatherMultiplier", 1]);
*/
for "_i" from 0 to 4 do {
    player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	sleep 0.5;
};	
if!(_iin) then {
	if(([true,_gather,_diff] call life_fnc_handleInv)) then
	{		
		_itemName = M_CONFIG(getText,"VirtualLigaItems",_gather,"displayName");
		titleText[format[localize "STR_NOTF_Gather_Success",_itemName,_diff],"PLAIN"];
	}else{
		titleText["Du hast nichts gefunden ...","PLAIN"];
	};
}else{
	if!(EQUAL(_val,0))then {
		player addItemToBackpack _gather;
		_itemName = [_gather] call life_fnc_fetchCfgDetails;
		titleText[format[localize "STR_NOTF_Gather_Success",SEL(_itemName,1),1],"PLAIN"];	
	}else{
		titleText["Du hast nichts gefunden ...","PLAIN"];
	};
};	
life_action_inUse 		= false;
// Maveric XP SYS 
//["ItemGather"] spawn mav_ttm_fnc_addExp;