#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_removeItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Removes the selected item & amount to remove from the players
	virtual inventory.
*/
private["_data","_value","_obj","_pos","_ind"];
disableSerialization;
_data = lbData[2005,(lbCurSel 2005)];
_value = ctrlText 2010;
if(_data isEqualTo "") exitWith {hint "Du hast nichts ausgewaehlt was entfernt werden soll .";};
if(!([_value] call TON_fnc_isnumber)) exitWith {hint "Du hast keine korrekte Zahl eingegeben !!"};
if(parseNumber(_value) <= 0) exitWith {hint "Du musst eine Zahl eingeben um das wegzuwerfen !!."};
_ind = ITEM_ILLEGAL(_data);
if(_ind != -1 && ([west,getPos player,150] call life_fnc_nearUnits)) exitWith {titleText["Du kannst nichts in der naehe eines Cops wegwerfen..","PLAIN"]};
if(player != vehicle player) exitWith {titleText["Du kannst nichts wegwerfen wenn du in einem Fahrzeug sitzt !!","PLAIN"]};
if(!([false,_data,(parseNumber _value)] call life_fnc_handleInv)) exitWith {hint "Du kannst nicht so viel wegschmeissen. Vielleicht hast du nicht so viel ?"};

hint format["Du hast %1 %2 weggeworfen !!!",(parseNumber _value), ITEM_NAME(_data)];
	
[] call life_fnc_p_updateMenu;