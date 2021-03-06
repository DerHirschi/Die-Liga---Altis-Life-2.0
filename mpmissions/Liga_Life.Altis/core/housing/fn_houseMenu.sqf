#include "..\..\Liga_script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	Edit: Hirschi - Die Liga
	Description:
	Building interaction menu
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Title 37401

private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9"];
if(!dialog) then {
	createDialog "pInteraction_Menu";
};
disableSerialization;
_curTarget = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;

_Btn1 ctrlShow false;
_Btn2 ctrlShow false;
_Btn3 ctrlShow false;
_Btn4 ctrlShow false;
_Btn5 ctrlShow false;
_Btn6 ctrlShow false;
_Btn7 ctrlShow false;
_Btn8 ctrlShow false;
_Btn9 ctrlShow false;

life_pInact_curTarget = _curTarget;
if(_curTarget isKindOf "House_F" && (playerSide == west || cop_m)) exitWith {
	cop_m = false;
	if((nearestObject [[16019.5,16952.9,0],"Land_Dome_Big_F"]) == _curTarget OR (nearestObject [[16019.5,16952.9,0],"Land_Research_house_V1_F"]) == _curTarget) then {
		
		_Btn1 ctrlSetText localize "STR_pInAct_Repair";
		_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_repairDoor; closeDialog 0;";
		_Btn1 ctrlShow true;
		
		_Btn2 ctrlSetText localize "STR_pInAct_CloseOpen";
		_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_doorAnimate; closeDialog 0;";
		_Btn2 ctrlShow true;
		
	} else {
		if(!isNil {_curTarget GVAR "house_owner"}) then {
			_Btn1 ctrlSetText localize "STR_House_Raid_Owner";
			_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_copHouseOwner;";
			_Btn1 ctrlShow true;
			
			_Btn2 ctrlSetText localize "STR_pInAct_BreakDown";
			_Btn2 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_copBreakDoor; closeDialog 0;";
			_Btn2 ctrlShow true;
			
			_Btn3 ctrlSetText localize "STR_pInAct_SearchHouse";
			_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_raidHouse; closeDialog 0;";
			_Btn3 ctrlShow true;
			
			if(player distance _curTarget > 3.6) then {
				_Btn3 ctrlEnable false;
			};
			
			_Btn4 ctrlSetText localize "STR_pInAct_LockHouse";
			_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_lockupHouse; closeDialog 0;";
			_Btn4 ctrlShow true;
		} else {
			closeDialog 0;
		};
	};
};

_houseCfg = [(typeOf life_pInact_curTarget)] call life_fnc_houseConfig;
if!(_houseCfg isEqualTo []) exitWith {

	if(!(life_pInact_curTarget in life_vehicles) OR isNil {life_pInact_curTarget GVAR "house_owner"}) then {
		if(life_pInact_curTarget in life_vehicles) then {life_vehicles = life_vehicles - [life_pInact_curTarget];};
		if!([life_pInact_curTarget,(SEL(_houseCfg,3))]call LIGACL_fnc_buyCheck)exitWith {closeDialog 0;};
		_Btn1 ctrlSetText localize "STR_pInAct_BuyHouse";
		_Btn1 buttonSetAction "[] spawn life_fnc_buyHouse;";
		_Btn1 ctrlShow true;
		
		if(!isNil {life_pInact_curTarget GVAR "house_owner"}) then {
			_Btn1 ctrlEnable false;
		};
	} else {
		if((typeOf life_pInact_curTarget) in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"]) then {
			_Btn1 ctrlSetText localize "STR_pInAct_SellGarage";
			_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_sellHouse; closeDialog 0;";
			_Btn1 ctrlShow true;
			
			if(((life_pInact_curTarget GVAR "house_owner") select 0) != (getPlayerUID player)) then {
				_Btn1 ctrlEnable false;
			};
			
			_Btn2 ctrlSetText localize "STR_pInAct_AccessGarage";
			_Btn2 buttonSetAction "[life_pInact_curTarget,""Car""] spawn life_fnc_vehicleGarage; closeDialog 0;";
			_Btn2 ctrlShow true;
			
			_Btn3 ctrlSetText localize "STR_pInAct_StoreVeh";
			_Btn3 buttonSetAction "[life_pInact_curTarget,player] spawn life_fnc_storeVehicle; closeDialog 0;";
			_Btn3 ctrlShow true;
		} else {
			_Btn1 ctrlSetText localize "STR_pInAct_SellHouse";
			_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_sellHouse; closeDialog 0;";
			_Btn1 ctrlShow true;
			
			if(((life_pInact_curTarget GVAR "house_owner") select 0) != (getPlayerUID player)) then {
				_Btn1 ctrlEnable false;
			};
			
			if(life_pInact_curTarget GVAR ["locked",false]) then {
				_Btn2 ctrlSetText localize "STR_pInAct_UnlockStorage";
			} else {
				_Btn2 ctrlSetText localize "STR_pInAct_LockStorage";
			};
			_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_lockHouse; closeDialog 0;";
			_Btn2 ctrlShow true;
			
			if(isNull (life_pInact_curTarget GVAR ["lightSource",ObjNull])) then {
				_Btn3 ctrlSetText localize "STR_pInAct_LightsOn";
			} else {
				_Btn3 ctrlSetText localize "STR_pInAct_LightsOff";
			};
			_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_lightHouseAction; closeDialog 0;";
			_Btn3 ctrlShow true;
		};
	};
};

