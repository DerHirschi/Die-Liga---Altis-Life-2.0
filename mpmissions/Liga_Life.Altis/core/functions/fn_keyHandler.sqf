#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_keyHandler.sqf
	Author: Bryan "Tonic" Boardwine
	Edit: Hirschi - Die Liga

	Description:
	Main key handler for event 'keyDown'
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_mapKey","_interruptionKeys"];
_ctrl 		= SEL(_this,0);
_code 		= SEL(_this,1);
_shift 		= SEL(_this,2);
_ctrlKey 	= SEL(_this,3);
_alt 		= SEL(_this,4);
_speed 		= speed cursorTarget;
_handled 	= false;

_interactionKey = if(count (actionKeys "User10") isEqualTo 0) then {219} else {(actionKeys "User10") select 0};
_mapKey = actionKeys "ShowMap" select 0;
//hint str _code;
if(life_action_inUse) exitWith {_handled};
if(life_action_gathering) exitWith {};
if(dialog) exitWith {};
_interruptionKeys = [17,30,31,32]; //A,S,W,D


//Vault handling...
if((_code in (actionKeys "GetOver") || _code in (actionKeys "salute")) && {(player GVAR ["restrained",false])}) exitWith {
	true;
};

if(life_action_inUse) exitWith {
	if(!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
	_handled = true;
};

//Hotfix for Interaction key not being able to be bound on some operation systems.
if(count (actionKeys "User10") != 0 && {(inputAction "User10" > 0)}) exitWith {
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	if(!life_action_inUse && !life_action_gathering) then {			
		if(dialog) exitWith {true;};
		[] spawn life_fnc_actionKeyHandler;	
				
	};
	//true;
};

switch (_code) do
{
	//Space key for Jumping
	case 57:
	{
		if(isNil "jumpActionTime") then {jumpActionTime = 0;};
		if(_shift && {!(EQUAL(animationState player,"AovrPercMrunSrasWrflDf"))} && {isTouchingGround player} && {EQUAL(stance player,"STAND")} && {speed player > 2} && {!life_is_arrested} && {SEL((velocity player),2) < 2.5} && {time - jumpActionTime > 1.5}) then {
			jumpActionTime = time; //Update the time.
			[player,true] spawn life_fnc_jumpFnc; //Local execution
			[player,false] remoteExec ["life_fnc_jumpFnc",RCLIENT]; //Global execution
			_handled = true;
		};
	};

	    //Shift+P = Faded Sound
	case 25:
	{
	if(_shift) then
		{
			[] call life_fnc_fadeSound;
			_handled = true;
		};
	};

	//Map Key
	case _mapKey:
	{
		switch (playerSide) do
		{
			case west: {if(!visibleMap) then {[] spawn life_fnc_copMarkers;}};
			case independent: {if(!visibleMap) then {[] spawn life_fnc_medicMarkers;}};
			case east: {if(!visibleMap) then {[] spawn life_fnc_adacMarkers;}};
			case civilian: {if(!visibleMap) then {[] spawn life_fnc_gangMarkers;}};
		};
			if(ctrlVisible 88887)exitWith{_handled = true;};
			if(!liga_handy_kl )exitWith{_handled = false;};
			_handled = false;
			[]spawn{
				Sleep 0.01;
				if (visibleMap) then 
				{ 
					2 cutText ["", "PLAIN"]; 
					[]spawn{ waitUntil{uiSleep 0.1; !visibleMap}; [] call life_fnc_hudUpdate; };
				}else{
					if("ItemGPS" in (items player + assignedItems player) || !(isNull objectParent player)) then
					{
						if(visibleGPS) then 
						{
							2 cutText ["", "PLAIN"]; 
							2 cutRsc["Liga_handy_side_gps_m"	,"PLAIN",0];
							[] call life_fnc_hudUpdate;
						}else{
							2 cutText ["", "PLAIN"]; 
							2 cutRsc["Liga_handy_side_m"	,"PLAIN",0];
							[] call life_fnc_hudUpdate;
						};
					}else{
							2 cutText ["", "PLAIN"]; 
							2 cutRsc["Liga_handy_side_m"	,"PLAIN",0];
							[] call life_fnc_hudUpdate;
					};	
				};	
			};			
		
	};

	//Holster / recall weapon.
	case 35:
	{

		if(_shift && !_ctrlKey && currentWeapon player != "" && !(player GVAR ["restrained", false])) exitWith {
			life_curWep_h = currentWeapon player;
			player action ["SwitchWeapon", player, player, 100];
			player switchcamera cameraView;
			_handled = true;
		};

		if(!_shift && _ctrlKey && !isNil "life_curWep_h" && !(player GVAR ["restrained", false]) && {(life_curWep_h != "")}) exitWith {
			if(life_curWep_h in [primaryWeapon player,secondaryWeapon player,handgunWeapon player]) then {
				player selectWeapon life_curWep_h;
				_handled = true;
			};
		};
		
		if (_alt) exitWith { _handled = true; if(liga_handy_kl)then{liga_handy_kl = false ; 2 cutText ["", "PLAIN"];} else {liga_handy_kl = true; [] call life_fnc_hudUpdate; }; };
		if(ctrlVisible 88887)then{[1]spawn liga_fnc_handy;}else{if(!dialog && !(player GVAR ["restrained", false])) then {[0] call life_fnc_fuelConfig;closeDialog 0; [2]spawn liga_fnc_handy;};	};				

	};

	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	case _interactionKey:
	{
		if(!life_action_inUse && !life_action_gathering) then {	
			[] spawn life_fnc_actionKeyHandler;			
			//_handled = true;
		};
	};

	//Restraining (Shift + R)
	case 19:
	{
		if(_shift) then {_handled = true;};
				if(_shift && playerSide isEqualTo west || playerSide isEqualTo independent && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && (side cursorTarget in [civilian,independent]) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget GVAR "Escorting") && !(cursorTarget GVAR "restrained") && speed cursorTarget < 1.3) then
				{
					[] call life_fnc_restrainAction;					
				} else
				{

					if( life_knockout ) then

						{

							if(_shift && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && (side cursorTarget in [civilian, west, east, independent]) && alive cursorTarget && cursorTarget distance player < 4 && !(cursorTarget GVAR "Escorting") && !(cursorTarget GVAR "restrained") && speed cursorTarget < 1.3) then
							{
								if([false,"zipties",1] call life_fnc_handleInv) then
								{
								[] call life_fnc_restrainAction;
								hint "Du hast den Spieler festgenommen, benutze die Windows Taste für weitere Aktionen";
								}
								else
								{
								hint "Du hast keine Kabelbinder dabei!";
								};							
							};
						};
				};
				
	};

	//Knock out, this is experimental and yeah...
	case 34:
	{
		if(_shift) then {_handled = true;};
		if(_shift && playerSide isEqualTo civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget && alive cursorTarget && cursorTarget distance player < 4 && speed cursorTarget < 1) then
		{
			if((animationState cursorTarget) != "Incapacitated" && (currentWeapon player == primaryWeapon player OR currentWeapon player == handgunWeapon player) && currentWeapon player != "" && !life_knockout && !(player GVAR["restrained",false]) && !life_istazed) then
			{
				[cursorTarget] spawn life_fnc_knockoutAction;
			};
		};		
	};

	//Takwondo(Traditional Martial arts in korea)(Shift + Num 1)
case 79:
{
	if(_shift && !_alt && !_ctrlKey) then
	{	
		if((playerSide isEqualTo west || playerSide isEqualTo independent) && vehicle player != player && !life_siren3_active ) then
		{                   
			titleText ["Yelp","PLAIN"];					                      
			[(vehicle player),"Yelp1"] remoteExec ["life_fnc_copsiren3",RCLIENT];					
		};	
	};
	
	
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player isEqualTo player) && !(player GVAR ["restrained", false])) then
		{
			cutText [format["Takwondo!!!"], "PLAIN DOWN"];
			player playMove "AmovPercMstpSnonWnonDnon_exerciseKata";
		};
	_handled = true;
};

