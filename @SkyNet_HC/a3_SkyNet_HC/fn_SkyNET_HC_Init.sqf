#include "SkyNet_Macros.hpp"
/*
╔══════════════════════════════════════════════════╗
║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║
║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║
║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║
║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║
║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║
║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
║░░▀▀▀▀░░░█░░░█░░▀░░░░░▀░░░░░██░░░█░░░░░░░░▀▀▀█▀▀▀░║
║░█░░░░░░░█░░█░░░░▀░░░▀░░░░░░█░█░░█░░█▀▀▀░░░░░█░░░░║
║░░▀▀▀░░░░█▀▀░░░░░░▀░▀░░░▀▀░░█░░█░█░░█▀▀▀░░░░░█░░░░║
║░░░░░█░░░█░░█░░░░░░█░░░░░░░░█░░░██░░▀▀▀▀░░░░░█░░░░║
║░▀▀▀▀░░░░▀░░░▀░░░░░▀░░░░░░░░▀░░░░▀░░░░░░░░░░░░░░░░║
║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
╠══════════════════════════════════════════════════╝
║ File: fn_SkyNET_HC_Init.sqf
║ Author: Hirschi Liga-Life
╚══════════════════════════════════════════════════╝
*/
waitUntil{!isNil "life_server_isReady"};
waitUntil{(life_server_isReady OR !isNil "life_server_extDB_notLoaded")};
SKY_stanby = true;
liga_tag = [];
activ_adm_ara1 = [];
activ_adm_ara2 = [];
activ_adm_ara3 = [];
activ_adm_ara4 = [];
activ_adm_ara5 = [];

uiSleep 2;
diag_log "╔══════════════════════════════════════════════════╗";
diag_log "║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║";
diag_log "║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║";
diag_log "║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║";
diag_log "║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║";
diag_log "║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║";
diag_log "║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║";
diag_log "║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║";
diag_log "║░░▀▀▀▀░░░█░░░█░░▀░░░░░▀░░░░░██░░░█░░░░░░░░▀▀▀█▀▀▀░║";
diag_log "║░█░░░░░░░█░░█░░░░▀░░░▀░░░░░░█░█░░█░░█▀▀▀░░░░░█░░░░║";
diag_log "║░░▀▀▀░░░░█▀▀░░░░░░▀░▀░░░▀▀░░█░░█░█░░█▀▀▀░░░░░█░░░░║";
diag_log "║░░░░░█░░░█░░█░░░░░░█░░░░░░░░█░░░██░░▀▀▀▀░░░░░█░░░░║";
diag_log "║░▀▀▀▀░░░░▀░░░▀░░░░░▀░░░░░░░░▀░░░░▀░░░░░░░░░░░░░░░░║";
diag_log "║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║";
diag_log "╠══════════════════════════════════════════════════╣";
diag_log format["║ Version 			    : %1",VER];
diag_log format["║ SkyNet ON               : %1",SKYon];
if(EQUAL(SKYon,0)) exitWith {	
	diag_log "╠══════════════════════════════════════════════════╣";
	diag_log "║    <<<< SKY-NET - !!! DEAKTIVIERT !!! >>>> ";
	diag_log "╚══════════════════════════════════════════════════╝";
	};
diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║   <<<< Config >>>>";
diag_log "╠══════════════════════════════════════════════════╣";	
diag_log "║     << System >>";
diag_log "╟──────────────────────────────────────────────────╢";	
//diag_log format["║ HC ON                   : %1",HCon];
diag_log format["║ DEV RPT Log             : %1",DEVLOGRPT];
diag_log format["║ DEV DB Log              : %1",DEVLOGDB];
diag_log format["║ DB SysLog               : %1",SYSLOGs];
diag_log format["║ Debug Staus             : %1",DEB];
diag_log "╟──────────────────────────────────────────────────╢";
diag_log "║   << DB - Links >>";
diag_log "╟──────────────────────────────────────────────────╢";
diag_log format["║ DB Links                : %1",DBon];
diag_log format["║ DB 1 - skylog           : %1",EXTDB_SETTINGS("DB",0)];
diag_log format["║ DB 2 - support          : %1",EXTDB_SETTINGS("DB",1)];
diag_log format["║ DB 3                    : %1",EXTDB_SETTINGS("DB",2)];
diag_log "╟──────────────────────────────────────────────────╢";
diag_log "║   << Netzwerk >>";
diag_log "╟──────────────────────────────────────────────────╢";
//diag_log format["║ life_fnc_MP Link        : %1",LIFEMPEH];
//diag_log format["║ BIS_fnc_MP Link         : %1",BISMPEH];
//diag_log format["║ HC Link                 : %1",HCLINKEH];
//diag_log format["║ EH Log Aray Größe (MSG) : %1",LOGARSIZE];
diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║ <<<< SKY-NET - Init >>>> ";
//diag_log "║ - Erstelle Steuer Array";
//SKY_c_link = [-1]; //[SQL ID LifeDB]
if(EQUAL(DBon,1)) then {
	diag_log "╟──────────────────────────────────────────────────╢";
	diag_log "║   << Initialisiere Datenbanken >>";
	diag_log "╟──────────────────────────────────────────────────╢";
	if!([]call SKY_fnc_DBinit) exitWith {
		diag_log "╠══════════════════════════════════════════════════╣";
		diag_log "║ <<<< SKY-NET - DB Init ERROR... Stop !!! >>>> ";
		diag_log "╚══════════════════════════════════════════════════╝";
		["",false,false] call BIS_fnc_endMission;
	};
};	
[]call SKY_fnc_NETinit;
SYSLOG(SKYID,"HC STATUS","NET INIT","INIT COMPLETE","");
/*
if([]call SKY_fnc_NETinit) exitWith {
		diag_log "╠══════════════════════════════════════════════════╣";
		diag_log "║ <<<< SKY-NET - HC Link Init ... Stop !!! >>>> ";
		diag_log "╚══════════════════════════════════════════════════╝";
	
	["",false,false] call BIS_fnc_endMission;
};
/*
/*
	if!([]call SKY_fnc_EVH) then {	
		diag_log "╠══════════════════════════════════════════════════╣";
		diag_log "║     <<<< SKY-NET - Eventhandler Error >>>> ";
		diag_log "║ << Server Link konnte nicht erstellt werden >> ";
		diag_log "║    << SKY-NET  wird weiterhin ausgeführt >> ";
		diag_log "╠══════════════════════════════════════════════════╣"
	};
*/	
[]spawn SKYINIT_fnc_sessID;
[]execVM "\a3_SkyNet_HC\System\Admin\fn_Code.sqf";
SYSLOG(SKYID,"HC STATUS","Admin Code","compiling COMPLETE","");


diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║ <<<< SKY-NET - Init ENDE >>>> ";
diag_log "╚══════════════════════════════════════════════════╝";
	
//["hunting_zone",80]execVM "\a3_SkyNet_HC\Scripte\Jagen\fn_huntingZone.sqf";
if((SCRIP_SETS("Jagen")) 		isEqualTo 1) then {[]execVM "\a3_SkyNet_HC\Scripte\Jagen\fn_huntingZone.sqf";		SYSLOG(SKYID,"HC STATUS","Jagen","INIT COMPLETE","");		};
if((SCRIP_SETS("JagenHasen")) 	isEqualTo 1) then {[]execVM "\a3_SkyNet_HC\Scripte\Jagen\fn_huntingZoneHasen.sqf";	SYSLOG(SKYID,"HC STATUS","JagenHasen","INIT COMPLETE","");	};
if((SCRIP_SETS("Airdrop")) 		isEqualTo 1) then {[]call LIGA_fnc_AirdropConfig;									SYSLOG(SKYID,"HC STATUS","AirdropConf","INIT COMPLETE","");	};
if((SCRIP_SETS("Airdrop")) 		isEqualTo 1) then {[]spawn LIGA_fnc_generateAirdropAuto;							SYSLOG(SKYID,"HC STATUS","Airdrop","INIT COMPLETE","");		};
if((SCRIP_SETS("Schiffswrack")) isEqualTo 1) then {[]spawn LIGA_fnc_schiffwrackauto;								SYSLOG(SKYID,"HC STATUS","Schiffswrack","INIT COMPLETE","");};
if((SCRIP_SETS("Zombies")) 		isEqualTo 1) then {[]execVM "\a3_SkyNet_HC\Scripte\Zombies\fn_zomInit.sqf";			SYSLOG(SKYID,"HC STATUS","Zombies","INIT COMPLETE","");		};
if((SCRIP_SETS("Bohrturm")) 	isEqualTo 1) then {[]spawn LIGA_fnc_turmInit;										SYSLOG(SKYID,"HC STATUS","Bohrturm","INIT COMPLETE","");	};

SAH_offers = profileNamespace GVAR ["LIGA_BAY",[]];
diag_log str SAH_offers;

//[]execVM "\a3_SkyNet_HC\Scripte\Airdrop\fn_generateAirdrop.sqf";
//[]execVM "\a3_SkyNet_HC\Scripte\Missionen\AdminBase.sqf";

