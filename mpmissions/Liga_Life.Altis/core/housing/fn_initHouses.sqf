#include "..\..\Liga_script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	Edited by H1rschi - D1e L1ga
	
	Description:
	Initializes the players houses, mainly throwing down markers.
*/
private["_house","_class","_position"];
if(EQUAL(count life_houses,0))  exitWith {}; //Nothing to do.

{
	_position = call compile format["%1",SEL(_x,0)];	
	_class = SEL(_x,2);
	if(_class isEqualTo "alt") then {
		_house = nearestBuilding _position;
	}else{	
		_house = nearestObject [_position,_class];
	};	
	
	_house SVAR["uid",round(random 99999),true];
		
	_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
	
	_marker = createMarkerLocal [format["house_%1",(_house GVAR "uid")],_position];
	_marker setMarkerTextLocal _houseName;
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerTypeLocal "loc_Lighthouse";
	if!(_house in life_vehicles) then {
		life_vehicles pushBack _house;
	};
	
} foreach life_houses;