//Kneebend Slow(Shift + Num 2)
case 80:
{
	if(_shift && !_alt && !_ctrlKey) then
	{
		if((playerSide isEqualTo west || playerSide isEqualTo independent) && vehicle player != player && !life_siren3_active ) then
		{                   
			titleText ["Yelp 2","PLAIN"];
			[(vehicle player)] remoteExec ["life_fnc_copsiren3",RCLIENT];
		};
	};		
	
	
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player isEqualTo player) && !(player GVAR ["restrained", false])) then
		{
			cutText [format["KneeBend Slow baby~"], "PLAIN DOWN"];
			player playMove "AmovPercMstpSnonWnonDnon_exercisekneeBendA";
		};
	_handled = true;
};

//Kneebend Fast(Shift + Num 3)
case 81:
{
	if(_shift && !_alt && !_ctrlKey) then
	{	
		if((playerSide isEqualTo west || playerSide isEqualTo independent) && vehicle player != player && !life_siren3_active ) then
		{                   
			titleText ["Yelp 3","PLAIN"];					                      
			[(vehicle player),"Yelp2"] remoteExec ["life_fnc_copsiren3",RCLIENT];					
		};	
	};	

	
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player isEqualTo player) && !(player GVAR ["restrained", false])) then
		{
			cutText [format["KneeBend more Hard!!!Move!!Move!!"], "PLAIN DOWN"];
			player playMove "AmovPercMstpSnonWnonDnon_exercisekneeBendB";
		};
	_handled = true;
};

