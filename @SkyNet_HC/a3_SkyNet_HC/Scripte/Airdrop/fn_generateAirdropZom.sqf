#include "\a3_SkyNet_HC\SkyNet_Macros.hpp"
/*
	@file Version: 1.0.0.0
	@file Author: RYN_Ryan
	@file edit: 20.01.2015
	Copyright � 2015 Ryan Torzynski, All rights reserved
	All servers are allowed to use this code, modify and publish it. Every modified release of this script must contain "Original by RTT"!
*/
_airdrop_helicopter_main = "B_Heli_Transport_03_F";
_airdrop_helicopter_scnd = "B_Heli_Attack_01_F";
_airdrop_helicopter_scnd3 = "B_Heli_Light_01_armed_F";
private["_heli1","_heli2","_heli3","_trig"];
//airdrop_chance = 100;

// Do not modify the following code
/*
_tloot = 	[
				[["c2",142]],568,
				[["c2",14]],568,
				[["c2",12]],568,
				[["c2",42]],568,
				[["c2",1422]],568,
				[["c2",342]],568,
				[["c2",1442]],568,
				[["c2",4]],568,
				[["c2",2]],568,
				[["c2",1]],568,
				[["c2",9]],568
			];
*/

//airdrop_enable=true;
//airdrop_goingon=false;

_posPlayer = [_this,0,[],[[]]] call BIS_fnc_param;

//if (!airdrop_enable) exitWith {};
if(airdrop_zomgoingon) exitWith {};

airdrop_zomgoingon = true;
publicVariable "airdrop_zomgoingon";

diag_log "╔═════════════════════════════╗";
diag_log "║ AIRDROP wurde manuell gestartet .. Zombies!!";
diag_log "╚═════════════════════════════╝";

_dest = _posPlayer;
//_dest = [8111.38,22579.8,0.00156784];

///sleep 360;

// AIRDROP STARTEN


//sleep 300;
if(Z_zoneakt) then {Zom_Trig spawn fncPopAir;};

_marker = createMarker ["AirdropmarkerZom", _dest];
"AirdropmarkerZom" setMarkerColor "ColorRed";
"AirdropmarkerZom" setMarkerType "Empty";
"AirdropmarkerZom" setMarkerShape "ELLIPSE";
"AirdropmarkerZom" setMarkerSize [100,100];
_markerText = createMarker ["AirdropmarkertextZom", _dest];
"AirdropmarkertextZom" setMarkerColor "ColorBlack";
"AirdropmarkertextZom" setMarkerText "Airdrop-Call";
"AirdropmarkertextZom" setMarkerType "mil_warning";
uiSleep 15;
if(Z_zoneakt) then {{_x doMove _dest}forEach units infected; };

uiSleep 5;

_heli1 = CreateVehicle [_airdrop_helicopter_main, [7950, 9667, 700], [], 0, "FLY"];
_heli2 = CreateVehicle [_airdrop_helicopter_scnd, [7950, 9700, 700], [], 0, "FLY"];
_heli3 = CreateVehicle [_airdrop_helicopter_scnd, [7950, 9630, 700], [], 0, "FLY"];

_heli4 = CreateVehicle [_airdrop_helicopter_scnd3, [7850, 9930, 700], [], 0, "FLY"];


_heli1 allowDamage false;


