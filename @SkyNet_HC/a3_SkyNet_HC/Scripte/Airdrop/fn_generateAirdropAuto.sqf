/*
	@file Version: 1.0.0.0
	@file Author: RYN_Ryan
	@file edit: 20.01.2015
	Edit: Hirschi - Die Liga
	Copyright � 2015 Ryan Torzynski, All rights reserved
	All servers are allowed to use this code, modify and publish it. Every modified release of this script must contain "Original by RTT"!
*/

sleep 10;

if (!airdrop_enable) exitWith {};
if (airdrop_goingon) exitWith {};

//_chance = floor(random 100);
//if (_chance>airdrop_chance) exitWith {};
_toWait = (random (airdrop_time_max - airdrop_time_min)) + airdrop_time_min;
sleep _toWait; // Wait abit for the airdrop
if (!airdrop_enable) exitWith {};
if (airdrop_goingon) exitWith {};
airdrop_goingon=true;
diag_log "╔═════════════════════════════╗";
diag_log "║ AIRDROP wurde automatisch gestartet !!";
diag_log "╚═════════════════════════════╝";
// AIRDROP STARTEN

[[1,""],"life_fnc_ligaNews",true,false] spawn SKY_fnc_MPall;
_poses = count airdrop_positions;
_inArr = floor(random _poses);
_dest = airdrop_positions select _inArr;

sleep 300;

_marker = createMarker ["Airdropmarker", _dest];
"Airdropmarker" setMarkerColor "ColorRed";
"Airdropmarker" setMarkerType "Empty";
"Airdropmarker" setMarkerShape "ELLIPSE";
"Airdropmarker" setMarkerSize [500,500];
_markerText = createMarker ["Airdropmarkertext", _dest];
"Airdropmarkertext" setMarkerColor "ColorBlack";
"Airdropmarkertext" setMarkerText "Airdrop-Mission";
"Airdropmarkertext" setMarkerType "mil_warning";

sleep 300;

[[3,""],"life_fnc_ligaNews",true,false] spawn SKY_fnc_MPall;
sleep 300;

private _heli1 = CreateVehicle [airdrop_helicopter_main, [7950, 9667, 570], [], 0, "FLY"];
private _heli2 = CreateVehicle [airdrop_helicopter_scnd, [7950, 9700, 650], [], 0, "FLY"];
private _heli3 = CreateVehicle [airdrop_helicopter_scnd, [7950, 9630, 720], [], 0, "FLY"];



_heli1 allowDamage false;
_heli2 allowDamage false;
_heli3 allowDamage false;


