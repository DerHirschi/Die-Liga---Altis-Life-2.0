#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_copSearch.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Returns information on the search.
*/
life_action_inUse = false;
private["_civ","_invs","_license","_robber","_guns","_gun"];
_civ = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_invs = [_this,1,[],[[]]] call BIS_fnc_param;
_robber = [_this,2,false,[false]] call BIS_fnc_param;
if(isNull _civ) exitWith {};

_illegal = 0;
_inv = "";
if(count _invs > 0) then
{
	{
		_inv = _inv + format["%1 %2<br/>",_x select 1,ITEM_NAME(_x select 0)];

		_illegal = _illegal + ((_x select 1) * (ITEM_ILLEGAL(_x select 0)) ) ;
		
	} foreach _invs;
	if(_illegal > 6000) then
	{
		[getPlayerUID _civ,_civ GVAR["realname",name _civ],"482"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
	};
	[getPlayerUID _civ,_civ GVAR["realname",name _civ],"481"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
	[0,"STR_Cop_Contraband",true,[(_civ GVAR["realname",name _civ]),[_illegal] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",RCLIENT];
}else{
	_inv = localize "STR_Cop_NoIllegal";
};
if(!alive _civ || player distance _civ > 5) exitWith {hint format[localize "STR_Cop_CouldntSearch",_civ GVAR["realname",name _civ]]};
//hint format["%1",_this];
hint parseText format["<t color='#FF0000'><t size='2'>%1</t></t><br/><t color='#FFD700'><t size='1.5'><br/>" +(localize "STR_Cop_IllegalItems")+ "</t></t><br/>%2<br/><br/><br/><br/><t color='#FF0000'>%3</t>"
,(_civ GVAR["realname",name _civ]),_inv,if(_robber) then {"Robbed the bank"} else {""}];

if(_robber) then
{
	[0,"STR_Cop_Robber",true,[(_civ GVAR["realname",name _civ])]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
};

life_cash = life_cash + _illegal;