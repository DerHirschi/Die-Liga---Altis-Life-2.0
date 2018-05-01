#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_virt_sell.sqf
	Author: Bryan "Tonic" Boardwine
	Edited by Hirschi - Die Liga
	
	Description:
	Sell a virtual item to the store / shop
*/
disableSerialization;
private["_type","_price","_var","_amount","_name","_v","_e","_best"];
if(EQUAL((lbCurSel 2402),-1)) exitWith {};
_type 	= lbData[2402,(lbCurSel 2402)];
_var 	= [_type,0] call life_fnc_varHandle;
////Marktsystem Anfang////
_price 	= [_type,false]call life_fnc_ligaWHcalcPreis;
////Marktsystem Ende////

////Alles verkaufen////
if(_this isEqualTo 0 ) then {	
	_amount = ctrlText 2405;
	if(!([_amount] call TON_fnc_isnumber)) exitWith {hint localize "STR_Shop_Virt_NoNum";};
	_amount = parseNumber (_amount);
	if(_amount > (GVAR_MNS _var)) exitWith {hint localize "STR_Shop_Virt_NotEnough"};
}else{
	_amount = (GVAR_MNS _var);
};	
////Alles verkaufen Ende////
_price 	= (_price * _amount );

/*Medezinmensch*/
/*
_e = false;
if(life_shop_type in ["medimann_1","medimann_2"]) then {

	_best = life_shop_npc GVAR["medikons",0];
	_itemWeight = ([_type] call life_fnc_itemWeight) * _amount;
	_best = _best + _itemWeight;
	if(_best > 600) exitWith {hint "Grosser Vandudu jetzt genug fuer grossen Zauber ... Goetter werden zufrieden sein ...."; _e = true;};
	
};
if(life_shop_type in ["partyile"]) then {

	_best = life_shop_npc GVAR["medikons",0];
	_itemWeight = ([_type] call life_fnc_itemWeight) * _amount;
	_best = _best + _itemWeight;
	if(_best > 900) exitWith {hint "Ich habe heute schon eine Lieferung bekommen.. Komm morgen wieder"; _e = true;};
};
if(_e)exitWith {};
*/
/*Medezinmensch ENDE*/
if(([false,_type,_amount] call life_fnc_handleInv)) then {
//	if(life_shop_type in ["medimann_1","medimann_2"]) 	then {life_shop_npc SVAR["medikons",_best,true];};	
//	if(life_shop_type in ["partyile"]) 					then {life_shop_npc SVAR["medikons",_best,true];};	
		
	_name = [_var] call life_fnc_vartostr;		
		if (EQUAL(life_shop_type,"baust")) then {			
		{	
			if (EQUAL(_type,_x)) exitWith {

				if( (((Liga_Baust_bes select _forEachIndex) select 1)) >= ((LIGA_SETTINGS(getArray,"combaust_ziele"))select _forEachIndex) ) then {
					_price = 0;
					[true,_type,_amount] call life_fnc_handleInv;
					hint "Wir haben schon genug von dem Dreck... Dafuer zahlen wir kein Cent";
				}else{
					hint parseText format[localize "STR_Shop_Virt_SellItem",_amount,_name,[_price] call life_fnc_numberText];
					_v = liga_baust_count_ar select _forEachIndex;
					_v = _v + _amount;
					liga_baust_count_ar set [_forEachIndex,_v];
				};				
			};				
		} foreach (LIGA_SETTINGS(getArray,"combaust_items"));	
		
		if (!liga_baust_trig) then {
			liga_baust_trig = true;
			[] spawn {
				private ["_uid"];
				_uid = getPlayerUID player;
				sleep ( 3 * 60);
				
				[liga_baust_count_ar,_uid] remoteExecCall ["TON_fnc_ComBaustellInsert",RSERV]; 
				
				liga_baust_count_ar = [0,0,0,0]; 
				liga_baust_trig = false;
			};
		};		

	}else{
		
		hint parseText format[localize "STR_Shop_Virt_SellItem",_amount,_name,[_price] call life_fnc_numberText];
	};
	life_cash = life_cash + _price;	 
	[_amount,_type,true]call life_fnc_ligaWHcalc;
	[] call life_fnc_virt_update;
};

if(life_shop_type in (LIGA_SETTINGS(getArray,"dealer_cop"))) then
{
	private["_array","_ind","_val"];
	_array = life_shop_npc GVAR["sellers",[]];
	_ind = [getPlayerUID player,_array] call TON_fnc_index;
	if!(EQUAL(_ind,-1)) then
	{
		_val = (_array select _ind) select 2;
		_val = _val + _price;
		_array set[_ind,[getPlayerUID player,profileName,_val]];
		life_shop_npc SVAR["sellers",_array,true];
	}
		else
	{
		_array pushBack [getPlayerUID player,profileName,_price];
		life_shop_npc SVAR["sellers",_array,true];
	};
};

if (EQUAL(_mode,1)) then {[] call life_fnc_virt_update; };

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;

if (EQUAL(life_shop_type,"spantank")) then {
	if (EQUAL(_type,"a3")) then {
		liga_leim_tank = liga_leim_tank + _amount;
		
		[_amount] remoteExecCall ["TON_fnc_LeimWE",RSERV]; 
		
	};	
};
	////Marktsystem Anfang//// Edit by Hirschi Liga - Life
if!(([_type] call life_fnc_marketGetSellPrice) isEqualTo -1) then { 
	markt_type = _type;	
	if(!(markt_type isEqualTo markt_type_1))then {
		markt_trig = false;
		markt_type_1 = markt_type;		
		_amount spawn 
		{						
			waitUntil{ markt_amount isEqualTo 0 };
			markt_trig = true;
			markt_amount = _this;
			_typ = markt_type;
			[] spawn { sleep (5 * 60); markt_trig = false;};
			waitUntil{ !markt_trig};			
			if!(pvc_mp) then { [] spawn life_fnc_PVCMarketPrice;};
			sleep 1.2;			
			[_typ,markt_amount] call life_fnc_marketSell;
			markt_type_1 = "";
			markt_amount = 0;			
		};
	}else{markt_amount = markt_amount + _amount;};
			
	[] call life_fnc_virt_update; 
};	

_log = [player, player, [_type,_amount], 5, life_atmcash, life_cash ];
LOG_to_HC(0,_log);
[] call life_fnc_hudUpdate;