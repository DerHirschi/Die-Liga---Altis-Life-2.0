#include "\life_server\Liga_Macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Fetches all the players houses and sets them up.
*/
private["_query","_houses","_class","_pos","_dir","_house","_trunk"];
if(EQUAL(_this,"")) exitWith {};

_query = format["housingFetchPlayerHouse:%1",_this];

_houses = [_query,2,true] call DB_fnc_asyncCall;
//diag_log format [">>>>>>> %1",_houses];

_return = [];
{	
	_pos = call compile format["%1",_x select 1];
	_class = SEL(_x,4);
	//diag_log format [">>Laden Det>>>>> _x %1",_x];
	//diag_log format [">>Laden Det>>>>> class %1",_class];
	//diag_log format [">>>>>>> _x select 1 %1",_x select 1];
	if(_class isEqualTo "alt") then {
		_house = nearestBuilding _pos;
	}else{	
		_house = nearestObject [_pos, _class];
	};	
	VEH_DAMF(_house);
	_containers = [];
	_house SVAR["slots",[],true];
	if(!isNil {(_house GVAR "containers")}) then {
		{if(!isNull _x) then {deleteVehicle _x;};} foreach (_house GVAR "containers");
	};
	
	_trunk = SEL(_x,2);//[_x select 2] call DB_fnc_mresToArray;
	if(typeName _trunk == "STRING") then {_trunk = call compile format["%1", _trunk];};
	_containerData = _x select 3;//[_x select 3] call DB_fnc_mresToArray;
	if(typeName _containerData == "STRING") then {_containerData = call compile format["%1", _containerData];};
	_house SVAR["Trunk",_trunk,true];
	//diag_log format [">>>>>>> _containerData %1",_containerData];
	{
		if(EQUAL((count _x),0)) exitWith {}; //No containers / items.
		_className = SEL(_x,0);
		_weapons = (SEL(_x,1)) select 0;
		_magazines = (SEL(_x,1)) select 1;
		_items = (SEL(_x,1)) select 2;
		_backpacks = (SEL(_x,1)) select 3;
		
		//Setup the variables
		_positions = [_house] call life_fnc_getBuildingPositions;
		_pos = [0,0,0];
		
		{
			_slots = _house GVAR ["slots",[]];
			if(!(_forEachIndex in _slots)) exitWith {
				_slots pushBack _forEachIndex;
				_house SVAR["slots",_slots,true];
				_pos = SEL(_x,0);
				_dir = SEL(_x,1);
			};
		} foreach _positions; 
		
		if(_pos isEqualTo [0,0,0]) exitWith {};
	//	diag_log str (_house modelToWorld _pos);
	//	diag_log str (  _house);
	//	diag_log str (getPos  _house);
	//	diag_log str (  _pos);
	//	_container = createVehicle[_className,(_house modelToWorld _pos),[],0,"NONE"];
		_container = _className createVehicle [0,0,0];

		waitUntil{!isNil "_container"};
		uiSleep 0.5;
		//_container allowDamage false;
		VEH_DAMF(_container);
		_container setPosATL 	(_house modelToWorld _pos);
		_container setDir 		(getDir _house + _dir);
		
		
		//_container setPosATL _pos;
		//_container setPosATL (_house modelToWorld _pos);
		//_container enableSimulation false;		
		
		_containers pushBack _container;
		clearWeaponCargoGlobal _container;
		clearItemCargoGlobal _container;
		clearMagazineCargoGlobal _container;
		clearBackpackCargoGlobal _container;
		//Add weapons to the crate.
		{
			_weaponCount = (SEL(_weapons,1)) select _forEachIndex;
			_container addWeaponCargoGlobal [_x,_weaponCount];
		} foreach (SEL(_weapons,0));
		
		//Add magazines
		{
			_magazineCount = (SEL(_magazines,1)) select _forEachIndex;
			_container addMagazineCargoGlobal [_x,_magazineCount];
		} foreach (SEL(_magazines,0));
			
		//Add items
		{
			_itemCount = (SEL(_items,1)) select _forEachIndex;
			_container addItemCargoGlobal [_x,_itemCount];
		} foreach (SEL(_items,0));
		
		//Add backpacks
		{
			_backpackCount = (SEL(_backpacks,1)) select _forEachIndex;
			_container addBackpackCargoGlobal [_x,_backpackCount];
		} foreach (SEL(_backpacks,0));
		
	} foreach _containerData;
	
	_house SVAR["containers",_containers,true];
	_return pushBack [_x select 1,_containers,_class];
} foreach _houses;

missionNamespace SVAR[format["houses_%1",_this],_return];