SYSLOG(SKYID,"HC STATUS","INIT COMPLETE","HC READY","");
SYSLOG(SKYID,"HC ID",HC_id,"","");
[] call Liga_fnc_player_init; // Performance
[]spawn SKY_fnc_MainLoop;
if(EQUAL(DEB,1)) then {	
	[]spawn {
		sleep 80;
		while {true} do {
			uiSleep 180;
			
			SYSLOG(SKYID,"DIAGNOSE DEBUG","1 ACTTIV SQF  2 FPS",COUNT_SQF,diag_fps);

		//	RPT("SKY_HC_Link",SKY_HC_Link);
		//	SYSLOG(SKYID,"HC DBUG",SKY_HC_Link,"","");
		//	if((HC_isA select 0)) then {SKY_HC_Link = "COM TEST";(owner HC1) publicVariableClient "SKY_HC_Link";};
			{   if(local _x && EQUAL(count units _x,0) && !(EQUAL(_x,infected)))  then {deleteGroup _x;	};} foreach allGroups;	
		};
	};		
};

TON_fnc_index =
compileFinal "
	private[""_item"",""_stack""];
	_item = _this select 0;
	_stack = _this select 1;
	_return = -1;
	{
		if(_item in _x) exitWith {
			_return = _forEachIndex;
		};
	} foreach _stack;

	_return;
";	


