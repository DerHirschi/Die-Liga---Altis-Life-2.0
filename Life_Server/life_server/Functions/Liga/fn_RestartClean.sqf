#include "\life_server\Liga_Macros.hpp"
/*
╔══════════════════════════════════════════════════╗
║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║
║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║
║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║
║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║
║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║
║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
╠══════════════════════════════════════════════════╝
║ File: fn_RestartClean.sqf
║ Author: Hirschi Liga-Life
║
║ Description:
║ Cleanup vor Restart 
╚══════════════════════════════════════════════════╝
*/
private["_dam_ar","_query","_repcount","_tuv","_trunk","_cargo"];
diag_log "║ Restart Cleanup Initialisiert !!!!!";
/*
_std = 5;
_min = 58;
_sek = 0;

_restart = (_std * 60 * 60) + (_min * 60) + _sek;
uiSleep (60 * 28);
*/
_resourceItems = [];
{
	if( (M_CONFIG(getNumber,"VirtualLigaItems",(configName _x),"saveable") ) isEqualTo 1 ) then {
		_resourceItems pushBack (configName _x);
	};	
} forEach ("true" configClasses (missionConfigFile >> "VirtualLigaItems"));

diag_log "╔═══════════════════════════════════════════════╗";
diag_log "║ Restart Cleanup gestartet !!!!!";
diag_log "║ Vehicle Dam - Restart Cleanup gestartet !!!!!";


{
	_veh = _x;
	_vehicleClass = getText(configFile >> "CfgVehicles" >> (typeOf _veh) >> "vehicleClass");
	
	if(_vehicleClass in ["Car","Air","Ship"]) then
	{
		_dbInfo = _veh getVariable["dbInfo",[]];
		_repcount = _veh getVariable["tuv",[]];
		//_units = {(_x distance _veh < 3000)} count playableUnits;
		
					
		if(count _dbInfo > 0) then
		{	
			_trunk = _veh getVariable ["Trunk", [[], 0]];
			_itemList = _trunk select 0;
			_totalweight = 0;
			_items = [];

			{
				if ((_x select 0) in _resourceItems) then {
					_items pushBack[(_x select 0),(_x select 1)];
					_weight = (ITEM_WEIGHT(_x select 0)) * (_x select 1);
					_totalweight = _weight + _totalweight;
				};
			}forEach _itemList;		
					
			_trunk = [_items, _totalweight];
					
			_vehItems = getItemCargo _veh;
			_vehMags = getMagazineCargo _veh;
			_vehWeapons = getWeaponCargo _veh;
			_vehBackpacks = getBackpackCargo _veh;
			_cargo = [_vehItems,_vehMags,_vehWeapons,_vehBackpacks];
					// no items? clean the array so the database looks pretty
			if ((count (_vehItems select 0) isEqualTo 0) && (count (_vehMags select 0) isEqualTo 0) && (count (_vehWeapons select 0) isEqualTo 0) && (count (_vehBackpacks select 0) isEqualTo 0)) then {_cargo = [];};
		
			_dam_ar = [_x] call TON_fnc_getHit; 			
			if(count _repcount isEqualTo 0) then {_repcount = 0;_tuv = 0;}else{_tuv = _repcount select 0;_repcount = _repcount select 1;};
			//systemChat "Fixing...";
			_uid = _dbInfo select 0;
			_plate = _dbInfo select 1;
			//_query = format["UPDATE vehicles SET damage='%3' WHERE pid='%1' AND plate='%2'",_uid,_plate,_dam_ar];
			_query = format["vehicleUpdateActivePlate:1:%1:%2:%3:%4:%5:%6:%7",_uid,_plate,_dam_ar,_repcount,_tuv,_trunk,_cargo];
	
			[_query,1] call DB_fnc_asyncCall;
		};		
	};
} foreach vehicles;

diag_log "║ Vehicle Dam - Restart Cleanup beendet !!!!!";
{
	diag_log format["║ WH Save- %1  gestartet !!!!!",_x];
	_query 			= format["WHset:%1:%2",_x,missionNamespace getVariable  _x];	
	_query 			= [_query,1] call DB_fnc_asyncCall;
		
}forEach ["liga_wh_1","liga_wh_2","liga_wh_3","liga_wh_4"];
diag_log "║ ";
diag_log "║ WH Save - Restart Cleanup beendet !!!!!";

diag_log "║ Leimtank Save- Restart Cleanup gestartet !!!!!";
		
liga_leim_trig = true;
//_query = format["UPDATE ligaworld SET leim='%1' ",liga_leim_tank];
_query = format["LeimSave:%1:%2:%3",liga_leim_tank,liga_staa_tank,liga_civ_tank];


	diag_log "╠══════════════════════════════════════════════════╣";
	diag_log "║---------  Leimtank  akt DB LOG    ----------";
	diag_log "╠══════════════════════════════════════════════════╣";
	diag_log format["║ Liga - Baustellen  Query: %1",_query];
	diag_log format["║ Liga - Baustellen _var: %1",liga_leim_tank];
	diag_log "╠══════════════════════════════════════════════════╣";

//waitUntil{sleep (random 0.3); !DB_Async_Active};
[_query,1] call DB_fnc_asyncCall;
liga_leim_trig = false;

	
diag_log "║ Leimtank Save- Restart Cleanup beendet !!!!!";
diag_log "║ Restart Cleanup beendet !!!!!";
diag_log "╚═══════════════════════════════════════════════╝";
