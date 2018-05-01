#define true 1
#define false 0

class LigaGather {
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
	║	File: Liga_Cfg_vItems.hpp	
	║		
	║	Author:  Hirschi & Zoran - Die Liga		
	╠═════════════════════════════════════════════════════════════════╗
	║	Das wäre was für Graf Zahl hier .....
	╚═════════════════════════════════════════════════════════════════╝
*/
    class Resources_1{
        class apple {
            amount 		= 5;
            zones[] 	= { "apple_1", "apple_2", "apple_3", "apple_4", "apple_5", "obst_1" };
            zusaResou[]	= {"peach",3};
			item 		= "";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            zoneSize 	= 30;
        };

        class peach {
            amount = 5;
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4", "peaches_5" };
            zusaResou[]	= {"",-1};
			item 		= "";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            zoneSize = 30;
        };
		
        class ana {
            amount = 6;
            zones[] = { "ana_1","ana_2" };
			zusaResou[]	= {"mull",1};
            item 		= "";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            zoneSize = 30;
        };	

        class bw {
            amount = 7;
            zones[] = { "bw_1","bw_2" };
			zusaResou[]	= {"mull",2};
            item 		= "";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            zoneSize = 30;
        };		

        class heroinu {
            amount = 4;
            zones[] = { "heroin_1" };
			zusaResou[]	= {"",-1};
            item 		= "";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            zoneSize = 30;
        };

        class cocaine {
            amount = 4;
            zones[] = { "cocaine_1" };
			zusaResou[]	= {"",-1};
            item 		= "";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            zoneSize = 30;
        };

        class cannabis {
            amount = 5;
            zones[] = { "weed_1" };
			zusaResou[]	= {"mull",2};
            item 		= "";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            zoneSize = 30;
        };

        class methu {
            amount = 4;
            zones[] = { "meth_1","meth_2" };
			zusaResou[]	= {"",-1};
            item 		= "";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            zoneSize = 30;
        };

        class lsdu {
            amount = 3;
            zones[] = { "lsd_1" };
			zusaResou[]	= {"mull",1};
            item 		= "";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            zoneSize = 30;
        };	

        class mull {
            amount = 6;
            zones[] = { "rec_1","rec_2","rec_3" };
			zusaResou[]	= {"",-1};
            item 		= "";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            zoneSize = 30;
        };	

        class tet {
            amount = 6;
            zones[] = { "tet_1" };
			zusaResou[]	= {"",-1};
            item 		= "guh";
			boostitem[] = { "" , -1 };
			noItemHint	= "Du benoetigst eine Schutzausruestung !!!";
            sound		= "";
			zoneSize = 30;
        };	

        class a1 {
            amount 		= 4;
            zones[] 	= { "wald_1","wald_2" };
			zusaResou[]	= {"mull",2};
            item 		= "a7";
			boostitem[] = { "a8" , 11 };
			noItemHint	= "Du benoetigst eine Axt oder Kettensaege !!!";
            sound		= "";
			zoneSize 	= 30;
        };			
		
        class uranium1 {
            amount 		= 4;
            zones[] 	= { "uran_1" };
            zusaResou[]	= {"mull",2};		// {"ITEM",maxamount}	// zusätzliche Items dazu ( müll usw )
            item 		= "";
			boostitem[] = { "" , -1 };	// { "ITEM", maxamount  }
			noItemHint	= "";
			sound		= "";			// "" = default
            zoneSize 	= 30;
        };
		
	/* mit Spitzhacke oder Presslufthammer*/
        class copperore {
            amount 		= 5;
            zones[] 	= { "lead_1" };
			zusaResou[]	= {"",-1};
            item 		= "pickaxe";
			boostitem[] = { "a9" , 12 };
			noItemHint	= "Ohne eine Spitzhacke oder einen Presslufthammer wird das nichts!!!";
            sound		= "puse";
			zoneSize 	= 30;
        };		

        class ironore {
            amount 		= 5;
            zones[] 	= { "iron_1" };
			zusaResou[]	= {"",-1};
            item 		= "pickaxe";
			boostitem[] = { "a9" , 12 };
			noItemHint	= "Ohne eine Spitzhacke oder einen Presslufthammer wird das nichts!!!";
            sound		= "puse";
			zoneSize 	= 30;
        };		

        class salt {
            amount 		= 6;
            zones[] 	= { "salt_1" };
			zusaResou[]	= {"",-1};
            item 		= "pickaxe";
			boostitem[] = { "a9" , 17 };
			noItemHint	= "Ohne eine Spitzhacke oder einen Presslufthammer wird das nichts!!!";
            sound		= "puse";
			zoneSize 	= 120;
        };		

        class sand {
            amount 		= 5;
            zones[] 	= { "sand_1" };
			zusaResou[]	= {"",-1};
            item 		= "pickaxe";
			boostitem[] = { "a9" , 17 };
			noItemHint	= "Ohne eine Spitzhacke oder einen Presslufthammer wird das nichts!!!";
            sound		= "puse";
			zoneSize 	= 75;
        };	

        class diamond {
            amount 		= 3;
            zones[] 	= { "diamond_1" };
			zusaResou[]	= {"",-1};
            item 		= "pickaxe";
			boostitem[] = { "a9" , 11 };
			noItemHint	= "Ohne eine Spitzhacke oder einen Presslufthammer wird das nichts!!!";
            sound		= "puse";
			zoneSize 	= 50;
        };	

        class rock {
            amount 		= 3;
            zones[] 	= { "rock_1" };
			zusaResou[]	= {"",-1};
            item 		= "pickaxe";
			boostitem[] = { "a9" , 11 };
			noItemHint	= "Ohne eine Spitzhacke oder einen Presslufthammer wird das nichts!!!";
            sound		= "puse";
			zoneSize 	= 50;
        };		

        class gsg {
            amount 		= 5;
            zones[] 	= { "gol_1" };
			zusaResou[]	= {"mull",1};
            item 		= "pickaxe";
			boostitem[] = { "a9" , 13 };
			noItemHint	= "Ohne eine Spitzhacke oder einen Presslufthammer wird das nichts!!!";
            sound		= "puse";
			zoneSize 	= 30;
        };	

        class c3 {
            amount 		= 5;
            zones[] 	= { "schwef_1" };
			zusaResou[]	= {"",-1};
            item 		= "pickaxe";
			boostitem[] = { "a9" , 18 };
			noItemHint	= "Ohne eine Spitzhacke oder einen Presslufthammer wird das nichts!!!";
            sound		= "puse";
			zoneSize 	= 30;
        };			
    };
/*
	This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
	Example:
			class copper_unrefined
		{
				amount = 2;
			zones[] = { "copper_mine" };
			item = "pickaxe";
			mined[] = { "copper_unrefined" };
	This will make players mine only copper_unrefined
	Now let's go deeper
	Example 2:
			class copper_unrefined
		{
				amount = 2;
			zones[] = { "copper_mine" };
			item = "pickaxe";
			mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
		};
		This will give :
		25(±1)% to copper_unrefined;
		70(±1)% to iron_unrefined;
		5%(±1)% to diamond_uncut;

															 ! Watch Out !
	 If percents are used,you MUST put more than 1 resource in the mined parameter
	 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
	 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
	 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
	 mined[] = { "copper_unrefined" }; OK
	 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/
	/* Random Loot Zones Z Inv */
    class Minerals_1 {
		/* Example 
        class copper_unrefined {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "pickaxe";
			boostitem[] = { "" , -1 };
			noItemHint	= "";
			sound		= "";
            mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };
		Example ENDE*/
	};
	/* Random Loot Zones I u Z Inv */
	class RandLoot_1 {
		/* Wertstoffe Militär Base*/
		class ad_base_gath {            
            zones[] 	= { "ad_base_gath" };
			zoneSize 	= 15;
            item 		= "";			
			noItemHint	= "";
			sound		= "";
            iloot[] 	= {			
				"acc_flashlight",
				"acc_pointer_IR",
				"bipod_01_F_khk",
				"Chemlight_red",			
				"SmokeShell",
				"SmokeShellYellow",
				"bipod_01_F_blk",
				"bipod_01_F_mtp",
				"optic_ACO_grn",			
				"optic_Yorris",
				"optic_ACO_grn_smg",
				"ItemGPS",				
				"Binocular",
				"HandGrenade_Stone",
				"FirstAidKit",
				"ToolKit",						
				"optic_Hamr",
				"optic_Hamr_khk_F",
				"optic_ERCO_khk_F",
				"optic_ERCO_snd_F",
				"Chemlight_yellow",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",	
				"SmokeShellPurple",			
				"SmokeShellRed",			
				"optic_Holosight_khk_F",
				"optic_Holosight_smg_blk_F",
				"optic_SOS",
				"Chemlight_green",
				"optic_LRPS_tna_F",
				"optic_LRPS_ghex_F",
				"Rangefinder",
				"muzzle_snds_65_TI_hex_F",
				"Chemlight_blue",
				"muzzle_snds_65_TI_ghex_F",
				"muzzle_snds_H_MG_khk_F",
				"ItemWatch",
				"muzzle_snds_B_khk_F",
				"ItemMap",	
				"muzzle_snds_B_snd_F",
				"muzzle_snds_58_wdm_F",
				"SmokeShellGreen",
				"muzzle_snds_65_TI_blk_F",
				"muzzle_snds_acp",
				"NVGoggles",
				"ItemCompass",
				"muzzle_snds_H",
				"20Rnd_556x45_UW_mag",
				"arifle_SDAR_F"
			};
            zloot[] 	= {					
				"mull",				
				"mull",				
				"mull",				
				"iuranium",				
				"copperr",
				"copperr",
				"copperr",
				"boltcutter",				
				"ironr",
				"ironr",
				"a10",
				"a10",
				"blastingcharge",
				"uwsl",
				"a10",
				"a10",
				"ipuranium",
				"zipties",
				"b23",
				"zipties",
				"b23",
				"b22",
				"b22",
				"kegel",
				"17",
				"rip",				
				"b23",				
				"zig",			
				"ggn",			
				"jame",				
				"gpstracker",				
				"jame",				
				"jame",				
				"pickaxe",
				"pickaxe",
				"pickaxe",				
				"lockpick",
				"lockpick",
				"lockpick"
			};            
        };
	
