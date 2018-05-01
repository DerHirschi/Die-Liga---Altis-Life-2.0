#include "..\..\Liga_script_macros.hpp"
/*
	Author: Hirschi
*/
_targ = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_dist = [_this,1,-1		,[-1	 ]] call BIS_fnc_param;
if(EQUAL(_dist,-1))exitWith {false};
_targObj = ["Land_Atm_01_F","Land_InfoStand_V2_F","Land_InfoStand_V1_F","Land_CashDesk_F"];

_obj = nearestObjects [_targ, _targObj, _dist];

if(EQUAL(count _obj,0)) then {true;}else{false;};
