/*
    File: fn_whereAmI.sqf
    Author: Dardo
	Edit: Hirschi - Die Liga
	TODO: Unterfunktion der schleife in fn_whereAmI erstellen und fnc_gather und diese fn_whereAmI
    Description:
    Return the nearest kind of resource field to the player

    mine
    resource
    nothing
*/
private ["_zone", "_zoneSize","_handle"];
_zone 		 = "";

_resourceCfg = missionConfigFile >> "LigaGather" >> "Resources_1";
for "_i" from 0 to count(_resourceCfg)-1 do { 
	private ["_curConfig", "_resourceZones"]; 
	_curConfig 		= _resourceCfg select _i;
	_resourceZones 	= getArray(_curConfig >> "zones");
	_zoneSize 		= getNumber(_curConfig >> "zoneSize");
    {		
        if ((player distance(getMarkerPos _x)) < _zoneSize) exitWith {
            _zone = _x;
        };
    } forEach _resourceZones;
    if!(_zone isEqualTo "") exitWith {};
};
if!(_zone isEqualTo "") exitWith { _handle = []spawn life_fnc_gather; waitUntil {scriptDone _handle};	 };

_resourceCfg = missionConfigFile >> "LigaGather" >> "Minerals_1";
for "_i" from 0 to count(_resourceCfg)-1 do {
    private ["_curConfig", "_resourceZones"];    
    _curConfig 		= _resourceCfg select _i;
    _resourceZones 	= getArray(_curConfig >> "zones");
    _zoneSize 		= getNumber(_curConfig >> "zoneSize");
    {
        if ((player distance(getMarkerPos _x)) < _zoneSize) exitWith {
            _zone = _x;
        };
    } forEach _resourceZones;
    if!(_zone isEqualTo "") exitWith {};
};
if!(_zone isEqualTo "") exitWith { _handle = [] spawn life_fnc_mine; waitUntil {scriptDone _handle};		};

_resourceCfg = missionConfigFile >> "LigaGather" >> "RandLoot_1";
for "_i" from 0 to count(_resourceCfg)-1 do { 
	private ["_curConfig", "_resourceZones"]; 
	_curConfig 		= _resourceCfg select _i;
	_resourceZones 	= getArray(_curConfig >> "zones");
	_zoneSize 		= getNumber(_curConfig >> "zoneSize");
    {		
        if ((player distance(getMarkerPos _x)) < _zoneSize) exitWith {
            _zone = _x;
        };
    } forEach _resourceZones;
    if!(_zone isEqualTo "") exitWith {};
};
if!(_zone isEqualTo "") exitWith { _handle = [] spawn LIGACL_fnc_ranloot; waitUntil {scriptDone _handle};  };