		class loot_zone_1 {            
            zones[] 	= { "ranloot_zone_1" };
			zoneSize 	= 30;
            item 		= "";			
			noItemHint	= "";
			sound		= "";
            iloot[] 	= {			
				"acc_flashlight",
				"acc_pointer_IR",
				"bipod_01_F_khk",
				"Chemlight_red",			
				"SmokeShell",
				"SmokeShellYellow",
				"bipod_01_F_blk",
				"bipod_01_F_mtp",
				"optic_ACO_grn",			
				"optic_Yorris",
				"optic_ACO_grn_smg",
				"ItemGPS",				
				"Binocular",
				"HandGrenade_Stone",
				"FirstAidKit",
				"ToolKit",						
				"optic_Hamr",
				"optic_Hamr_khk_F",
				"optic_ERCO_khk_F",
				"optic_ERCO_snd_F",
				"Chemlight_yellow",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",	
				"SmokeShellPurple",			
				"SmokeShellRed",			
				"optic_Holosight_khk_F",
				"optic_Holosight_smg_blk_F",
				"optic_SOS",
				"Chemlight_green",
				"optic_LRPS_tna_F",
				"optic_LRPS_ghex_F",
				"Rangefinder",
				"muzzle_snds_65_TI_hex_F",
				"Chemlight_blue",
				"muzzle_snds_65_TI_ghex_F",
				"muzzle_snds_H_MG_khk_F",
				"ItemWatch",
				"muzzle_snds_B_khk_F",
				"ItemMap",	
				"muzzle_snds_B_snd_F",
				"muzzle_snds_58_wdm_F",
				"SmokeShellGreen",
				"muzzle_snds_65_TI_blk_F",
				"muzzle_snds_acp",
				"NVGoggles",
				"ItemCompass",
				"muzzle_snds_H",
				"20Rnd_556x45_UW_mag",
				"arifle_SDAR_F"
			};
            zloot[] 	= {					
				"mull",				
				"a1",
				"a2",
				"copperr",
				"peach",
				"ironr",
				"a10",
				"21",
				"ggn",							
				"14",
				"jame",				
				"bw",
				"pickaxe",
				"a7",
				"a10",
				"gsn",				
				"cement",				
				"lockpick"
			};            
        };
	};
};