//Pushup(Shift + Num 4)
case 75:
{
	if(_shift && !_alt && !_ctrlKey) then
	{	
		if((playerSide isEqualTo west || playerSide isEqualTo independent) && vehicle player != player && !life_siren3_active ) then
		{			                   
			titleText ["Yelp 4","PLAIN"];					                      
			[(vehicle player),"Yelp3"] remoteExec ["life_fnc_copsiren3",RCLIENT];					
		};	
	};	
	
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player isEqualTo player) && !(player GVAR ["restrained", false])) then
		{
			cutText [format["Pushup!!"], "PLAIN DOWN"];
			player playMove "AmovPercMstpSnonWnonDnon_exercisePushup";
		};
		_handled = true;
};
//Arme verschränkt(Shift + Num 5)
case 76:
{
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player isEqualTo player) && !(player GVAR ["restrained", false])) then
		{
			if(liga_anim)then {
				liga_anim = false;
				 player playMove "AmovPercMstpSnonWnonDnon_falling";
				// [player,""] remoteExecCall ["life_fnc_switchMove",RCLIENT];
			}else{
				player playMove (SEL(Liga_gest,3));
			//	[player,(SEL(Liga_gest,3))] remoteExecCall ["life_fnc_switchMove",RCLIENT];
				liga_anim = true;
			};
		};
		_handled = true;
};
//Arme an der Seite Capt. Morgan(Shift + Num 6)
case 77:
{
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player isEqualTo player) && !(player GVAR ["restrained", false])) then
		{
			if(liga_anim)then {
				liga_anim = false;
				 player playMove "AmovPercMstpSnonWnonDnon_falling";
				// [player,""] remoteExecCall ["life_fnc_switchMove",RCLIENT];
			}else{
				player playMove (SEL(Liga_gest,4));
				//[player,(SEL(Liga_gest,4))] remoteExecCall ["life_fnc_switchMove",RCLIENT];
				liga_anim = true;
			};
		};
		_handled = true;
};