_mygroup1 = [[7950, 9647, 0], civilian, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_mygroup2 = [[7950, 9667, 0], civilian, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_mygroup3 = [[7950, 9687, 0], civilian, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_mygroup4 = [[7950, 9687, 0], civilian, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_mygroup5 = [[7950, 9687, 0], civilian, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_mygroup6 = [[7950, 9687, 0], civilian, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;

_mygroup7 = [[7950, 9687, 0], civilian, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;


{_x allowDamage false;_x moveInDriver _heli1;} forEach units _mygroup1;
{_x moveInDriver _heli2; [_x] join _mygroup1;} forEach units _mygroup2;
{_x moveInGunner  _heli2; [_x] join _mygroup1;} forEach units _mygroup4;
{_x moveInDriver _heli3; [_x] join _mygroup1;} forEach units _mygroup3;
{_x moveInGunner  _heli3; [_x] join _mygroup1;} forEach units _mygroup5;
{_x moveInGunner  _heli1; [_x] join _mygroup1;} forEach units _mygroup6;

{_x moveInDriver _heli4;} forEach units _mygroup7;


uiSleep 1;
deleteGroup _mygroup2;
deleteGroup _mygroup3;	
deleteGroup _mygroup4;	
deleteGroup _mygroup5;	

/*
_heli1 setPos [7900, 9617, 230];
_heli2 setPos [7950, 9667, 200];
_heli3 setPos [7850, 9697, 170];


_heli1 setPos [23032, 18313, 230];
_heli2 setPos [23132, 18343, 200];
_heli3 setPos [23232, 18383, 170];

*/
_heli1 setPos [25492, 13525, 230];
_heli2 setPos [25400, 13525, 200];
_heli3 setPos [25300, 13525, 170];

_heli4 setPos [25300, 13525, 500];




	{
		
			_x disableAI "AUTOTARGET";
			_x disableAI "TARGET";
			_x setBehaviour "CARELESS";
		
	
	}forEach units _mygroup1;
	


//[_mygroup1, 0] setWaypointBehaviour "STEALTH";
_mygroup1 addWaypoint [_dest, 0];


_mygroup7 addWaypoint [_dest, 0];
[_mygroup7, 0] setWaypointCombatMode "RED";
[_mygroup7, 0] setWaypointBehaviour "COMBAT";
	{

			_x setBehaviour "COMBAT";
		
	
	}forEach units _mygroup1;

[_mygroup1, 0] setWaypointFormation "WEDGE";
[_mygroup1, 0] setWaypointCombatMode "BLUE";
_heli1 flyInHeight 10;
_heli2 flyInHeight 10;
_heli3 flyInHeight 10;
_heli4 flyInHeight 10;
//[_mygroup1, 0] setWaypointCompletionRadius 50;
//_mygroup1 addWaypoint [[21765.47,20770.6,0], 0];
_mygroup1 addWaypoint [[22275.47,22120.6,0], 1];
_mygroup1 addWaypoint [[21765.47,20770.6,0], 2];
//_mygroup2 addWaypoint [_dest, 0];
//_mygroup2 addWaypoint [[380.47,267.6,0], 0];
//_mygroup3 addWaypoint [_dest, 0];
//_mygroup3 addWaypoint [[380.47,267.4,0], 0];

_markerText = createMarker ["airbox_markerZom", [14028.5,18719.7,0.0014267]];
"airbox_markerZom" setMarkerColor "ColorBlue";
"airbox_markerZom" setMarkerText " Airdrop-Box";
"airbox_markerZom" setMarkerType "mil_destroy";

_containerdummy = createVehicle ["Land_Cargo20_blue_F", [3450.7363, 16708.432, 90], [], 0, "CAN_COLLIDE"];
_containerdummy attachTo [_heli1,[0,0,-3.5]];
_containerdummy setDir 90;


_heli1 lock 2;
_heli2 lock 2;
_heli3 lock 2;
_heli4 lock 2;

while { _dest distance _heli1 > 800 } do { "airbox_markerZom" setMarkerPos getPos _heli1; sleep 1.5; };

if!(count (units infected) isEqualTo 0) then {
_targ1 = (units infected) select (random (count units infected) - 1);
_targ2 = (units infected) select (random (count units infected) - 1);
_targ3 = (units infected) select (random (count units infected) - 1);
_trig = true;
while{_trig} do {
	_trig = false;
	{		
		if(_x distance2D _targ1 < 40) then {
			_trig = true;
			_targ1 = (units infected) select (random (count units infected) - 1);
		};
		
	}forEach playableUnits;
	
};
_trig = true;
while{_trig} do {
	_trig = false;
	{		
		if(_x distance2D _targ2 < 40) then {
			_trig = true;
			_targ2 = (units infected) select (random (count units infected) - 1);
		};
		
	}forEach playableUnits;
	diag_log "TEST2";
};
_trig = true;
while{_trig} do {
	_trig = false;
	{		
		if(_x distance2D _targ3 < 40) then {
			_trig = true;
			_targ3 = (units infected) select (random (count units infected) - 1);
		};
	}forEach playableUnits;
	diag_log "TEST3";
};


	_heli2 doTarget _targ1;
	_heli2 doFire _targ1;
	_heli3 doTarget _targ2;
	_heli3 doFire _targ2;
	_heli4 doTarget _targ3;
	_heli4 doFire _targ3;
};
diag_log "TEST3dd";

while { _dest distance _heli1 > 160 } do { "airbox_markerZom" setMarkerPos getPos _heli1; sleep 0.5; _heli1 doMove _dest; };

[4,""] remoteExec ["life_fnc_ligaNews",RCLIENT];
// Drop the container

deleteVehicle _containerdummy;
sleep 0.1;
_container = createVehicle ["Land_Cargo20_blue_F", [3450.7363, 16708.432, 90], [], 0, "CAN_COLLIDE"];
_para = createVehicle ["O_Parachute_02_F", [getPos _heli1 select 0, getPos _heli1 select 1, getPos _heli1 select 2], [], 0, ""];
_para setPosATL (_heli1 modelToWorld[0,0,100]);
_para attachTo [_heli1,[0,0,-10]];
detach _para;
_container attachTo [_para,[0,0,-2]];
_container setDir 90;
//playSound3D ["a3\sounds_f\weapons\Flare_Gun\flaregun_1_shoot.wss", _container];
_smoke="SmokeShellGreen" createVehicle [getpos _container select 0, getpos _container select 1,0];
_smoke attachTo [_container,[0,0,0]];
_light = "Chemlight_green" createVehicle getPos _container;
_light attachTo [_container,[0,0,0]];
_flare = "F_40mm_Green" createVehicle getPos _container;
_flare attachTo [_container,[0,0,0]];
sleep 0.1;



while { (getPos _container select 2) > 2 } do { "airbox_markerZom" setMarkerPos getPos _container;sleep 1; };
detach _container;
_container setPos [getPos _container select 0, getPos _container select 1, (getPos _container select 2)+0.5];
//playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", _container];

sleep 6;
"M_NLAW_AT_F" createVehicle [getPos _container select 0, getPos _container select 1, 0];
_pos_container = getPos _container;
deleteVehicle _container;
sleep 0.5;
_box = createVehicle ["CargoNet_01_box_F", _pos_container, [], 0, "CAN_COLLIDE"];
_box allowDamage false;
_smoke="SmokeShellGreen" createVehicle [getpos _box select 0,getpos _box select 1,0];
_flare = "F_40mm_Green" createVehicle getPos _container;
_light attachTo [_box,[0,0,0]];
_flare attachTo [_box,[0,0,0]];
_box setPos ([(getPos _box select 0),(getPos _box select 1),((getPos _box select 2) + 3)]);

// Fill box

clearWeaponCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearItemCargoGlobal _box;

sleep 0.1;
_var=floor(random 3);
if (_var==1) then {_box addWeaponCargoGlobal ["arifle_MX_SW_Black_F", 3];};
sleep 0.1;
if (_var==0) then {_box addWeaponCargoGlobal ["arifle_MX_F", 2];};
sleep 0.1;
if (_var==1) then {_box addWeaponCargoGlobal ["srifle_DMR_01_F", 2];};
sleep 0.1;
if (_var==2) then {_box addWeaponCargoGlobal ["srifle_EBR_F", 2];};
sleep 0.1;
if (_var==2) then {_box addWeaponCargoGlobal ["arifle_Katiba_GL_F", 3];};
sleep 0.1;
if (_var==0) then {_box addWeaponCargoGlobal ["LMG_Mk200_F", 2];};
sleep 0.1;
if (_var==2) then {_box addWeaponCargoGlobal ["LMG_Zafir_F", 3];};
sleep 0.1;
if (_var==1) then {_box addWeaponCargoGlobal ["arifle_TRG21_F", 2];};
sleep 0.1;
if (_var==0) then {_box addWeaponCargoGlobal ["srifle_DMR_03_F", 2];};
sleep 0.1;
if (_var==1) then {_box addMagazineCargoGlobal ["200Rnd_65x39_cased_Box", 7];};
sleep 0.1;
if (_var==2) then {_box addMagazineCargoGlobal ["100Rnd_65x39_caseless_mag", 9];};
sleep 0.1;
if (_var==1) then {_box addMagazineCargoGlobal ["20Rnd_762x51_Mag", 11];};
sleep 0.1;
if (_var==2) then {_box addMagazineCargoGlobal ["10Rnd_762x54_Mag", 9];};
sleep 0.1;
if (_var==0) then {_box addMagazineCargoGlobal ["150Rnd_762x54_Box", 6];};
sleep 0.1;
if (_var==0) then {_box addMagazineCargoGlobal ["30Rnd_556x45_Stanag", 17];};
sleep 0.1;
if (_var==1) then {_box addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag_Tracer", 17];};
sleep 0.1;
if (_var==2) then {_box addMagazineCargoGlobal ["SmokeShell", 14];};
sleep 0.1;
if (_var==1) then {_box addItemCargoGlobal ["optic_NVS", 1];};
sleep 0.1;
if (_var==2) then {_box addItemCargoGlobal ["optic_SOS", 2];};
sleep 0.1;
if (_var==1) then {_box addItemCargoGlobal ["optic_Hamr", 2];};
sleep 0.1;
if (_var==2) then {_box addItemCargoGlobal ["optic_MRCO", 2];};
sleep 0.1;
if (_var==0) then {_box addItemCargoGlobal ["Rangefinder", 2];};
sleep 0.1;
if (_var==0) then {_box addItemCargoGlobal ["optic_DMS", 2];};
sleep 0.1;
if (_var==0) then {_box addItemCargoGlobal ["muzzle_snds_M", 2];};
sleep 0.1;
if (_var==0) then {_box addItemCargoGlobal ["bipod_01_F_blk", 2];};
sleep 0.1;
if (_var==1) then {_box addItemCargoGlobal ["muzzle_snds_H", 2];};
sleep 0.1;
if (_var==2) then {_box addItemCargoGlobal ["muzzle_snds_H_MG", 2];};
sleep 0.1;
if (_var==1) then {_box addItemCargoGlobal ["HandGrenade_Stone", 6];};
sleep 0.1;

_box SVAR ["trunk_in_use",false,true];
_box SVAR ["Trunk",[[["c2",426]],1704],true];
//_box SVAR ["Trunk",[(_tloot select (random ((count _tloot) - 1)))],true];
// Fill box end



deleteWaypoint [_mygroup1, 1];
_heli1 doMove [21765.47,20770.6,0];
_heli1 setFormDir 140;
//_mygroup1 addWaypoint [[21765.47,20770.6,0], 2];

[_heli1,_heli2,_heli3,_mygroup1,_heli4,_mygroup7] spawn {
	private["_targ1","_targ2","_targ3","_targ4","_trig"];
	_heli1 = _this select 0;
	_heli2 = _this select 1;
	_heli3 = _this select 2;
	_heli4 = _this select 4;
	_mygroup1 = _this select 3;
	_mygroup7 = _this select 5;
	if!((count units infected) isEqualTo 0) then {
		_targ1 = (units infected) select (random (count units infected) - 1);
		_targ2 = (units infected) select (random (count units infected) - 1);
		_targ3 = (units infected) select (random (count units infected) - 1);
		_targ4 = (units infected) select (random (count units infected) - 1);
		_trig = true;
		while{_trig} do {
			_trig = false;
			{		
				if(_x distance2D _targ1 < 40) then {
					_trig = true;
					_targ1 = (units infected) select (random (count units infected) - 1);
				};
				
			}forEach playableUnits;
		};
		_trig = true;
		while{_trig} do {
			_trig = false;
			{		
				if(_x distance2D _targ2 < 40) then {
					_trig = true;
					_targ2 = (units infected) select (random (count units infected) - 1);
				};
				
			}forEach playableUnits;
		};
		_trig = true;
		while{_trig} do {
			_trig = false;
			{		
				if(_x distance2D _targ3 < 40) then {
					_trig = true;
					_targ3 = (units infected) select (random (count units infected) - 1);
				};
				
			}forEach playableUnits;
		};
		_trig = true;
		while{_trig} do {
			_trig = false;
			{		
				if(_x distance2D _targ4 < 40) then {
					_trig = true;
					_targ4 = (units infected) select (random (count units infected) - 1);
				};
				
			}forEach playableUnits;
		};		

		
		_heli1 doTarget  _targ1;
		_heli1 doFire	 _targ1;
		
		_heli2 doTarget  _targ2;
		_heli2 doFire	 _targ2;
		
		_heli3 doTarget  _targ3;
		_heli3 doFire	 _targ3;
		
		_heli4 doTarget  _targ4;
		_heli4 doFire	 _targ4;
		
		
		for "_i" from 1 to 130 do {
			
			uiSleep 1;
			if((count units infected) isEqualTo 0) exitWith {
				_mygroup1 addWaypoint [[19000,30600,0], 3];
				_mygroup7 addWaypoint [[19000,30600,0], 3];
				[_mygroup1, 3] setWaypointBehaviour "CARELESS";
				[_mygroup7, 0] setWaypointBehaviour "CARELESS";
				[_mygroup1, 3] setWaypointCombatMode "BLUE";
				[_mygroup7, 0] setWaypointCombatMode "BLUE";
				{
					_x doWatch objNull;
					_x disableAI "AUTOTARGET";
					_x disableAI "TARGET";
					_x setBehaviour "CARELESS";
					_x doMove [19000,30600,0];
				
				}forEach units _mygroup1;
				
				{
					_x doWatch objNull;
					_x disableAI "AUTOTARGET";
					_x disableAI "TARGET";
					_x setBehaviour "CARELESS";
					_x doMove [19000,30600,0];
				
				}forEach units _mygroup7;
				
				[_mygroup1, 0] setWaypointFormation "WEDGE";
				[_mygroup7, 0] setWaypointFormation "WEDGE";
			};
			if(!alive _targ1) then {
				_targ1 = (units infected) select (random (count units infected) - 1);
				_trig = true;
				while{_trig} do {
					_trig = false;
					{		
						if(_x distance2D _targ1 < 40) then {
							_trig = true;
							_targ1 = (units infected) select (random (count units infected) - 1);
						};
						
					}forEach playableUnits;
				};			
				
				_heli1 doTarget  _targ1;
				_heli1 doFire	 _targ1;
			};
			if(!alive _targ2) then {
				_targ2 = (units infected) select (random (count units infected) - 1);
				_trig = true;
				while{_trig} do {
					_trig = false;
					{		
						if(_x distance2D _targ2 < 40) then {
							_trig = true;
							_targ2 = (units infected) select (random (count units infected) - 1);
						};
						
					}forEach playableUnits;
				};
				
				_heli2 doTarget  _targ2;
				_heli2 doFire	 _targ2;
			};
			if(!alive _targ3) then {
				_targ3 = (units infected) select (random (count units infected) - 1);
				_trig = true;
				while{_trig} do {
					_trig = false;
					{		
						if(_x distance2D _targ3 < 40) then {
							_trig = true;
							_targ3 = (units infected) select (random (count units infected) - 1);
						};
						
					}forEach playableUnits;
				};		
				_heli3 doTarget  _targ3;
				_heli3 doFire	 _targ3;
			};	
			if(!alive _targ4) then {
				_targ4 = (units infected) select (random (count units infected) - 1);
				_trig = true;
				while{_trig} do {
					_trig = false;
					{		
						if(_x distance2D _targ4 < 40) then {
							_trig = true;
							_targ4 = (units infected) select (random (count units infected) - 1);
						};
						
					}forEach playableUnits;
				};				
				_heli4 doTarget  _targ4;
				_heli4 doFire	 _targ4;
			};			
		};
	};
	_mygroup1 addWaypoint [[19000,30600,0], 3];
	_mygroup7 addWaypoint [[19000,30600,0], 3];
	[_mygroup1, 3] setWaypointBehaviour "CARELESS";
	[_mygroup7, 0] setWaypointBehaviour "CARELESS";
	[_mygroup1, 3] setWaypointCombatMode "BLUE";
	[_mygroup7, 0] setWaypointCombatMode "BLUE";
	{
		_x doWatch objNull;
		_x disableAI "AUTOTARGET";
		_x disableAI "TARGET";
		_x setBehaviour "CARELESS";
		_x doMove [19000,30600,0];
	
	}forEach units _mygroup1;
	
	{
		_x doWatch objNull;
		_x disableAI "AUTOTARGET";
		_x disableAI "TARGET";
		_x setBehaviour "CARELESS";
		_x doMove [19000,29900,0];
	
	}forEach units _mygroup7;
	
	[_mygroup1, 0] setWaypointFormation "WEDGE";
	[_mygroup7, 0] setWaypointFormation "WEDGE";
	
	

	
	diag_log "_s2 EXIT";
};






sleep 8;
if(Z_zoneakt) then {Zom_Trig spawn fncPop;};

sleep 12;
_flagPos = getPos _box;
	while { [21765.47,20770.6,0] distance _heli1 < 350 } do {  sleep 0.5; };
[_mygroup1, 2] setWaypointCombatMode "RED";
[_mygroup1, 2] setWaypointBehaviour "COMBAT";
[_mygroup7, 0] setWaypointBehaviour "COMBAT";

	{
		
			_x enableAI "AUTOTARGET";
			_x enableAI "TARGET";
			_x setBehaviour "COMBAT";
			
		
	
	}forEach units _mygroup1;
	

"AirdropmarkerZom" setMarkerAlpha 0;
deleteMarker "AirdropmarkerZom";
"AirdropmarkertextZom" setMarkerAlpha 0;
deleteMarker "AirdropmarkertextZom";
uisleep 50;


	

if(Z_zoneakt) then {{_x doMove (getPos _box)}forEach units infected; };
private["_exit"];
_exit = false;
for "_n" from 1 to 8 do {
	for "_i" from 1 to 2 do {
		
		if( (_box distance2D _flagPos) > 10) exitWith {
			deleteVehicle _box; 
			_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-21,(getPos _box select 1)+21,0];
			sleep 1;
			_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-1,(getPos _box select 1)+56,0];
			sleep 1;
			_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+23,(getPos _box select 1)-75,0];
			sleep 1;
			_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-50,(getPos _box select 1)+1,0];
			sleep 1;
			_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+87,(getPos _box select 1)-22,0];
			sleep 1;
			_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+0,(getPos _box select 1)-0,0];
			sleep 1;
			_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+20,(getPos _box select 1)-20,0];
			_exit = true;
			
			
			
		};
		if(_i isEqualTo 2) then {
			
			if(Z_zoneakt) then {Zom_Trig spawn fncPop;
				sleep 15;	
				{_x doMove _flagPos}forEach units infected; 
			};
		};	
			
		uiSleep 45;
	};
};	
if(_exit)exitWith {
	deleteMarker "airbox_markerZom";
{deleteVehicle _x}forEach crew _heli1;
deleteVehicle _heli1;
{deleteVehicle _x}forEach crew _heli2;
deleteVehicle _heli2;
{deleteVehicle _x}forEach crew _heli3;
deleteVehicle _heli3;
{deleteVehicle _x}forEach units _mygroup1;
{deleteVehicle _x}forEach crew _heli4;
deleteVehicle _heli4;
deleteGroup _mygroup1;
deleteGroup _mygroup7;


	uiSleep (60 * 60);

	airdrop_zomgoingon = false;
	publicVariable "airdrop_zomgoingon";
};

[5,"<t size='1.2'><t color='#FF0000'>Airdrop-Mission</t></t><br/><br/><t size='1'>5 Minuten bis zur Selbstzerstoerung !!!</t>"] remoteExecCall ["life_fnc_broadcast",RCLIENT];

if( (_box distance2D _flagPos) > 10) exitWith {
	deleteVehicle _box; 
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-21,(getPos _box select 1)+21,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-1,(getPos _box select 1)+56,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+23,(getPos _box select 1)-75,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-50,(getPos _box select 1)+1,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+87,(getPos _box select 1)-22,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+0,(getPos _box select 1)-0,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+20,(getPos _box select 1)-20,0];
	deleteMarker "airbox_markerZom";
{deleteVehicle _x}forEach crew _heli1;
deleteVehicle _heli1;
{deleteVehicle _x}forEach crew _heli2;
deleteVehicle _heli2;
{deleteVehicle _x}forEach crew _heli3;
deleteVehicle _heli3;
{deleteVehicle _x}forEach units _mygroup1;
{deleteVehicle _x}forEach crew _heli4;
deleteVehicle _heli4;
deleteGroup _mygroup1;
deleteGroup _mygroup7;


	uiSleep (60 * 60);

	airdrop_zomgoingon = false;
	publicVariable "airdrop_zomgoingon";
};
//			if(Z_zoneakt) then {Zom_Trig spawn fncPop;
//				sleep 15;	
//				{_x doMove _flagPos}forEach units infected; 
//			};