class LigaProcess {
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
	║	File: Liga_Cfg_vItems.hpp	
	║		
	║	Author:  Hirschi - Die Liga		
	╠═════════════════════════════════════════════════════════════════╗
	║"REZEP":{[["Baumatereial Array],[Baumaterial Stk Arry],[Gebaut Arry],[Gebaut Stk Array],I Inventar true/false, Herstell Kosten ohne Lizens, "Text", Einzeln Verarbeiten true/false, +/- Sek Wartezeit, ZusatzItem, Lizens Check true / false]
	╚═════════════════════════════════════════════════════════════════╝
*/
		 
	class CIVpro {
	/*Crafting Men*/	
		CraftMen[]	=	{		
			"gsg",
			"oil",
			"oilben",
			"oildi",			
			"diamond",
			"heroin",
			"iron",
			"sand",
			"salt",
			"copper",
			"cocaine",
			"marijuana",
			"cement",
			"uranium1",
			"uranium4",
			"uranium2",
			"lsd",			
			"iuranium4",
			"hfell",
			"zfell",
			"ggn",
			"gsn",
			"rio",
			"tet",
			"uranium3",
			"uranium3b",
			"oilpum",
			"hydr",
			"bohrg",
			"diet",
			"bolz",
			"brett",
			"mob",
			"spanp",	
			"ketts",			
			"stahlt",
			"flas",
			"moon",
			"maifa",
			"dest",
			"methy",
			"press",
			"waft",
			"bomb",
			"bohr",
			"firwo",
			"kass",
			"regal"
		};
		
	/* Nahrungsmittel */	
		gsg[]= 			{{"gsg"},		{1},{"ggn","gsn","gab"},{1,2,2},false,24000,"Schuerfgut wird gewaschen",				false,0.05, "ghy",	true};
		oil[]= 			{{"oilu"},		{1},{"oilp"},			{1},	false,12000,"Rohöl wird raffiniert",					false,0,	"",		true};
		oilben[]= 		{{"oilu"},		{3},{"ben"},			{5},	false,18000,"Treibstoff wird hergestellt",	false,0.3,	"",		true};
		oildi[]= 		{{"oilu"},		{3},{"di"},				{4},	false,18000,"Kerosin wird hergestellt",	false,0.3,	"",		true};
		diamond[]= 		{{"diamond"},	{1},{"diamondc"},		{1},	false,13500,"Diamanten werden geschliffen",				false,0,	"",		true};
		heroin[]= 		{{"heroinu"},	{1},{"heroinp"},		{1},	false,17500,"Heroin wird verarbeitet",					false,0,	"",		true};
		iron[]= 		{{"ironore"},	{1},{"ironr"},			{1},	false,11120,"Eisen wird verarbeitet",					false,0,	"",		true};
		sand[]= 		{{"sand"},		{1},{"glass"},			{1},	false,1150,"Sand wird verarbeitet",						false,0,	"",		true};
		salt[]= 		{{"salt"},		{1},{"saltr"},			{1},	false,1050,"Salz wird verarbeitet",						false,0,	"",		true};
		copper[]= 		{{"copperore"},	{1},{"copperr"},		{1},	false,7500,"Kupfer wird verarbeitet",					false,0,	"",		true};
		cocaine[]= 		{{"cocaine"},	{1},{"cocainep"},		{1},	false,15000,"Kokain wird verarbeitet",					false,0,	"",		true};
		marijuana[]=	{{"cannabis"},	{1},{"marijuana"},		{1},	false,13500,"Marihuana wird verarbeitet",				false,0,	"",		true};
		cement[]= 		{{"rock"},		{1},{"cement"},			{1},	false,9500,"Zement wird gemischt",						false,0,	"",		true};
		uranium1[]=		{{"uranium1"},	{1},{"uranium2"},		{1},	false,50000,"bereite Atommüll auf",						false,0,	"",		true};
		uranium4[]=		{{"uranium4"},	{1},{"uranium"},		{1},	false,150000,"Brennstaebe werden hergestellt",			false,0,	"",		true};
		uranium2[]=		{{"uranium2"},	{1},{"uranium3"},		{1},	false,50000,"reinige Uran",								false,0,	"",		true};
		meth[]= 		{{"methu"},		{1},{"methp"},			{1},	false,21000,"Koche Meth",								false,0,	"",		true};
		lsd[]=  		{{"lsdu"},		{1},{"lsdp"},			{1},	false,19000,"LSD wird hergestellt",						false,0,  	"",		true};
		iuranium4[]=	{{"iuranium4"},	{1},{"iuranium"},		{1},	false,29000,"Waffenfähiges Uran wird hergestellt",		false,0,	"",		true};
		hfell[]= 		{{"rabbitf"},	{1},{"rabbitfp"},		{1},	false,20000,"Hasenfelle werden verarbeitet",			false,0,	"",		true};
		zfell[]= 		{{"goatrawf"},	{1},{"goatrawfp"},		{1},	false,20000,"Ziegenfelle werden verarbeitet",			false,0,	"",		true};
		ggn[]= 			{{"ggn"},		{2},{"gl"},				{1},	false,90000,"Goldmuenzen werden hergestellt",			false,0.25,	"",		true};
		gsn[]= 			{{"gsn"},		{2},{"gsm"},			{1},	false,70000,"Silbermuenzen werden hergestellt",		false,0.25,	"",		true};
		rio[]= 			{{"rio"},		{3},{"ben","di"},		{4,2},	false,18000,"Offshore Öl wird raffiniert",				false,0,	"",		true};
		tet[]= 			{{"tet"},		{2},{"sig"},			{1},	false,18000,"Schiefergas wird hergestellt",				false,0,	"",		true};
		uranium3[]=		{{"uranium3","puranium"},{1,1},{"uranium4"},{1},false,60000,"Uran wird veredelt",						false,0,	"",		true};
		uranium3b[]= 	{{"uranium3","ipuranium"},{1,1},{"iuranium4"},{1},false,48000,"Uran wird angereichert",				false,0,	"",		true};
		oilpum[]= 		{{"copperr","ironr"},{2,3},{"rip"},{1},false,3000,"Ölpumpe wird hergestellt",							true ,0,	"",		true};
		hydr[]= 		{{"copperr","ironr"},	{2,3},	{"ghy"},	{1},	false,	2500,	"Hydro Riffel wird hergestellt",	true,0,"",true};
		bohrg[]= 		{{"copperr","ironr"},{3,3},{"rib"},{3},false,2500,"Bohrgestänge wird hergestellt",false,0.05,"",true};
		diet[]= 		{{"copperr","ironr"},{1,1},{"lockpick"},{1},false,1000,"Dietrich wird hergestellt",false,0,"",true};
		bolz[]= 		{{"copperr","ironr"},{1,2},{"boltcutter"},{1},false,2000,"Bolzenschneider wird hergestellt",true,0,"",true};			
		brett[]= 		{{"a1"},		{1},{"a2","a4"},{3,2},false,12000,"Bretter werden gesägt",false,0,"",true};		
		mob[]= 			{{"a2"},		{5},{"a6","a4"},{1,2},false,13750,"Möbel werden gebaut",false,0.05,"a5",true};
		spanp[]= 		{{"a4","a3"},	{5,2},{"a5"},{1},false,9450,"Spanplatten werden gepresst",false,0.09,"a1",true};
		ketts[]= 		{{"copperr","ironr"},{1,3},{"a8"},{1},false,7000,"Kettensäge wird gebaut",true,0.15,"",true};
		stahlt[]= 		{{"copperr","ironr"},{1,2},{"stt"},{1},false,3000,"Stahlträger werden hergestellt",false,0,"",true};
		flas[]= 		{{"sand"},		{1},{"a10"},{2},false,9650,"Flaschen werden hergestellt",false,-0.1,"",false};
		moon[]= 		{{"20","a10"},	{1,5},{"21"},{5},false,6500,"Moonshine wird abgefüllt",false,-0.12,"",false};
		maifa[]= 		{{"ironr","a0"},{2,14},{"16"},{1},false,6500,"Maischefass wird hergestellt",true,0.12,"",false};
		dest[]= 		{{"ironr","copperr","a0"},{2,10,1},{"15"},{1},false,6500,"Destille wird gebaut",true,0.18,"",false};
		methy[]= 		{{"18","fuelE"},{3,1},{"fuelF"},{1},false,6500,"Kanister wird aufgefuellt",false,-0.18,"",false};
		press[]= 		{{"ironr","copperr"},{3,2},{"a9"},{1},false,6500,"Presslufthammer wird hergestellt",true,0.16,"",false};
		//munk[]= {{"ironr","copperr","c3","c4"},{3,2,1,1},{"c1"},{1},false,6500,"Munition wird hergestellt",false,0.06,"",false};
		waft[]= 		{{"ironr","copperr","a0"},{2,1,1	},{"c2"},{3},false,6500,"Waffenteile werden hergestellt",false,0.06,"",false};
		bomb[]= 		{{"ironr","c4","c3","a0"	},{1,2,3,1	},{"blastingcharge"},{1},false,6500,"Sprengladung herstellen",false,0.06,"",false};
		bohr[]= 		{{"ironr","copperr","a0"},{1,2,2	},{"c6"},{1},false,6500,"Bohrmaschine herstellen",false,0.1,"",false};
	//	wabo[]= {{"ironr","c4","c3","a0"},{1,2,1,1},{"blastingcharge"},{1},false,6500,"Sprengladung herstellen",false,0.06,"",false};

		test[]= 		{{"water","apple"},{2,3},{"HandGrenade_Stone","LMG_Zafir_F"},{2,3}, true, 1000, "stelle her", false, 0.3,"",false};
		
		firwo[] = 		{{"c3","salt","a4"	},		{3,1,1},	{"fireWo"},{1},	false,	650,			"Feuerwerk herstellen",				false,	0.06,	"",		false};
		kass[] 		= 	{{"a2","ironr","copperr"},{5,3,1},{"kasse"},			{1},	false,	950,	"Kassentisch wird hergestellt",			false,	0,		"",		true};	// Fass
		regal[] 	= 	{{"a2","ironr"},			{2,6},	{"schrank"},		{1},	false,	950,	"Regal wird hergestellt",				false,	0,		"",		true};	// Fass

	
	};
	
};
/*
*    CLASS:
*        variable 	= Variable Name
*        displayName = Item Name
*        weight 	= Item Weight
		
		illegal 	= Cop Belohnung (-1 = Disabled bzw legal)		
		saveable 	= wird gespeichert		
		
		gulltime 	= Redgull Effeck Zeit(-1 = Disabled)
		fat			= setFatigue (-1 = Disabled)
*        
		 buyPrice = Item Buy Price  	//  dummy
*        sellPrice = Item Sell Price	//  dummy
*       
*       essbar = Item Edible (-1 = Disabled)
*       trinkbar = Item Edible (-1 = Disabled)
*  		gulltime 	= Redgull Effeck Zeit(-1 = Disabled)
     
		icon = Item Icon
*       
*/

class VirtualLigaItems {
    //Virtual Items
    class rib {
        variable 	= "rib";
        displayName = "Bohrgestaenge";        
        buyPrice 	= -1;
        sellPrice 	= 13200;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk	       
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Bohrgestaenge kannst du auf der Liga Oel Rig verkaufen oder fuer dein Bohrturm nutzen.";
		titletext	= "";

		icon 		= "icons\items\bgs.paa";
        sound 		= "";
    };

    class fishing {
        variable 	= "fishing";
        displayName = "Angel";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= false;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk	       
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\fishingpoles.paa";
        sound 		= "";
    };
	
    class pickaxe {
        variable 	= "pickaxe";
        displayName = "Spitzhacke";        
        buyPrice 	= 1800;
        sellPrice 	= 750;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[]spawm { life_action_gathering 	= true; _handle = []spawn life_fnc_whereAmI; waitUntil {scriptDone _handle}; life_action_gathering 	= false;	";       
		hinttext	= "Du kannst auch die linke WIN-Taste druecken um die Spitzhacke zu benutzen ....";
		titletext	= "";

		icon 		= "icons\items\pickaxe.paa";
        sound 		= "";
    };
	
    class a8 {
        variable 	= "a8";
        displayName = "Kettensaege";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Du kannst die linke WIN-Taste druecken um die Spitzhacke zu benutzen ....";
		titletext	= "";

		icon 		= "icons\items\kets.paa";
        sound 		= "";
    };

    class a9 {
        variable 	= "a9";
        displayName = "Presslufthammer";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Du kannst die linke WIN-Taste druecken um die Spitzhacke zu benutzen ....";
		titletext	= "";

		icon 		= "icons\items\pressluft.paa";
        sound 		= "";
    };

    class jame {
        variable 	= "jame";
        displayName = "Jagdmesser";        
        buyPrice 	= 14500;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Mit dem Jagdmesser kannst du Tiere schneller schlachten...";
		titletext	= "";

		icon 		= "icons\items\jagdmesser.paa";
        sound 		= "";
    };		
	
    class a7 {
        variable 	= "a7";
        displayName = "Axt";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Du kannst die linke WIN-Taste druecken um die Spitzhacke zu benutzen ....";
		titletext	= "";

		icon 		= "icons\items\axt.paa";
        sound 		= "";
    };
	
    class fuelE {
        variable 	= "fuelE";
        displayName = "Benzinkanister leer";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if (!(life_is_processing)) exitWith { closeDialog 0; [ObjNull,'','','methy'] spawn life_fnc_processAction;};	";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\fuel_can.paa";
        sound 		= "";
    };	
	
    class fuelF {
        variable 	= "fuelF";
        displayName = "Benzinkanister";        
        buyPrice 	= 11800;
        sellPrice 	= 500;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(vehicle player != player) exitWith {hint localize 'STR_ISTR_RefuelInVehicle'};		[] spawn life_fnc_jerryRefuel;	";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\fuel_can.paa";
        sound 		= "";
    };	

    class storagebig {
        variable 	= "storagebig";
        displayName = "grosse Lagerkiste";        
        buyPrice 	= 850000;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 10;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV"};
        useablefnc	= "[_this] call life_fnc_storageBox;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\storagebig.paa";
        sound 		= "";
    };	
	

    class kasse {
        variable 	= "kasse";
        displayName = "Kassentisch";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 25;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV"};
        useablefnc	= "[_this] spawn LIGACL_fnc_LigaAddKass;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "";
        sound 		= "";
    };	

    class schrank {
        variable 	= "schrank";
        displayName = "Regal";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 28;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV"};
        useablefnc	= "[_this] spawn LIGACL_fnc_LigaAddKass;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "";
        sound 		= "";
    };	
	
    class fireWo {
        variable 	= "fireWo";
        displayName = "Feuerwerk";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 6;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_mauer) exitWith {hint 'Du stellst schon ein Feuerwerk auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[7] spawn life_fnc_mauer;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "";
        sound 		= "";
    };	

    class mauer {
        variable 	= "mauer";
        displayName = "Absperrung";        
        buyPrice 	= 800;
        sellPrice 	= 700;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_mauer) exitWith {hint 'Du stellst schon eine Absperrung auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[0] spawn life_fnc_mauer;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\barrikade.paa";
        sound 		= "";
    };	

    class strahler {
        variable 	= "strahler";
        displayName = "Strahler";        
        buyPrice 	= 150;
        sellPrice 	= 50;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_mauer) exitWith {hint 'Du stellst schon einen Strahler auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[1] spawn life_fnc_mauer;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\stra.paa";
        sound 		= "";
    };	
	
    class 14 {
        variable 	= "14";
        displayName = "Tarnnetz";        
        buyPrice 	= 38000;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_mauer) exitWith {hint 'Du stellst schon einen Strahler auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[4] spawn life_fnc_mauer;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\tarnnetz.paa";
        sound 		= "";
    };	

    class b23 {
        variable 	= "b23";
        displayName = "Klappstuhl";        
        buyPrice 	= 4000;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 8;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_mauer) exitWith {hint 'Du stellst schon einen Klappstuhl auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[6] spawn life_fnc_mauer;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\l_23.paa";
        sound 		= "";
    };	

    class b22 {
        variable 	= "b22";
        displayName = "Klappstuhl";        
        buyPrice 	= 4500;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 10;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_mauer) exitWith {hint 'Du stellst schon einen Klappstuhl auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[5] spawn life_fnc_mauer;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\l_22.paa";
        sound 		= "";
    };	
	
    class kegel {
        variable 	= "kegel";
        displayName = "Kegel";        
        buyPrice 	= 150;
        sellPrice 	= 50;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_mauer) exitWith {hint 'Du stellst schon einen Kegel auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[2] spawn life_fnc_mauer;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\pylon.paa";
        sound 		= "";
    };	

    class 17 {
        variable 	= "17";
        displayName = "Zelt";        
        buyPrice 	= 49500;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 14;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_mauer) exitWith {hint 'Du stellst schon ein Zelt auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[3] spawn life_fnc_mauer;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\zelt.paa";
        sound 		= "";
    };	

    class 16 {
        variable 	= "16";
        displayName = "Maischefass";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 38;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_fass) exitWith {hint 'Du stellst schon ein Maischefass auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[] spawn life_fnc_ligaFass;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\mfs.paa";
        sound 		= "";
    };	
	
    class 15 {
        variable 	= "15";
        displayName = "Destille";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 42;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if(!isNull life_dest) exitWith {hint 'Du stellst schon ein Destille auf !'};	if(([false,_this,1] call life_fnc_handleInv)) then	{	[] spawn life_fnc_ligaDes;	};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\des.paa";
        sound 		= "";
    };	

    class a12 {
        variable 	= "a12";
        displayName = "Maische";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\maische.paa";
        sound 		= "";
    };	
	

    class 18 {
        variable 	= "18";
        displayName = "Methyl";        
        buyPrice 	= -1;
        sellPrice 	= 821;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";  
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\Methyl.paa";
        sound 		= "";
    };		
	
    class zig {
        variable 	= "zig";
        displayName = "Zigaretten";        
        buyPrice 	= 120;
        sellPrice 	= 34;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[] spawn life_fnc_zig;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\zig.paa";
        sound 		= "";
    };	
	
	
    class c6 {
        variable 	= "c6";
        displayName = "Bohrmaschine";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[cursorTarget]spawn fn_tankmani;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "";
        sound 		= "";
    };	

    class gpstracker {
        variable 	= "gpstracker";
        displayName = "GPS Tracker";        
        buyPrice 	= 50000;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[cursorTarget] spawn life_fnc_gpsTracker;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\gpstracker.paa";
        sound 		= "";
    };	

    class defusekit {
        variable 	= "defusekit";
        displayName = "Entschaerfungsset";        
        buyPrice 	= 2500;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[cursorTarget] spawn life_fnc_defuseKit;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\defusekit.paa";
        sound 		= "";
    };	
	
    class lockpick {
        variable 	= "lockpick";
        displayName = "Dietrich";        
        buyPrice 	= 150;
        sellPrice 	= 75;
        illegal 	= 800;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[] spawn life_fnc_lockpick;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\lockpick.paa";
        sound 		= "";
    };	
	
	
    class boltcutter {
        variable 	= "boltcutter";
        displayName = "Bolzenschneider";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= 5000;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 5;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV"};
        useablefnc	= "[cursorTarget] spawn life_fnc_boltcutter;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\boltcutter.paa";
        sound 		= "";
    };	

    class blastingcharge {
        variable 	= "blastingcharge";
        displayName = "Sprengladung";        
        buyPrice 	= 35000;
        sellPrice 	= -1;
        illegal 	= 10000;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 15;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV"};
        useablefnc	= " player reveal fed_bank;		(group player) reveal fed_bank;		[cursorTarget] spawn life_fnc_blastingCharge; ";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\blastingcharge.paa";
        sound 		= "";
    };	
	
    class uwsl {
        variable 	= "uwsl";
        displayName = "Wasserbombe";        
        buyPrice 	= 10000;
        sellPrice 	= -1;
        illegal 	= 10000;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 5;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV"};
		useablefnc	= "_this spawn { if(([false,_this,1] call life_fnc_handleInv)) then	{	if(isNil 'wrack_objs') exitWith {hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombNoWrackText'));};	if(wrack_objs isEqualTo [])exitWith {hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombNoWrackText'));};	if(isNull (wrack_objs select 2) )exitWith {hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombNoWrackText'));};	_safe = wrack_objs select 2;	if(_safe getVariable ['opened',false] && (!isNil 'schiffwoffen'))then {		if(schiffwoffen) exitWith {_e = true;hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombWrackOffenText'));};	}; 	if(!isNil '_e') exitWith{}; if(player distance _safe > 3.5)exitWith{hint 'Du bist nicht nah genug drann.';};	hint 'Der Timer lauft.. hau ab..';	private _handle = [0.5] spawn LIGACL_fnc_TimerDisp;		waitUntil {scriptDone _handle};	hint(getText (missionConfigFile >> 'Schiffswrack' >> 'bombBoom'));	_pos = getPos _safe;	'Bo_GBU12_LGB' createVehicle _pos;	'M_NLAW_AT_F' createVehicle _pos;	schiffwoffen = true;		publicVariable 'schiffwoffen';};	};";			
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\wbe.paa";
        sound 		= "";
    };	

    class zipties {
        variable 	= "zipties";
        displayName = "Kabelbinder";        
        buyPrice 	= 1000;
        sellPrice 	= 20;
        illegal 	= 10000;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\kabelbinder.paa";
        sound 		= "";
    };	
	
    class knebel {
        variable 	= "knebel";
        displayName = "Knebel";        
        buyPrice 	= 1000;
        sellPrice 	= 20;
        illegal 	= 5000;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = + 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "	[]spawn{	  _targ = cursorTarget ; if(isNil '_targ')exitWith{hint 'Niemand da zum Knebeln.';};  if(([false,'knebel',1] call life_fnc_handleInv)) then	{ [] remoteExec ['LIGACL_fnc_geknebelt',_targ]; };};	";
		hinttext	= "";
		titletext	= "";

		icon 		= "";
        sound 		= "";
    };	
	
	
    class a10 {
        variable 	= "a10";
        displayName = "Flaschen";        
        buyPrice 	= 2250;
        sellPrice 	= 1600;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"a10",1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "if (!(life_is_processing)) exitWith {  [ObjNull,'','','moon'] spawn life_fnc_processAction; playSound 'FlBef';};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\flasche.paa";
        sound 		= "";
    };		

    class prl {
        variable 	= "prl";
        displayName = "Pressluftflaschen";        
        buyPrice 	= 1500;
        sellPrice 	= 800;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Die Pressluftflaschen werden automatisch gewechselt, wenn du sie beim tauchen dabei hast.";
		titletext	= "";

		icon 		= "icons\items\prl.paa";
        sound 		= "";
    };		
	
    class ghy {
        variable 	= "ghy";
        displayName = "Hydro Riffel";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Hydro Riffel erhoehen die Ausbeute beim Goldschuerfen..";
		titletext	= "";

		icon 		= "icons\items\ghy.paa";
        sound 		= "";
    };	
	
    class rip {
        variable 	= "rip";
        displayName = "Oel Pumpe";        
        buyPrice 	= -1;
        sellPrice 	= 650;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Die Oelpumpe brauchst du, um auf der Liga Oel Rig Oel abzubauen";
		titletext	= "";

		icon 		= "icons\items\pumpe.paa";
        sound 		= "";
    };

    class guh {
        variable 	= "guh";
        displayName = "Schutzausruestung";        
        buyPrice 	= 950;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\suz.paa";
        sound 		= "";
    };		

	class spikeStrip {
        variable 	= "spikeStrip";
        displayName = "Nagelband";        
        buyPrice 	= 300;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 8;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "		if(!isNull life_spikestrip) exitWith {hint localize 'STR_ISTR_SpikesDeployment'};		if(([false,_item,1] call life_fnc_handleInv)) then		{			[] spawn life_fnc_spikeStrip;		}; ";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\spikestrip.paa";
        sound 		= "";
    };
	
    class sfb {
        variable 	= "sfb";
        displayName = "Schranken FB";        
        buyPrice 	= 120000;
        sellPrice 	= -1;
        illegal 	= 15000;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Du kannst die Fernbedienung im Auto in der Nähe von Schranken mit der Taste O benutzen !!";
		titletext	= "";

		icon 		= "icons\items\sfb.paa";
        sound 		= "";
    };	
	
	/* Farming */
	
    class rig {
        variable 	= "rig";
        displayName = "Methangas";        
        buyPrice 	= -1;
        sellPrice 	= 1190;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Methangas kannst du beim Gaswerk verkaufen.";
		titletext	= "";

		icon 		= "icons\items\rig.paa";
        sound 		= "";
    };
	
    class rio {
        variable 	= "rio";
        displayName = "Offshore Oel";        
        buyPrice 	= -1;
        sellPrice 	= 50;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 5;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "Offshore Oel kannst du zu Benzin, Diesel und Kerosin weiter verarbeiten..";
		titletext	= "";

		icon 		= "icons\items\oil_unprocessed.paa";
        sound 		= "";
    };	

    class copperore {
        variable 	= "copperore";
        displayName = "Kupfererz";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\copper_ore.paa";
        sound 		= "";
    };	

    class ironore {
        variable 	= "ironore";
        displayName = "Eisenerz";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 5;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\iron_ore.paa";
        sound 		= "";
    };		
	
    class salt {
        variable 	= "salt";
        displayName = "Salz";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\salt_unprocessed.paa";
        sound 		= "";
    };	
	
    class diamond {
        variable 	= "diamond";
        displayName = "Rohdiamant";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\diamond_unprocessed.paa";
        sound 		= "";
    };		
	
    class bw {
        variable 	= "bw";
        displayName = "Baumwolle";        
        buyPrice 	= -1;
        sellPrice 	= 220;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\baumwolle.paa";
        sound 		= "";
    };	

    class heroinu {
        variable 	= "heroinu";
        displayName = "Unverarbeitetes Heroin";        
        buyPrice 	= -1;
        sellPrice 	= 1850;
        illegal 	= 1700;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 6;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\heroin_unprocessed.paa";
        sound 		= "";
    };	

    class cannabis {
        variable 	= "cannabis";
        displayName = "Kannabis";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= 2500;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\cannabis.paa";
        sound 		= "";
    };

    class lsdu {
        variable 	= "lsdu";
        displayName = "LSD Frosch";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= 2400;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 5;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\lsdf.paa";
        sound 		= "";
    };	
	
    class mull {
        variable 	= "mull";
        displayName = "Muell";        
        buyPrice 	= -1;
        sellPrice 	= 2265;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 6;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\ml.paa";
        sound 		= "";
    };	
	
    class tet {
        variable 	= "tet";
        displayName = "Tetramethylammoniumchlorid";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\tet.paa";
        sound 		= "";
    };	
	
    class uranium1 {
        variable 	= "uranium1";
        displayName = "Atommuell";        
        buyPrice 	= -1;
        sellPrice 	= 2265;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\atomm.paa";
        sound 		= "";
    };		
	
    class uranium2 {
        variable 	= "uranium2";
        displayName = "Aufbereitetes Uran";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\atomm.paa";
        sound 		= "";
    };		

    class puranium {
        variable 	= "puranium";
        displayName = "Urankatalysator";        
        buyPrice 	= 1000;
        sellPrice 	= 750;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\ukt.paa";
        sound 		= "";
    };		

    class ipuranium {
        variable 	= "ipuranium";
        displayName = "Uranhexafluorid";        
        buyPrice 	= 6000;
        sellPrice 	= 4500;
        illegal 	= 10000;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\hf.paa";
        sound 		= "";
    };		

    class uranium3 {
        variable 	= "uranium3";
        displayName = "Gereinigtes Uran";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\gu.paa";
        sound 		= "";
    };		

    class uranium4 {
        variable 	= "uranium4";
        displayName = "Veredeltes Uran";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\vu.paa";
        sound 		= "";
    };	

    class uranium {
        variable 	= "uranium";
        displayName = "Brennstäbe";        
        buyPrice 	= -1;
        sellPrice 	= 10000;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\bs1.paa";
        sound 		= "";
    };		
	
    class iuranium4 {
        variable 	= "iuranium4";
        displayName = "Angereichertes Uran";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= 20000;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\au1.paa";
        sound 		= "";
    };		

    class iuranium {
        variable 	= "iuranium";
        displayName = "Waffenfähiges Uran";        
        buyPrice 	= -1;
        sellPrice 	= 20000;
        illegal 	= 25000;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\wu.paa";
        sound 		= "";
    };		
	
    class a1 {
        variable 	= "a1";
        displayName = "Baumstaemme";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 5;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\holz.paa";
        sound 		= "";
    };	
	
    class a2 {
        variable 	= "a2";
        displayName = "Bretter";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\holzv.paa";
        sound 		= "";
    };	

    class a4 {
        variable 	= "a4";
        displayName = "Holzspaene";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\hpa.paa";
        sound 		= "";
    };	
	

    class a3 {
        variable 	= "a3";
        displayName = "Leim";        
        buyPrice 	= -1;
        sellPrice 	= 275;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\leim.paa";
        sound 		= "";
    };	

    class a5 {
        variable 	= "a5";
        displayName = "Spanplatten";        
        buyPrice 	= -1;
        sellPrice 	= 3670;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\spa.paa";
        sound 		= "";
    };		
	
    class a6 {
        variable 	= "a6";
        displayName = "Moebel";        
        buyPrice 	= -1;
        sellPrice 	= 9670;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\mb.paa";
        sound 		= "";
    };			
	
    class diamondc {
        variable 	= "diamondc";
        displayName = "Diamant";        
        buyPrice 	= -1;
        sellPrice 	= 2000;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\diamond.paa";
        sound 		= "";
    };		
	
	/* Nahrungsmittel */
	
    class water {
        variable 	= "water";
        displayName = "Wasserflasche";        
        buyPrice 	= 80;
        sellPrice 	= 50;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= 67;
		gulltime 	= -1;
		fat			= 0.8;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\water.paa";
        sound 		= "drink";
    };	
	
    class apple {
        variable 	= "apple";
        displayName = "Apfel";        
        buyPrice 	= 80;
        sellPrice 	= 50;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= 10;
        trinkbar 	= 2;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\apple.paa";
        sound 		= "eat";
    };

    class peach {
        variable 	= "peach";
        displayName = "Pfirsich";        
        buyPrice 	= 69;
        sellPrice 	= 61;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= 12;
        trinkbar 	= 3;
		gulltime 	= -1;
		fat			= 0.2;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\peach.paa";
        sound 		= "eat";
    };		

    class ana {
        variable 	= "ana";
        displayName = "Ananas";        
        buyPrice 	= 80;
        sellPrice 	= 65;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= 14;
        trinkbar 	= 7;
		gulltime 	= -1;
		fat			= 0.3;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\ana.paa";
        sound 		= "eat";
    };	

    class sala {
        variable 	= "sala";
        displayName = "Salat";        
        buyPrice 	= 60;
        sellPrice 	= 22;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= 12;
        trinkbar 	= 1;
		gulltime 	= -1;
		fat			= 0.4;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\sala.paa";
        sound 		= "eat";
    };		
	
    class rabbit {
        variable 	= "rabbit";
        displayName = "Hasenfleisch";        
        buyPrice 	= 75;
        sellPrice 	= 65;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= 20;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\meat.paa";
        sound 		= "eat";
    };

	class sheepraw {
        variable 	= "sheepraw";
        displayName = "Schafsfleisch";        
        buyPrice 	= -1;
        sellPrice 	= 4600;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= 10;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\rawmeat.paa";
        sound 		= "eat";
    };	
	
	class sheeprawf {
        variable 	= "sheeprawf";
        displayName = "Wolle";        
        buyPrice 	= -1;
        sellPrice 	= 460;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\shef.paa";
        sound 		= "";
    };	
	

	class goatraw {
        variable 	= "goatraw";
        displayName = "Ziegenfleisch";        
        buyPrice 	= -1;
        sellPrice 	= 4350;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= 11;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\meat.paa";
        sound 		= "eat";
    };	

    class henraw {
        variable 	= "henraw";
        displayName = "Huenerfleisch";        
        buyPrice 	= 120;
        sellPrice 	= 98;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= 29;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\rawmeat.paa";
        sound 		= "eat";
    };	
	
    class tbacon {
        variable 	= "tbacon";
        displayName = "Taktischer Speck";        
        buyPrice 	= 75;
        sellPrice 	= 25;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= 40;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\tba.paa";
        sound 		= "eat";
    };	

    class reva {
        variable 	= "reva";
        displayName = "Revani";        
        buyPrice 	= 90;
        sellPrice 	= 30;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= 20;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\reva.paa";
        sound 		= "eat";
    };		
	
    class gyro {
        variable 	= "gyro";
        displayName = "Gyros";        
        buyPrice 	= 110;
        sellPrice 	= 25;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= 42;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\reva.paa";
        sound 		= "eat";
    };		

	
    class donuts {
        variable 	= "donuts";
        displayName = "Donuts";        
        buyPrice 	= 99;
        sellPrice 	= 50;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= 30;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\donut.paa";
        sound 		= "eat";
    };

    class doen {
        variable 	= "doen";
        displayName = "Doener";        
        buyPrice 	= 55;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= 45;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\doe.paa";
        sound 		= "eat";
    };		
		/* FISCH */
    class salema {
        variable 	= "salema";
        displayName = "Salema Fleisch";        
        buyPrice 	= 195;
        sellPrice 	= 145;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= 30;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\fish.paa";
        sound 		= "eat";
    };	

    class ornate {
        variable 	= "ornate";
        displayName = "Ornate Fleisch";        
        buyPrice 	= 170;
        sellPrice 	= 140;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= 25;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\fish.paa";
        sound 		= "eat";
    };	

    class mackerel {
        variable 	= "mackerel";
        displayName = "Makrelen Fleisch";        
        buyPrice 	= 340;
        sellPrice 	= 290;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= 30;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\fish.paa";
        sound 		= "eat";
    };	

    class tuna {
        variable 	= "tuna";
        displayName = "Thunfisch";        
        buyPrice 	= 1600;
        sellPrice 	= 1200;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 6;
        essbar 		= 100;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\fish.paa";
        sound 		= "eat";
    };	
	
    class mullet {
        variable 	= "mullet";
        displayName = "Mullet Fleisch";        
        buyPrice 	= 550;
        sellPrice 	= 400;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= 80;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\fish.paa";
        sound 		= "eat";
    };

    class catshark {
        variable 	= "catshark";
        displayName = "Katzenhai Fleisch";        
        buyPrice 	= 2650;
        sellPrice 	= 2400;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 6;
        essbar 		= 100;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\fish.paa";
        sound 		= "eat";
    };	

    class turtle {
        variable 	= "turtle";
        displayName = "Schildkroeten Fleisch";        
        buyPrice 	= 3500;
        sellPrice 	= 3100;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 6;
        essbar 		= 100;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\turtle.paa";
        sound 		= "eat";
    };	

	class turtlesoup {
        variable 	= "turtlesoup";
        displayName = "Schildkroetensuppe";        
        buyPrice 	= 2500;
        sellPrice 	= 1000;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= 100;
        trinkbar 	= 30;
		gulltime 	= -1;
		fat			= 1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\turtle_soup.paa";
        sound 		= "eat";
    };	
	
    class redgull {
        variable 	= "redgull";
        displayName = "RedGull";        
        buyPrice 	= 1500;
        sellPrice 	= 500;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= 100;
		gulltime 	= 3;
		fat			= 1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\redgull.paa";
        sound 		= "drink";
    };	

    class coffee {
        variable 	= "coffee";
        displayName = "Kaffee";        
        buyPrice 	= 42;
        sellPrice 	= 20;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= 100;
		gulltime 	= 2;
		fat			= 1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\coffee.paa";
        sound 		= "drink";
    };		
	
    class 20 {
        variable 	= "20";
        displayName = "Moonshine";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 5;
        essbar 		= -1;
        trinkbar 	= 12;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "	if((player getVariable ['inDrink',false])) exitWith {hint localize 'Du hast schon was getrunken.';};	if(([false,_this,1] call life_fnc_handleInv)) then	{	playSound 'drink';		if(isNil 'life_drink') then {life_drink = 0;};	life_drink = life_drink + 2.25;		if (life_drink < 0.2) exitWith {};	[] spawn life_fnc_drinkbeer; };";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\Moons.paa";
        sound 		= "";
    };		
	
    class 21 {
        variable 	= "21";
        displayName = "Flasche Moonshine";        
        buyPrice 	= -1;
        sellPrice 	= 275;
        illegal 	= 15000;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= 19;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "	if((player getVariable ['inDrink',false])) exitWith {hint localize 'Du hast schon was getrunken.';};	if(([false,_this,1] call life_fnc_handleInv)) then	{	playSound 'drink';		if(isNil 'life_drink') then {life_drink = 0;};	life_drink = life_drink + 0.85;		if (life_drink < 0.2) exitWith {};	[] spawn life_fnc_drinkbeer; [true,'a10',1] call life_fnc_handleInv;};";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\Moonf.paa";
        sound 		= "";
    };	

    class wein {
        variable 	= "wein";
        displayName = "Wein";        
        buyPrice 	= 1960;
        sellPrice 	= 960;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= 12;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "	if((player getVariable ['inDrink',false])) exitWith {hint localize 'Du hast schon was getrunken.';};	if(([false,_this,1] call life_fnc_handleInv)) then	{	playSound 'drink';		if(isNil 'life_drink') then {life_drink = 0;};	life_drink = life_drink + 0.25;		if (life_drink < 0.2) exitWith {};	[] spawn life_fnc_drinkbeer; [true,'a10',1] call life_fnc_handleInv; };";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\wei.paa";
        sound 		= "";
    };	

    class uzo {
        variable 	= "uzo";
        displayName = "Ouzo";        
        buyPrice 	= 2200;
        sellPrice 	= 1000;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= 12;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "	if((player getVariable ['inDrink',false])) exitWith {hint localize 'Du hast schon was getrunken.';};	if(([false,_this,1] call life_fnc_handleInv)) then	{	playSound 'drink';		if(isNil 'life_drink') then {life_drink = 0;};	life_drink = life_drink + 0.45;		if (life_drink < 0.2) exitWith {};	[] spawn life_fnc_drinkbeer; [true,'a10',1] call life_fnc_handleInv; };";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\ou.paa";
        sound 		= "";
    };	

    class bottledbeer {
        variable 	= "bottledbeer";
        displayName = "Flasche Bier";        
        buyPrice 	= 1250;
        sellPrice 	= 750;
        illegal 	= -1;
        		
		saveable	= true;
		closeDiag	= true;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= 12;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "	if((player getVariable ['inDrink',false])) exitWith {hint localize 'Du hast schon was getrunken.';};	if(([false,_this,1] call life_fnc_handleInv)) then	{	playSound 'drink';		if(isNil 'life_drink') then {life_drink = 0;};	life_drink = life_drink + 0.15;		if (life_drink < 0.2) exitWith {};	[] spawn life_fnc_drinkbeer; [true,'a10',1] call life_fnc_handleInv; };";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\bier.paa";
        sound 		= "";
    };		
	
	/* Drogen */ 
	
    class heroinp {
        variable 	= "heroinp";
        displayName = "Verarbeitetes Heroin";        
        buyPrice 	= -1;
        sellPrice 	= 2650;
        illegal 	= 3800;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[] spawn life_fnc_useHeroin;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\heroin_processed.paa";
        sound 		= "";
    };	

    class cocaine {
        variable 	= "cocaine";
        displayName = "Unverarbeitetes Kokain";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= 2500;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 6;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\cocain_unprocessed.paa";
        sound 		= "";
    };		

    class cocainep {
        variable 	= "cocainep";
        displayName = "Verarbeitetes Kokain";        
        buyPrice 	= -1;
        sellPrice 	= 5000;
        illegal 	= 3600;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[] spawn life_fnc_useKokain;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\cocain_processed.paa";
        sound 		= "";
    };	

    class lsdp {
        variable 	= "lsdp";
        displayName = "LSD";        
        buyPrice 	= -1;
        sellPrice 	= 4200;
        illegal 	= 5200;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[] spawn life_fnc_lsd;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\lsd.paa";
        sound 		= "";
    };		

    class methu {
        variable 	= "methu";
        displayName = "Unverarbeitetes Meth";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 6;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\cmu.paa";
        sound 		= "";
    };			
	
    class methp {
        variable 	= "methp";
        displayName = "Crystal Meth";        
        buyPrice 	= -1;
        sellPrice 	= 4000;
        illegal 	= 4300;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[] spawn life_fnc_meth;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\cm.paa";
        sound 		= "";
    };		
	
    class marijuana {
        variable 	= "marijuana";
        displayName = "Marihuana";        
        buyPrice 	= -1;
        sellPrice 	= 2300;
        illegal 	= 2900;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "[] spawn life_fnc_weed;";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\marijuana.paa";
        sound 		= "";
    };		

    class oilu {
        variable 	= "oilu";
        displayName = "Rohoel";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\oil_unprocessed.paa";
        sound 		= "";
    };		

    class oilp {
        variable 	= "oilp";
        displayName = "Oel";        
        buyPrice 	= -1;
        sellPrice 	= 3200;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\oil_processed.paa";
        sound 		= "";
    };	

    class ben {
        variable 	= "ben";
        displayName = "Treibstoff";        
        buyPrice 	= 6400;
        sellPrice 	= 5350;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\ben.paa";
        sound 		= "";
    };		

	class di {
        variable 	= "di";
        displayName = "Kerosin";        
        buyPrice 	= 6900;
        sellPrice 	= 5850;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\di.paa";
        sound 		= "";
    };		

	class gl {
        variable 	= "gl";
        displayName = "Goldmuenzen";        
        buyPrice 	= -1;
        sellPrice 	= 45000;
        illegal 	= 35000;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 12;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\gm.paa";
        sound 		= "";
    };		
	
	class a0 {
        variable 	= "a0";
        displayName = "Kunststoff";        
        buyPrice 	= 7500;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\kunstoff.paa";
        sound 		= "";
    };	

	class a11 {
        variable 	= "a11";
        displayName = "Hefe";        
        buyPrice 	= 175;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\hefe.paa";
        sound 		= "";
    };
	
    class ironr {
        variable 	= "ironr";
        displayName = "Eisenbarren";        
        buyPrice 	= -1;
        sellPrice 	= 3200;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\iron.paa";
        sound 		= "";
    };	

    class copperr {
        variable 	= "copperr";
        displayName = "Kupferbarren";        
        buyPrice 	= -1;
        sellPrice 	= 1500;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\copper.paa";
        sound 		= "";
    };	

    class stt {
        variable 	= "stt";
        displayName = "Stahltraeger";        
        buyPrice 	= -1;
        sellPrice 	= 11560;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 9;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\stt.paa";
        sound 		= "";
    };		
	
    class sand {
        variable 	= "sand";
        displayName = "Sand";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\sand.paa";
        sound 		= "";
    };	

    class glass {
        variable 	= "glass";
        displayName = "Glas";        
        buyPrice 	= -1;
        sellPrice 	= 1450;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\glass.paa";
        sound 		= "";
    };	
	
    class saltr {
        variable 	= "saltr";
        displayName = "Raffiniertes Salz";        
        buyPrice 	= -1;
        sellPrice 	= 1650;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\salt.paa";
        sound 		= "";
    };	
	
    class cement {
        variable 	= "cement";
        displayName = "Zement Sack";        
        buyPrice 	= -1;
        sellPrice 	= 1950;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 5;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\cement.paa";
        sound 		= "";
    };	

    class rock {
        variable 	= "rock";
        displayName = "Stein";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 6;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\rock.paa";
        sound 		= "";
    };		

    class goldbar {
        variable 	= "goldbar";
        displayName = "Goldbarren";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 12;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\goldbar.paa";
        sound 		= "";
    };		

    class c2 {
        variable 	= "c2";
        displayName = "Waffenteile";        
        buyPrice 	= -1;
        sellPrice 	= 9000;
        illegal 	= 12000;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\c_2.paa";
        sound 		= "";
    };	

    class c1 {
        variable 	= "c1";
        displayName = "Munition";        
        buyPrice 	= -1;
        sellPrice 	= 4000;
        illegal 	= 9000;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\c_1.paa";
        sound 		= "";
    };	

    class c3 {
        variable 	= "c3";
        displayName = "Schwefel";        
        buyPrice 	= -1;
        sellPrice 	= 750;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\c_3.paa";
        sound 		= "";
    };		

    class c4 {
        variable 	= "c4";
        displayName = "Salpeter";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\c_4.paa";
        sound 		= "";
    };	
	
    class sig {
        variable 	= "sig";
        displayName = "Schiefergas";        
        buyPrice 	= -1;
        sellPrice 	= 5000;
        illegal 	= 3000;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\sig.paa";
        sound 		= "";
    };	
	
    class gsg {
        variable 	= "gsg";
        displayName = "Schuerfgut";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 16;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\gsg.paa";
        sound 		= "";
    };	

    class gab {
        variable 	= "gab";
        displayName = "Abraum";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\gab.paa";
        sound 		= "";
    };		
	
    class gsm {
        variable 	= "gsm";
        displayName = "Silbermuenzen";        
        buyPrice 	= -1;
        sellPrice 	= 700;
        illegal 	= 17500;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 8;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\gsm.paa";
        sound 		= "";
    };	

    class gsn {
        variable 	= "gsn";
        displayName = "Silbernuggets";        
        buyPrice 	= -1;
        sellPrice 	= 6500;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 4;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\gsn.paa";
        sound 		= "";
    };	

    class ggn {
        variable 	= "ggn";
        displayName = "Goldnuggets";        
        buyPrice 	= -1;
        sellPrice 	= 9500;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 6;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\ggn.paa";
        sound 		= "";
    };	

    class rabbitf {
        variable 	= "rabbitf";
        displayName = "Hasenfell";        
        buyPrice 	= -1;
        sellPrice 	= 200;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\rabif.paa";
        sound 		= "";
    };	

    class rabbitfp {
        variable 	= "rabbitfp";
        displayName = "Hasenpelz";        
        buyPrice 	= -1;
        sellPrice 	= 4800;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\rabifp.paa";
        sound 		= "";
    };		

    class goaf {
        variable 	= "goaf";
        displayName = "Ziegenrohfell";        
        buyPrice 	= -1;
        sellPrice 	= 500;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\goaf.paa";
        sound 		= "";
    };		

    class goatrawfp {
        variable 	= "goatrawfp";
        displayName = "Ziegenfell";        
        buyPrice 	= -1;
        sellPrice 	= 6600;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 2;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\goafp.paa";
        sound 		= "";
    };		
	

    class goatrawf {
        variable 	= "goatrawf";
        displayName = "Ziegenfell";        
        buyPrice 	= -1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= false;
		
		weight 		= 3;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= -1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"CIV","EAST","WEST","GUER"};
        useablefnc	= "";       
		hinttext	= "";
		titletext	= "";

		icon 		= "icons\items\goaf.paa";
        sound 		= "";
    };		
	
	
	/*	Litenz Items usw */
	
    class c5 {
        variable 	= "c5";
        displayName = "ALAC Fluglizenz";        
        buyPrice 	= 1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {"EAST"};
        useablefnc	= "missionNamespace setVariable['lada_air',true];";       
		hinttext	= "Glueckwunsch zur bestandenen Pruefung. Du bist jetzt ein Gelber Schwengel ...";
		titletext	= "";

		icon 		= "";
        sound 		= "punch";
    };	
	
	class tokenc1 {
        variable 	= "tokenc1";
        displayName = "Event Shop";        
        buyPrice 	= 1;
        sellPrice 	= -1;
        illegal 	= -1;
        		
		saveable	= false;
		closeDiag	= true;
		
		weight 		= 1;
        essbar 		= -1;
        trinkbar 	= -1;
		gulltime 	= -1;
		fat			= -1;	// 0.5 = - 0.5
	/*DUMMYs*/
		xpadd[]		= {}; // {"xp_var",zähler}
		xpsub[]		= {}; // {"xp_var",zähler}
		dummy_eins	= -1;
		dummy_zwei	= -1;
		dummy_drei	= -1;
		dummy_vier	= -1;
		dummy_funf	= -1;
	/*DUMMYs ENDE*/
        verbrauch 	= 1;
        dazu[]	 	= {}; //{{"",-1},{"",-1}}	ITEM,stk		
        
		allowside[]	= {""};
        useablefnc	= "";       
		hinttext	= "Glueckwunsch! Du darfst beim Event Shop einkaufen!";
		titletext	= "";

		icon 		= "";
        sound 		= "car_unlock_mi";
    };	
	
	/*	Liga Style ... YEAHH	*/	
};	

class Shops {
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
	║	File: Liga_Cfg_vItems.hpp	
	║		
	║	Author:  Hirschi - Die Liga		
	╠═════════════════════════════════════════════════════════════════╗
	║	ITEM,		Verkaufspreis,	 Kaufpreis,		Warehouse
	║	"",			-2	= gesperrt,-2	= gesperrt,	""	= Festpreis		
	║				-1	= std. Preis aus calss VirtualLigaItems	
	║	
	║	Warehouse Kennungen
	║	
	║	""					Festpreis
	║	"liga_wh_1"		Lager CIV		Dump
	║	"liga_wh_3"		künstlich erzeugter Verbauch / Session 	n.a.
	║	"liga_wh_2"		Lager UHR 	Dump						n.a.
	║	"liga_wh_4"		Lager UHR 	Fest						n.a.
	║	
	║	Wenn Warehouse Kennungen gesetzt, dann müssen hier auch die
	║	Preise gesetzt werden.
	╚═════════════════════════════════════════════════════════════════╝
*/
		
	class admin {
		CIV[]	= {
			"Admin Shop",
			{/*	"ITEEM,Verkauf,	Kauf,	WH	*/
				{"c5",				-1	,	-1,			""		},	// 	ALAC Fluglizenz
				{"tokenc1",			-1	,	-1,			""		}  	// 	Token für Admin Waffen Shop
			}
		};				
	};	
		
	/*Tanklager Benzin & Kerosin*/
	class tank {
		CIV[]	= {
			"Oelhaendler",
			{/*	"ITEEM,		Verkauf,	Kauf,	WH	*/
			//	{"oilp",			3800,	4500,	""	},
				{"ben",				4250,	5400,	"liga_wh_4"	},
				{"di",				3950,	5900,	"liga_wh_4"	}
			}		
		};
	};	

	class benzh {
		CIV[]	= {
			"Benzinlager",
			{/*	"ITEEM,		Verkauf,	Kauf,	WH	*/
			//	{"oilp",			3800,	4500,	""	},
				{"ben",				4250,	5400,	"liga_wh_4"	}
			//	{"di",				3950,	5900,	"liga_wh_4"	}
			}		
		};
	};	

	class kero {
		CIV[]	= {
			"Kerosinlager",
			{/*	"ITEEM,		Verkauf,	Kauf,	WH	*/
			//	{"oilp",			3800,	4500,	""	},
			//	{"ben",				4250,	5400,	"liga_wh_4"	}
				{"di",				3950,	5900,	"liga_wh_4"	}
			}		
		};
	};	
	
	class oilrig {
		CIV[]	= {
			"Liga Öl Rig Lager",
			{/*	"ITEEM,		Verkauf,	Kauf,	WH	*/
				{"rib",				9500,	11000,	"liga_wh_4"	}   // Bohrgestänge
			//	{"rip",				6250,	6900,	"liga_wh_4"	}    //öhlpumpe
			}		
		};
	};		

	/*Tanklager LEIM*/
	class spantank {
		CIV[]	= {
			"Leimtank",
			{/*	"ITEEM,		Verkauf,	Kauf,	WH	*/
				{"a3",				220	,	-2	,	""	}
			}		
		};	
	};	

	class wafschmug {
		CIV[]	= {
			"Waffenschmuggler",
			{//	"ITEEM,	Verkauf,	Kauf,	WH	
				{"c4",			2200,	3000,	"liga_wh_4"		},
				{"c3",			700	,	800	,	"liga_wh_4"		},	
				{"c2",			11600,	13600,	"liga_wh_4"		},	// Waffenteile
				{"c1",			16000,	21000,	"liga_wh_4"		}	// Munition
			}		
		};
	};	

	// .... usw ... 
/*
	class partyile {
		CIV[]	= {
			"Partymeile",
			{
				{"21",				-1	,	12500,	""	},
				{"marijuana",		-1	,	7000	,	""	},
				{"cocainep",		-1	,	7500	,	""	},
				{"lsdp",			-1 ,	9999,	""	},
				{"heroinp",			-1	,	3500,	""	},
				{"nattee",			-1	,	25000,	""	},
				{"methp",			-1	,	3500,	""	}
			}		
		};

	};	

	class partyleg {
		CIV[]	= {
			"Partymeile",
			{
				{"redgull",		14500,	16500	,	"liga_wh_1"		},	//	Edelsteine
				{"bottledbeer",		16600,	19700,	"liga_wh_1"	},
				{"coffee",			300	,	330	,	"liga_wh_1"	},
				{"doen",			-1	,	350	,	""	},
				{"wein",			-1	,	320	,	""	},
				{"zig",				-1	,	500	,	""	},
				{"uzo",				-1	,	800	,	""	},
				{"donuts",			-1	,	500	,	""	}
			}		
		};	
	};		
*/
	
	class fishmarket {
		CIV[]	= {
			"Altis Fisch Markt",
			{/*	"ITEEM,		Verkauf,	Kauf,	WH	*/
				{"salema",			-1	,	-1	,	""	},
				{"ornate",			-1	,	-1	,	""	},
				{"mackerel",		-1	,	-1	,	""	},
				{"mullet",			-1	,	-1	,	""	},
				{"tuna",			-1	,	-1	,	""	},
				{"catshark",		-1	,	-1	,	""	}
			}		
		};

	};	

	class outdoor {
		CIV[]	= {
			"Outdoor Shop",
			{/*	"ITEEM,		Verkauf,	Kauf,	WH	*/
				{"17",			-1	,	-1	,	""			},	// Zelt
				{"14",			-1	,	-1	,	""			},	// Tarnnetz
				{"jame",		-1	,	-1	,	""			},	// Jagdmesser
			//	{"ghy",			1200,	2400,	"liga_wh_1"	},	// Hydroriffel
				{"pickaxe",		-1	,	-1	,	""			},	// Spitzhacke
			//	{"a9",			12000,	16000,	"liga_wh_1"	},	// Presslufthammer
			//	{"a7",			6500,	9800,	"liga_wh_1"	},	// Axt
			//	{"c6",			8900,	13000,	"liga_wh_1"	},	//Bohrmaschine
			//	{"a8",			9600,	14500,	"liga_wh_1"	},	// Kettensäge
			//	{"mache",		4800,	6900,	"liga_wh_1"	},	// Machete
			//	{"boltcutter",	7200,	-1	,	"liga_wh_1"	},	// Bolzenschneider
			//	{"lockpick",	4800,	-1	,	"liga_wh_1"	},	// Dietrich
			//	{"a11",			-1	,	550	,	""			},	//Hefe
				{"rabbit",		-1	,	-1	,	""			},
			//	{"tuna",		-1	,	800	,	""			},
				{"water",		-1	,	-1	,	""			},
			//	{"prl",		1600	,	2100	,	""		},
				{"gpstracker",	-1	,	-1,	""			},
				{"fuelF",		-1	,	-1	,	""			},
				{"b22",			-1	,	-1	,	""			},
				{"b23",			-1	,	-1	,	""			}
			}		
		};
	};	
	
	class tauch {
		CIV[]	= {
			"Tauchzubehoer",
			{/*	"ITEEM,	Verkauf,	Kauf,	WH	*/
		//		{"prl",		1600	,	2100	,	""		}
		//		{"prlhe",	1500	,	2100	,	""		}
				{"jame",		-1	,	-1	,	""		}
			}		
		};

	};	

	/*JOBS*/
	class glass {
		CIV[]	= {
			"Glashändler",
			{/*	"ITEEM,	Verkauf,	Kauf,	WH	*/
				{"glass",		-1	,-1 ,	""		},
				{"a10",			-1	,-1	,	""		}
			}		
		};	
	};	

	class iron {
		CIV[]	= {
			"Metallhändler",
			{/*	"ITEEM,	Verkauf,	Kauf,	WH	*/
				{"ironr",		-1	,	-1	,	""		},
				{"copperr",	 	-1	,	-1	,	""		},
				{"stt",			-1	,	-1	,	""		}
			}		
		};	
	};		
	
	class mullre {
		CIV[]	= {
			"Recyclinghof",
			{/*	"ITEEM,	Verkauf,	Kauf,	WH	*/
				{"mull",		700	,	-2	,	"liga_wh_1"		},
				{"a0",			700	,	800	,	"liga_wh_1"		}	//Kunststoff
			}		
		};	
	};	
	
	class salt {
		CIV[]	= {
			"Salzkontor",
			{/*	"ITEEM,	Verkauf,	Kauf,	WH	*/
				{"saltr",		-1,	-1,	""		},
				{"c4",			-1,	-1,	""		}
			}		
		};
	};		
	
	class likea {
		CIV[]	= {
			"LiKEA",
			{/*	"ITEEM,	Verkauf,	Kauf,	WH	*/
		//		{"storagebig",	120000	,	850000	,	"liga_wh_1"		},
				{"a6",			-1	,	-1	,	""		},
				{"b22",			-1	,	-1	,	""		},
				{"b23",			-1	,	-1	,	""		}
		//		{"kaffmasch",	700	,	800	,	""				}	// Kaffeemaschine
			}		
		};
	};			
	/*	
	class apoth {
		CIV[]	= {
			"Apotheke",
			{
				{"methu",		-1	,	800	,	""				},	// Meth unver
				{"streckm",		-1	,	800	,	""				}	// Streckmittel
			}		
		};	
	};	
	*/
	
	class waffen {
		CIV[]	= {
			"Waffenhersteller",
			{/*	"ITEEM,	Verkauf,	Kauf,	WH	*/			
				{"c3",			700	,	800	,	"liga_wh_4"		}
			}		
		};	
	};		
	
	
/* Dienste */	
	class flusi {
		CIV[]	= {
			"Flusi Shop",
			{/*	"ITEEM,Verkauf,	Kauf,	WH	*/
				{"water",	-1	,	-1,			""		},
				{"coffee",	-1	,	-1,			""		},
				{"donuts",	-1	,	-1,			""		},
				{"rabbit",	-1	,	-1,			""		},
				{"apple",	-1	,	-1,			"liga_wh_1"		},
				{"peach",	-1	,	-1,			""		},
				{"fuelF",	-1	,	-1,			""		}, //Benzinkanister
				{"kegel",	-1	,	-1,			""		},
				{"strahler",-1	,	-1,			""		},
				{"14",		-1	,	-1,			""		},  //Tarnnetz
				{"b22",		-1	,	-1,			""		},  //Campingstuhl
				{"b23",		-1	,	-1,			""		}  //Campingstuhl
			}
		};			
	};
	
	class cop {
		CIV[]	= {
			"Cop Zubehör",
			{/*	"ITEEM,Verkauf,	Kauf,	WH	*/
				{"donuts",		-1	,	-1,			""		},
				{"coffee",		-1	,	-1,			""		},
				{"spikeStrip",	-1	,	-1,			""		},  //Nagelbänder
				{"mauer",		-1	,	-1,			""		},  //Absperrung
				{"kegel",		-1	,	-1,			""		},
				{"water",		-1	,	-1,			""		},
				{"rabbit",		-1	,	-1,			""		},
				{"apple",		-1	,	-1,			"liga_wh_1"		},
				{"doen",		-1	,	-1,			""		},
				{"redgull",		-1	,	-1,			""		},
				{"fuelF",		-1	,	-1,			""		},
				{"defusekit",	-1	,	-1,			""		},
				{"knebel",		-1	,	-1,			""		},
				{"strahler",	-1	,	-1,			""		}
			}
		};			
	};	
	
	class ada {
		CIV[]	= {
			"Ausrüstung",
			{/*	"ITEEM,Verkauf,	Kauf,	WH	*/
				{"fuelF",		-1	,	-1,			""		},
				{"lockpick",	-1	,	-1,			""		},
				{"gpstracker",	-1	,	-1,			""		},
				{"kegel",		-1	,	-1,			""		},
				{"mauer",		-1	,	-1,			""		},  //Absperrung
				{"strahler",	-1	,	-1,			""		},
				{"b22",			-1	,	-1,			""		},  //Campingstuhl
				{"b23",			-1	,	-1,			""		}  	//Campingstuhl
			}
		};				
	};	
		
	class kan {
		CIV[]	= {
			"Kantine",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"water",		-1	,	-1,			""		},
				{"coffee",		-1	,	-1,			""		},
				{"donuts",		-1	,	-1,			""		},
				{"rabbit",		-1	,	-1,			""		},
			//	{"rabbit",		-1	,	80,			""		},
				{"apple",		-1	,	-1,		"liga_wh_1"		}
			}
		};				
	};		
	
	class market {
		CIV[]	= {
			"Liga Markt",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"water",		-1	,	-1,		""		},			// Wasser
				{"rabbit",		-1	,	-1,		""		},	// Kaffee
				{"apple",		-1	,	-1,	"liga_wh_1"		},	// Süßkartoffeln
				{"ana",			-1	,	-1,		""		},	// Bananen
				{"redgull",		-1	,	-1,		""		},	// Bananen
				{"tbacon",		-1	,	-1,		""		},	// Kokusnuesse
				{"fuelF",		-1	,	-1,		""		},	// Kokusnuesse
				{"peach",		-1	,	-1,		""		},	// Kokusnuesse
				{"pickaxe",		-1	,	-1,		""		},	// Kokusnuesse
				{"a7",			-1	,	-1,		""		},	// Kokusnuesse
				{"guh",			-1	,	-1,		""		},	// Kokusnuesse
				{"a11",			-1	,	-1,		""		},	// Kokusnuesse
				{"bw",			-1	,	-1,		""		},	// Kokusnuesse
				{"bottledbeer",	-1	,	-1,		""		},	// Kokusnuesse
				{"storagebig",	-1	,	-1,		""		},	// Kokusnuesse
				{"sheeprawf",	-1	,	-1,		""		}	// Stockfisch
			}
		};				
	};		

	class rebel {

		CIV[]	= {
			"Rebellen Markt",
			{
				{"water",		-1	,	-1,			""		},
				{"rabbit",		-1	,	-1,			""		},
				{"redgull",		-1	,	-1,			""		},	// Bananen
				{"tbacon",		-1	,	-1,			""		},	//Bohrmaschine
				{"pickaxe",		-1	,	-1,			""		},	// Bolzenschneider
				{"fuelF",		-1	,	-1,			""		},	// Dietrich
				{"gpstracker",	-1	,	-1,			""		},	// Kaffee
				{"sfb",			-1	,	-1,			""		},	// Süßkartoffeln
				{"zipties",		-1	,	-1,			""		},	// Kokusnuesse
				{"uwsl",		-1	,	-1,			""		}	// Kokusnuesse
			}
		};				
	};	
	
	class kio {
		CIV[]	= {
			"Gladis Kiosk",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"water",		-1	,	-1,			""		},
				{"coffee",		-1	,	-1,			""		},	// Kaffee
				{"bottledbeer",	-1	,	-1,			""		},	// Süßkartoffeln
				{"wein",		-1	,	-1,			""		},	// Bananen
				{"gyro",		-1	,	-1,			""		},	// Taktischer speck
				{"uzo",			-1	,	-1,			""		},	// Benzinkanister
				{"sala",		-1	,	-1,			""		},	// Kokusnuesse
				{"reva",		-1	,	-1,			""		},	// Redgull
				{"zig",			-1	,	-1,			""		},	// Redgull
				{"doen",		-1	,	-1,			""		}	// Stockfisch
			}
		};
	};	
	
	class gang {
		CIV[]	= {
			"Gang Markt",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"water",		-1	,	-1,			""		},
				{"rabbit",		-1	,	-1,			""		},	// Kaffee
				{"apple",		-1	,	-1,			"liga_wh_1"		},	// Süßkartoffeln
				{"redgull",		-1	,	-1,			""		},	// Bananen
				{"tbacon",		-1	,	-1,			""		},	// Taktischer speck
				{"pickaxe",		-1	,	-1,			""		},	// Benzinkanister
				{"fuelF",		-1	,	-1,			""		},	// Kokusnuesse
				{"peach",		-1	,	-1,			""		},	// Redgull
				{"zipties",		-1	,	-1,			""		},	// Redgull
				{"gpstracker",	-1	,	-1,			""		}	// Stockfisch
			}
		};
	};	
	
	class wongs {
		CIV[]	= {
			"Wong's Food Cart",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"turtlesoup",		-1	,	-1,			""		},
				{"turtle",			-1	,	-1,			""		}	// Kaffee
			}
		};
	};		
	
	class coffee {
		CIV[]	= {
			"Stratis Coffee Club",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"coffee",		-1	,	-1,			""		},
				{"donuts",		-1	,	-1,			""		}	// Kaffee
			}
		};
	};	
	
	class heroin {
		CIV[]	= {
			"Dealer",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"cocainep",	-1	,	-1,			""		},
				{"heroinp",		-1	,	-1,			""		},
				{"methp",		-1	,	-1,			""		},
				{"marijuana",	-1	,	-1,			""		},
				{"lsdp",		-1	,	-1,			""		}	// Kaffee
			}
		};
	};		
	
	class oil {
		CIV[]	= {
			"Öl Scheich",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"oilp",		-1	,	-1,			""		},
				{"pickaxe",		-1	,	-1,			""		},
				{"fuelF",		-1	,	-1,			""		}	
			}
		};
	};	

	class diamond {
		CIV[]	= {
			"Diamanten Händler",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"diamond",		-1	,	-1,			""		},
				{"diamondc",	-1	,	-1,			""		}	
			}
		};
	};	

	class cement {
		CIV[]	= {
			"Zement Händler",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"cement",		-1	,	-1,			""		}	
			}
		};
	};	

	class gold {
		CIV[]	= {
			"Gold Händler",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"goldbar",		-1	,	-1,			""		},	
				{"gsm",			-1	,	-1,			""		},	
				{"gl",			-1	,	-1,			""		}	
			}
		};
	};	

	class uranium {
		CIV[]	= {
			"Uranhändler",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"puranium",		-1	,	-1,			""		},
				{"uranium",			-1	,	-1,			""		}	
			}
		};
	};	

	class terrorcell {
		CIV[]	= {
			"Terrorzelle",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"ipuranium",		-1	,	-1,			""		},
				{"iuranium",		-1	,	-1,			""		},
				{"21",				-1	,	-1,			""		},	
				{"a10",				-1	,	-1,			""		},	
				{"c1",				-1	,	-1,			""		},	
				{"c2",				-1	,	-1,			"liga_wh_4"		}	
			}
		};
	};	

	class doenerman {
		CIV[]	= {
			"Dönerhersteller",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"sheepraw",		-1	,	-1,			""		},
				{"goatraw",			-1	,	-1,			""		},
				{"roosterraw",		-1	,	-1,			""		},	
				{"henraw",			-1	,	-1,			""		},	
				{"doen",			-1	,	-1,			""		}
			}
		};
	};	

	class fellman {
		CIV[]	= {
			"Pelzhändler",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"rabbitfp",		-1	,	-1,			""		},
				{"goatrawfp",		-1	,	-1,			""		},
				{"sheeprawf",		-1	,	-1,			""		}
			}
		};
	};	
	
	class nuhan {
		CIV[]	= {
			"Goldschmied",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"gsn",			-1	,	-1,			""		},
				{"ggn",			-1	,	-1,			""		}
			}
		};
	};		

	class gas {
		CIV[]	= {
			"Gaswerk",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"sig",			-1	,	-1,			""		},
				{"rig",			-1	,	-1,			""		}
			}
		};
	};	

	class baust {
		CIV[]	= {
			"Baustelle",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"stt",			-1	,	-1,			""		},
				{"a5",			-1	,	-1,			""		},
				{"cement",		-1	,	-1,			""		},
				{"glass",		-1	,	-1,			""		}
			}
		};
	};	
	
	class chemleim {
		CIV[]	= {
			"Leim & Methyl",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"a3",			-1	,	-1,			""		},
				{"18",			-1	,	-1,			""		}
			}
		};
	};	

	class alacurkund {
		CIV[]	= {
			"Bürobedarf",
			{/*	"ITEEM,	Verkauf,	Kauf,		WH	*/
				{"c5",			0	,	1,			""		}
			}
		};
	};		
	
};	

