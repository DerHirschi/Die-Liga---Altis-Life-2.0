//if (!getRemoteSensorsDisabled) then {disableRemoteSensors true;};
#define RCLIENT -2

#define RSERV 2
#define RANY 0

#define ITEM_WEIGHT(varName) M_CONFIG(getNumber,"VirtualLigaItems",varName,"weight")
#define M_CONFIG(TYPE,CFG,CLASS,ENTRY) TYPE(missionConfigFile >> CFG >> CLASS >> ENTRY)
enableSaving [false, false];
if(isDedicated && !hasInterface) then { Start_Delay = diag_tickTime; };
if(!hasInterface && !isDedicated) exitWith {
	enableRadio false;
	enableSentences false;
	sleep 120;
	[]spawn LIGACL_fnc_initTaxen;  
};


 
//X_Server = false;
//X_Client = false;
//X_JIP 	 = false;

StartProgress = false;

//if(!isDedicated) then { X_Client = true;};

[] execVM "briefing.sqf"; //Load Briefing
 

npc_checkunit  		= compileFinal  preprocessFileLineNumbers "Liga\Func\fn_check.sqf";	// Cam Sys  

 
mdh_nuke_destruction_zone	= 0;	// DESTRUCTION ZONE OF NUKE IN METERS, USE 0 TO DEACTIVATE
mdh_nuke_camshake			= 1;	// CAEMRASHAKE AT NUKEDETONATION 1=ON, 0=OFF
mdh_nuke_ash				= 0;	// ASH AFTER NUKEDETONATION 1=ON, 0=OFF
mdh_nuke_colorcorrection	= 0;	// COLLORCORRECTION AFTER NUKEDETONATION 1=ON, 0=OFF

if(isDedicated) then {  
	life_sidechat = true;   
	[] execVM "KRON_Strings.sqf";
	[] execVM "scripts\IgiLoad\IgiLoadLigaTaru.sqf";   	
};


StartProgress = true;

///////VARGET ///////////////
/*
[] execVM "Liga\Init\functions.sqf";
[] execVM "IgiLoad\IgiLoadInit.sqf";             
[] execVM "Liga\Comp\fn_fncComp.sqf";
[] execVM "core\init.sqf";
[] call life_fnc_configuration;
[] call life_fnc_LIGAInit;
[] execVM "Liga\LigaHandy\fnc\LigaHandyFNC08.sqf";

fncNextSoundCl = compileFinal  preprocessFileLineNumbers "infected\fnc_nextSoundCl.sqf";
*/