uiSleep 60 * 1;


if( (_box distance2D _flagPos) > 10) exitWith {
	deleteVehicle _box; 
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-21,(getPos _box select 1)+21,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-1,(getPos _box select 1)+56,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+23,(getPos _box select 1)-75,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-50,(getPos _box select 1)+1,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+87,(getPos _box select 1)-22,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+0,(getPos _box select 1)-0,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+20,(getPos _box select 1)-20,0];
	deleteMarker "airbox_markerZom";
{deleteVehicle _x}forEach crew _heli1;
deleteVehicle _heli1;
{deleteVehicle _x}forEach crew _heli2;
deleteVehicle _heli2;
{deleteVehicle _x}forEach crew _heli3;
deleteVehicle _heli3;
{deleteVehicle _x}forEach units _mygroup1;
{deleteVehicle _x}forEach crew _heli4;
deleteVehicle _heli4;
deleteGroup _mygroup1;
deleteGroup _mygroup7;




	uiSleep (60 * 60);

	airdrop_zomgoingon = false;
	publicVariable "airdrop_zomgoingon";
};
//			if(Z_zoneakt) then {Zom_Trig spawn fncPop;
//				sleep 15;	
//				{_x doMove _flagPos}forEach units infected; 
//			};

uiSleep 60 * 1;		


