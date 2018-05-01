#include "..\Liga_script_macros.hpp"
/*
	Master Life Configuration File
	This file is to setup variables for the client, there are still other configuration files in the system

*****************************
****** Backend Variables *****
*****************************
*/
nn_last_vehicles = []; //EMP
nn_empInUse = false; //EMP
life_TankLaster = 1; //able to load anything?

life_action_delay = time;
life_trunk_vehicle = Objnull;
life_session_completed = false;
life_garage_store = false;
life_session_tries = 0;
life_CarPreview = ObjNull;

tawvd_foot 	= GVAR_PRONS["liga_footv",1200];
tawvd_car 	= GVAR_PRONS["liga_carv",1300];
tawvd_air 	= GVAR_PRONS["liga_airv",1500];

life_thirst	= GVAR_PRONS["liga_thi",100];
life_hunger	= GVAR_PRONS["liga_hun",100];
 

life_clothing_filter = 0;
life_clothing_uniform = -1;
life_redgull_effect = time;
life_is_processing = false;
life_bail_paid = false;
life_impound_inuse = false;
life_action_inUse = false;
liga_deathUnit = ObjNull;
life_spikestrip = ObjNull;
life_mauer = ObjNull;
life_fass = ObjNull;
life_dest = ObjNull;
life_respawn_timer = 0.5; //Scaled in minutes
life_knockout = false;
life_interrupted = false;
life_respawned = false;
life_removeWanted = false;
life_action_gathering = false;
life_request_timer = false;
cop_m = false;
ad_targ_id = -1;
ad_targ_uni = ObjNull;
supp_atm = false;

liga_flusi = false;

//Channel 7
life_channel_send = true;

//Persistent Saving
__CONST__(life_save_civ,true); //Save weapons for civs?
__CONST__(life_save_yinv,true); //Save Y-Inventory for players?

//Revive constant variables.
__CONST__(life_revive_cops,true); //Set to false if you don't want cops to be able to revive downed players.
//__CONST__(life_revive_fee,5000); //Fee for players to pay when revived.

//House Limit
__CONST__(life_houseLimit,5); //Maximum amount of houses a player can buy (TODO: Make Tiered licenses).

//Gang related stuff?
__CONST__(life_gangPrice,250000); //Price for creating a gang (They're all persistent so keep it high to avoid 345345345 gangs).
__CONST__(life_gangUpgradeBase,1); //MASDASDASD
__CONST__(life_gangUpgradeMultipler,1); //BLAH

//Uniform price (0),Hat Price (1),Glasses Price (2),Vest Price (3),Backpack Price (4)
life_clothing_purchase = [-1,-1,-1,-1,-1];
/*
*****************************
****** Weight Variables *****
*****************************
*/
life_maxWeight = LIGA_SETTINGS(getNumber,"total_maxWeight");
life_maxWeightT = 24; //Static variable representing the players max carrying weight on start.
life_carryWeight = 0; //Represents the players current inventory weight (MUST START AT 0).

/*
*****************************
****** Life Variables *******
*****************************
*/

life_net_dropped = false;
life_hit_explosive = false;
life_siren_active = false;
life_siren_active2 = false;
life_siren3_active = false;
life_bank_fail = false;

life_use_atm = true;
life_is_arrested = false;
life_delivery_in_progress = false;
life_action_in_use = false;

__CONST__(life_paycheck_period,5); //Five minutes
CASH = 0;
BANK = LIGA_SETTINGS(getNumber,"bank_civ");

life_istazed = false;
life_my_gang = ObjNull;
life_fadeSound = false;
life_vehicles = [];
bank_robber = [];
life_drugged_weed = -1;
life_drugged_weed_duration = 3;
life_drugged_cocaine = -1;
life_drink = 0;
life_drug = 0; 
//life_pressTime = 0;
life_smartphoneTarget = ObjNull;
life_paycheck = 500; //Paycheck Amount

