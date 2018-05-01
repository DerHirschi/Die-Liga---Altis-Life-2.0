private["_uid"];
diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║- DB - Cleanup -Start -";
diag_log "║";
diag_log "╠══════════════════════════════════════════════════╣";

diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║- DB - Haustabelle -Start -";
diag_log "║";
diag_log "╠══════════════════════════════════════════════════╣";
_queryResult = ["sammelDBcleanDataHouses",2,true] call DB_fnc_asyncCall;
diag_log format["║_queryResult:			: %1",_queryResult];

	{
		diag_log format["║_x:			: %1",_x];
		_uid = _x select 1;
		if!(_uid isEqualTo "0000" )then {
			_quest = ([format["playerCLEANcheck:%1", _uid], 2] call DB_fnc_asyncCall) select 0;
			if(_quest) then {
				diag_log format["║ UID nicht gefunden:			: %1",_uid];
				if(([format["playerCLEANcheck:%1", _uid], 2] call DB_fnc_asyncCall) select 0) then {
					[format["cleanHouses:%1",_uid], 2] call DB_fnc_asyncCall; 
					[format["cleanLaden:%1",_uid], 2] call DB_fnc_asyncCall; 
					[format["cleanKarren:%1",_uid], 2] call DB_fnc_asyncCall; 
					[format["cleanTankstell:%1",_uid], 2] call DB_fnc_asyncCall; 
					[format["cleanEXP:%1",_uid], 2] call DB_fnc_asyncCall; 
					[format["cleanWanted:%1",_uid], 2] call DB_fnc_asyncCall; 

				}else{
					diag_log format["║ 2. Überprüfung - Spieler gefunden !!!!		: %1",_uid];
				};
			
			};	
		};
	}foreach _queryResult;	
	diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║- DB - Haustabelle -ENDE -";
diag_log "║";
diag_log "╠══════════════════════════════════════════════════╣";
diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║- DB - Fahrzeugtabelle -Start -";
diag_log "║";
diag_log "╠══════════════════════════════════════════════════╣";
	
	_queryResult = ["sammelDBcleanDataKarren",2,true] call DB_fnc_asyncCall;
	diag_log format["║_queryResult:			: %1",_queryResult];
	{
		diag_log format["║_x:			: %1",_x];
		_uid = _x select 1;
		_quest = ([format["playerCLEANcheck:%1", _uid], 2] call DB_fnc_asyncCall) select 0;
		if(_quest) then {
			diag_log format["║ UID nicht gefunden:			: %1",_uid];
			if(([format["playerCLEANcheck:%1", _uid], 2] call DB_fnc_asyncCall) select 0) then {
				[format["cleanHouses:%1",_uid], 2] call DB_fnc_asyncCall; 
				[format["cleanLaden:%1",_uid], 2] call DB_fnc_asyncCall; 
				[format["cleanKarren:%1",_uid], 2] call DB_fnc_asyncCall; 
				[format["cleanTankstell:%1",_uid], 2] call DB_fnc_asyncCall; 
				[format["cleanEXP:%1",_uid], 2] call DB_fnc_asyncCall; 
				[format["cleanWanted:%1",_uid], 2] call DB_fnc_asyncCall; 

			}else{
				diag_log format["║ 2. Überprüfung - Spieler gefunden !!!!		: %1",_uid];
			};
		
		};	
	}foreach _queryResult;		
 diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║- DB - Fahrzeugtabelle -ENDE -";
diag_log "║";
diag_log "╠══════════════════════════════════════════════════╣";
 diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║- DB - Cleanup -ENDE -";
diag_log "║";
diag_log "╠══════════════════════════════════════════════════╣";