if( (_box distance2D _flagPos) > 10) exitWith {
	deleteVehicle _box; 
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-21,(getPos _box select 1)+21,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-1,(getPos _box select 1)+56,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+23,(getPos _box select 1)-75,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-50,(getPos _box select 1)+1,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+87,(getPos _box select 1)-22,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+0,(getPos _box select 1)-0,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+20,(getPos _box select 1)-20,0];
	deleteMarker "airbox_markerZom";
{deleteVehicle _x}forEach crew _heli1;
deleteVehicle _heli1;
{deleteVehicle _x}forEach crew _heli2;
deleteVehicle _heli2;
{deleteVehicle _x}forEach crew _heli3;
deleteVehicle _heli3;
{deleteVehicle _x}forEach units _mygroup1;
{deleteVehicle _x}forEach crew _heli4;
deleteVehicle _heli4;
deleteGroup _mygroup1;
deleteGroup _mygroup7;

	
	

	uiSleep (60 * 60);

	airdrop_zomgoingon = false;
	publicVariable "airdrop_zomgoingon";
};	
			if(Z_zoneakt) then {Zom_Trig spawn fncPop;
				sleep 15;	
				{_x doMove _flagPos}forEach units infected; 
			};
			
			
uiSleep 60 * 1;		


if( (_box distance2D _flagPos) > 10) exitWith {
	deleteVehicle _box; 
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-21,(getPos _box select 1)+21,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-1,(getPos _box select 1)+56,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+23,(getPos _box select 1)-75,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-50,(getPos _box select 1)+1,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+87,(getPos _box select 1)-22,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+0,(getPos _box select 1)-0,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+20,(getPos _box select 1)-20,0];
	deleteMarker "airbox_markerZom";
{deleteVehicle _x}forEach crew _heli1;
deleteVehicle _heli1;
{deleteVehicle _x}forEach crew _heli2;
deleteVehicle _heli2;
{deleteVehicle _x}forEach crew _heli3;
deleteVehicle _heli3;
{deleteVehicle _x}forEach units _mygroup1;
{deleteVehicle _x}forEach crew _heli4;
deleteVehicle _heli4;
deleteGroup _mygroup1;
deleteGroup _mygroup7;


	

	uiSleep (60 * 60);

	airdrop_zomgoingon = false;
	publicVariable "airdrop_zomgoingon";
};	