class Warehouse	{
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
	║	File: Liga_Cfg_vItems.hpp	
	║		
	║	Author:  Hirschi - Die Liga
	║	Edited:  Zoran 	 - Die Liga		
	╠═════════════════════════════════════════════════════════════════╗
	║	item[]		= {maxBestand	,minPreis	};
	║	
	║	Warehouse Kennungen
	║	
	║	""					Festpreis
	║	"liga_wh_3"		künstlich erzeugter Verbauch / Session
	║	"liga_wh_1"		Lager CIV
	║	"liga_wh_2"		Lager UHR  
	╚═════════════════════════════════════════════════════════════════╝
*/


	
	class liga_wh_1 {
		/*CIV ?? Waffenteile ... , Benzin ...*/
						// Bestand	// Minwert	
	//	banan[]			= {5000		,70		};	// Bananen
		apple[]			= {5000		,70		};	// Apfel
	//	coffee[]		= {1500		,120		};	// Kaffee
	//	cofbeap[]		= {2000		,700	};	// Kaffee geröstet
	//	cofbeas[]		= {1600		,1000	};	// Kaffee Kopi Luwak
	//	rabbit[]		= {5000		,20		};
	//	redgull[]		= {5000		,2800		};	// Redgull
	//	bottledbeer[]	= {1700		,2000		};	// Whisky ?
		
