#include "..\..\Liga_script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	Edited: Hirschi - Die Liga
	
	Description:
	Vehicle Garage, why did I spawn this in an action its self?
*/
private["_spawnPos","_type"];
_type = [_this,1,"",[""]] call BIS_fnc_param;
_spawnPos = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if(isNull _spawnPos) exitWith {};
if(!isClass (missionConfigFile >> "LigaHousingClass" >> typeOf _spawnPos)) exitWith {};
_confArr = M_CONFIG(getArray,"LigaHousingClass",(typeOf _spawnPos),"GaragSP");


life_garage_sp 		= [(_spawnPos modelToWorld SEL(_confArr,0))];
life_garage_sp_dir 	= (getDir _spawnPos) - (SEL(_confArr,1));
life_garage_type = _type;

[getPlayerUID player,playerSide,_type,player] remoteExec ["TON_fnc_getVehicles",RSERV];
createDialog "Life_impound_menu";
disableSerialization;
ctrlSetText[2802,(localize "STR_ANOTF_QueryGarage")];