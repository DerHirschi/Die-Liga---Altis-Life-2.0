#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_varHandle.sqf
	Author: Bryan "Tonic" Boardwine
	Edited bye Otii & Hirschi - Die Liga
	
	Description:
	Master handler for getting a variables name, short name, etc.
*/
private["_var","_mode","_class"];
_var = [_this,0,"",[""]] call BIS_fnc_param;
_mode = [_this,1,-1,[0]] call BIS_fnc_param;
if(_var isEqualTo "" OR _mode isEqualTo -1) exitWith {""};
/*	NEU */
//if(EQUAL(_mode,1)) exitWith { // Ohne Üsys
if(EQUAL(_mode,1)) then {		
	_class = (_var splitString "_.");
	reverse _class; 
	_class = SEL(_class,0);		
	//ITEM_VAR(_var);			
}else{	
	_class	= _var;				
	//ITEM_VARNAME(_var);		
};
/* Übergangssystem */
if(isClass (missionConfigFile >> "VirtualLigaItems" >> _class)) exitWith {
	if(EQUAL(_mode,0))then 	{
		ITEM_VARNAME(_class);
	}else{
		_class;
	};	
};