	//	peach[]			= {5000		,70		};	// Kokusnuesse
	//	ana[]			= {5000		,20		};	// Ananas
	//	bw[]			= {1000		,450	};	// Ananaskonserven
	//	cement[]		= {2500		,3200	};	// Mamorplatten
	//	gl[]			= {6000		,2200	};	// Goldschmuck
	//	gsm[]			= {6000		,2000	};	// Silberschmuck
	//	diamondc[]		= {5000		,900		};	// Edelschweine
	//	ggn[]			= {5000		,1000	};	// Goldnuggets
	//	gsn[]			= {5000		,800	};	// Silbernuggets
			
	//	oilp[]			= {5000		,10		};	//	Öl processed
		ben[]			= {10000	,1200	};	//	Treibstoff
		di[]			= {10000	,1300	};	// Kerosin
		
	//	goatrawfp[]		= {2300		,1300	};	// Ziegenfelle
		
	//	tet[]			= {1700		,1000	};	// Palmoel
	//	goatraw[]		= {5000		,10		};	// Ziegenfleisch
	//	sheepraw[]		= {5000		,10		};	// Schafsfleisch
	//	tutrei[]		= {5000		,100		};	// Schildi Eier
	//	turtlesoup[]	= {1200		,4500	};	// Schildi Fleisch
	//	schok[]			= {1200		,800	};	// Schokolade
	//	kakap[]			= {1500		,800	};	// Kakao geröstet
	//	hode[]			= {5000		,10		};	// Klöten
	//	stofish[]		= {5000		,100	};	// Stockfisch
	//	salema[]		= {1800		,100	};	// Fisch
	//	ornate[]		= {1800		,100	};	// Fisch
	//	mackerel[]		= {1800		,100	};	// Fisch
	//	tuna[]			= {1800		,400	};	// Fisch
	//	mullet[]		= {1800		,10		};	// Fisch
	//	catshark[]		= {1800		,900	};	// Fisch
		