//Hocken suchen. (Shift + Num 7)
case 71:
{
	if(_shift) then {_handled = true;};
		if ((_shift) && (vehicle player isEqualTo player) && !(player GVAR ["restrained", false])) then
		{
			if(liga_anim)then {
				liga_anim = false;
				 player playMove "AmovPercMstpSnonWnonDnon_falling";
			//      [player,""] remoteExecCall ["life_fnc_switchMove",RCLIENT];
			}else{
				player playMove (SEL(Liga_gest,5));
			//	[player,(SEL(Liga_gest,5))] remoteExecCall ["life_fnc_switchMove",RCLIENT];
				liga_anim = true;
			};
		};
		_handled = true;
};
//tab
    case 15 : {
        _restrained = player GVAR ["restrained", false];
        if(!_restrained) then {
            player playActionNow "gestureHi";
        };        
		_handled = true;
    };
//V
	case 47 : {
        _restrained = player GVAR ["restrained", false];
/*
		if(liga_anim && !_restrained)then {			
            player switchMove "";
			liga_anim = false;
			_handled = false;
        };     
*/		
		if(!_restrained)then {
			player switchMove "";
			liga_anim = false;
			_handled = false;
		}else{
			_handled = true;
		};
    };
//Ergeben (Shift + T)

	case 20:
	{
		if(_shift) then {_handled = true;};

		if (_shift) then
		{
			if (vehicle player isEqualTo player && !(player GVAR ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed) then
			{
				if (player GVAR ["surrender", false]) then
				{
					player SVAR ["surrender", false, true];
				} else
				{
					[] spawn life_fnc_surrender;
				};
				_handled = true;
			};
		};

		if(!_alt && !_ctrlKey) then
		{
			{player reveal _x;} foreach (player nearObjects 20);
			
			if(vehicle player != player && alive vehicle player) then
			{
				if((vehicle player) GVAR ["trunk_in_use",false]) exitWith {hint localize "STR_MISC_VehInvUse"};
				if((vehicle player) in life_vehicles) then
				{
					[vehicle player] spawn life_fnc_openInventory;
				};
			}
				else
			{
				if((KIND_TRUNK_KH(cursorTarget)) && player distance cursorTarget < 10 && vehicle player == player && alive cursorTarget) then
				{
					if(cursorTarget GVAR ["trunk_in_use",false]) exitWith {hint localize "STR_MISC_VehInvUse"};
					if(cursorTarget in life_vehicles OR {!(cursorTarget GVAR ["locked",true])}) then
					{
						[cursorTarget] spawn life_fnc_openInventory;
					};
					if (cursorTarget isKindOf "CargoNet_01_box_F" || {if(!isNil "wrack_objs")then{ if (cursorTarget isEqualTo (wrack_objs select 2)) then {true}else{false};}else{false};}) then {
						[cursorTarget] spawn life_fnc_openInventory;
					};
				};				
			};
			if((cursorTarget isKindOf "Land_CashDesk_F") && ( ((nearestObjects[player,["House_F"],25]) select 0) in life_vehicles))then{
				[cursorTarget] spawn LIGACL_fnc_LigaLadenMenu;
			};
			_handled = true;
		};
	};
	

	//L Key?
	case 38:
	{	
	
        if (_shift && !_alt && !_ctrlKey) then
        {
			_veh = vehicle player;
			_sideveh = _veh GVAR ["side",""];
			if(EQUAL(_sideveh,""))exitWith {};
            if(_sideveh in [west,independent,east] && _veh != player ) then
            {
                if(!isNil {_veh GVAR "lights"}) then
                {					
                    if(EQUAL(_sideveh,west)) then
                    {
                        [_veh] call life_fnc_sirenLights;
                    };
					
					if (EQUAL(_sideveh,independent)) then
					{
                        [_veh] call life_fnc_medicSirenLights;
                    };
					
					if(EQUAL(_sideveh,east)) then 
					{
						[_veh] call life_fnc_serviceLights;
					};
                };
            };
            _handled = true;
        };
        if(!_alt && !_ctrlKey) then { [] call life_fnc_radar; };	
	
	};
	//Y Player Menu
	
	case 21:
	{
		//if(side player isEqualTo sideLogic) exitWith {_handle = false;_handle;};
		if(!_alt && !_ctrlKey && !dialog && !(player GVAR ["restrained", false])) then
		{
			[] call life_fnc_p_openMenu;
			_handle = true;_handle;
		};
	};
	
	//F Key
	case 33:
	{
		if (!_shift && !_alt && !_ctrlKey) then
        {		
			if(playerSide in [west,independent] && vehicle player != player && !life_siren_active ) then
			{
				_veh = vehicle player;
                [] spawn
                    {
                        life_siren_active = true;
                        sleep 3;
                        life_siren_active = false;						
                    };				
				if(isNil {_veh GVAR "siren"}) then {_veh SVAR["siren",false,true];};
				if((_veh GVAR "siren")) then
				{
					life_siren_active = false;
					titleText [localize "STR_MISC_SirensOFF","PLAIN"];
					_veh SVAR["siren",false,true];
				}else{
					titleText [localize "STR_MISC_SirensON","PLAIN"];
					_veh SVAR["siren",true,true];
					if(playerSide isEqualTo west) then {		

						if(isNil "mimi")then {
							[_veh] remoteExec ["life_fnc_copSiren",RCLIENT];
						}else{
							[_veh,"mimi"] remoteExec ["life_fnc_copSiren",RCLIENT];
						};	
					
					} else {
						
						if(isNil "mimi")then {
							[_veh] remoteExec ["life_fnc_medicSiren",RCLIENT];
						}else{
							[_veh,"mimi"] remoteExec ["life_fnc_copSiren",RCLIENT];
						};	
					
					};
				};
			};
		};
	};	
	
	//Ö Key
	case 39:
	{
		if(playerSide in [west] && vehicle player != player && !life_siren_active2 ) then
		{
		_veh = vehicle player;
		_veh spawn
			{
				life_siren_active2 = true;
				sleep 7;
				life_siren_active2 = false;
				titleText ["Warnung AUS","PLAIN"];						
			};			
		titleText ["Warnung AN","PLAIN"];				
		[_veh] remoteExec ["life_fnc_copSiren2",RCLIENT];			
		};
	};


	//EMP Konsole - K
    case 37:
    {
        if (!_shift && !_alt && !_ctrlKey && (playerSide isEqualTo west) && (vehicle player != player && (typeOf vehicle player) in ["B_Heli_Light_01_F","O_Heli_Light_02_unarmed_F","I_Heli_light_03_unarmed_F","B_Heli_Transport_03_unarmed_F","C_Hatchback_01_F","C_SUV_01_F","C_Offroad_01_F","C_Hatchback_01_sport_F","B_MRAP_01_F","I_MRAP_03_F","I_Heli_Transport_02_F"])) exitWith
        {
            [] call life_fnc_openEmpMenu; [_this] call life_fnc_isEmpOperator;
			_handled = true;
			_handled;
        };
		if(__GETC__(life_adminlevel) > 4)exitWith { 
			[] call life_fnc_openEmpMenu; [_this] call life_fnc_isEmpOperator;
			_handled = true;
			_handled;
		};
    };
	
// O, gate opener
        case 24:
    {
        if(playerSide in [west,independent,east] && vehicle player != player && ((driver vehicle player) == player)) then
        {
			{player reveal _x;} foreach (player nearObjects 60);
            [] call life_fnc_Opener;
        };
		_sfb = missionNamespace GVAR (["sfb",0] call life_fnc_varHandle);
        if(vehicle player != player && ((driver vehicle player) == player) && (_sfb > 0) && !(player GVAR ["restrained", false])) then
        {
			{player reveal _x;} foreach (player nearObjects 60);
            [] call life_fnc_Opener;
        };
		_handled = true;
	};

 //U Key
	case 22:
	{
		if(!_alt && !_ctrlKey) then
		{
			{player reveal _x;} foreach (player nearObjects 40);
			if(vehicle player isEqualTo player) then
			{
				_veh = cursorTarget;
			} else
			{
				_veh = vehicle player;
			};

		if(EQUAL(typeOf _veh,"Land_Tank_rust_F")) exitWith {
			if(_veh in life_vehicles && player distance _veh < 8) then
			{
				if(_veh GVAR ["locked",true])then {					
					_veh SVAR ["locked",false,true];
					systemChat "Du hast den Tank aufgeschlossen.";
					hint composeText [ image "icons\unlock.paa", " Der Tank ist offen" ];
					player say3D "unlock";	
				}else{
					_veh SVAR ["locked",true,true];
					systemChat "Du hast den Tank abgeschlossen.";
					hint composeText [ image "icons\lock.paa", " Der Tank ist abgeschlossen." ];
					player say3D "car_lock";
				};
			};
			_handled = true;
		};
		if(_veh isKindOf "House_F" && playerSide isEqualTo civilian) then
		{
			if(_veh in life_vehicles && player distance _veh < 18) then
			{
				_door = [_veh] call life_fnc_nearestDoor;
				if(EQUAL(_door,0)) exitWith {hint "Du bist nicht in der Nähe einer Tür!"};
				_locked = _veh GVAR [format["bis_disabled_Door_%1",_door],0];
				if(EQUAL(_locked,0)) then
				{
					_veh SVAR[format["bis_disabled_Door_%1",_door],1,true];
					_veh animate [format["door_%1_rot",_door],0];
					systemChat "Du hast das Haus abgeschlossen.";
					hint composeText [ image "icons\lock.paa", " Das Haus ist abgeschlossen" ];
					if(isNil "mimi") then { player say3D "car_lock" } else {player say3D "car_lock_mi"};	

				}
				else
				{
					_veh SVAR[format["bis_disabled_Door_%1",_door],0,true];
					_veh animate [format["door_%1_rot",_door],1];
					systemChat "Du hast das Haus aufgeschlossen.";
					hint composeText [ image "icons\unlock.paa", " Das Haus ist offen" ];
					if(isNil "mimi") then { player say3D "unlock" } else {player say3D "car_unlock_mi"  };

				};
			};
		}
		else
		{
			_locked = locked _veh;
			if(_veh in life_vehicles && player distance _veh < 12) then
			{
				if(_locked isEqualTo 2) then
				{
					if(local _veh) then
					{
						_veh lock 0;
						if(playerSide in [civilian,east,independent]) then
						{
						_veh animateDoor ["door_back_R",1];
						_veh animateDoor ["door_back_L",1];
						_veh animateDoor ['door_R',1];
						_veh animateDoor ['door_L',1];
						_veh animateDoor ['Door_rear',1];
						_veh animateDoor ['Door_LM',1];
						_veh animateDoor ['Door_RM',1];
						_veh animateDoor ['Door_LF',1];
						_veh animateDoor ['Door_RF',1];
						_veh animateDoor ['Door_LB',1];
						_veh animateDoor ['Door_RB',1];
						_veh animateDoor ['Door_1_source',1];
						_veh animateDoor ['Door_2_source',1];
						_veh animateDoor ['Door_3_source',1];
						_veh animateDoor ['Door_4_source',1];
						_veh animateDoor ['Door_5_source',1];
						_veh animateDoor ['Door_6_source',1];
						_veh animate ['DoorL_Front_Open', 1];						
						_veh animate ['DoorL_Back_Open', 1];						
						_veh animate ['DoorR_Front_Open',1];						
						_veh animate ['DoorR_Back_Open', 1];						
						};
					}
					else
					{
						
						[_veh,0] remoteExecCall ["life_fnc_lockVehicle",_veh];
						
						if(playerSide in [civilian,east,independent]) then
						{
						_veh animateDoor ["door_back_R",1];
						_veh animateDoor ["door_back_L",1];
						_veh animateDoor ['door_R',1];
						_veh animateDoor ['door_L',1];
						_veh animateDoor ['Door_rear',1];
						_veh animateDoor ['Door_LM',1];
						_veh animateDoor ['Door_RM',1];
						_veh animateDoor ['Door_LF',1];
						_veh animateDoor ['Door_RF',1];
						_veh animateDoor ['Door_LB',1];
						_veh animateDoor ['Door_RB',1];
						_veh animateDoor ['Door_1_source',1];
						_veh animateDoor ['Door_2_source',1];
						_veh animateDoor ['Door_3_source',1];
						_veh animateDoor ['Door_4_source',1];
						_veh animateDoor ['Door_5_source',1];
						_veh animateDoor ['Door_6_source',1];
						_veh animate ['DoorL_Front_Open', 1];						
						_veh animate ['DoorL_Back_Open', 1];						
						_veh animate ['DoorR_Front_Open',1];						
						_veh animate ['DoorR_Back_Open', 1];							
						};
					};
					hint composeText [ image "icons\unlock.paa", " Fahrzeug aufgeschlossen..." ];
					systemChat "Fahrzeug aufgeschlossen...";
					if(isNil "mimi") then { player say3D "unlock" } else {player say3D "car_unlock_mi"  };
				}
				else
				{
					if(local _veh) then
					{
						_veh lock 2;
						if(playerSide in [civilian,east,independent]) then
						{
						_veh animateDoor ["door_back_R",0];
						_veh animateDoor ["door_back_L",0];
						_veh animateDoor ['door_R',0];
						_veh animateDoor ['door_L',0];
						_veh animateDoor ['Door_rear',0];
						_veh animateDoor ['Door_LM',0];
						_veh animateDoor ['Door_RM',0];
						_veh animateDoor ['Door_LF',0];
						_veh animateDoor ['Door_RF',0];
						_veh animateDoor ['Door_LB',0];
						_veh animateDoor ['Door_RB',0];
						_veh animateDoor ['Door_1_source',0];
						_veh animateDoor ['Door_2_source',0];
						_veh animateDoor ['Door_3_source',0];
						_veh animateDoor ['Door_4_source',0];
						_veh animateDoor ['Door_5_source',0];
						_veh animateDoor ['Door_6_source',0];	
						_veh animate ['DoorL_Front_Open', 0];						
						_veh animate ['DoorL_Back_Open', 0];						
						_veh animate ['DoorR_Front_Open', 0];						
						_veh animate ['DoorR_Back_Open', 0];							
						
						};
					}
					else
					{
						
						[_veh,2] remoteExecCall ["life_fnc_lockVehicle",_veh];

						if(playerSide in [civilian,east,independent]) then
						{
						_veh animateDoor ["door_back_R",0];
						_veh animateDoor ["door_back_L",0];
						_veh animateDoor ['door_R',0];
						_veh animateDoor ['door_L',0];
						_veh animateDoor ['Door_rear',0];
						_veh animateDoor ['Door_LM',0];
						_veh animateDoor ['Door_RM',0];
						_veh animateDoor ['Door_LF',0];
						_veh animateDoor ['Door_RF',0];
						_veh animateDoor ['Door_LB',0];
						_veh animateDoor ['Door_RB',0];
						_veh animateDoor ['Door_1_source',0];
						_veh animateDoor ['Door_2_source',0];
						_veh animateDoor ['Door_3_source',0];
						_veh animateDoor ['Door_4_source',0];
						_veh animateDoor ['Door_5_source',0];
						_veh animateDoor ['Door_6_source',0];						
						_veh animate ['DoorL_Front_Open', 0];						
						_veh animate ['DoorL_Back_Open', 0];						
						_veh animate ['DoorR_Front_Open', 0];						
						_veh animate ['DoorR_Back_Open', 0];						
						};
					};
					hint composeText [ image "icons\lock.paa", " Fahrzeug abgeschlossen..." ];
					if(isNil "mimi") then { player say3D "car_lock" } else {player say3D "car_lock_mi"};
					systemChat "Fahrzeug abgeschlossen...";
				};
			};
		};
	};
	_handled = true;
};
	case 59: // F1
	{
		if(__GETC__(life_adminlevel) > 4)exitWith{ closeDialog 0; _handled = true; createDialog "life_admin_menu"; _handled;};
		closeDialog 0;
		createDialog "liga_HB1";
		_handled = true;	
		
	};

    case 60: // F2
	{
		if(__GETC__(life_adminlevel) < 5)exitWith{
			closeDialog 0;
			_handled = true;
		};		
	};

	case 61: // F3
	{
		if(__GETC__(life_adminlevel) < 5)exitWith{
			closeDialog 0;
			_handled = true;
		};	
	};

	case 62: // F4
	{

			if(__GETC__(life_adminlevel) > 1)exitWith{createDialog "life_admin_menu";_handled = true; _handled;};
			closeDialog 0;
			_handled = true;
	
	};

	case 63: // F5
	{
		_ent = "admin_level_" + (str (__GETC__(life_adminlevel)));
		if (_shift && (ADCFG(_ent,"AdminMSG") isEqualTo 1)  ) exitWith {closeDialog 0; createDialog "Life_my_smartphone";_handled = true; true; };
		//	[] call life_fnc_logVar ;
		_handled = true;	
	};

	case 64: //F6 key
	{

			closeDialog 0;
			_handled = true;

	};

	case 65: // F7 Key
	{

			closeDialog 0;
			_handled = true;

	};

	case 66: //F8 key
	{

			closeDialog 0;
			_handled = true;
	
	};

	case 67: //F9 key
	{

			closeDialog 0;
			_handled = true;
	
	};

	case 68: //10 key
	{
	
			closeDialog 0;
			_handled = true;
	
	};
	
		case 27: //10 key
	{
			closeDialog 0;			
			if!(life_blacklisted isEqualTo 0) exitWith {[]spawn life_fnc_BosMenu;_handled = true;_handled;};	
			if(__GETC__(life_adminlevel) >= 3) exitWith {[]spawn life_fnc_BosMenu;_handled = true;_handled;};
			if (side player != civilian) exitWith {[]spawn life_fnc_BosMenu;_handled = true;_handled;};			
			_handled = true;
	
	};	 	
	
		case 41: //^ key
	{
		if(_shift) then {player playActionNow (SEL(Liga_gest,0));};
		if(_ctrlKey) then {player playActionNow (SEL(Liga_gest,1));};
		if(!_alt && !_ctrlKey && !_shift) then {player playActionNow (SEL(Liga_gest,2));};
		
		
	
		if(__GETC__(life_adminlevel) >= 4) exitWith {};
		closeDialog 0;
		_handled = true;
	};
	
	case 83: //NUM ,
	{
		closeDialog 0;
		player playActionNow (SEL(Liga_gest,2));
		_handled = true;
	};
	case 210: //Eing
	{
		closeDialog 0;
		_handled = true;
	};
	case 197: //Pause
	{
		closeDialog 0;
		_handled = true;
	};
	case 183: //Drucken
	{
		closeDialog 0;
		_handled = true;
	};	

	case 58: //cAPS lOCK 
	{
		if(!isNil "knebel") then {
			if(isNil "waitmee")then {
				waitmee = true;
				0 spawn {				
					titleText ["Du bist geknebelt\nSpar dir die Mühe...\n\n...mimimi...", "PLAIN"];
					player say3D "car_unlock_mi";
					sleep 1;
					waitmee = nil;
				};
			};	
			_handled = true;
		};
	};	
	
}; 
_handled;