[]spawn{
	sleep 60;
	base_units = true;
	sperr_pawneetarget_t = true;
	while {true} do {
		_unitsall = ((units admin_team) + (units ad_base_1) + (units ad_base_3) + (units ad_base_4) + (units ad_base_5) + (units ad_base_6) + (units ad_base_7) + (units ad_base_8) + (units ad_base_9));
		_units = ( (units ad_base_1) + (units ad_base_3) + (units ad_base_4) + (units ad_base_5) + (units ad_base_6) + (units ad_base_7) + (units ad_base_8) + (units ad_base_9));
		//diag_log str (count _units);
		
		{
			if!(alive _x) then {sleep 2; deleteVehicle _x;}else{
				if(typeOf (vehicle _x) in ["O_MRAP_02_hmg_F","B_Heli_Light_01_armed_F","O_LSV_02_armed_viper_F"]) then 
				{	
					if(fuel (vehicle _x) < 0.8) then {
						(vehicle _x) setFuel 1;					
					};				
				};		
			};
		
		} forEach _unitsall;
		
		if(sperr_pawneetarget_t) then {
			{		
				if(isPlayer _x) exitWith { 
					sperr_pawneetarget_t = false;
					(units ad_base_5) doFire _x;
					_x spawn {
						waitUntil{ !alive _this };
						sperr_pawneetarget_t = true;
					};
				};		
			}forEach (list sperr_trig_1);			
		};
		
		if( (count _units) < 30 && base_units ) then {
			base_units = false;
			
			[]spawn {
				
				_dest = base_upad_1;
				_pos = [11359.4,11449,0.00143814];
				_BlackFish = createVehicle ['I_Heli_Transport_02_F', _pos, [], 0, 'NONE']; 
				_BlackFish allowDamage false;
				 
				_BlackFish flyInHeight 60; 
				 
				_mygroup1 = [_pos, east, ['O_G_Soldier_A_F','O_G_Soldier_SL_F'],[],[],[],[],[],180] call BIS_fnc_spawnGroup; 
				 
				(units _mygroup1 select 0) moveInDriver   _BlackFish;
				(units _mygroup1 select 1) moveInTurret [   _BlackFish,[0]]; 

				{
					_x addMPEventHandler ["MPHit",{[_this select 1] spawn npc_checkunit;}];
				} forEach (units _mygroup1) + [_BlackFish];

				
				_BlackFish move (getPos _dest);
				
				waitUntil{sleep 1; (_BlackFish distance2D (getPos _dest)) < 450};
				
				_BlackFish land "base_upad_1";
				
				
				waitUntil{((getPosATL _BlackFish) select 2 ) < 2};
				
				_BlackFish engineOn false;
				_BlackFish setFuel 0;	
				
				_BlackFish animateDoor ["door_back_R",1];
								
				_BlackFish animateDoor ["door_back_L",1];
				_BlackFish animateDoor ['door_R',1];
				_BlackFish animateDoor ['door_L',1];
				_BlackFish animateDoor ['Door_rear',1];
				_BlackFish animateDoor ['Door_LM',1];
				_BlackFish animateDoor ['Door_RM',1];
				_BlackFish animateDoor ['Door_LF',1];
				_BlackFish animateDoor ['Door_RF',1];
				_BlackFish animateDoor ['Door_LB',1];
				_BlackFish animateDoor ['Door_RB',1];
				_BlackFish animateDoor ['Door_1_source',1];
				_BlackFish animateDoor ['Door_2_source',1];
				_BlackFish animateDoor ['Door_3_source',1];
				_BlackFish animateDoor ['Door_4_source',1];
				_BlackFish animateDoor ['Door_5_source',1];
				_BlackFish animateDoor ['Door_6_source',1];
				_BlackFish animate ['DoorL_Front_Open', 1];						
				_BlackFish animate ['DoorL_Back_Open', 1];						
				_BlackFish animate ['DoorR_Front_Open',1];						
				_BlackFish animate ['DoorR_Back_Open', 1];
				sleep 3;
				_mygroup2 = [position _BlackFish, east, ['O_G_Soldier_A_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F'],[],[],[],[],[],180] call BIS_fnc_spawnGroup; 
				
				{
					_x addMPEventHandler ["MPHit",{[_this select 1] spawn npc_checkunit;}];
				} forEach (units _mygroup2) + (units _mygroup3) ;
				_mygroup2 addWaypoint [[20845.2,7235.01,0.00154114], 0];

				[_mygroup2, 0] setWaypointCombatMode "RED";	
				sleep 1;
				_BlackFish setFuel 1;
				_BlackFish engineOn true;
				_BlackFish move [0,0,500];
				_mygroup2 spawn {
					while {true} do {
						{
							if!(alive _x) then {sleep 2; deleteVehicle _x;};
						} forEach (units _this);
						sleep 1;
					};
				};
				waitUntil{sleep 1; (_BlackFish distance2D [0,0,500]) < 1000};
				
				{		
					deleteVehicle _x;		
				} forEach crew _BlackFish;
				deleteVehicle _BlackFish;
				
			};


			[]spawn {
				
				_dest = base_upad_2;
				_pos = [2633.69,22134.5,0.00155091];
				_BlackFish = createVehicle ['B_T_VTOL_01_infantry_F', _pos, [], 0, 'NONE']; 
				   _BlackFish allowDamage false;
				 
				_BlackFish flyInHeight 120; 
				 
				_mygroup1 = [_pos, east, ['O_G_Soldier_A_F','O_G_Soldier_SL_F'],[],[],[],[],[],180] call BIS_fnc_spawnGroup; 
				 
				(units _mygroup1 select 0) moveInDriver   _BlackFish;
				(units _mygroup1 select 1) moveInTurret [   _BlackFish,[0]]; 

				{
					_x addMPEventHandler ["MPHit",{[_this select 1] spawn npc_checkunit;}];
				} forEach (units _mygroup1) + [_BlackFish];

				
				_BlackFish move (getPos _dest);
				
				waitUntil{sleep 1; (_BlackFish distance2D (getPos _dest)) < 1800};
				
				_BlackFish landAt 3;
				
				
				waitUntil{((getPosATL _BlackFish) select 2 ) < 1};
				
				_BlackFish engineOn false;
				_BlackFish setFuel 0;
				


				 
				waitUntil{speed _BlackFish < 1.5};
				
				_BlackFish animateDoor ["door_back_R",1];
								
				_BlackFish animateDoor ["door_back_L",1];
				_BlackFish animateDoor ['door_R',1];
				_BlackFish animateDoor ['door_L',1];
				_BlackFish animateDoor ['Door_rear',1];
				_BlackFish animateDoor ['Door_LM',1];
				_BlackFish animateDoor ['Door_RM',1];
				_BlackFish animateDoor ['Door_LF',1];
				_BlackFish animateDoor ['Door_RF',1];
				_BlackFish animateDoor ['Door_LB',1];
				_BlackFish animateDoor ['Door_RB',1];
				_BlackFish animateDoor ['Door_1_source',1];
				_BlackFish animateDoor ['Door_2_source',1];
				_BlackFish animateDoor ['Door_3_source',1];
				_BlackFish animateDoor ['Door_4_source',1];
				_BlackFish animateDoor ['Door_5_source',1];
				_BlackFish animateDoor ['Door_6_source',1];
				_BlackFish animate ['DoorL_Front_Open', 1];						
				_BlackFish animate ['DoorL_Back_Open', 1];						
				_BlackFish animate ['DoorR_Front_Open',1];						
				_BlackFish animate ['DoorR_Back_Open', 1];
				
				sleep 1;
				_mygroup2 = [position _BlackFish, east, ['O_G_Soldier_A_F','O_G_Soldier_A_F','O_G_Soldier_A_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F'],[],[],[],[],[],180] call BIS_fnc_spawnGroup; 
				_mygroup3 = [position _BlackFish, east, ['O_G_Soldier_A_F','O_G_Soldier_A_F','O_G_Soldier_A_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F','O_G_Soldier_SL_F'],[],[],[],[],[],180] call BIS_fnc_spawnGroup; 
				
				{
					_x addMPEventHandler ["MPHit",{[_this select 1] spawn npc_checkunit;}];
				} forEach (units _mygroup2) + (units _mygroup3) ;
				_mygroup2 addWaypoint [[20850.7,7272.88,0.00127602], 0];
				_mygroup3 addWaypoint [[20780.5,7213.07,0.00142479], 0];
				[_mygroup2,_mygroup3]spawn{
					while {true} do {
						{
							if!(alive _x) then {sleep 2; deleteVehicle _x;};
						} forEach ((units (_this select 0 )) + (units (_this select 0 )) );
						sleep 1;
					};
				};
				
				[_mygroup2, 0] setWaypointCombatMode "RED";
				[_mygroup3, 0] setWaypointCombatMode "RED";
				

				_BlackFish setFuel 1;
				_BlackFish engineOn true;
				_BlackFish move [0,0,500];
				
				waitUntil{sleep 1; (_BlackFish distance2D [0,0,500]) < 1000};
				
				{		
					deleteVehicle _x;		
				} forEach crew _BlackFish;
				deleteVehicle _BlackFish;
				
			};			
		};		
		sleep 1;
	};
};
/*
[]spawn {
	sleep 60;
	private["_string","_varname","_typename","_biscode","_lifecode","_socketcode","_kronecode","_dbcode","_fnccode","_infi",
			"_toncode","_ligaclcode","_fncode","_ilcode","_ligafncode","_ligacode","_skycode","_othercode","_disp","_other"];
	_string 	= "";
	_biscode 	= [];
	_lifecode 	= [];
	_socketcode = [];
	_toncode 	= [];
	_ligaclcode	= [];
	_ligacode 	= [];
	_ligafncode = [];
	_skycode 	= [];
	_kronecode 	= [];
	_fncode 	= [];
	_ilcode 	= [];
	_othercode 	= [];
	_other		= [];
	_dbcode 	= [];
	_fnccode	= [];
	_infi		= [];
	{
					if( !(["bis_fnc_",		_x] call BIS_fnc_inString) &&
					!(["sock_fnc_",		_x] call BIS_fnc_inString) &&
					!(["life_fnc_",		_x] call BIS_fnc_inString) &&
					!(["ton_fnc_",		_x] call BIS_fnc_inString) &&
					!(["ligacl_fnc_",	_x] call BIS_fnc_inString) &&
					!(["liga_fn",		_x] call BIS_fnc_inString) &&
					!(["ligafn_",		_x] call BIS_fnc_inString) &&
					!(["fn_",			_x] call BIS_fnc_inString) &&
					!(["il_",			_x] call BIS_fnc_inString) &&
					!(["kron_",			_x] call BIS_fnc_inString) &&
					!(["db_",			_x] call BIS_fnc_inString) &&
					!(["fnc_",			_x] call BIS_fnc_inString) &&
					!(["sky_fnc_",		_x] call BIS_fnc_inString)
				) then {						
					_other pushBack _x;
				};
		switch (typeName (missionNamespace getVariable _x)) do {
		
			case "ARRAY": 		{};
			case "BOOL": 		{};
			case "CODE": 		{
				if( !(["bis_fnc_",		_x] call BIS_fnc_inString) &&
					!(["sock_fnc_",		_x] call BIS_fnc_inString) &&
					!(["life_fnc_",		_x] call BIS_fnc_inString) &&
					!(["ton_fnc_",		_x] call BIS_fnc_inString) &&
					!(["ligacl_fnc_",	_x] call BIS_fnc_inString) &&
					!(["liga_fn",		_x] call BIS_fnc_inString) &&
					!(["ligafn_",		_x] call BIS_fnc_inString) &&
					!(["fn_",			_x] call BIS_fnc_inString) &&
					!(["il_",			_x] call BIS_fnc_inString) &&
					!(["kron_",			_x] call BIS_fnc_inString) &&
					!(["db_",			_x] call BIS_fnc_inString) &&
					!(["fnc_",			_x] call BIS_fnc_inString) &&
					!(["sky_fnc_",		_x] call BIS_fnc_inString)
				) then {	
					if( !(["_",		_x] call BIS_fnc_inString)) then {
						_othercode pushBack _x;
					}else{
						_infi pushBack _x;
					};	
				}else{
					if((["bis_fnc_",	_x] call BIS_fnc_inString)) exitWith {_biscode 		pushBack _x;};	
					if((["sock_fnc_",	_x] call BIS_fnc_inString)) exitWith {_socketcode 	pushBack _x;};	
					if((["life_fnc_",	_x] call BIS_fnc_inString)) exitWith {_lifecode 	pushBack _x;};	
					if((["ton_fnc_",	_x] call BIS_fnc_inString)) exitWith {_toncode		pushBack _x;};	
					if((["ligacl_fnc_",	_x] call BIS_fnc_inString)) exitWith {_ligaclcode	pushBack _x;};	
					if((["liga_fn",		_x] call BIS_fnc_inString)) exitWith {_ligacode		pushBack _x;};	
					if((["sky_fnc_",	_x] call BIS_fnc_inString)) exitWith {_skycode		pushBack _x;};	
					if((["ligafn_",		_x] call BIS_fnc_inString)) exitWith {_ligafncode	pushBack _x;};	
					if((["fn_",			_x] call BIS_fnc_inString)) exitWith {_fncode		pushBack _x;};	
					if((["il_",			_x] call BIS_fnc_inString)) exitWith {_ilcode		pushBack _x;};	
					if((["kron_",		_x] call BIS_fnc_inString)) exitWith {_kronecode	pushBack _x;};	
					if((["db_",			_x] call BIS_fnc_inString)) exitWith {_dbcode		pushBack _x;};	
					if((["fnc_",		_x] call BIS_fnc_inString)) exitWith {_fnccode		pushBack _x;};	
				};
			};
			case "CONFIG": 		{};
			case "CONTROL": 	{};
			case "DISPLAY": 	{};
			case "GROUP": 		{};
			case "LOCATION": 	{};
			case "OBJECT": 		{};
			case "SCALAR": 		{};
			case "SCRIPT": 		{};
			case "SIDE": 		{};
			case "STRING": 		{};
			case "TEXT": 		{};
			case "TEAM_MEMBER": {};
			case "NAMESPACE": 	{};				
		};
	
		
	} foreach allVariables missionNamespace;
	
	diag_log "";	
	diag_log "";	
	diag_log "BIS";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _biscode;

	diag_log "";	
	diag_log "";	
	diag_log "SOCKET";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _socketcode;
	
	diag_log "";	
	diag_log "";	
	diag_log "DB";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _dbcode;	

	diag_log "";	
	diag_log "";	
	diag_log "LIFE";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _lifecode;

	diag_log "";	
	diag_log "";	
	diag_log "TON";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _toncode;

	diag_log "";	
	diag_log "";	
	diag_log "LIGACL";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ligaclcode;

	diag_log "";	
	diag_log "";	
	diag_log "FN";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _fncode;
	
	diag_log "";	
	diag_log "";	
	diag_log "FNC";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _fnccode;	

	diag_log "";	
	diag_log "";	
	diag_log "LIGAfn";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ligafncode;

	diag_log "";	
	diag_log "";	
	diag_log "LIGA";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ligacode;

	diag_log "";	
	diag_log "";	
	diag_log "IL";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ilcode;

	diag_log "";	
	diag_log "";	
	diag_log "KRNE";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _kronecode;

	diag_log "";	
	diag_log "";	
	diag_log "SKY";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _skycode;
	

	diag_log "";	
	diag_log "";	
	diag_log "Other";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _othercode;	


	diag_log "";	
	diag_log "";	
	diag_log "InfI";	
	{	
		if!(typeName (missionNamespace getVariable _x) == "CODE") then {
			_string = format ["{%1,%2},",str _x,str (typeName (missionNamespace getVariable _x))];
			diag_log _string;
		};	
	}foreach _infi;	
	
	diag_log "";	
	diag_log "";	
	diag_log "VARs";	
	{	
		if!(typeName (missionNamespace getVariable _x) == "CODE") then {
			_string = format ["{%1,%2},",str _x,str (typeName (missionNamespace getVariable _x))];
			diag_log _string;
		};	
	}foreach _other;		
	
	
	_string 	= "";
	_biscode 	= [];
	_lifecode 	= [];
	_socketcode = [];
	_toncode 	= [];
	_ligaclcode	= [];
	_ligacode 	= [];
	_ligafncode = [];
	_skycode 	= [];
	_kronecode 	= [];
	_fncode 	= [];
	_ilcode 	= [];
	_othercode 	= [];
	_dbcode 	= [];
	_fnccode	= [];
	_disp		= [];
	{
		switch (typeName (uiNamespace getVariable _x)) do {
		
			case "ARRAY": 		{};
			case "BOOL": 		{};
			case "CODE": 		{
				if( !(["bis_fnc_",		_x] call BIS_fnc_inString) &&
					!(["sock_fnc_",		_x] call BIS_fnc_inString) &&
					!(["life_fnc_",		_x] call BIS_fnc_inString) &&
					!(["ton_fnc_",		_x] call BIS_fnc_inString) &&
					!(["ligacl_fnc_",	_x] call BIS_fnc_inString) &&
					!(["liga_fn",		_x] call BIS_fnc_inString) &&
					!(["ligafn_",		_x] call BIS_fnc_inString) &&
					!(["fn_",			_x] call BIS_fnc_inString) &&
					!(["il_",			_x] call BIS_fnc_inString) &&
					!(["kron_",			_x] call BIS_fnc_inString) &&
					!(["db_",			_x] call BIS_fnc_inString) &&
					!(["fnc_",			_x] call BIS_fnc_inString) &&
					!(["sky_fnc_",		_x] call BIS_fnc_inString)
				) then {						
					_othercode pushBack _x;
				}else{
					if((["bis_fnc_",	_x] call BIS_fnc_inString)) exitWith {_biscode 		pushBack _x;};	
					if((["sock_fnc_",	_x] call BIS_fnc_inString)) exitWith {_socketcode 	pushBack _x;};	
					if((["life_fnc_",	_x] call BIS_fnc_inString)) exitWith {_lifecode 	pushBack _x;};	
					if((["ton_fnc_",	_x] call BIS_fnc_inString)) exitWith {_toncode		pushBack _x;};	
					if((["ligacl_fnc_",	_x] call BIS_fnc_inString)) exitWith {_ligaclcode	pushBack _x;};	
					if((["liga_fn",		_x] call BIS_fnc_inString)) exitWith {_ligacode		pushBack _x;};	
					if((["sky_fnc_",	_x] call BIS_fnc_inString)) exitWith {_skycode		pushBack _x;};	
					if((["ligafn_",		_x] call BIS_fnc_inString)) exitWith {_ligafncode	pushBack _x;};	
					if((["fn_",			_x] call BIS_fnc_inString)) exitWith {_fncode		pushBack _x;};	
					if((["il_",			_x] call BIS_fnc_inString)) exitWith {_ilcode		pushBack _x;};	
					if((["kron_",		_x] call BIS_fnc_inString)) exitWith {_kronecode	pushBack _x;};	
					if((["db_",			_x] call BIS_fnc_inString)) exitWith {_dbcode		pushBack _x;};	
					if((["fnc_",		_x] call BIS_fnc_inString)) exitWith {_fnccode		pushBack _x;};	
				};
			};
			case "CONFIG": 		{};
			case "CONTROL": 	{};
			case "DISPLAY": 	{_disp	pushBack _x;};
			case "GROUP": 		{};
			case "LOCATION": 	{};
			case "OBJECT": 		{};
			case "SCALAR": 		{};
			case "SCRIPT": 		{};
			case "SIDE": 		{};
			case "STRING": 		{};
			case "TEXT": 		{};
			case "TEAM_MEMBER": {};
			case "NAMESPACE": 	{};				
		};
		_string = format ["{%1,%2},",str _x,str (typeName (uiNamespace getVariable _x))];
		diag_log _string;	
		
	} foreach allVariables uiNamespace;
	
	diag_log "UI NAMESPACHE";	
	diag_log "";	
	diag_log "";	
	diag_log "";	
	diag_log "";	
	diag_log "BIS";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _biscode;

	diag_log "";	
	diag_log "";	
	diag_log "SOCKET";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _socketcode;
	
	diag_log "";	
	diag_log "";	
	diag_log "DB";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _dbcode;	

	diag_log "";	
	diag_log "";	
	diag_log "LIFE";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _lifecode;

	diag_log "";	
	diag_log "";	
	diag_log "TON";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _toncode;

	diag_log "";	
	diag_log "";	
	diag_log "LIGACL";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ligaclcode;

	diag_log "";	
	diag_log "";	
	diag_log "FN";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _fncode;
	
	diag_log "";	
	diag_log "";	
	diag_log "FNC";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _fnccode;	

	diag_log "";	
	diag_log "";	
	diag_log "LIGAfn";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ligafncode;

	diag_log "";	
	diag_log "";	
	diag_log "LIGA";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ligacode;

	diag_log "";	
	diag_log "";	
	diag_log "IL";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ilcode;

	diag_log "";	
	diag_log "";	
	diag_log "KRNE";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _kronecode;

	diag_log "";	
	diag_log "";	
	diag_log "SKY";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _skycode;
	
	diag_log "";	
	diag_log "";	
	diag_log "DISPLAY";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _disp;	

	diag_log "";	
	diag_log "";	
	diag_log "Other";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _othercode;	
	
		
	_string 	= "";
	_biscode 	= [];
	_lifecode 	= [];
	_socketcode = [];
	_toncode 	= [];
	_ligaclcode	= [];
	_ligacode 	= [];
	_ligafncode = [];
	_skycode 	= [];
	_kronecode 	= [];
	_fncode 	= [];
	_ilcode 	= [];
	_othercode 	= [];
	_dbcode 	= [];
	_fnccode	= [];
	_disp		= [];
	{
		switch (typeName (profileNamespace getVariable _x)) do {
		
			case "ARRAY": 		{};
			case "BOOL": 		{};
			case "CODE": 		{
				if( !(["bis_fnc_",		_x] call BIS_fnc_inString) &&
					!(["sock_fnc_",		_x] call BIS_fnc_inString) &&
					!(["life_fnc_",		_x] call BIS_fnc_inString) &&
					!(["ton_fnc_",		_x] call BIS_fnc_inString) &&
					!(["ligacl_fnc_",	_x] call BIS_fnc_inString) &&
					!(["liga_fn",		_x] call BIS_fnc_inString) &&
					!(["ligafn_",		_x] call BIS_fnc_inString) &&
					!(["fn_",			_x] call BIS_fnc_inString) &&
					!(["il_",			_x] call BIS_fnc_inString) &&
					!(["kron_",			_x] call BIS_fnc_inString) &&
					!(["db_",			_x] call BIS_fnc_inString) &&
					!(["fnc_",			_x] call BIS_fnc_inString) &&
					!(["sky_fnc_",		_x] call BIS_fnc_inString)
				) then {						
					_othercode pushBack _x;
				}else{
					if((["bis_fnc_",	_x] call BIS_fnc_inString)) exitWith {_biscode 		pushBack _x;};	
					if((["sock_fnc_",	_x] call BIS_fnc_inString)) exitWith {_socketcode 	pushBack _x;};	
					if((["life_fnc_",	_x] call BIS_fnc_inString)) exitWith {_lifecode 	pushBack _x;};	
					if((["ton_fnc_",	_x] call BIS_fnc_inString)) exitWith {_toncode		pushBack _x;};	
					if((["ligacl_fnc_",	_x] call BIS_fnc_inString)) exitWith {_ligaclcode	pushBack _x;};	
					if((["liga_fn",		_x] call BIS_fnc_inString)) exitWith {_ligacode		pushBack _x;};	
					if((["sky_fnc_",	_x] call BIS_fnc_inString)) exitWith {_skycode		pushBack _x;};	
					if((["ligafn_",		_x] call BIS_fnc_inString)) exitWith {_ligafncode	pushBack _x;};	
					if((["fn_",			_x] call BIS_fnc_inString)) exitWith {_fncode		pushBack _x;};	
					if((["il_",			_x] call BIS_fnc_inString)) exitWith {_ilcode		pushBack _x;};	
					if((["kron_",		_x] call BIS_fnc_inString)) exitWith {_kronecode	pushBack _x;};	
					if((["db_",			_x] call BIS_fnc_inString)) exitWith {_dbcode		pushBack _x;};	
					if((["fnc_",		_x] call BIS_fnc_inString)) exitWith {_fnccode		pushBack _x;};	
				};
			};
			case "CONFIG": 		{};
			case "CONTROL": 	{};
			case "DISPLAY": 	{_disp	pushBack _x;};
			case "GROUP": 		{};
			case "LOCATION": 	{};
			case "OBJECT": 		{};
			case "SCALAR": 		{};
			case "SCRIPT": 		{};
			case "SIDE": 		{};
			case "STRING": 		{};
			case "TEXT": 		{};
			case "TEAM_MEMBER": {};
			case "NAMESPACE": 	{};				
		};
		_string = format ["{%1,%2},",str _x,str (typeName (profileNamespace getVariable _x))];
		diag_log _string;	
		
	} foreach allVariables profileNamespace;
	
	diag_log "UI NAMESPACHE";	
	diag_log "";	
	diag_log "";	
	diag_log "";	
	diag_log "";	
	diag_log "BIS";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _biscode;

	diag_log "";	
	diag_log "";	
	diag_log "SOCKET";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _socketcode;
	
	diag_log "";	
	diag_log "";	
	diag_log "DB";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _dbcode;	

	diag_log "";	
	diag_log "";	
	diag_log "LIFE";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _lifecode;

	diag_log "";	
	diag_log "";	
	diag_log "TON";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _toncode;

	diag_log "";	
	diag_log "";	
	diag_log "LIGACL";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ligaclcode;

	diag_log "";	
	diag_log "";	
	diag_log "FN";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _fncode;
	
	diag_log "";	
	diag_log "";	
	diag_log "FNC";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _fnccode;	

	diag_log "";	
	diag_log "";	
	diag_log "LIGAfn";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ligafncode;

	diag_log "";	
	diag_log "";	
	diag_log "LIGA";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ligacode;

	diag_log "";	
	diag_log "";	
	diag_log "IL";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _ilcode;

	diag_log "";	
	diag_log "";	
	diag_log "KRNE";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _kronecode;

	diag_log "";	
	diag_log "";	
	diag_log "SKY";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _skycode;
	
	diag_log "";	
	diag_log "";	
	diag_log "DISPLAY";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _disp;	

	diag_log "";	
	diag_log "";	
	diag_log "Other";	
	{	
		_string = format ["%1,",str _x];
		diag_log _string;
	}foreach _othercode;	
	
	
 	
 	
};
*/