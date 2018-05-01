#include "\a3_SkyNet_HC\SkyNet_Macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	WHAT THE HELL DO YOU THINK IT DOES?!?!!??!?!!?!??!
	
	Make some Noise ?????? again ?? 
*/
private["_queryResult","_house","_pos","_class"];
	
_queryResult = ["LadenInit",2,true,3]call SKY_fnc_dbCall;

if(EQUAL(count _queryResult,0)) exitWith {};

{
	_pos = call compile format["%1",SEL(_x,2)];
	_class = SEL(_x,4);
	if(_class isEqualTo "") then {
		_house = nearestBuilding _pos;
	}else{	
		_house = nearestObject [_pos, _class];
	};	
	_house SVAR["house_owner",[SEL(_x,1),SEL(_x,3)],true];
	_house SVAR["laden_id",SEL(_x,0),true];
	_house SVAR["locked",true,true]; //Lock up all the stuff.

} foreach _queryResult;