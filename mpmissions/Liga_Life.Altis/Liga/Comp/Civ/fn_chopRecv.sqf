private["_cash","_vehicle"];
_cash = [_this,0,10000,[0]] call BIS_fnc_param;
_vehicle = [_this,1,objNull,[objNull]] call BIS_fnc_param;
 
life_action_inUse = false;

if!(isNull _vehicle) exitWith {hint "Da ist was schief gelaufen.. bitte beim Admin melden ..."};

life_cash = life_cash + _cash;

hint format ["Du hast %1 $ fuer den Karre bekommen..",_cash]; 