	//	glass[]			= {3500		,800		};	// Glas
		a10[]			= {5000		,10		};	// Flasche
	//	ironr[]		= {10000	,600		};                          // <- Geändert 
	//	copperr[]		= {10000	,600		};                           // <- Geändert 
	//	stt[]			= {5000		,4000	};	// Stahlträger//
	//	fassinv[]		= {2500		,1200	};	// Stahlträger//
		
	//	c6[]			= {5000		,20		};	// Bohrmaschine
	//	ghy[]			= {200		,1000	};	// Hydro
	//	a9[]			= {200		,4000	};	// Pressluft
	//	a7[]			= {200		,2000	};	// Axt
	//	a8[]			= {200		,2000	};	// Kettensäge
	//	mache[]			= {200		,1000	};	// Machete
	//	boltcutter[]	= {100		,1000	};	// Bolzenschneider
	//	lockpick[]		= {100		,1000	};	// Dietrich
		
		c4[]			= {1400		,500		};	// Salpeter
		c3[]			= {5000		,20		};	// Schwefel
		c2[]			= {5800		,1000	};	// Waffenteile
	//	c1[]			= {3600		,3000	};	// Munitionskisten
	//	saltr[]		= {1200		,900		};

		rib[]			= {5000		,5000		};	// Bohrgestaenge	
	//	21[]			= {13000	,500	};	// Flasche Moonshine
	//	marijuana[]		= {2000		,700	};	
	//	cocainep[] 		= {2300		,700	};
	//	lsdp[]  		= {2300		,900		};	// LSD
	//	methp[]  		= {2300		,1000		};	//	Meth
	//	heroinp[]  		= {2300		,1200		};	//	Heroin
	//	nattee[]  		= {5000		,3000	};	//	Naturheilkräutertee
	/*LIKEA*/
	//	storagebig[]  	= {500		,20		};	//	Lagerkiste
	//	a6[]  			= {1200		,400	};	//	Möbel
	//	a5[]  			= {2300		,2000	};	//	Spanplatten
	//	b22[]  			= {5000		,20		};	//	Klappstuhl
	//	b23[]  			= {5000		,20		};	//	Klappstuhl
		
