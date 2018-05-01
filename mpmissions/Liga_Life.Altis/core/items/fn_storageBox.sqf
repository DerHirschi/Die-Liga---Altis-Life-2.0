#include "..\..\Liga_script_macros.hpp"

/*
	Author: Bryan "Tonic" Boardwine
	Edited: Hirschi - Die Liga
	
	Description:
	Tries to place a storage box in the nearest house.
*/
private["_boxType","_dir","_positions","_containers","_pos","_houseCfg","_slots"];
_boxType = _this select 0;

life_pInact_curTarget = nearestObject [(getPosATL player), "House_F"];
if(!(life_pInact_curTarget in life_vehicles)) exitWith {hint localize "STR_ISTR_Box_NotinHouse"};
_containers = life_pInact_curTarget getVariable["containers",[]];
_houseCfg = [(typeOf life_pInact_curTarget)] call life_fnc_houseConfig;
if(count _houseCfg isEqualTo 0) exitWith {};
if(count _containers >= (_houseCfg select 1)) exitWith {hint localize "STR_ISTR_Box_HouseFull"};

_slots = life_pInact_curTarget getVariable ["slots",[]];
_positions = [life_pInact_curTarget] call life_fnc_getBuildingPositions;
_pos = [0,0,0];
{
	_slots = life_pInact_curTarget GVAR ["slots",[]];
	if(!(_forEachIndex in _slots)) exitWith {
		_slots pushBack _forEachIndex;
		life_pInact_curTarget SVAR["slots",_slots,true];
		_pos = SEL(_x,0);
		_dir = SEL(_x,1);
	};
} foreach _positions; 
if(_pos isEqualTo [0,0,0]) exitWith {hint localize "STR_ISTR_Box_HouseFull_2"};
if(!([false,_boxType,1] call life_fnc_handleInv)) exitWith {};
switch (_boxType) do {

	case "storagebig": {
		_container = "B_supplyCrate_F" createVehicle [0,0,0];
		_container allowDamage false;		
		_container setPosATL (life_pInact_curTarget modelToWorld _pos);
		_container setDir 	 (getDir life_pInact_curTarget + _dir);
		
		_containers pushBack _container;
		life_pInact_curTarget SVAR["containers",_containers,true];
		[life_pInact_curTarget] remoteExecCall ["TON_fnc_updateHouseContainers",RSERV];	
				
		//Empty out the crate
		clearWeaponCargoGlobal _container;
		clearMagazineCargoGlobal _container;
		clearItemCargoGlobal _container;
		clearBackpackCargoGlobal _container;
	};
};
life_pInact_curTarget = nil;