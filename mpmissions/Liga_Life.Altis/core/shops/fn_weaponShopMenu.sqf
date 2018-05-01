#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_weaponShopMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Something
*/
private["_shopSide","_license","_flag","_exit","_level","_levelAssert","_levelName","_levelType","_levelValue","_levelMsg"];
_exit = false;
_shopTitle		= M_CONFIG(getText,"WeaponShops",(SEL(_this,3)),"name");
_shopSide 		= M_CONFIG(getText,"WeaponShops",(SEL(_this,3)),"side");
_license 		= M_CONFIG(getText,"WeaponShops",(SEL(_this,3)),"license");
_levelAssert 	= M_CONFIG(getArray,"WeaponShops",(SEL(_this,3)),"level");
_token 			= M_CONFIG(getText,"WeaponShops",(SEL(_this,3)),"token");
_levelName 		= SEL(_levelAssert,0);
_levelType 		= SEL(_levelAssert,1);
_levelValue 	= SEL(_levelAssert,2);
_levelMsg 		= SEL(_levelAssert,3);
life_shop_type 	= "wafschmug";

if(!(EQUAL(_shopSide,""))) then {
	_flag = switch(side player) do {case west: {"cop"}; case independent: {"med"}; case east: {"alac"}; default {"civ"};};
	if(!(EQUAL(_flag,_shopSide))) then {_exit = true;};
};
if!(_token isEqualTo "") then {
	if(	(call compile("liga_inv_"	+ _token)) isEqualTo 0	)exitWith{ _exit = true; };
};
if(_exit) exitWith {};

if(!(EQUAL(_license,""))) then {
	_flag = missionNamespace GVAR [_license,false];
	if!(_flag) exitWith {hint localize "STR_Shop_Veh_NoLicense"; _exit = true;};
};
if(_exit) exitWith {};

if(!(EQUAL(_levelValue,-1))) then {
	_level = GVAR_MNS _levelName;
	if(typeName _level isEqualTo typeName {}) then {_level = FETCH_CONST(_level);};

	_flag = switch(_levelType) do {
		case "SCALAR": {_level >= _levelValue};
		case "BOOL": {_level};
		case "EQUAL": {EQUAL(_level,_levelValue)};
		default {false};
	};
	if(!(_flag)) then {
		_exit = true;
		if(EQUAL(_levelMsg,"")) then {
			_levelMsg = (localize "STR_Shop_Veh_NotAllowed");
		};
	};
};
if(_exit) exitWith {hint _levelMsg;};

uiNamespace setVariable ["Weapon_Shop",SEL(_this,3)];
uiNamespace setVariable["Weapon_Magazine",0];
uiNamespace setVariable["Magazine_Array",[]];

if(!(createDialog "life_weapon_shop")) exitWith {};
if(!isClass(missionConfigFile >> "WeaponShops" >> (SEL(_this,3)))) exitWith {}; //Bad config entry.

disableSerialization;

ctrlSetText[38401,_shopTitle];

_filters = ((findDisplay 38400) displayCtrl 38402);
lbClear _filters;

ctrlShow [38406,true];
ctrlEnable [38406,false];
ctrlSetText[38406,"Magazine"];

_filters lbAdd localize "STR_Shop_Weapon_ShopInv";
_filters lbAdd localize "STR_Shop_Weapon_YourInv";

_filters lbSetCurSel 0;