switch (playerSide) do
{
	case west: 
	{
		
		if ( (east countSide playableUnits)  > 0 ) then
		
		{		
		__CONST__(life_impound_car,1);
		__CONST__(life_impound_boat,1);
		__CONST__(life_impound_air,1);
		}
		else
		{
		__CONST__(life_impound_car,800);
		__CONST__(life_impound_boat,600);
		__CONST__(life_impound_air,1250);	
			
		};
	};
	case default 
	{
		__CONST__(life_impound_car,800);
		__CONST__(life_impound_boat,600);
		__CONST__(life_impound_air,1250);
	};
	
	case independent: 
	{
		__CONST__(life_impound_car,800);
		__CONST__(life_impound_boat,600);
		__CONST__(life_impound_air,1250);
	};
	case east:
	{
		__CONST__(life_impound_car,18500);
		__CONST__(life_impound_boat,23500);
		__CONST__(life_impound_air,23500);
	};
};

/*
	Master Array of items?
*/

// NEU
life_inv_items = [];
//Setup variable inv vars.
{
	life_inv_items pushBack ITEM_VARNAME(configName _x);
    missionNamespace setVariable [ITEM_VARNAME(configName _x),0];
} forEach ("true" configClasses (missionConfigFile >> "VirtualLigaItems"));

// NEU ENDE

//Licenses [license var, civ/cop]
life_licenses =
[
	["lada_car","adac"],
	["lada_air","adac"],
	["lco_air","cop"],
	["lco_swat","cop"],
	["lco_cg","cop"],
	["lci_driv","civ"],
	["lci_air","civ"],
	["lci_hero","civ"],
	["lci_mari","civ"],
	["lci_gang","civ"],
	["lci_boat","civ"],
	["lci_oil","civ"],
	["lci_dive","civ"],
	["lci_lkw","civ"],
	["lci_gun","civ"],
	["lci_reb","civ"],
	["lci_cok","civ"],
	["lci_dia","civ"],
	["lci_copp","civ"],
	["lci_iro","civ"],
	["lci_sand","civ"],
	["lci_salt","civ"],
	["lci_cem","civ"],
	["lme_air","med"],
	["lci_home","civ"],
	["lci_ura","civ"],
	["lci_meth","civ"],
	["lci_liga","civ"],
	["lci_stlkr","civ"],
	["lci_admin","civ"],
	["lci_lsd","civ"],
	["lci_jag","civ"],
	["lci_gli","civ"],
	["lci_ben","civ"],
	["lci_sig","civ"],
	["lci_adm","civ"],
	["lci_ano","civ"],
	["lci_sil","civ"],
	["l_a1","civ"],
	["lci_bohrt","civ"]

];
//Setup License Variables
{SVAR_MNS[SEL(_x,0),false];} foreach life_licenses;

if(EQUAL(playerSide,civilian)) exitWith
{
	profilenamespace SVAR ["GUI_BCG_RGB_R",0];
	profilenamespace SVAR ["GUI_BCG_RGB_G",0.6];
	profilenamespace SVAR ["GUI_BCG_RGB_B",0.2];	
}; 
if(EQUAL(playerSide,independent)) exitWith
{
	profilenamespace SVAR ["GUI_BCG_RGB_R",1];
	profilenamespace SVAR ["GUI_BCG_RGB_G",0];
	profilenamespace SVAR ["GUI_BCG_RGB_B",0];
};

if(EQUAL(playerSide,east)) exitWith
{
	profilenamespace SVAR ["GUI_BCG_RGB_R",0.5];
	profilenamespace SVAR ["GUI_BCG_RGB_G",0.5];
	profilenamespace SVAR ["GUI_BCG_RGB_B",0];
};
if(EQUAL(playerSide,west)) exitWith
{
	profilenamespace SVAR ["GUI_BCG_RGB_R",0.2];
	profilenamespace SVAR ["GUI_BCG_RGB_G",0.5];
	profilenamespace SVAR ["GUI_BCG_RGB_B",1];
};

profilenamespace SVAR ["GUI_BCG_RGB_R",0];
profilenamespace SVAR ["GUI_BCG_RGB_G",0.6];
profilenamespace SVAR ["GUI_BCG_RGB_B",0.2];