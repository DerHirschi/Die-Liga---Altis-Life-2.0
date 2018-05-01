#include "..\..\Liga_script_macros.hpp"
/*
	File: fn_varToStr.sqf
	Author: Bryan "Tonic" Boardwine
	Edited by: Otti & Hirschi - Die Liga
	
	Description:
	Takes the long-name (variable) and returns a display name for our
	virtual item.
*/
private["_var","_class"];
_var = [_this,0,"",[""]] call BIS_fnc_param;
if(_var isEqualTo "") exitWith {""};

/*NEU ÜSYS*/
_class = (_var splitString "_.");
reverse _class; 
_class = SEL(_class,0);
if(isClass (missionConfigFile >> "VirtualLigaItems" >> _class)) exitWith {
	ITEM_NAME(_class);
};

/*NEU ÜSYS ENDE*/

switch (_var) do
{
	//License Block
	case "lci_driv": {"Führerschein"};
	case "lci_air": {"Pilotenschein"};
	case "lci_hero": {"Heroinausbildung"};
	case "lci_oil": {"Oellizenz"};
	case "lci_dive": {"Tauchlizenz"};
	case "lci_boat": {"Bootsfuehrerschein"};
	case "lci_gun": {"Waffenschein"};
	case "lco_air": {"Pilotenschein"};
	case "lco_swat": {"SWAT Training"};
	case "lco_cg": {"Küstenwache"};
	case "lci_reb": {"Rebellentraining"};
	case "lci_lkw": {"LKW Fuehrerschein"};
	case "lci_dia": {"Diamantenlizenz"};
	case "lci_copp": {"Kupferlizenz"};
	case "lci_iro": {"Eisenlizenz"};
	case "lci_sand": {"Sandlizenz"};
	case "lci_salt": {"Salzlizenz"};
	case "lci_cok": {"Kokainausbildung"};
	case "lci_mari": {"Marihuanaausbildung"};
	case "lci_cem": {"Zementlizenz"};
	case "lme_air": {"Pilotenschein"};
	case "lci_home": {"Eigentumsurkunde"};
	case "lada_car": {"ALAC Führerschein"};
	case "lada_air": {"ALAC Pilotenschein"};
	case "lci_ura": {"Uran Lizenz"};
	case "lci_meth": {"Meth-training"};
	case "lci_lsd": {"LSD-training"};
	case "lci_jag": {"Jagdschein"};
	case "lci_gli": {"Schuerfrecht"};
	case "lci_ben": {"Oelraffinierung Lizenz"};
	case "lci_sig": {"Chemie Lizenz"};
	case "l_a1": {"Holzverabeitung"};
	case "lci_bohrt": {"Bohrlizens"};
	// ??
	case "lci_gang": {"Gang-Lizenz"};
	//??

// Clan Lizenzen	
	default {""};
};
