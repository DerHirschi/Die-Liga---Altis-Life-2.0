/*
	Author: Hirschi - Die Liga
	Vorlage: Tonic´s Altis Life RPG 3.1.4.8
	
	File: fn_handleVehInv.sqf
	param1 // true = add
	
	TODO: call weightdifferenz mit einbeziehm laderaum max voll zu bekommenn .
*/
private["_valu"];
_mode = [_this,0,false,[true]] call BIS_fnc_param; 
_item = [_this,1,"",[""]] call BIS_fnc_param;
_valu = [_this,2,-1,[1]] call BIS_fnc_param;
_obje = [_this,3,ObjNull,[ObjNull]] call BIS_fnc_param;
if( (_item isEqualTo "") || (_valu isEqualTo -1) || (isNull _obje) || (!alive _obje) ) exitWith {false};

if(_mode) then {	
	_veh_data 		= _obje getVariable ["Trunk",[[],0]];
	_inv 			= _veh_data select 0;
	_totalWeight 	= [_obje] call life_fnc_vehicleWeight;
	_valu			= [_item,_valu,(_veh_data select 1),(_totalWeight select 0)] call life_fnc_calWeightDiff;
	_itemWeight 	= ([_item] call life_fnc_itemWeight) * _valu;	
	if( _valu isEqualTo 0 ) exitWith {_valu};

	_index 			= [_item,_inv] call TON_fnc_index;
	if(_index isEqualTo -1) then
	{
		_inv pushBack [_item,_valu];
	}else{
		_val 		= _inv select _index select 1;
		_inv set [_index,[_item,_val + _valu]];
	};
	_obje setVariable["Trunk",[_inv,(_veh_data select 1) + _itemWeight],true];
	_valu;
}else{
	if((_obje getVariable ["trunk_in_use",false])) exitWith {-1};
	_old 	= _obje getVariable "Trunk";
	_data 	= _old select 0;
	_index 	= [_item,_data] call TON_fnc_index;	
	if(_index isEqualTo -1) exitWith {0};
	_value 	= _data select _index select 1;	
	if(_valu >= _value) then
	{
		_valu = _value;		
		_data set[_index,-1];
		_data = _data - [-1];
	}else{
		_data set[_index,[_item,(_value - _valu)]];
	};
	_weight = ([_item] call life_fnc_itemWeight) * _valu;
	_obje setVariable["Trunk",[_data,(_old select 1) - _weight],true];	
	_valu;
};