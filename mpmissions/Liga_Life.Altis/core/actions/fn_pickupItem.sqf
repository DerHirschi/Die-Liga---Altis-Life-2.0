#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_pickupItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master handling for picking up an item.
*/
private["_obj","_itemInfo","_itemName","_illegal","_diff"];
if((time - life_action_delay) < 2) exitWith {hint "Nicht so schnell."};
_obj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _obj OR isPlayer _obj) exitWith {};
if((_obj GVAR["PickedUp",false])) exitWith {deleteVehicle _obj;}; //Object was already picked up.
if(player distance _obj > 3) exitWith {};
{player reveal _x;} foreach (player nearObjects 20);
_itemInfo 	= _this getVariable ["item",[]]; if (count _itemInfo isEqualTo 0) exitWith {deleteVehicle _this;};
_illegal 	= ITEM_ILLEGAL(_itemInfo select 0);
_itemName 	= ITEM_NAME(_itemInfo select 0);

if (isLocalized _itemName) then {
    _itemName = (localize _itemName);
};

if(playerSide isEqualTo west && !(_illegal isEqualTo -1) ) exitWith
{
	titleText[format[localize "STR_NOTF_PickedEvidence",_itemName,[_illegal] call life_fnc_numberText],"PLAIN"];
	life_atmcash = life_atmcash + (_illegal);
	deleteVehicle _obj;
	//waitUntil {isNull _obj};
	life_action_delay = time;
};
life_action_delay = time;
_diff = [_itemInfo select 0,_itemInfo select 1,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(_diff <= 0) exitWith {hint localize "STR_NOTF_InvFull"};
_obj SVAR["PickedUp",true,true];
if(_diff != _itemInfo select 1) then
{
	if(([true,_itemInfo select 0,_diff] call life_fnc_handleInv)) then
	{
		player playmove "AinvPknlMstpSlayWrflDnon";
		//sleep 0.5;
		_obj SVAR["item",[_itemInfo select 0,((_itemInfo select 1) - _diff)],true];
		_obj SVAR["PickedUp",false,true];
		titleText[format[localize "STR_NOTF_Picked",_diff,_itemName],"PLAIN"];
	};
}
	else
{
	if(([true,_itemInfo select 0,_itemInfo select 1] call life_fnc_handleInv)) then
	{
		deleteVehicle _obj;		
		player playmove "AinvPknlMstpSlayWrflDnon";		
		titleText[format[localize "STR_NOTF_Picked",_diff,_itemName],"PLAIN"];
	};
};