[5,"<t size='1.2'><t color='#FF0000'>Airdrop-Mission</t></t><br/><br/><t size='1'>10 Sekunden bis zur Selbstzerstoerung !!!</t>"] remoteExecCall ["life_fnc_broadcast",RCLIENT];
			if(Z_zoneakt) then {Zom_Trig spawn fncPop;
				uiSleep 10;	
				{_x doMove _flagPos}forEach units infected; 
			}else{uiSleep 10;};
if( (_box distance2D _flagPos) > 10) exitWith {
	deleteVehicle _box; 
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-21,(getPos _box select 1)+21,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-1,(getPos _box select 1)+56,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+23,(getPos _box select 1)-75,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-50,(getPos _box select 1)+1,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+87,(getPos _box select 1)-22,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+0,(getPos _box select 1)-0,0];
	sleep 1;
	_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+20,(getPos _box select 1)-20,0];
{deleteVehicle _x}forEach crew _heli1;
deleteVehicle _heli1;
{deleteVehicle _x}forEach crew _heli2;
deleteVehicle _heli2;
{deleteVehicle _x}forEach crew _heli3;
deleteVehicle _heli3;
{deleteVehicle _x}forEach units _mygroup1;
{deleteVehicle _x}forEach crew _heli4;
deleteVehicle _heli4;
deleteGroup _mygroup1;
deleteGroup _mygroup7;




	deleteMarker "airbox_markerZom";

	uiSleep (60 * 60);

	airdrop_zomgoingon = false;
	publicVariable "airdrop_zomgoingon";	
};

