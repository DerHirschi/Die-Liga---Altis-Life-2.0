#include "\a3_SkyNet_HC\SkyNet_Macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	WHAT THE HELL DO YOU THINK IT DOES?!?!!??!?!!?!??!
	
	Make some Noise ??????
*/
private["_queryResult","_class","_query","_count","_house","_numOfDoors"];

_queryResult = ["housingInit",2,true,3]call SKY_fnc_dbCall;

if(count _queryResult isEqualTo 0) exitWith {};
{
	_pos = call compile format["%1",_x select 2];

	_class = SEL(_x,4);
	if(_class isEqualTo "alt") then {
		_house = nearestBuilding _pos;
	}else{	
		_house = nearestObject [_pos, _class];
	};	

	_house setVariable["house_owner",[_x select 1,_x select 3],true];
	_house setVariable["house_id",_x select 0,true];
	_house setVariable["locked",true,true]; //Lock up all the stuff.
	_numOfDoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _house) >> "numberOfDoors");
	for "_i" from 1 to _numOfDoors do {
		_house setVariable[format["bis_disabled_Door_%1",_i],1,true];
	};
} foreach _queryResult;