_houseCfg = [(typeOf life_pInact_curTarget)] call LIGACL_fnc_LigaLadenCfg;

if!(_houseCfg isEqualTo []) exitWith {
	
	if(!(life_pInact_curTarget in life_vehicles) OR isNil {life_pInact_curTarget GVAR "house_owner"}) then {
		if(life_pInact_curTarget in life_vehicles) then {life_vehicles = life_vehicles - [life_pInact_curTarget];};
		if!([life_pInact_curTarget,(SEL(_houseCfg,3))]call LIGACL_fnc_buyCheck)exitWith {closeDialog 0;};
			
		
		
		_Btn1 ctrlSetText "Laden kaufen";
		_Btn1 buttonSetAction "[life_pInact_curTarget] spawn LIGACL_fnc_buyLigaLaden;";
		_Btn1 ctrlShow true;
		
		if(!isNil {life_pInact_curTarget GVAR "house_owner"}) then {
			_Btn1 ctrlEnable false;
		};
	} else {

			_Btn1 ctrlSetText "LADEN VERKAUFEN";
			_Btn1 buttonSetAction "[life_pInact_curTarget] spawn LIGACL_fnc_sellLaden; closeDialog 0;";
			
			
			if(((life_pInact_curTarget GVAR "house_owner") select 0) != (getPlayerUID player)) then {
				_Btn1 ctrlEnable false;
			}else{
				_Btn1 ctrlShow true;
			};
			_Btn2 ctrlShow false;
			_Btn3 ctrlShow false;
		
	};
};


if((typeOf life_pInact_curTarget) isEqualTo "Land_fs_feed_F") exitWith {
	if(!(life_pInact_curTarget in life_vehicles) OR isNil {life_pInact_curTarget GVAR "house_owner"}) then {
		if(life_pInact_curTarget in life_vehicles) then {life_vehicles = life_vehicles - [life_pInact_curTarget];};
		/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */
		_Btn1 ctrlSetText "Tankstelle kaufen";
		_Btn1 buttonSetAction "[life_pInact_curTarget]spawn LIGACL_fnc_buyTank; closeDialog 0;";
		_Btn1 ctrlShow true;
		/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */
		
		if(!isNil {life_pInact_curTarget GVAR "house_owner"}) then {
			_Btn1 ctrlEnable false;
		};
		
	} else {
		if((typeOf life_pInact_curTarget) in ["Land_fs_feed_F"]) then {

			/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */
			_Btn1 ctrlSetText "Tankst verkau";
			_Btn1 buttonSetAction "[life_pInact_curTarget] spawn LIGACL_fnc_sellTank;  closeDialog 0;";
			_Btn1 ctrlShow true;
			/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */
			
			if(((life_pInact_curTarget GVAR "house_owner") select 0) != (getPlayerUID player)) then {
				_Btn1 ctrlEnable false;
			};
			
			/* ????????????????????????????? */
			_Btn2 ctrlSetText "Schloss neu";			
			_Btn2 buttonSetAction " closeDialog 0;[life_pInact_curTarget] remoteExecCall ['TON_fnc_Schlosswech',2]; hint 'Das Schloss wurde gewechselt.. Nur du besitzt jetzt einen Schluessel ...';";
			_Btn2 ctrlShow true;
			/* ????????????????????????????? */
			_Btn4 ctrlSetText "Preise";
			_Btn4 buttonSetAction "closeDialog 0; [life_pInact_curTarget] spawn LIGACL_fnc_preismenu; ";
			_Btn4 ctrlShow true;
			
			_Btn6 ctrlSetText "Geld abholen";
			_Btn6 buttonSetAction "
				closeDialog 0; 
				life_cash = life_cash + (life_pInact_curTarget getVariable ['Kasse',0]);
				hint format ['Du hast %1 $ aus der Kasse geholt... Alle ATMs wurden fuer 5 Minuten gesperrt...',(life_pInact_curTarget getVariable ['Kasse',0])];
				life_pInact_curTarget setVariable ['Kasse',0,true];
				[life_pInact_curTarget] remoteExecCall ['TON_fnc_updateTankTrunk',2];				
				life_use_atm = false;
				[]spawn { uiSleep (60 * 5); life_use_atm = true; };
				
			";
			_Btn6 ctrlShow true;
			
			_Btn7 ctrlSetText "Abmahnungen";
			_Btn7 buttonSetAction "
				closeDialog 0; 
				[life_pInact_curTarget,player] remoteExecCall ['TON_fnc_ABMcount',2];
				
			";
			_Btn7 ctrlShow true;
		};
	};
	
};
closeDialog 0;