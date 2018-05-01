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

TON_fnc_isnumber =
compileFinal "
	private[""_valid"",""_value"",""_compare""];
	_value = _this select 0;
	_valid = [""0"",""1"",""2"",""3"",""4"",""5"",""6"",""7"",""8"",""9""];
	_array = [_value] call KRON_StrToArray;
	_return = true;	
	{	if(_x in _valid) then{}	else{	_return = false;	};	} foreach _array;
	_return;
";

TON_fnc_player_query =
compileFinal "
	private[""_ret""];
	_ret = _this select 0;
	if(isNull _ret) exitWith {};
	if(isNil ""_ret"") exitWith {};
	[life_atmcash,life_cash,life_id,player] remoteExec ['life_fnc_admininfo',_ret];
";

publicVariable "TON_fnc_player_query";
// SitDown Script by Hirschi Liga-Life

life_fnc_sitDown =
compileFinal "
private [""_chair"",""_mode""];
_mode = _this select 0;
_chair = _this select 1;
_exit = nearestObjects [player, [""Man""], 0.7];
_exit = count _exit;
if (_mode == 10) exitWith { [player, """"] remoteExecCall [""life_fnc_switchMove"",-2]; liga_sit = false; };
if (isNull _chair) exitWith { [player, """"] remoteExecCall [""life_fnc_switchMove"",-2]; liga_sit = false; };

[player, ""Crew""] remoteExecCall [""life_fnc_switchMove"",-2];
player setPos (getPos _chair); 
player setDir ((getDir _chair) - 180); 	
	switch (_mode) do {
		case 0: {player setPos [getpos _chair select 0, getpos _chair select 1,((getpos _chair select 2) - 0.42)]; sleep 0.7; player setPos [getpos _chair select 0, getpos _chair select 1,((getpos _chair select 2) - 0.42)];  };
		case 1: {player setPos [((getpos _chair select 0) + 0.2), ((getpos _chair select 1) + 0.01),((getpos _chair select 2) - 0.38)]; sleep 0.7; player setPos [((getpos _chair select 0) + 0.2), ((getpos _chair select 1) + 0.01),((getpos _chair select 2) - 0.38)]; };
		case 2: {player setPos [((getpos _chair select 0) + 0.2), ((getpos _chair select 1) + 0.01),((getpos _chair select 2) - 0.48)]; sleep 0.7; player setPos [((getpos _chair select 0) + 0.2), ((getpos _chair select 1) + 0.01),((getpos _chair select 2) - 0.48)]; };
		case 3: {player setPos [getpos _chair select 0, getpos _chair select 1,getpos _chair select 2]; sleep 0.7; player setPos [getpos _chair select 0, getpos _chair select 1,getpos _chair select 2];  };
		case 4: {player setPos [((getpos _chair select 0) + 0.06), ((getpos _chair select 1) + 0),((getpos _chair select 2) - 0.48)]; sleep 0.7; player setPos [((getpos _chair select 0) + 0.06), ((getpos _chair select 1) + 0),((getpos _chair select 2) - 0.48)];  };
		
		default { if (ad_debugHint) then {hint ""Stuhl nicht klassifiziert"";};};
	};
liga_sit = true ;
";
publicVariable "life_fnc_sitDown";

Liga_fnc_player_init =
compileFinal "
waitUntil {!isNil 'Liga_t'};
{	if!(_x isKindOf 'Campfire_burning_f' || _x isKindOf 'Campfire_burning_f' || _x isKindOf 'MetalBarrel_burning_F') then {_x enableSimulation false; }; }forEach Liga_t;
Liga_t = nil;
";
publicVariable "Liga_fnc_player_init";


/*	Author: Hirschi - Die Liga .. Vorlage: R3F_Team - Altis Life RPG 5.0 */

LIGACL_fnc_suchFreiStelle = compileFinal "

	private ['_offset','_radius',  '_position_degagee','_i','_a','_xsin','_ysin'];
		
	_rasterradius 	= getNumber(missionConfigFile >> 'LigaTaxen' >> 'searchraster');
	_radius 		= getNumber(missionConfigFile >> 'LigaTaxen' >> 'searchrange');
	_freeradius 	= getNumber(missionConfigFile >> 'LigaTaxen' >> 'freeRadius');
	{player reveal _x;} foreach (player nearObjects _radius);
	
	_radius 		= ((_radius / 2) / _rasterradius );	
	
	_offset = if (count _this > 0) then {_this } else {[0,0,0]};	
	if(_offset isEqualTo [0,0,0]) exitWith {[0,0,0]};
	
	if((count ((nearestObjects[_offset,['All'],_freeradius] ) - playableUnits) ) isEqualTo 0) exitWith {_offset;};
	_temp = (nearestObjects[_offset,[	
		'Land_HelipadCircle_F',
		'Land_HelipadCivil_F',
		'Land_HelipadEmpty_F',
		'Land_HelipadRescue_F',
		'Land_HelipadSquare_F'
	],(_rasterradius * _radius)] );
	if!((count _temp  ) isEqualTo 0) exitWith {getPos (_temp select 0);};
	
	_position_degagee = _offset;	
			
	for [{_a=0 * _rasterradius }, {(_a > -_radius * _rasterradius - 1) && !(((count ((nearestObjects[_position_degagee,['All'],_freeradius] ) - playableUnits + ( nearestTerrainObjects [_position_degagee, [], _freeradius] )  ) ) isEqualTo 0) ) }, {_a = _a - _rasterradius}] do {
		for [{_i= 0 * _rasterradius }, {(_i < _radius * _rasterradius + 1 ) && !(((count ((nearestObjects[_position_degagee,['All'],_freeradius] ) - playableUnits + ( nearestTerrainObjects [_position_degagee, [], _freeradius] ) ) ) isEqualTo 0) ) }, {_i = _i + _rasterradius}] do {
			for [{_si=0 }, {(_si < 4 ) && !(((count ((nearestObjects[_position_degagee,['All'],_freeradius] ) - playableUnits + ( nearestTerrainObjects [_position_degagee, [], _freeradius] )) ) isEqualTo 0) ) }, {_si = _si + 1}] do {

				_position_degagee = _offset;
				switch (_si) do {
					case 0: {		
						_xsin = _i;
						_ysin = _a;
					};
					case 1: {		
						_xsin = _i * -1;
						_ysin = _a;
					};
					case 2: {		
						_xsin = _i;
						_ysin = _a * -1;
					};				
					case 3: {		
						_xsin = _i * -1;
						_ysin = _a * -1;
					};
				};	
				_position_degagee = [ _xsin,   _ysin,	0] vectorAdd _offset;
			};				
		};	
	};
	if!((count ((nearestObjects[_position_degagee,['All'],_freeradius] ) - playableUnits + ( nearestTerrainObjects [_position_degagee, [], _freeradius] ) ) ) isEqualTo 0) exitWith {[0,0,0];};
	_position_degagee
";

publicVariable "LIGACL_fnc_suchFreiStelle";

LIGACL_fnc_lookNoTask = compileFinal "
	private['_testHeli','_ret','_dist'];
	_helivar = [_this,0,'',['']] call BIS_fnc_param;
	if(_helivar isEqualTo '') exitWith {};
	_ret = [];
	_testHeli = '';
	_dist = 15000;	
	{			
		_testHeli = (getText(missionConfigFile >> 'LigaTaxen' >> _helivar >> (configName _x) >> 'Heli_var' ));
				
		_testHeli = call compile _testHeli;
				
		if(!isNull _testHeli)then {
			if(alive _testHeli && !isEngineOn _testHeli && !(_testHeli getVariable ['hasTask',false])) then {
				if( (_testHeli distance2D player) < _dist ) then {
					_dist = _testHeli distance2D player;
					_ret = [_testHeli,configName _x];
				};
			};									
		};						
	} forEach ('true' configClasses (missionConfigFile >> 'LigaTaxen' >> _helivar ));	

	_ret
";	
publicVariable "LIGACL_fnc_lookNoTask";	


LIGACL_fnc_ConAirAction = compileFinal "
	
	_heli		= [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
	_cfgName	= [_this,1,'',['']] call BIS_fnc_param;
	_cfgEnt 	= [_this,2,'',['']] call BIS_fnc_param;
	_oneWay	 	= [_this,3,true,[false]] call BIS_fnc_param;
	if( isNull _heli || !alive _heli || _cfgName isEqualTo '' || _cfgEnt isEqualTo '' ) exitWith {};

	_helivar	= getText(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> _cfgName >> 'Heli_var');
	_str = '';

	{		
		_str 	= _str + format [' %3 addAction[ %1 ,  { [ %2 , [ %3, %5, %6 ] , true ] remoteExec [''LIGACL_fnc_ConAirFlyTOpad'',(_this select 0) ];	} ,'''',0,false,false,'''','' %4 && (((_target  getVariable [''''Home_Pad'''',[15000,15000,0] ]) distance2D (_target) ) <= 20)  ''	];',str (_x select 0), (_x select 1) , _helivar, (_x select 2), str _cfgName, str _cfgEnt];
	}forEach ( getArray(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> 'ZielPads') );
	
	{		
		_str 	= _str + format [' %3 addAction[ %1 ,  { [ %2 , [ %3, %5, %6 ] , false ] remoteExec [''LIGACL_fnc_ConAirFlyTOpad'',(_this select 0) ];	} ,'''',0,false,false,'''','' %4 && (((_target  getVariable [''''Home_Pad'''',[15000,15000,0] ]) distance2D (_target) ) > 20) ''	];',str (_x select 0), (_x select 1) , _helivar, (_x select 2), str _cfgName, str _cfgEnt];
	}forEach ( getArray(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> 'ZielPads') );

	{		
		_str 	= _str + format [' %3 addAction[ %1 ,  { [ %2 , [ %3, %5, %6 ] , true ] remoteExec [''LIGACL_fnc_ConAirFlyTOpad'',(_this select 0) ];	} ,'''',0,false,false,'''','' %4 && (((_target  getVariable [''''Home_Pad'''',[15000,15000,0] ]) distance2D (_target) ) <= 20)	'' ];',str (_x select 0), (_x select 1) , _helivar , (_x select 2), str _cfgName, str _cfgEnt];
	}forEach ( getArray(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> _cfgName >> 'ZielPads') );
	
	{		
		_str 	= _str + format [' %3 addAction[ %1 ,  { [ %2 , [ %3, %5, %6 ] , false ] remoteExec [''LIGACL_fnc_ConAirFlyTOpad'',(_this select 0) ];	} ,'''',0,false,false,'''','' %4 && (((_target  getVariable [''''Home_Pad'''',[15000,15000,0] ]) distance2D (_target) ) > 20)	'' ];',str (_x select 0), (_x select 1) , _helivar , (_x select 2), str _cfgName, str _cfgEnt];
	}forEach ( getArray(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> _cfgName >> 'ZielPads') );
	
	if( (getNumber(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> _cfgName >> 'ConAir')  ) isEqualTo 1 ) then {
		_temp	= ( getArray(missionConfigFile >> 'LigaTaxen' >> 'LigaCon_Air' >> 'ZusatzTransport') );
		_str 	= _str + format [' %3 addAction[ %1 ,  { [ %2 , [ %3, %5, %6 ] , false ] remoteExec [''LIGACL_fnc_ConAirFlyTOpad'',(_this select 0) ]; hint ''Der / Die Gefangene(n) werden jetzt in abtransportiert.'';	} ,'''',0,false,false,'''','' (side player) isEqualTo WEST ''		];' ,str (_temp select 0), (_temp select 1), _helivar, (_temp select 2), str _cfgName, str _cfgEnt  ];
	};
	
	{		
		if!(_x isEqualTo '') then {
			_str 	= _str + format[' %1 %2 ',_helivar, _x];
		};
	}forEach ( getArray(missionConfigFile >> 'LigaTaxen' >> _cfgEnt >> _cfgName >> 'extraActions') );
	
	call compile _str;	
";	
publicVariable "LIGACL_fnc_ConAirAction";	

LIGACL_fnc_ConAirFlyTOpad = compileFinal "
	private['_mark'];
	_pos		= [_this,0,[],[[]]] call BIS_fnc_param;
	_cfg 		= [_this,1,[],[[]]] call BIS_fnc_param;
	_backTrig 	= [_this,2,true,[false]] call BIS_fnc_param;
	if(	_pos isEqualTo [] || _cfg isEqualTo [] )	exitWith {};
	_heli 		= _cfg select 0;
	if(	isNull _heli || !alive _heli  ) 				exitWith {};
	waitUntil{		!(_heli getVariable ['hasTask',false]) && !isEngineOn _heli };
	_heli setVariable ['hasTask',true,true];
	_heli engineOn true;
	_cfgHighEnt = _cfg select 2;
	_cfgName	= _cfg select 1;
	_radius 	= getNumber(missionConfigFile >> 'LigaTaxen' >> 'freeRadius') ;
	
	_high 	= getNumber(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> _cfgName >> 'FlyHigh');
	_t 		= false;	
	
	private _targ_pad = nearestObjects[_pos,[
		'Land_HelipadCircle_F',
		'Land_HelipadCivil_F',
		'Land_HelipadEmpty_F',
		'Land_HelipadRescue_F',
		'Land_HelipadSquare_F'
	],_radius];
	_mark_obj = getText(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> 'MarkerRauch');
	if(count _targ_pad isEqualTo 0) then { 
		_targ_pad 	= 'Land_HelipadEmpty_F' createVehicle _pos;
		[_pos,_mark_obj,_heli] spawn {
			_heli = _this select 2;
			waitUntil{isEngineOn _heli};
			while{isEngineOn _heli && alive _heli} do {			
				_mark 		= (_this select 1) createVehicle (_this select 0);
				waitUntil{sleep 1; isNull _mark};
			};
		};		
		_t 			= true;
	}else {
		_targ_pad 	= _targ_pad select 0;		
	};

	_heli reveal _targ_pad;

	_heli flyinheight _high; 
	_heli setFuel 1;
	_heli setDamage 0;
	{
		if(!isPlayer _x) then { _x setDamage 0;	};
	}forEach (crew _heli);
	
	_heli setCollisionLight true;

	sleep 13;
	_tr = false ;
	_temp = [];
	
	if( (getNumber(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> _cfgName >> 'ConAir')) isEqualTo 1 ) then {
		private _targ_man = nearestObjects[(getPos _heli),['Man'],12];

		_temp = [];
		{
			if(_x getVariable['restrained',false]) then { _temp pushBack _x; };
			
		}forEach _targ_man;
		_heli lock 0;
		{		
			[_heli] remoteExecCall ['life_fnc_moveIn',_x];
		}forEach _temp;		
		_heli lock 2;
	};
	sleep 7;
	_heli lock 2;
	_heli animateDoor ['door_back_R',0];
	_heli animateDoor ['door_back_L',0];
	

	_heli move getPos _targ_pad;
	_heli setCollisionLight true;
	sleep 20;
	waitUntil{sleep 1; (_heli  distance _targ_pad) < 480 || !isEngineOn _heli};
	if(isNil '_mark')then{_mark = objNull ; };
	if(isEngineOn _heli) then {
		
		waitUntil{	 (_heli  distance2D _targ_pad) < 150 	};
		if!((count (nearestObjects[_pos,['All'],5] - playableUnits - [_targ_pad,_mark] ) isEqualTo 0)) then {
			diag_log '_n = 10 !!!!!!!!!';
			if(	(count (nearestObjects[_pos,['Land_HelipadCircle_F','Land_HelipadCivil_F','Land_HelipadEmpty_F','Land_HelipadRescue_F','Land_HelipadSquare_F'],500]	- [_targ_pad,_mark])) isEqualTo 0 ) then {
				deleteVehicle _targ_pad;
				_homePos = _heli getVariable ['Home_Pad',[15000,15000,0]];
				_heli move _homePos;
				waitUntil{sleep 1; (_heli  distance _homePos) < 350 || !isEngineOn _heli};
				_homeland = nearestObjects[getPos _heli,['Land_HelipadCircle_F','Land_HelipadCivil_F','Land_HelipadEmpty_F','Land_HelipadRescue_F','Land_HelipadSquare_F'],500] select 0;
				_heli land (str _homeland);
			}else{			
				_heli land 'LAND'; 
				diag_log 'LAND';
			};
		}else{
			_heli land (str _targ_pad);
			diag_log 'LAND STR';
		};	
		
		waitUntil{!(isEngineOn _heli )};
	};

	_heli animateDoor ['door_back_R',1];
	_heli animateDoor ['door_back_L',1];
	_heli lock 0;
	if( (getNumber(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> _cfgName >> 'ConAir')) isEqualTo 1 ) then {
		if!(isNil '_temp') then {
			{	
				moveOut _x;	
			}forEach _temp;
		};
	};
	if(_t) then {
		
		deleteVehicle _targ_pad;
	};
	_heli setVariable ['hasTask',nil,true];
	if( !( (getNumber(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> _cfgName >> 'FlyAutoBack')) isEqualTo -1 ) && _backTrig  ) then {

		sleep (getNumber(missionConfigFile  >> 'LigaTaxen' >> _cfgHighEnt >> _cfgName >> 'FlyAutoBack'));
		waitUntil{ !isEngineOn _heli };
		[(_heli getVariable ['Home_Pad',[15000,15000,0]]),_cfg,false] remoteExec ['LIGACL_fnc_ConAirFlyTOpad',_heli]; 
	};
";	
publicVariable 'LIGACL_fnc_ConAirFlyTOpad';	



LIGACL_fnc_HeliFailsafe = compileFinal "
	_heli		= [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
	if(isNull _heli) exitWith {};	
	
	while{!isNull _heli} do {		
		waitUntil{sleep 4; (speed _heli) < 1 && (isEngineOn _heli)};		
		
		_irit 	= 80;
		private _oldPos = getPos _heli;
		private _real_ir = 0;
		sleep 2;
		for [{_i=0}, {
			(_i <= _irit) && (isEngineOn _heli) && ((speed _heli) < 1) && ((_heli distance2D _oldPos) < 4 ) && (((getPos _heli) select 2) > 10)
			
			}, {_i = _i + 1}] do {_oldPos = getPos _heli; sleep 1; _real_ir = _i};

		if((_irit isEqualTo _real_ir) && isEngineOn _heli) then {			
			[_heli,'LAND'] remoteExec ['LIGACL_fnc_forceLand',_heli];
			diag_log ('Taxi_Failsafe LAND forceLAnd:' + (str _heli)  );
			sleep 18;
		};
		sleep 10;
		
	};
";	
publicVariable 'LIGACL_fnc_HeliFailsafe';	

LIGACL_fnc_forceLand = compileFinal "
	_heli		= [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
	_cmd		= [_this,1,'LAND',['']] call BIS_fnc_param;
	if(isNull _heli) exitWith {};	
	_heli land _cmd;
	waitUntil{!isEngineOn _heli};
	_heli setVariable ['hasTask',nil,true];
";	
publicVariable 'LIGACL_fnc_forceLand';


/*Schiffswrack*/

LIGACL_fnc_WrackSinkt = compileFinal "	
	private['_wrackSwitch','_t','_tick'];	
	_startTime = param [0, 0];
	if(isNil 'wrack1' || isNil 'wrack2' || isNil 'Feuer' || _startTime isEqualTo 0 )exitWith {}; 
	if(isNull wrack1 || isNull wrack2 || isNull Feuer)exitWith {};
		
	_posi = getPos wrack1;
	_to = ((getPosATL wrack1) select 2) ;
	_to2 = ((getPosATL wrack2) select 2) ;
	if(_to > _to2)then {_wrackSwitch = wrack1; }else{_wrackSwitch = wrack2; };
		
	waitUntil{serverTime >= _startTime};
	_tick 		= diag_tickTime;
	
	for '_i' from 0 to 5  step 0.002 do {				
		
		wrack2 attachTo [wrack1, [0.67, -21.6, 0] ]; 					
		_tick = _tick + 0.02;
		waitUntil{diag_tickTime >= _tick};
		wrack1 setpos (_posi vectorDiff [0,0,_i]);
	};
		
	{
		deleteVehicle _x;
	} forEach (Feuer getVariable ['effects', []]);
	deleteVehicle Feuer;

	
	_to = ((getPosATL wrack1) select 2) + 2 ;
	_pos2 = getPos wrack2;
	_posi = getPos wrack1;
	
	_tick = _tick + 1;
	waitUntil{	diag_tickTime >= _tick};
	for '_i' from 0 to _to  step 0.02 do {		
		
		if(_i > _to / 2) then {
			if(isNil '_t')then {
				_t = _i;				
				detach wrack2 ;	
				if(isNil 'wrack_boom') then {
					wrack_boom = true;
					publicVariable 'wrack_boom';
					_boom = [(getPos wrack1 select 0) + 0.67, (getPos wrack1 select 1) + -21.6, (getPos wrack1 select 2) + 0];
					'Bo_GBU12_LGB' createVehicle _boom;					
					'M_NLAW_AT_F' createVehicle _boom;					
				};
			};
			wrack2 setpos (_pos2 vectorDiff [(_i - _t) / 2,(_i - _t) / 3,_i]); ;			
		}else{
			wrack2 attachTo [wrack1, [0.67, -21.6, 0] ]; 
		};		
		
		_tick = _tick + 0.02;
		waitUntil{	diag_tickTime >= _tick};
		wrack1 setpos (_posi vectorDiff [0,0,_i]);
	};
	
	_to2 = ((getPosATL _wrackSwitch) select 2) ;
	_pos2 = getPos _wrackSwitch;	
	for '_i' from 0 to _to2  step 0.02 do {	
		_wrackSwitch setpos (_pos2 vectorDiff [_i / 2,_i / 3,_i]);		
		_tick = _tick + 0.02;
		waitUntil{	diag_tickTime >= _tick};
	};
	
	_to2 = ((getPosATL _wrackSwitch) select 2) + 2 ;
	_pos2 = getPos _wrackSwitch;	
	for '_i' from 0 to _to2  step 0.02 do {		
		_wrackSwitch setpos (_pos2 vectorDiff [0,0,_i]);		
		_tick = _tick + 0.02;
		waitUntil{	diag_tickTime >= _tick};
	};
	
	sleep 1;		
	sleep (random 4);
	sleep (random 4);
	[[[getPos wrack1,vectorUp wrack1],[getPos wrack2,vectorUp wrack2]]] remoteExec ['TON_fnc_WrackMakeSafe', 2];
	
	waitUntil{!isNil 'wrack_objs'};
	
	{player reveal _x;} foreach wrack_objs;
	sleep 1;
	deleteVehicle wrack1;
	deleteVehicle wrack2;
	wrack1 = nil;
	wrack2 = nil;

";
publicVariable 'LIGACL_fnc_WrackSinkt';





/*
TON_fnc_setObjVar = 
compileFinal '
	private['_obj','_varValue','_global','_varName'];
	_obj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
	_varName = [_this,1,'',['']] call BIS_fnc_param;
	_varValue = _this select 2;
	_global = [_this,3,false,[true]] call BIS_fnc_param;

	if(isNull _obj OR _varName isEqualTo '') exitWith {}; 
	_obj setVariable[_varName,_varValue,_global];

';
publicVariable 'TON_fnc_setObjVar';
*/