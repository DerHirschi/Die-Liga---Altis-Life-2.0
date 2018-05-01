#include "..\..\Liga_script_macros.hpp"
/*
File : fn_copShowLicense.sqf
Create : Black Lagoon
Edit : Noldy and CYNX
Link : http://www.global-gamer.com/home/wbb/index.php/Thread/509-Turorial-Polizeimarke-zeigen/

Beschreibung : Fuegt einen 'Polizeiausweis' hinzu, den man ueber scrollen Zivilisten zeigen kann
*/

private["_target"];

_target = cursorTarget;

if(playerSide != west) exitWith
{
	hint "Du bist kein Cop!";
};

if( isNull _target) then {_target = player;};

if( !(_target isKindOf "Man") ) then {_target = player;};

if( !(alive _target) ) then {_target = player;};

_ent = "level_" + (str (__GETC__(life_coplevel)));

_rang = getText (missionConfigFile >> "Liga_Fraktionen" >> "cops" >> _ent >> "rang");;

_message = format["<img size='10' color='#FFFFFF' image='textures\ausweis_cop.jpg'/><br/><br/><t size='2.5'>%1</t><br/><t size='1.8'>%2</t><br/>", name player, _rang];

[player,_message] remoteExecCall ["life_fnc_copLicenseShown",_target];