[5,"<t size='1.2'><t color='#FF0000'>Airdrop-Mission beendet!</t></t><br/><br/><t size='1'>Die Airdrop Mission wurde soebend beendet .</t>"] remoteExecCall ["life_fnc_broadcast",RCLIENT];
{deleteVehicle _x}forEach crew _heli1;
deleteVehicle _heli1;
{deleteVehicle _x}forEach crew _heli2;
deleteVehicle _heli2;
{deleteVehicle _x}forEach crew _heli3;
deleteVehicle _heli3;
{deleteVehicle _x}forEach units _mygroup1;
{deleteVehicle _x}forEach crew _heli4;
deleteVehicle _heli4;
deleteGroup _mygroup1;
deleteGroup _mygroup7;


deleteVehicle _box; 
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-21,(getPos _box select 1)+21,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-1,(getPos _box select 1)+56,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+23,(getPos _box select 1)-75,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)-50,(getPos _box select 1)+1,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+87,(getPos _box select 1)-22,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+0,(getPos _box select 1)-0,0];
sleep 1;
_bmb = "BO_GBU12_LGB" createVehicle [(getPos _box select 0)+20,(getPos _box select 1)-20,0];

sleep 10;
if(Z_zoneakt) then {Zom_Trig spawn fncPop;		};


deleteMarker "airbox_markerZom";

uiSleep (60 * 60);

airdrop_zomgoingon = false;
publicVariable "airdrop_zomgoingon";