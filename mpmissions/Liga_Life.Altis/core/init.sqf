#include "..\Liga_script_macros.hpp"
/*
	Master client initialization file
*/
life_firstSpawn = true;
liga_first = false;
life_session_completed = false;
life_action_delay = time;
private["_handle","_timeStamp"];
0 cutText["Setting up client, Bitte warten...","BLACK FADED"];
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
diag_log "╔══════════════════════════════════════════════════╗";
diag_log "║-------------------------------- Starting Liga - Life Client Init  ------------------------------	";
diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║------------ Altis Life RPG 3.1.4.8+   Developed by Tonic Boardwine  --------------- 	";
diag_log "║------------ Modified by Liga-Life.de --------- Die Liga -----------------------------------  	";
diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║";
diag_log "║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║";
diag_log "║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║";
diag_log "║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║";
diag_log "║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║";
diag_log "║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║";
diag_log "║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║";
diag_log "╠══════════════════════════════════════════════════╣";
waitUntil {!isNull player && player isEqualTo player}; //Wait till the player is ready
_handle = []execVM "core\clientValidator.sqf";
waitUntil {scriptDone _handle};
[] execVM "KRON_Strings.sqf";
[] execVM "Liga\Init\functions.sqf";
[] execVM "scripts\IgiLoad\IgiLoadInit.sqf";             
[] execVM "Liga\Comp\fn_fncComp.sqf";
[] execVM "scripts\IgiLoad\IgiLoadLigaTaru.sqf"; 
[] execVM "Liga\LigaHandy\fnc\LigaHandyFNC08.sqf";
/*__________________________________________
  Script by Sickboy (sb _at_ 6thSense.eu)
  Version: v0.1
  Edited by Hirschi - Die Liga 
__________________________________________*/
fncNextSoundCl = compileFinal  preprocessFileLineNumbers "scripts\infected\fnc_nextSoundCl.sqf";
//Setup initial client core functions
diag_log "║ ::Life Client:: Initialization Variables";
//[] call compile PreprocessFileLineNumbers "core\configuration.sqf";
[] call life_fnc_configuration;
diag_log "║ ::Life Client:: Variables initialized";
diag_log "║ ::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;
diag_log "║ ::Life Client:: Eventhandlers completed";
diag_log "║";
diag_log "║ ::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;
//diag_log "║ ::Life Client:: Setting up Trawler actions";
//[] call life_fnc_trawler; 
diag_log "║ ::Life Client:: User actions completed";
diag_log "║ ::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil {TON_fnc_clientGangLeader})};
diag_log "║ ::Life Client:: Received server functions.";
0 cutText ["Warte auf Server...","BLACK FADED"];
0 cutFadeOut 99999999;
diag_log "║ ::Life Client:: Waiting for the server to be ready..";
waitUntil{!isNil "life_server_isReady"};
waitUntil{(life_server_isReady OR !isNil "life_server_extDB_notLoaded")};
if(!isNil "life_server_extDB_notLoaded") exitWith {
	diag_log "║ ::Life Client:: Server did not load extDB";
	999999 cutText ["DB - Fehler .... Bitte Hirschi melden.","BLACK FADED"];
	999999 cutFadeOut 99999999;
};
[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText["Los gehts ..... ","BLACK FADED"];
0 cutFadeOut 9999999;
[] call life_fnc_LIGAInit;
diag_log "║ ::Life Client:: Liga Init completed";

[] spawn life_fnc_escInterupt;

waitUntil {(missionNamespace getVariable ["life_perksInitialized", true])};
life_paycheck = (life_paycheck * (missionNamespace getVariable ["mav_ttm_var_paycheckMultiplier", 1]));


if (__GETC__(life_adminlevel) isEqualTo 6) then {

		// Developer Spawn .... wir haben doch keine Zeit ..... 

		_handle = [] spawn life_fnc_DevSpawn;
		waitUntil {scriptDone _handle};
}
else
{	
	switch (playerSide) do
	{
		case west:
		{
			_handle = [] spawn life_fnc_initCop;
			waitUntil {scriptDone _handle};
		};		
		case civilian:
		{
			//Initialize Civilian Settings
			_handle = [] spawn life_fnc_initCiv;
			waitUntil {scriptDone _handle};
		};		
		case independent:
		{
			//Initialize Medics and blah
			_handle = [] spawn life_fnc_initMedic;
			waitUntil {scriptDone _handle};
		};
		case east:
		{
			//Initialize ADAC and blah
			_handle = [] spawn life_fnc_initAdac;
			waitUntil {scriptDone _handle};
		};
		/*
		case default
		{
			if(__GETC__(life_adminlevel) >= 5)then {
			
			_handle = [] spawn life_fnc_initCiv;
			waitUntil {scriptDone _handle};
			}else{
				["SpyGlass",false,false] execVM "\a3\functions_f\Misc\fn_endMission.sqf";
				
			};
		};		
		*/
	};
};	

player SVAR["restrained",	false,		true];
player SVAR["Escorting",	false,		true];
player SVAR["transporting",	false,		true];
diag_log "║ Past Settings Init";
[] execFSM "core\fsm\client.fsm";
diag_log "║ Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};
diag_log "║ Display 46 Found";

(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];

player addRating 99999999;

life_sidechat = true;

[player,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];

diag_log "║ ::Life Client:: Setting up Fuel Script";
[0] call life_fnc_fuelConfig;
[] call life_fnc_initFuelAction;
[] call Liga_fnc_player_init;
player setDamage ((GVAR_PRONS["liga_dam",0]) min 0.7);
0 cutText ["","BLACK IN"];
[] call life_fnc_hudSetup;
liga_tag = [objNull];
LIFE_ID_PlayerTags 		= ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
//LIFE_ID_RevealObjects 	= ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player SVAR["steam64ID",getPlayerUID player];
player SVAR["realname",profileName,true];
player SVAR["Sname",profileNameSteam,true];
life_fnc_moveIn = compileFinal
"
	player moveInCargo (_this select 0);
";

life_fnc_garageRefund = compileFinal
"
	_price = _this select 0;
	_unit = _this select 1;
	if(_unit != player) exitWith {};
	life_atmcash = life_atmcash + _price;
";

CONSTVAR(life_paycheck); //Make the paycheck static. //Make the paycheck static.

[]spawn life_fnc_survival;
[]spawn LIGACL_fnc_initTaxen;  
// Waf

//[]spawn LIFE_fnc_SperzonenSys;
 
if!(EQUAL(life_blacklisted,0)) then { [] execVM "Liga\Comp\comp_flusi.sqf"; };

diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║                                          End of Liga-Life Client Init DL                                        ";
diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║------------ Altis Life RPG 3.1.4.8+   Developed by Tonic Boardwine  --------------- ";
diag_log "║------------ Modified by Liga-Life.de --------- Die Liga ----------------------------------- ";
diag_log "╠══════════════════════════════════════════════════╣";
diag_log format["║        Total Execution Time %1 seconds                                                                 ",(diag_tickTime) - _timeStamp];
diag_log "╠══════════════════════════════════════════════════╣";
diag_log "║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║";
diag_log "║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║";
diag_log "║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║";
diag_log "║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║";
diag_log "║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║";
diag_log "║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║";
diag_log "║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║";
diag_log "╠══════════════════════════════════════════════════╣";


if(isNil "schiffwoffen" || !isNil "wrack_objs" || isNil "wrack_pos") exitWith{};

if(schiffwoffen)exitWith{};

[wrack_pos]spawn LIGACL_fnc_spawnWrack;

//waitUntil{!isNil "liga_first"};
//if(liga_first) then {[] execVM "SpyGlass\fn_menuCheck.sqf";};