		mull[]			= {5000		,20		};	// Müll
		a0[]  			= {5000		,20		};	//	Kunststoff
	
	};	
	
	class liga_wh_2 {
	};
	
	class liga_wh_3 {	// künstlich erzeugter Verbauch / Session	
	};	
	
	class liga_wh_4 { // Fest 
	
	//	fassinv[]		= {2500		,1200	};	// Fass//
		rip[]			= {2500		,2400	};	// Pumpe//
		rib[]			= {2500		,5000	};	// Gestänge//
		ben[]			= {10000	,1200	};	//	Treibstoff
		di[]			= {10000	,1300	};	// Kerosin
		c2[]			= {5800		,1000	};	// Waffenteile
		c3[]			= {5800		,250	};	// Schwefel
	
	};
	
	/* WH Display */
	class WH_Displ {
		dispShops[]	= {
			"market",
			"tank",
			"oilrig",
		//	"partyile",	//Festpreise mit beschränkten Lager
		//	"partyleg",
			"mullre",
			"terrorcell",
			"waffen"

		};
	};
	
	class WHdump {
		maxSUBval = 50;		// 50 % weg von 100 % Bestand

		minBestan = 25;		// 25 % Mindestbetand
		minSUBval = 80;		// 20 % weg von 25 % mindestBestand 
		
	};
};
/*	

	
Wie der olle Xavier sagen würde: "Du musst nur geduldig sein, dann dauert es nicht mehr lang..." <- wat ein Schmalz
	
	

	
	
		/* 	-> Hier Platz für Zorans Outro lassen <-
			
			Oder auch "Die Wandlung vom Penetrator zum Kommentator */
			
		/*	Outro ??? Du hast wohl zu viel Langeweile ...  !!!!! */	
			

/*
	╔══════════════════════════════════════════════════╗
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░║
	║░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░║
	║░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	╚══════════════════════════════════════════════════╝
*/		
	