_mygroup1 = [[7950, 9667, 0], CIVILIAN, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_mygroup2 = [[7950, 9667, 0], CIVILIAN, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_mygroup3 = [[7950, 9667, 0], CIVILIAN, ["O_G_Soldier_SL_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;

{_x allowDamage false;_x moveInDriver _heli1;} forEach units _mygroup1;
{_x allowDamage false;_x moveInDriver _heli2; [_x] join _mygroup1;} forEach units _mygroup2;
{_x allowDamage false;_x moveInDriver _heli3; [_x] join _mygroup1;} forEach units _mygroup3;

uiSleep 1;

deleteGroup _mygroup2;
deleteGroup _mygroup3;	

_heli1 setPos [7950, 9667, 550];
_heli2 setPos [7950, 9667, 350];
_heli3 setPos [7950, 9667, 750];

_heli1 flyInHeight 10;
_heli2 flyInHeight 10;
_heli3 flyInHeight 10;


_mygroup1 addWaypoint [_dest, 0];
_mygroup1 addWaypoint [[380.47,267.6,0], 0];
[_mygroup1, 0] setWaypointFormation "WEDGE";
//[_mygroup1, 0] setWaypointBehaviour "STEALTH";


_markerText = createMarker ["airbox_marker", [14028.5,18719.7,0.0014267]];
"airbox_marker" setMarkerColor "ColorBlue";
"airbox_marker" setMarkerText " Airdrop-Box";
"airbox_marker" setMarkerType "mil_destroy";

_containerdummy = createVehicle ["Land_Cargo20_blue_F", [3450.7363, 16708.432, 90], [], 0, "CAN_COLLIDE"];
_containerdummy attachTo [_heli1,[0,0,-3.5]];
_containerdummy setDir 90;


_heli1 lock 2;
_heli2 lock 2;
_heli3 lock 2;

while { _dest distance _heli1 > 250 } do { "airbox_marker" setMarkerPos getPos _heli1; sleep 1; };

[[4,""],"life_fnc_ligaNews",true,false] spawn SKY_fnc_MPall;
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
{_x doMove [380.47,267.6,0]}forEach units _mygroup1; 
_mygroup1 setFormation "WEDGE";
while { (getPos _container select 2) > 2 } do { "airbox_marker" setMarkerPos getPos _container;sleep 1; };
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

// Fill box

clearWeaponCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearItemCargoGlobal _box;

sleep 0.1;
_var=floor(random 3);
if (_var==1) then {_box addWeaponCargoGlobal ["arifle_MX_SW_Black_F", 1];};
sleep 0.1;
if (_var==0) then {_box addWeaponCargoGlobal ["arifle_MX_F", 2];};
sleep 0.1;
if (_var==1) then {_box addWeaponCargoGlobal ["srifle_DMR_01_F", 1];};
sleep 0.1;
if (_var==2) then {_box addWeaponCargoGlobal ["srifle_EBR_F", 2];};
sleep 0.1;
if (_var==2) then {_box addWeaponCargoGlobal ["arifle_Katiba_GL_F", 1];};
sleep 0.1;
if (_var==0) then {_box addWeaponCargoGlobal ["LMG_Mk200_F", 1];};
sleep 0.1;
if (_var==2) then {_box addWeaponCargoGlobal ["LMG_Zafir_F", 1];};
sleep 0.1;
if (_var==1) then {_box addWeaponCargoGlobal ["arifle_TRG21_F", 1];};
sleep 0.1;
if (_var==0) then {_box addWeaponCargoGlobal ["srifle_DMR_03_F", 1];};
sleep 0.1;
if (_var==1) then {_box addMagazineCargoGlobal ["200Rnd_65x39_cased_Box", 4];};
sleep 0.1;
if (_var==2) then {_box addMagazineCargoGlobal ["100Rnd_65x39_caseless_mag", 4];};
sleep 0.1;
if (_var==1) then {_box addMagazineCargoGlobal ["20Rnd_762x51_Mag", 8];};
sleep 0.1;
if (_var==2) then {_box addMagazineCargoGlobal ["10Rnd_762x54_Mag", 8];};
sleep 0.1;
if (_var==0) then {_box addMagazineCargoGlobal ["150Rnd_762x54_Box", 4];};
sleep 0.1;
if (_var==0) then {_box addMagazineCargoGlobal ["30Rnd_556x45_Stanag", 10];};
sleep 0.1;
if (_var==1) then {_box addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag_Tracer", 10];};
sleep 0.1;
if (_var==2) then {_box addMagazineCargoGlobal ["SmokeShell", 10];};
sleep 0.1;
if (_var==1) then {_box addItemCargoGlobal ["optic_NVS", 1];};
sleep 0.1;
if (_var==2) then {_box addItemCargoGlobal ["optic_SOS", 1];};
sleep 0.1;
if (_var==1) then {_box addItemCargoGlobal ["optic_Hamr", 2];};
sleep 0.1;
if (_var==2) then {_box addItemCargoGlobal ["optic_MRCO", 2];};
sleep 0.1;
if (_var==0) then {_box addItemCargoGlobal ["Rangefinder", 2];};
sleep 0.1;
if (_var==0) then {_box addItemCargoGlobal ["optic_DMS", 1];};
sleep 0.1;
if (_var==0) then {_box addItemCargoGlobal ["muzzle_snds_M", 1];};
sleep 0.1;
if (_var==0) then {_box addItemCargoGlobal ["bipod_01_F_blk", 1];};
sleep 0.1;
if (_var==1) then {_box addItemCargoGlobal ["muzzle_snds_H", 2];};
sleep 0.1;
if (_var==2) then {_box addItemCargoGlobal ["muzzle_snds_H_MG", 2];};
sleep 0.1;
if (_var==1) then {_box addItemCargoGlobal ["HandGrenade_Stone", 2];};
sleep 0.1;



// Fill box end

sleep 300;
{deleteVehicle _x}forEach crew _heli1;
deleteVehicle _heli1;
{deleteVehicle _x}forEach crew _heli2;
deleteVehicle _heli2;
{deleteVehicle _x}forEach crew _heli3;
deleteVehicle _heli3;
{deleteVehicle _x}forEach units _mygroup1;

deleteGroup _mygroup1;

sleep 600;
[[5,"<t size='1.2'><t color='#FF0000'>Airdrop-Mission</t></t><br/><br/><t size='1'>5 Minuten bis zur Selbstzerstoerung !!!</t>"],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
sleep 240;
sleep 50;
[[5,"<t size='1.2'><t color='#FF0000'>Airdrop-Mission</t></t><br/><br/><t size='1'>10 Sekunden bis zur Selbstzerstoerung !!!</t>"],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
sleep 10;
[[5,"<t size='1.2'><t color='#FF0000'>Airdrop-Mission beendet!</t></t><br/><br/><t size='1'>Die Airdrop Mission wurde soebend beendet .</t>"],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
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


"Airdropmarker" setMarkerAlpha 0;
"Airdropmarkertext" setMarkerAlpha 0;

deleteMarker "airbox_marker";
deleteMarker "Airdropmarker";
deleteMarker "Airdropmarkertext";

airdrop_goingon = false;