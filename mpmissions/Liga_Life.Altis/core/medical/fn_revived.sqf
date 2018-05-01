#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_revived.sqf
	Author: Bryan "Tonic" Boardwine
	Edit: Hirschi Liga-Life
	
	Description:
	THANK YOU JESUS I WAS SAVED!
*/
private["_medic","_dir","_reviveCost"];
_medic = [_this,0,"Unknown Medic",[""]] call BIS_fnc_param;
_oldGear = [life_corpse] call life_fnc_fetchDeadGear;
_reviveCost = LIGA_SETTINGS(getNumber,"revive_fee");
[_oldGear] spawn life_fnc_loadDeadGear;

life_corpse SVAR ["realname",nil,true]; //Should correct the double name sinking into the ground.
[life_corpse] remoteExecCall ["life_fnc_corpse",RANY];

_dir = getDir life_corpse;
hint format[localize "STR_Medic_RevivePay",_medic,[_reviveCost] call life_fnc_numberText];

closeDialog 0;
life_deathCamera cameraEffect ["TERMINATE","BACK"];
camDestroy life_deathCamera;
life_deathCamera = nil;

//Take fee for services.
if(BANK > _reviveCost) then {
	SUB(BANK,_reviveCost);
} else {
	BANK = 0;
};

player setDamage (0.25 - (damage player));
//Retexture Skins 
[] spawn life_fnc_ligaSetClothText;

//Bring me back to life.
player setDir _dir;
player setPosASL (visiblePositionASL life_corpse);
life_corpse setVariable["Revive",nil,true];
life_corpse setVariable["name",nil,true];
[life_corpse] remoteExecCall ["life_fnc_corpse",RANY];
hideBody life_corpse;

player setVariable["Revive",nil,true];
player setVariable["name",nil,true];
player setVariable["Reviving",nil,true];
[] call life_fnc_hudUpdate; //Request update of hud.