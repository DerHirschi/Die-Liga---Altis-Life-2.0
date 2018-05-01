#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_adminMenu.sqf
	Author: Hirschi - Die Liga
	
	Description:
	Opens the admin menu, sorry nothing special in here. Take a look for yourself.
*/
private["_display","_list","_side","_str"];

disableSerialization;
waitUntil {!isNull (findDisplay 2900)};
if(isNil life_adminlevel)exitWith {closeDialog 0;};
_ent		= "admin_level_" + (str (call life_adminlevel));
if( ADCFG(_ent,"openSupportmenu") isEqualTo 0   ) exitWith {closeDialog 0;};
if( ADCFG(_ent,"HCoffCheck") isEqualTo 1  && !SKY_HC_aktiv_1 ) exitWith {closeDialog 0; hint "HC offline !!!!";};

_display 	= findDisplay 2900;
_list 		= _display displayCtrl 2902;
lbClear _list;

{
	if(_forEachIndex > 1 ) then {
		if((getNumber(missionConfigFile >> "Admin_config" >> _ent >> "Supportmenu" >> (configName _x) )) isEqualTo 1  ) then {
			(_display displayCtrl (2302 + _forEachIndex)) ctrlShow true;
		}else{
			(_display displayCtrl (2302 + _forEachIndex)) ctrlShow false;
		};
		
	};
}forEach ( configProperties [missionConfigFile >> "Admin_config" >> _ent >> "Supportmenu" ,"true" ,false  ]) ;

{
	_side 	= switch(side _x) do {case west: {"Cop"}; case civilian: {"Civ"}; case independent: {"LRK"};  case east: {"ALAC"}; default {"Unknown"};};
	_str 	= format["%1 - %2 ", _x getVariable["realname",name _x],_side];
	if((getNumber(missionConfigFile >> "Admin_config" >> _ent >> "Supportmenu" >> "showSteamName" )) isEqualTo 1  ) then {
		_str 	= _str + format["- %1 ", _x getVariable["Sname",name _x]];
	};
	if((getNumber(missionConfigFile >> "Admin_config" >> _ent >> "Supportmenu" >> "showUID" )) isEqualTo 1  ) then {
		_str 	= _str + format["- (%1) ", getPlayerUID _x];
	};
	_list lbAdd _str;
	_list lbSetdata [(lbSize _list)-1,str(_x)];
		

} foreach playableUnits;

if( ADCFG(_ent,"openSupportmenu") isEqualTo 0   ) exitWith {closeDialog 0;};
if( ADCFG(_ent,"HCoffCheck") isEqualTo 1  && !SKY_HC_aktiv_1 ) exitWith {closeDialog 0; hint "HC offline !!!";};