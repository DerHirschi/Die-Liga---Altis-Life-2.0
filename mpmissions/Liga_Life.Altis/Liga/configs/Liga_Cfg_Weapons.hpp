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
	║	File: 		Liga_Cfg_Weapons.hpp	
	║		
	║	Author:  	Zoran 	- Die Liga	
	║	Edited:  	Hirschi - Die Liga
	║
	║	Vorlage:  	Tonic´s Altis Life RPG 4.4		
	║			
	╠═════════════════════════════════════════════════════════════════╗
	║    Format:
	║        level: ARRAY (This is for limiting items to certain things)
	║            0: Variable to read from
	║            1: Variable Value Type (SCALAR / BOOL / EQUAL)
	║            2: What to compare to (-1 = Check Disabled)
	║            3: Custom exit message (Optional)
	║
	║    items: { Classname, Itemname, BuyPrice, SellPrice }
	║
	║    Itemname only needs to be filled if you want to rename the original object name.
	║
	║    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
	║    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
	║ 
	╚═════════════════════════════════════════════════════════════════╝
*/

	class WeaponShops {
		//Armory Shops
		
		//Zivilisten Waffen (legal)
		class gun {
			name = "Zorans Waffenladen";
			side = "civ";
			license = "lci_gun";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "hgun_Rook40_F", 									"", 		47500, 500 },
				{ "hgun_Pistol_heavy_02_F", 						"", 		47850, -1 },
				{ "hgun_ACPC2_F", 									"", 		47500, -1 },
				{ "hgun_PDW2000_F", 								"", 		135000, -1 },
				{ "SMG_05_F", 										"", 		140000, 7500 },
				{ "optic_ACO_grn_smg", 								"", 		2500, 250 },
				{ "optic_Yorris", 									"", 		2500, 250 },
				{ "acc_flashlight", 								"", 		2500, 250 },
				{ "V_Rangemaster_belt", 							"", 		7500, 250 },
				{ "V_BandollierB_cbr", 								"", 		20000, 250 }
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"", 		450 },
				{ "6Rnd_45ACP_Cylinder", 							"", 		450 },
				{ "9Rnd_45ACP_Mag", 								"", 		450 },
				{ "30Rnd_9x21_Mag", 								"", 		750 },
				{ "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", 			"", 		1500 }
				
			};
		};

		class rebel {
			name = "Hirschi Guevara";
			side = "civ";
			license = "lci_reb";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "SMG_01_F", 										"",		 	130000, 2500 },
				{ "SMG_02_F", 										"",		 	155000, 2500 },
				{ "arifle_TRG21_F", 								"",		 	185000, 2500 },
				{ "arifle_TRG21_GL_F", 								"",		 	190000, 2500 },
				{ "arifle_Katiba_F", 								"", 		400000, 5000 },
				{ "arifle_Katiba_GL_F", 							"", 		455000, 5000 },
				{ "arifle_SDAR_F", 									"", 		375000, 7500 },
				{ "arifle_MX_F", 									"", 		550000, 7500 },
				{ "arifle_MX_khk_F", 								"", 		550000, 7500 },
				{ "arifle_MXC_F", 									"", 		475000, 7500 },
				{ "arifle_MXC_khk_F", 								"", 		475000, 7500 },
				{ "arifle_MXM_F",	 								"", 		575000, 7500 },
				{ "arifle_MXM_khk_F", 								"", 		575000, 7500 },
				{ "arifle_MX_SW_khk_F", 							"", 		625000, 7500 },
				{ "arifle_MX_SW_F", 								"", 		625000, 7500 },
				{ "arifle_MX_GL_F", 								"", 		655000, 7500 },
				{ "arifle_MX_GL_khk_F", 							"", 		655000, 7500 },
				{ "arifle_AK12_F", 									"", 		1850000, 7500 },
				{ "arifle_AK12_GL_F",	 							"", 		1875000, 7500 },
				{ "arifle_AKM_F", 									"", 		1625000, 7500 },
				{ "arifle_AKS_F", 									"", 		1175000, 7500 },
				{ "arifle_ARX_ghex_F", 								"", 		525000, 7500 },
				{ "arifle_ARX_hex_F", 								"", 		525000, 7500 },
				{ "arifle_CTAR_hex_F", 								"", 		550000, 7500 },
				{ "arifle_CTAR_GL_hex_F", 							"", 		575000, 7500 },
				{ "arifle_CTARS_hex_F", 							"", 		575000, 7500 },
				{ "arifle_CTAR_ghex_F", 							"", 		550000, 7500 },
				{ "arifle_CTAR_GL_ghex_F", 							"", 		575000, 7500 },
				{ "arifle_CTARS_ghex_F", 							"", 		575000, 7500 },
				{ "arifle_SPAR_01_khk_F", 							"", 		525000, 7500 },
				{ "arifle_SPAR_01_snd_F", 							"", 		525000, 7500 },
				{ "arifle_SPAR_01_GL_khk_F",						"", 		550000, 7500 },
				{ "arifle_SPAR_02_khk_F", 							"", 		595000, 7500 },
				{ "arifle_SPAR_02_snd_F", 							"", 		595000, 7500 },
				{ "arifle_SPAR_03_khk_F", 							"", 		600000, 7500 },
				{ "arifle_SPAR_03_snd_F", 							"", 		600000, 7500 },
				{ "LMG_03_F", 										"", 		1750000, 7500 },
				{ "optic_ACO_grn", 									"", 		6500, 350 },
				{ "optic_Holosight", 								"", 		9800, 275 },
				{ "optic_Holosight_khk_F", 							"", 		9800, 275 },
				{ "optic_Holosight_smg_blk_F", 						"", 		9800, 275 },
				{ "optic_Hamr", 									"", 		22000, -1 },
				{ "optic_Hamr_khk_F", 								"", 		22000, -1 },
				{ "optic_MRCO", 									"", 		15000, 100 },
				{ "optic_ERCO_snd_F", 								"", 		15000, 100 },
				{ "optic_Arco", 									"", 		12000, 100 },
				{ "optic_Arco_ghex_F", 								"", 		12000, 100 },
				{ "optic_SOS", 										"", 		110000, 100 },
				{ "optic_LRPS_tna_F", 								"", 		250000, 100 },
				{ "optic_LRPS_ghex_F", 								"", 		250000, 100 },
				{ "optic_AMS", 										"", 		150000, 100 },
				{ "optic_KHS_tan", 									"", 		150000, 100 },
				{ "optic_DMS", 										"", 		150000, 100 },
				{ "acc_pointer_IR", 								"", 		5000, 100 },
				{ "acc_flashlight", 								"", 		4500, 100 },
				{ "muzzle_snds_H", 									"", 		50000, 100 },
				{ "muzzle_snds_acp", 								"", 		50000, 100 },
				{ "muzzle_snds_65_TI_blk_F",		 				"", 		50000, 100 },
				{ "muzzle_snds_58_wdm_F", 							"", 		50000, 100 },
				{ "muzzle_snds_B_snd_F", 							"", 		50000, 100 },
				{ "muzzle_snds_B_khk_F", 							"", 		50000, 100 },
				{ "muzzle_snds_H_MG_khk_F", 						"", 		50000, 100 },
				{ "muzzle_snds_65_TI_ghex_F", 						"", 		50000, 100 },
				{ "muzzle_snds_65_TI_hex_F", 						"", 		50000, 100 },
				{ "muzzle_snds_L", 									"", 		50000, 100 },
				{ "muzzle_snds_M", 									"", 		50000, 100 },
				{ "muzzle_snds_H", 									"", 		50000, 100 },
				{ "muzzle_snds_B", 									"", 		50000, 100 },
				{ "bipod_01_F_mtp", 								"", 		35000, 100 },
				{ "bipod_02_F_hex", 								"", 		35000, 100 },
				{ "bipod_01_F_blk", 								"", 		35000, 100 },
				{ "bipod_02_F_tan", 								"", 		35000, 100 },
				{ "bipod_03_F_oli", 								"", 		35000, 100 },
				{ "bipod_01_F_khk", 								"", 		35000, 100 }
				
				
			};
			mags[] = {
				{ "30Rnd_9x21_Mag", 								"", 		2500 },
				{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", 			"", 		2500 },
				{ "30Rnd_45ACP_Mag_SMG_01", 						"", 		2500 },
				{ "30Rnd_556x45_Stanag", 							"", 		2500 },
				{ "30Rnd_762x39_Mag_F", 							"", 		25000 },
				{ "30Rnd_762x39_Mag_Green_F", 						"", 		25000 },
				{ "30Rnd_762x39_Mag_Tracer_F", 						"", 		25000 },
				{ "30Rnd_762x39_Mag_Tracer_Green_F", 				"", 		25000 },
				
				
				{ "20Rnd_650x39_Cased_Mag_F", 						"", 		2500 },
				
				{ "200Rnd_556x45_Box_F", 							"", 		50000 },
				{ "200Rnd_556x45_Box_Red_F", 						"", 		50000 },
				{ "200Rnd_556x45_Box_Tracer_F", 					"", 		50000 },
				{ "200Rnd_556x45_Box_Tracer_Red_F", 				"", 		50000 },
				
				{ "150Rnd_556x45_Drum_Mag_F", 						"", 		45000 },
				{ "150Rnd_556x45_Drum_Mag_Tracer_F", 				"", 		45000 },
				
				{ "30Rnd_580x42_Mag_F", 							"", 		2500 },
				{ "30Rnd_580x42_Mag_Tracer_F", 						"", 		2500 },
				
				{ "100Rnd_580x42_Mag_F", 							"", 		5000 },
				{ "100Rnd_580x42_Mag_Tracer_F", 					"", 		5000 },
				
				
				{ "30Rnd_545x39_Mag_F", 							"", 		2500 },
				{ "30Rnd_545x39_Mag_Green_F", 						"", 		2500 },
				{ "30Rnd_545x39_Mag_Tracer_Green_F", 				"", 		2500 },
				{ "30Rnd_65x39_caseless_green", 					"", 		2500 },
				{ "30Rnd_65x39_caseless_mag_Tracer",		 		"", 		2500 },
				{ "30Rnd_65x39_caseless_mag", 						"", 		2500 },
				{ "100Rnd_65x39_caseless_mag_Tracer",		 		"", 		2500 },
				{ "100Rnd_65x39_caseless_mag", 						"", 		2500 },
				{ "1Rnd_Smoke_Grenade_shell", 						"", 		5000 },
				{ "1Rnd_SmokeGreen_Grenade_shell", 					"", 		5000 },
				{ "1Rnd_SmokePurple_Grenade_shell", 				"", 		5000 },
				{ "1Rnd_SmokeBlue_Grenade_shell", 					"", 		5000 },
				{ "1Rnd_SmokeOrange_Grenade_shell", 				"", 		5000 },
				{ "20Rnd_556x45_UW_mag", 							"", 		2500 }
			};
		};
		
		class rebequip {
			name = "Rebellen Krämerladen";
			side = "civ";
			license = "lci_reb";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "ToolKit", 										"", 		5500, 100 },
				{ "FirstAidKit",		 							"", 		1500, 100 },
				{ "NVGoggles", 										"", 		3500, 100 },
				{ "Binocular", 										"", 		3000, 100 },
				{ "ItemGPS", 										"", 		3500, 100 },
				{ "ItemMap", 										"", 		200, 100 },
				{ "ItemCompass", 									"", 		200, 100 },
				{ "ItemRadio", 										"", 		200, 100 },
				{ "ItemWatch", 										"", 		200, 100 },
				{ "Chemlight_red", 									"", 		350, 100 },
				{ "Chemlight_yellow", 								"", 		350, 100 },
				{ "Chemlight_green", 								"", 		350, 100 },
				{ "Chemlight_blue", 								"", 		350, 100 },
				{ "SmokeShell", 									"", 		7000, 100 },
				{ "SmokeShellGreen", 								"", 		7000, 100 },
				{ "SmokeShellPurple", 								"", 		7000, 100 },
				{ "SmokeShellBlue", 								"", 		7000, 100 },
				{ "SmokeShellOrange", 								"", 		7000, 100 },
				{ "SmokeShellRed", 									"", 		7000, 100 }
			};
		};

		 class gang {
			name = "Los Banditos Kniften";
			side = "civ";
			license = "";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "hgun_Rook40_F", "", 1500, 500 },
				{ "hgun_Pistol_heavy_02_F", "", 2500, -1 },
				{ "hgun_ACPC2_F", "", 4500, -1 },
				{ "hgun_PDW2000_F", "", 9500, -1 },
				{ "optic_ACO_grn_smg", "", 950, 250 }
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", "", 25 },
				{ "6Rnd_45ACP_Cylinder", "", 50 },
				{ "9Rnd_45ACP_Mag", "", 45 },
				{ "30Rnd_9x21_Mag", "", 75 }
			};
		};    					

		//Basic Shops
		class genstore {
			name = "Zoran Logistics";
			side = "civ";
			license = "";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "ToolKit", 										"", 		5500, 100 },
				{ "FirstAidKit", 									"", 		1500, 100 },
				{ "NVGoggles", 										"", 		3500, 100 },
				{ "Binocular", 										"", 		3000, 100 },
				{ "ItemGPS", 										"", 		3500, 100 },
				{ "ItemMap", 										"", 		200, 100 },
				{ "ItemCompass", 									"", 		200, 100 },
				{ "ItemRadio", 										"", 		200, 100 },
				{ "ItemWatch", 										"", 		200, 100 },
				{ "Chemlight_red", 									"", 		350, 100 },
				{ "Chemlight_yellow", 								"", 		350, 100 },
				{ "Chemlight_green", 								"", 		350, 100 },
				{ "Chemlight_blue", 								"", 		350, 100 },
				{ "SmokeShell", 									"", 		7000, 100 },
				{ "SmokeShellGreen", 								"", 		7000, 100 },
				{ "SmokeShellPurple", 								"", 		7000, 100 },
				{ "SmokeShellBlue", 								"", 		7000, 100 },
				{ "SmokeShellOrange", 								"", 		7000, 100 },
				{ "SmokeShellRed", 									"", 		7000, 100 }
			};
			mags[] = {};
		};
		//Partymeile
		class partystore {
			name = "Zoran Party - Zubehör";
			side = "civ";
			license = "";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "ToolKit", 										"", 		5500, 100 },
				{ "FirstAidKit", 									"", 		1500, 100 },
				{ "Chemlight_red", 									"", 		350, 100 },
				{ "Chemlight_yellow", 								"", 		350, 100 },
				{ "Chemlight_green", 								"", 		350, 100 },
				{ "Chemlight_blue", 								"", 		350, 100 },
				{ "SmokeShell", 									"", 		7000, 100 },
				{ "SmokeShellGreen", 								"", 		7000, 100 },
				{ "SmokeShellPurple", 								"", 		7000, 100 },
				{ "SmokeShellBlue", 								"", 		7000, 100 },
				{ "SmokeShellOrange", 								"", 		7000, 100 },
				{ "SmokeShellRed", 									"", 		7000, 100 }
			};
			mags[] = {};
		};
		
		class tankstore {
			name = "Liga Petrol 24h Shop";
			side = "";
			license = "";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "ToolKit", 										"", 		5500, 100 },
				{ "FirstAidKit", 									"", 		1500, 100 },
				{ "NVGoggles", 										"", 		3500, 100 },
				{ "Binocular", 										"", 		3000, 100 },
				{ "ItemGPS", 										"", 		3500, 100 },
				{ "ItemMap", 										"", 		200, 100 },
				{ "ItemCompass", 									"", 		200, 100 },
				{ "ItemRadio", 										"", 		200, 100 },
				{ "ItemWatch", 										"", 		200, 100 },
				{ "Chemlight_red", 									"", 		350, 100 },
				{ "Chemlight_yellow", 								"", 		350, 100 },
				{ "Chemlight_green", 								"", 		350, 100 },
				{ "Chemlight_blue", 								"", 		350, 100 }
			};
			mags[] = {};
		};

		class uranium {
			name = "Uran Verkäufer";
			side = "civ";
			license = "lci_ura";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "U_C_Scientist", 					   "Strahlenanzug", 		1500000, 1500 },
				{ "ToolKit", 										"", 		5500, 100 },
				{ "FirstAidKit", 									"", 		1500, 100 },
				{ "NVGoggles", 										"", 		3500, 100 },
				{ "Binocular", 										"", 		3000, 100 },
				{ "ItemGPS", 										"", 		3500, 100 },
				{ "ItemMap", 										"", 		200, 100 },
				{ "ItemCompass", 									"", 		200, 100 },
				{ "ItemRadio", 										"", 		200, 100 },
				{ "ItemWatch", 										"", 		200, 100 },
				{ "Chemlight_red", 									"", 		350, 100 },
				{ "Chemlight_yellow", 								"", 		350, 100 },
				{ "Chemlight_green", 								"", 		350, 100 },
				{ "Chemlight_blue", 								"", 		350, 100 }
			};
			mags[] = {};
		};		
		
					// Zoran wieder müde, Zoran gehen ins Bett. Gute Nacht!

		//Cop Shops
		class cop_1 {
			name = "Liga PD Cadet";
			side = "cop";
			license = "";
			token = "";
			level[] = { "life_coplevel", "SCALAR", 1, "You must be a Cadet Rank!" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 				6500, 650 },
				{ "SMG_02_F", 										"", 				40000, 650 },
				{ "SMG_05_F", 										"", 				40000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 				10000, 650 },
				{ "optic_ACO_grn_smg", 								"", 				5000, 650 },
				{ "muzzle_snds_L", 									"", 				5000, 650 },
				{ "acc_pointer_IR", 								"", 				5000, 100 },
				{ "acc_flashlight", 								"", 				4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 				5000, -1 },
				{ "SmokeShell", 									"", 				500, 100 },
				{ "ToolKit", 										"", 				5500, 100 },
				{ "FirstAidKit", 									"", 				1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  				3000, 100 },
				{ "Binocular", 										"", 				3000, 100 },
				{ "ItemGPS", 										"", 				3500, 100 },
				{ "ItemMap", 										"", 				200, 100 },
				{ "ItemCompass", 									"", 				200, 100 },
				{ "ItemRadio", 										"", 				200, 100 },
				{ "ItemWatch", 										"", 				200, 100 },
				{ "Chemlight_blue", 								"", 				350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 				1500 },
				{ "30Rnd_9x21_Mag", 								"Sting", 				1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 			1500 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen", 		1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 			1500 }
				
				
				};
		};
		
		class cop_2 {
			name = "Liga PD Police Officer";
			side = "cop";
			license = "";
			token = "";
			level[] = { "life_coplevel", "SCALAR", 2, "You must be a Police Officer Rank!" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 				6500, 650 },
				{ "SMG_02_F", 										"", 				40000, 650 },
				{ "SMG_05_F", 										"", 				40000, 650 },
				{ "arifle_SDAR_F", 									"", 				50000, 650 },
				{ "arifle_SPAR_01_blk_F", 							"", 				55000, 650 },
				{ "arifle_TRG21_F", 								"", 				55000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 				10000, 650 },
				{ "optic_ACO_grn_smg", 								"", 				5000, 650 },
				{ "optic_MRCO", 									"", 				7500, 650 },
				{ "muzzle_snds_L", 									"", 				5000, 650 },
				{ "muzzle_snds_M", 									"", 				6500, 650 },
				{ "bipod_01_F_blk", 								"", 				7500, 650 },
				{ "acc_pointer_IR", 								"", 				5000, 100 },
				{ "acc_flashlight", 								"", 				4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 				5000, -1 },
				{ "SmokeShell", 									"", 				500, 100 },
				{ "ToolKit", 										"", 				5500, 100 },
				{ "FirstAidKit", 									"", 				1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  				3000, 100 },
				{ "Binocular", 										"", 				3000, 100 },
				{ "ItemGPS", 										"", 				3500, 100 },
				{ "ItemMap", 										"", 				200, 100 },
				{ "ItemCompass", 									"", 				200, 100 },
				{ "ItemRadio", 										"", 				200, 100 },
				{ "ItemWatch", 										"", 				200, 100 },
				{ "Chemlight_blue", 								"", 				350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 				1500 },
				{ "30Rnd_9x21_Mag", 								"Sting", 				1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 			1500 },
				{ "20Rnd_556x45_UW_mag", 							"SDAR UW",	 			2000 },
				{ "30Rnd_556x45_Stanag", 				   			"", 					2000 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen", 		1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 			1500 }
				
				
				};
		};

		class cop_3 {
			name = "Liga PD Sergeant";
			side = "cop";
			license = "";
			token = "";
			level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 				6500, 650 },
				{ "SMG_02_F", 										"", 				40000, 650 },
				{ "SMG_05_F", 										"", 				40000, 650 },
				{ "arifle_SDAR_F", 									"", 				50000, 650 },
				{ "arifle_SPAR_01_blk_F", 							"", 				55000, 650 },
				{ "arifle_TRG21_F", 								"", 				55000, 650 },
				{ "arifle_CTAR_blk_F", 					 			"", 				65000, 650 },
				{ "arifle_MXC_Black_F", 							"", 				70000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 				10000, 650 },
				{ "optic_ACO_grn_smg", 								"", 				5000, 650 },
				{ "optic_MRCO", 									"", 				7000, 650 },
				{ "optic_Hamr", 									"", 				7500, 650 },
				{ "optic_Arco", 									"", 				7500, 650 },
				{ "muzzle_snds_L", 									"", 				5000, 650 },
				{ "muzzle_snds_M", 									"", 				6500, 650 },
				{ "muzzle_snds_58_blk_F", 							"", 				7000, 650 },
				{ "muzzle_snds_H", 									"", 				7500, 650 },
				{ "bipod_01_F_blk", 								"", 				7500, 650 },
				{ "acc_pointer_IR", 								"", 				5000, 100 },
				{ "acc_flashlight", 								"", 				4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 				5000, -1 },
				{ "SmokeShell", 									"", 				500, 100 },
				{ "ToolKit", 										"", 				5500, 100 },
				{ "FirstAidKit", 									"", 				1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  				3000, 100 },
				{ "Binocular", 										"", 				3000, 100 },
				{ "ItemGPS", 										"", 				3500, 100 },
				{ "ItemMap", 										"", 				200, 100 },
				{ "ItemCompass", 									"", 				200, 100 },
				{ "ItemRadio", 										"", 				200, 100 },
				{ "ItemWatch", 										"", 				200, 100 },
				{ "Chemlight_blue", 								"", 				350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 				1500 },
				{ "30Rnd_9x21_Mag", 								"Sting", 				1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 			1500 },
				{ "20Rnd_556x45_UW_mag", 							"SDAR UW",	 			2000 },
				{ "30Rnd_556x45_Stanag", 				   			"", 					2000 },
				{ "30Rnd_580x42_Mag_F", 				   			"", 					2250 },
				{ "30Rnd_65x39_caseless_mag", 			   			"", 					2500 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen", 		1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 			1500 }
				
				
				};
		};
		
		class cop_4 {
			name = "Liga PD Lieutenant";
			side = "cop";
			license = "";
			token = "";
			level[] = { "life_coplevel", "SCALAR", 4, "You must be a Lieutenant Rank!" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 				6500, 650 },
				{ "SMG_02_F", 										"", 				40000, 650 },
				{ "SMG_05_F", 										"", 				40000, 650 },
				{ "arifle_SDAR_F", 									"", 				50000, 650 },
				{ "arifle_SPAR_01_blk_F", 							"", 				55000, 650 },
				{ "arifle_TRG21_F", 								"", 				55000, 650 },
				{ "arifle_CTAR_blk_F", 					 			"", 				65000, 650 },
				{ "arifle_MXC_Black_F", 							"", 				70000, 650 },
				{ "arifle_MX_Black_F", 			 					"", 				75000, 650 },
				{ "arifle_ARX_blk_F", 								"", 				75000, 650 },
				{ "srifle_DMR_07_blk_F", 							"", 				75000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 				10000, 650 },
				{ "optic_ACO_grn_smg", 								"", 				5000, 650 },
				{ "optic_MRCO", 									"", 				7000, 650 },
				{ "optic_Hamr", 									"", 				7500, 650 },
				{ "optic_Arco", 									"", 				7500, 650 },
				{ "optic_ERCO_blk_F", 								"", 				8000, 650 },
				{ "optic_DMS", 										"", 				8000, 650 },
				{ "muzzle_snds_L", 									"", 				5000, 650 },
				{ "muzzle_snds_M", 									"", 				6500, 650 },
				{ "muzzle_snds_58_blk_F", 							"", 				7000, 650 },
				{ "muzzle_snds_H", 									"", 				7500, 650 },
				{ "bipod_01_F_blk", 								"", 				7500, 650 },
				{ "acc_pointer_IR", 								"", 				5000, 100 },
				{ "acc_flashlight", 								"", 				4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 				5000, -1 },
				{ "SmokeShell", 									"", 				500, 100 },
				{ "ToolKit", 										"", 				5500, 100 },
				{ "FirstAidKit", 									"", 				1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  				3000, 100 },
				{ "Binocular", 										"", 				3000, 100 },
				{ "ItemGPS", 										"", 				3500, 100 },
				{ "ItemMap", 										"", 				200, 100 },
				{ "ItemCompass", 									"", 				200, 100 },
				{ "ItemRadio", 										"", 				200, 100 },
				{ "ItemWatch", 										"", 				200, 100 },
				{ "Chemlight_blue", 								"", 				350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 				1500 },
				{ "30Rnd_9x21_Mag", 								"Sting", 				1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 			1500 },
				{ "20Rnd_556x45_UW_mag", 							"SDAR UW",	 			2000 },
				{ "30Rnd_556x45_Stanag", 				   			"", 					2000 },
				{ "30Rnd_580x42_Mag_F", 				   			"", 					2250 },
				{ "30Rnd_65x39_caseless_mag", 			   			"", 					2500 },
				{ "20Rnd_650x39_Cased_Mag_F", 			   			"", 					2500 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen", 		1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 			1500 }
				
				
				};
		};
		
		class cop_5 {
			name = "Liga PD Captain";
			side = "cop";
			license = "";
			token = "";
			level[] = { "life_coplevel", "SCALAR", 5, "You must be a Captain Rank!" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 				6500, 650 },
				{ "SMG_02_F", 										"", 				40000, 650 },
				{ "SMG_05_F", 										"", 				40000, 650 },
				{ "arifle_SDAR_F", 									"", 				50000, 650 },
				{ "arifle_SPAR_01_blk_F", 							"", 				55000, 650 },
				{ "arifle_TRG21_F", 								"", 				55000, 650 },
				{ "arifle_CTAR_blk_F", 					 			"", 				65000, 650 },
				{ "arifle_MXC_Black_F", 							"", 				70000, 650 },
				{ "arifle_MX_Black_F", 			 					"", 				75000, 650 },
				{ "arifle_ARX_blk_F", 								"", 				75000, 650 },
				{ "srifle_DMR_07_blk_F", 							"", 				75000, 650 },
				{ "arifle_MX_SW_Black_F", 							"", 				85000, 650 },
				{ "arifle_MXM_Black_F", 							"", 				85000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 				10000, 650 },
				{ "optic_ACO_grn_smg", 								"", 				5000, 650 },
				{ "optic_MRCO", 									"", 				7000, 650 },
				{ "optic_Hamr", 									"", 				7500, 650 },
				{ "optic_Arco", 									"", 				7500, 650 },
				{ "optic_ERCO_blk_F", 								"", 				8000, 650 },
				{ "optic_DMS", 										"", 				8000, 650 },
				{ "optic_AMS", 										"", 				9000, 650 },
				{ "optic_KHS_blk", 									"", 				9000, 650 },
				{ "muzzle_snds_L", 									"", 				5000, 650 },
				{ "muzzle_snds_M", 									"", 				6500, 650 },
				{ "muzzle_snds_58_blk_F", 							"", 				7000, 650 },
				{ "muzzle_snds_H", 									"", 				7500, 650 },
				{ "bipod_01_F_blk", 								"", 				7500, 650 },
				{ "acc_pointer_IR", 								"", 				5000, 100 },
				{ "acc_flashlight", 								"", 				4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 				5000, -1 },
				{ "SmokeShell", 									"", 				500, 100 },
				{ "ToolKit", 										"", 				5500, 100 },
				{ "FirstAidKit", 									"", 				1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  				3000, 100 },
				{ "Binocular", 										"", 				3000, 100 },
				{ "Rangefinder", 									"", 				9000, 100 },
				{ "ItemGPS", 										"", 				3500, 100 },
				{ "ItemMap", 										"", 				200, 100 },
				{ "ItemCompass", 									"", 				200, 100 },
				{ "ItemRadio", 										"", 				200, 100 },
				{ "ItemWatch", 										"", 				200, 100 },
				{ "Chemlight_blue", 								"", 				350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 				1500 },
				{ "30Rnd_9x21_Mag", 								"Sting", 				1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 			1500 },
				{ "20Rnd_556x45_UW_mag", 							"SDAR UW",	 			2000 },
				{ "30Rnd_556x45_Stanag", 				   			"", 					2000 },
				{ "30Rnd_580x42_Mag_F", 				   			"", 					2250 },
				{ "30Rnd_65x39_caseless_mag", 			   			"", 					2500 },
				{ "20Rnd_650x39_Cased_Mag_F", 			   			"", 					2500 },
				{ "100Rnd_65x39_caseless_mag", 			   			"", 					3000 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen", 		1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 			1500 }
				
				
				};
		};
		
		class cop_6 {
			name = "Liga PD Deputy Inspector";
			side = "cop";
			license = "";
			token = "";
			level[] = { "life_coplevel", "SCALAR", 6 , "You must be a Deputy Inspector Rank!" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 				6500, 650 },
				{ "SMG_02_F", 										"", 				40000, 650 },
				{ "SMG_05_F", 										"", 				40000, 650 },
				{ "arifle_SDAR_F", 									"", 				50000, 650 },
				{ "arifle_SPAR_01_blk_F", 							"", 				55000, 650 },
				{ "arifle_TRG21_F", 								"", 				55000, 650 },
				{ "arifle_CTAR_blk_F", 					 			"", 				65000, 650 },
				{ "arifle_MXC_Black_F", 							"", 				70000, 650 },
				{ "arifle_MX_Black_F", 			 					"", 				75000, 650 },
				{ "arifle_ARX_blk_F", 								"", 				75000, 650 },
				{ "srifle_DMR_07_blk_F", 							"", 				75000, 650 },
				{ "arifle_MX_SW_Black_F", 							"", 				85000, 650 },
				{ "arifle_MXM_Black_F", 							"", 				85000, 650 },
				{ "srifle_EBR_F", 									"MK18 SWAT", 		90000, 650 },
				{ "srifle_DMR_03_F", 								"", 				90000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 				10000, 650 },
				{ "optic_ACO_grn_smg", 								"", 				5000, 650 },
				{ "optic_MRCO", 									"", 				7000, 650 },
				{ "optic_Hamr", 									"", 				7500, 650 },
				{ "optic_Arco", 									"", 				7500, 650 },
				{ "optic_ERCO_blk_F", 								"", 				8000, 650 },
				{ "optic_DMS", 										"", 				8000, 650 },
				{ "optic_AMS", 										"", 				9000, 650 },
				{ "optic_KHS_blk", 									"", 				9000, 650 },
				{ "optic_SOS", 										"", 				10000, 650 },
				{ "muzzle_snds_L", 									"", 				5000, 650 },
				{ "muzzle_snds_M", 									"", 				6500, 650 },
				{ "muzzle_snds_58_blk_F", 							"", 				7000, 650 },
				{ "muzzle_snds_H", 									"", 				7500, 650 },
				{ "muzzle_snds_B", 									"", 				8000, 650 },
				{ "bipod_01_F_blk", 								"", 				7500, 650 },
				{ "acc_pointer_IR", 								"", 				5000, 100 },
				{ "acc_flashlight", 								"", 				4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 				5000, -1 },
				{ "SmokeShell", 									"", 				500, 100 },
				{ "ToolKit", 										"", 				5500, 100 },
				{ "FirstAidKit", 									"", 				1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  				3000, 100 },
				{ "Binocular", 										"", 				3000, 100 },
				{ "Rangefinder", 									"", 				9000, 100 },
				{ "ItemGPS", 										"", 				3500, 100 },
				{ "ItemMap", 										"", 				200, 100 },
				{ "ItemCompass", 									"", 				200, 100 },
				{ "ItemRadio", 										"", 				200, 100 },
				{ "ItemWatch", 										"", 				200, 100 },
				{ "Chemlight_blue", 								"", 				350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 				1500 },
				{ "30Rnd_9x21_Mag", 								"Sting", 				1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 			1500 },
				{ "20Rnd_556x45_UW_mag", 							"SDAR UW",	 			2000 },
				{ "30Rnd_556x45_Stanag", 				   			"", 					2000 },
				{ "30Rnd_580x42_Mag_F", 				   			"", 					2250 },
				{ "30Rnd_65x39_caseless_mag", 			   			"", 					2500 },
				{ "20Rnd_650x39_Cased_Mag_F", 			   			"", 					2500 },
				{ "100Rnd_65x39_caseless_mag", 			   			"", 					3000 },
				{ "20Rnd_762x51_Mag", 					   			"", 					4000 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen",			 1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 			1500 }
				
				
				};
		};
		
		class cop_7 {
			name = "Liga PD Inspector";
			side = "cop";
			license = "";
			token = "";
			level[] = { "life_coplevel", "SCALAR", 7 , "You must be a Inspector Rank!" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 				6500, 650 },
				{ "SMG_02_F", 										"", 				40000, 650 },
				{ "SMG_05_F", 										"", 				40000, 650 },
				{ "arifle_SDAR_F", 									"", 				50000, 650 },
				{ "arifle_SPAR_01_blk_F", 							"", 				55000, 650 },
				{ "arifle_TRG21_F", 								"", 				55000, 650 },
				{ "arifle_CTAR_blk_F", 					 			"", 				65000, 650 },
				{ "arifle_MXC_Black_F", 							"", 				70000, 650 },
				{ "arifle_MX_Black_F", 			 					"", 				75000, 650 },
				{ "arifle_ARX_blk_F", 								"", 				75000, 650 },
				{ "srifle_DMR_07_blk_F", 							"", 				75000, 650 },
				{ "arifle_MX_SW_Black_F", 							"", 				85000, 650 },
				{ "arifle_MXM_Black_F", 							"", 				85000, 650 },
				{ "srifle_EBR_F", 									"MK18 SWAT", 		90000, 650 },
				{ "srifle_DMR_03_F", 								"", 				90000, 650 },
				{ "srifle_DMR_06_olive_F", 							"", 				90000, 650 },
				{ "arifle_SPAR_03_blk_F", 							"", 				95000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 				10000, 650 },
				{ "optic_ACO_grn_smg", 								"", 					5000, 650 },
				{ "optic_MRCO", 									"", 				7000, 650 },
				{ "optic_Hamr", 									"", 				7500, 650 },
				{ "optic_Arco", 									"", 				7500, 650 },
				{ "optic_ERCO_blk_F", 								"", 				8000, 650 },
				{ "optic_DMS", 										"", 				8000, 650 },
				{ "optic_AMS", 										"", 				9000, 650 },
				{ "optic_KHS_blk", 									"", 				9000, 650 },
				{ "optic_SOS", 										"", 				10000, 650 },
				{ "optic_LRPS", 									"", 				15000, 650 },
				{ "muzzle_snds_L", 									"", 				5000, 650 },
				{ "muzzle_snds_M", 									"", 				6500, 650 },
				{ "muzzle_snds_58_blk_F", 							"", 				7000, 650 },
				{ "muzzle_snds_H", 									"", 				7500, 650 },
				{ "muzzle_snds_B", 									"", 				8000, 650 },
				{ "bipod_01_F_blk", 								"", 				7500, 650 },
				{ "acc_pointer_IR", 								"", 				5000, 100 },
				{ "acc_flashlight", 								"", 				4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 				5000, -1 },
				{ "SmokeShell", 									"", 				500, 100 },
				{ "ToolKit", 										"", 				5500, 100 },
				{ "FirstAidKit", 									"", 				1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  				3000, 100 },
				{ "Binocular", 										"", 				3000, 100 },
				{ "Rangefinder", 									"", 				9000, 100 },
				{ "B_UavTerminal", 									"UAV SWAT", 		15000, 100 },
				{ "ItemGPS", 										"", 				3500, 100 },
				{ "ItemMap", 										"", 				200, 100 },
				{ "ItemCompass", 									"", 				200, 100 },
				{ "ItemRadio", 										"", 				200, 100 },
				{ "ItemWatch", 										"", 				200, 100 },
				{ "Chemlight_blue", 								"", 				350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 				1500 },
				{ "30Rnd_9x21_Mag", 								"Sting", 				1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 			1500 },
				{ "20Rnd_556x45_UW_mag", 							"SDAR UW",	 			2000 },
				{ "30Rnd_556x45_Stanag", 				   			"", 					2000 },
				{ "30Rnd_580x42_Mag_F", 				   			"", 					2250 },
				{ "30Rnd_65x39_caseless_mag", 			   			"", 					2500 },
				{ "20Rnd_650x39_Cased_Mag_F", 			   			"", 					2500 },
				{ "100Rnd_65x39_caseless_mag", 			   			"", 					3000 },
				{ "20Rnd_762x51_Mag", 					   			"", 					4000 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen",			 1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 			1500 }
				
				
				};
		};
		
		class cop_8 {
			name = "Liga PD Deputy Chief";
			side = "cop";
			license = "";
			token = "";
			level[] = { "life_coplevel", "SCALAR", 8 , "You must be a Deputy Chief Rank!" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 					6500, 650 },
				{ "SMG_02_F", 										"", 					40000, 650 },
				{ "SMG_05_F", 										"", 					40000, 650 },
				{ "arifle_SDAR_F", 									"", 					50000, 650 },
				{ "arifle_SPAR_01_blk_F", 							"", 					55000, 650 },
				{ "arifle_TRG21_F", 								"", 					55000, 650 },
				{ "arifle_CTAR_blk_F", 					 			"", 					65000, 650 },
				{ "arifle_MXC_Black_F", 							"", 					70000, 650 },
				{ "arifle_MX_Black_F", 			 					"", 					75000, 650 },
				{ "arifle_ARX_blk_F", 								"", 					75000, 650 },
				{ "srifle_DMR_07_blk_F", 							"", 					75000, 650 },
				{ "arifle_MX_SW_Black_F", 							"", 					85000, 650 },
				{ "arifle_MXM_Black_F", 							"", 					85000, 650 },
				{ "srifle_EBR_F", 									"MK18 SWAT", 			90000, 650 },
				{ "srifle_DMR_03_F", 								"", 					90000, 650 },
				{ "srifle_DMR_06_olive_F", 							"", 					90000, 650 },
				{ "arifle_SPAR_03_blk_F", 							"", 					95000, 650 },
				{ "arifle_AK12_F", 									"AK12 SWAT", 			100000, 650 },
				{ "arifle_SPAR_02_blk_F", 							"Spar 16S SWAT", 		100000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 					10000, 650 },
				{ "optic_ACO_grn_smg", 								"", 					5000, 650 },
				{ "optic_MRCO", 									"", 					7000, 650 },
				{ "optic_Hamr", 									"", 					7500, 650 },
				{ "optic_Arco", 									"", 					7500, 650 },
				{ "optic_ERCO_blk_F", 								"", 					8000, 650 },
				{ "optic_DMS", 										"", 					8000, 650 },
				{ "optic_AMS", 										"", 					9000, 650 },
				{ "optic_KHS_blk", 									"", 					9000, 650 },
				{ "optic_SOS", 										"MOS SWAT", 			10000, 650 },
				{ "optic_LRPS", 									"LRPS SWAT", 			15000, 650 },
				{ "optic_NVS", 					 					"NSV SWAT", 			20000, 650 },
				{ "muzzle_snds_L", 									"", 					5000, 650 },
				{ "muzzle_snds_M", 									"", 					6500, 650 },
				{ "muzzle_snds_58_blk_F", 							"", 					7000, 650 },
				{ "muzzle_snds_H", 									"", 					7500, 650 },
				{ "muzzle_snds_B", 									"", 					8000, 650 },
				{ "bipod_01_F_blk", 								"", 					7500, 650 },
				{ "acc_pointer_IR", 								"", 					5000, 100 },
				{ "acc_flashlight", 								"", 					4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 					5000, -1 },
				{ "SmokeShell", 									"", 					500, 100 },
				{ "ToolKit", 										"", 					5500, 100 },
				{ "FirstAidKit", 									"", 					1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  					3000, 100 },
				{ "Binocular", 										"", 					3000, 100 },
				{ "Rangefinder", 									"", 					9000, 100 },
				{ "B_UavTerminal", 									"UAV SWAT", 			15000, 100 },
				{ "ItemGPS", 										"", 					3500, 100 },
				{ "ItemMap", 										"", 					200, 100 },
				{ "ItemCompass", 									"", 					200, 100 },
				{ "ItemRadio", 										"", 					200, 100 },
				{ "ItemWatch", 										"", 					200, 100 },
				{ "Chemlight_blue", 								"", 					350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 					1500 },
				{ "30Rnd_9x21_Mag", 								"Sting", 					1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 				1500 },
				{ "20Rnd_556x45_UW_mag", 							"SDAR UW",	 				2000 },
				{ "30Rnd_556x45_Stanag", 				   			"", 						2000 },
				{ "30Rnd_580x42_Mag_F", 				   			"", 						2250 },
				{ "30Rnd_65x39_caseless_mag", 			   			"", 						2500 },
				{ "20Rnd_650x39_Cased_Mag_F", 			   			"", 						2500 },
				{ "100Rnd_65x39_caseless_mag", 			   			"", 						3000 },
				{ "20Rnd_762x51_Mag", 					   			"", 						4000 },
				{ "30Rnd_762x39_Mag_F", 					   		"", 						5000 },
				{ "150Rnd_556x45_Drum_Mag_F", 						"", 						6000 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen",				 1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 				1500 }
				
				
				};
		};
		
		class cop_9 {
			name = "Liga PD Assistent Chief";
			side = "cop";
			license = "";
			token = "";
			level[] = { "life_coplevel", "SCALAR", 9 , "You must be a Assistent Chief Rank!" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 					6500, 650 },
				{ "SMG_02_F", 										"", 					40000, 650 },
				{ "SMG_05_F", 										"", 					40000, 650 },
				{ "arifle_SDAR_F", 									"", 					50000, 650 },
				{ "arifle_SPAR_01_blk_F", 							"", 					55000, 650 },
				{ "arifle_TRG21_F", 								"", 					55000, 650 },
				{ "arifle_CTAR_blk_F", 					 			"", 					65000, 650 },
				{ "arifle_MXC_Black_F", 							"", 					70000, 650 },
				{ "arifle_MX_Black_F", 			 					"", 					75000, 650 },
				{ "arifle_ARX_blk_F", 								"", 					75000, 650 },
				{ "srifle_DMR_07_blk_F", 							"", 					75000, 650 },
				{ "arifle_MX_SW_Black_F", 							"", 					85000, 650 },
				{ "arifle_MXM_Black_F", 							"", 					85000, 650 },
				{ "srifle_EBR_F", 									"MK18 SWAT", 			90000, 650 },
				{ "srifle_DMR_03_F", 								"", 					90000, 650 },
				{ "srifle_DMR_06_olive_F", 							"", 					90000, 650 },
				{ "arifle_SPAR_03_blk_F", 							"", 					95000, 650 },
				{ "arifle_AK12_F", 									"AK12 SWAT", 			100000, 650 },
				{ "arifle_SPAR_02_blk_F", 							"Spar 16S SWAT", 		150000, 650 },
				{ "srifle_DMR_05_blk_F", 							"Cyrus SWAT", 			250000, 650 },
				{ "LMG_03_F", 										"LIM 85 SWAT", 			200000, 650 },
				{ "srifle_GM6_F", 									"GM6 SWAT", 			500000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 					10000, 650 },
				{ "hgun_Pistol_heavy_01_snds_F", 					"4five SWAT", 			20000, 650 },
				{ "optic_MRD", 							  			"MRD SWAT", 			5000, 650 },
				{ "optic_ACO_grn_smg", 								"", 					5000, 650 },
				{ "optic_MRCO", 									"", 					7000, 650 },
				{ "optic_Hamr", 									"", 					7500, 650 },
				{ "optic_Arco", 									"", 					7500, 650 },
				{ "optic_ERCO_blk_F", 								"", 					8000, 650 },
				{ "optic_DMS", 										"", 					8000, 650 },
				{ "optic_AMS", 										"", 					9000, 650 },
				{ "optic_KHS_blk", 									"", 					9000, 650 },
				{ "optic_SOS", 										"MOS SWAT", 			10000, 650 },
				{ "optic_LRPS", 									"LRPS SWAT", 			15000, 650 },
				{ "optic_NVS", 					 					"NSV SWAT", 			20000, 650 },
				{ "muzzle_snds_L", 									"", 					5000, 650 },
				{ "muzzle_snds_M", 									"", 					6500, 650 },
				{ "muzzle_snds_58_blk_F", 							"", 					7000, 650 },
				{ "muzzle_snds_H", 									"", 					7500, 650 },
				{ "muzzle_snds_B", 									"", 					8000, 650 },
				{ "muzzle_snds_93mmg", 								"Cyrus SD SWAT", 		10000, 650 },
				{ "bipod_01_F_blk", 								"", 					7500, 650 },
				{ "acc_pointer_IR", 								"", 					5000, 100 },
				{ "acc_flashlight", 								"", 					4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 					5000, -1 },
				{ "SmokeShell", 									"", 					500, 100 },
				{ "ToolKit", 										"", 					5500, 100 },
				{ "FirstAidKit", 									"", 					1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  					3000, 100 },
				{ "Binocular", 										"", 					3000, 100 },
				{ "Rangefinder", 									"", 					9000, 100 },
				{ "B_UavTerminal", 									"UAV SWAT", 			15000, 100 },
				{ "ItemGPS", 										"", 					3500, 100 },
				{ "ItemMap", 										"", 					200, 100 },
				{ "ItemCompass", 									"", 					200, 100 },
				{ "ItemRadio", 										"", 					200, 100 },
				{ "ItemWatch", 										"", 					200, 100 },
				{ "Chemlight_blue", 								"", 					350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 					1500 },
				{ "30Rnd_9x21_Mag", 								"Sting Taser", 				1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 				1500 },
				{ "20Rnd_556x45_UW_mag", 							"SDAR UW",	 				2000 },
				{ "30Rnd_556x45_Stanag", 				   			"", 						2000 },
				{ "30Rnd_580x42_Mag_F", 				   			"", 						2250 },
				{ "30Rnd_65x39_caseless_mag", 			   			"", 						2500 },
				{ "20Rnd_650x39_Cased_Mag_F", 			   			"", 						2500 },
				{ "100Rnd_65x39_caseless_mag", 			   			"", 						3000 },
				{ "20Rnd_762x51_Mag", 					   			"", 						4000 },
				{ "30Rnd_762x39_Mag_F", 					   		"", 						5000 },
				{ "150Rnd_556x45_Drum_Mag_F", 						"",							6000 },
				{ "10Rnd_93x64_DMR_05_Mag", 						"", 						9000 },
				{ "200Rnd_556x45_Box_F", 							"", 						10000 },
				{ "5Rnd_127x108_APDS_Mag", 							"", 						25000 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen", 			1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 				1500 }
				
				
				};
		};
		
		class cop_10 {
			name = "Liga PD Chief of Department";
			side = "cop";
			license = "";
			token = "";
			level[] = { "life_coplevel", "SCALAR", 9 , "You must be a Chief of Department Rank!" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 					6500, 650 },
				{ "SMG_02_F", 										"", 					40000, 650 },
				{ "SMG_05_F", 										"", 					40000, 650 },
				{ "arifle_SDAR_F", 									"", 					50000, 650 },
				{ "arifle_SPAR_01_blk_F", 							"", 					55000, 650 },
				{ "arifle_TRG21_F", 								"", 					55000, 650 },
				{ "arifle_CTAR_blk_F", 					 			"", 					65000, 650 },
				{ "arifle_MXC_Black_F", 							"", 					70000, 650 },
				{ "arifle_MX_Black_F", 			 					"", 					75000, 650 },
				{ "arifle_ARX_blk_F", 								"", 					75000, 650 },
				{ "srifle_DMR_07_blk_F", 							"", 					75000, 650 },
				{ "arifle_MX_SW_Black_F", 							"", 					85000, 650 },
				{ "arifle_MXM_Black_F", 							"", 					85000, 650 },
				{ "srifle_EBR_F", 									"MK18 SWAT", 			90000, 650 },
				{ "srifle_DMR_03_F", 								"", 					90000, 650 },
				{ "srifle_DMR_06_olive_F", 							"", 					90000, 650 },
				{ "arifle_SPAR_03_blk_F", 							"", 					95000, 650 },
				{ "arifle_AK12_F", 									"AK12 SWAT", 			100000, 650 },
				{ "arifle_SPAR_02_blk_F", 							"Spar 16S SWAT", 		150000, 650 },
				{ "srifle_DMR_05_blk_F", 							"Cyrus SWAT", 			250000, 650 },
				{ "LMG_03_F", 										"LIM 85 SWAT", 			200000, 650 },
				{ "srifle_GM6_F", 									"GM6 SWAT", 			500000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 					10000, 650 },
				{ "hgun_Pistol_heavy_01_snds_F", 					"4five SWAT", 			20000, 650 },
				{ "optic_MRD", 							  			"MRD SWAT", 			5000, 650 },
				{ "optic_ACO_grn_smg", 								"", 					5000, 650 },
				{ "optic_MRCO", 									"", 					7000, 650 },
				{ "optic_Hamr", 									"", 					7500, 650 },
				{ "optic_Arco", 									"", 					7500, 650 },
				{ "optic_ERCO_blk_F", 								"", 					8000, 650 },
				{ "optic_DMS", 										"", 					8000, 650 },
				{ "optic_AMS", 										"", 					9000, 650 },
				{ "optic_KHS_blk", 									"", 					9000, 650 },
				{ "optic_SOS", 										"MOS SWAT", 			10000, 650 },
				{ "optic_LRPS", 									"LRPS SWAT", 			15000, 650 },
				{ "optic_NVS", 					 					"NSV SWAT", 			20000, 650 },
				{ "muzzle_snds_L", 									"", 					5000, 650 },
				{ "muzzle_snds_M", 									"", 					6500, 650 },
				{ "muzzle_snds_58_blk_F", 							"", 					7000, 650 },
				{ "muzzle_snds_H", 									"", 					7500, 650 },
				{ "muzzle_snds_B", 									"", 					8000, 650 },
				{ "muzzle_snds_93mmg", 								"Cyrus SD SWAT", 		10000, 650 },
				{ "bipod_01_F_blk", 								"", 					7500, 650 },
				{ "acc_pointer_IR", 								"", 					5000, 100 },
				{ "acc_flashlight", 								"", 					4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 					5000, -1 },
				{ "SmokeShell", 									"", 					500, 100 },
				{ "ToolKit", 										"", 					5500, 100 },
				{ "FirstAidKit", 									"", 					1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  					3000, 100 },
				{ "Binocular", 										"", 					3000, 100 },
				{ "Rangefinder", 									"", 					9000, 100 },
				{ "B_UavTerminal", 									"UAV SWAT", 			15000, 100 },
				{ "ItemGPS", 										"", 					3500, 100 },
				{ "ItemMap", 										"", 					200, 100 },
				{ "ItemCompass", 									"", 					200, 100 },
				{ "ItemRadio", 										"", 					200, 100 },
				{ "ItemWatch", 										"", 					200, 100 },
				{ "Chemlight_blue", 								"", 					350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 					1500 },
				{ "30Rnd_9x21_Mag", 								"Sting Taser", 				1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 				1500 },
				{ "20Rnd_556x45_UW_mag", 							"SDAR UW",	 				2000 },
				{ "30Rnd_556x45_Stanag", 				   			"", 						2000 },
				{ "30Rnd_580x42_Mag_F", 				   			"", 						2250 },
				{ "30Rnd_65x39_caseless_mag", 			   			"", 						2500 },
				{ "20Rnd_650x39_Cased_Mag_F", 			   			"", 						2500 },
				{ "100Rnd_65x39_caseless_mag", 			   			"", 						3000 },
				{ "20Rnd_762x51_Mag", 					   			"", 						4000 },
				{ "30Rnd_762x39_Mag_F", 					   		"", 						5000 },
				{ "150Rnd_556x45_Drum_Mag_F", 						"",							6000 },
				{ "10Rnd_93x64_DMR_05_Mag", 						"", 						9000 },
				{ "200Rnd_556x45_Box_F", 							"", 						10000 },
				{ "5Rnd_127x108_APDS_Mag", 							"", 						25000 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen", 			1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 				1500 }
				
				
				};
		};
		
		class cop_swat {
			name = "Liga PD - Spezialeinheit";
			side = "cop";
			license = "lco_swat";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "hgun_P07_snds_F", 							"Taser", 					6500, 650 },
				{ "SMG_02_F", 										"", 					40000, 650 },
				{ "SMG_05_F", 										"", 					40000, 650 },
				{ "arifle_SDAR_F", 									"", 					50000, 650 },
				{ "arifle_SPAR_01_blk_F", 							"", 					55000, 650 },
				{ "arifle_TRG21_F", 								"", 					55000, 650 },
				{ "arifle_CTAR_blk_F", 					 			"", 					65000, 650 },
				{ "arifle_MXC_Black_F", 							"", 					70000, 650 },
				{ "arifle_MX_Black_F", 			 					"", 					75000, 650 },
				{ "arifle_ARX_blk_F", 								"", 					75000, 650 },
				{ "srifle_DMR_07_blk_F", 							"", 					75000, 650 },
				{ "arifle_MX_SW_Black_F", 							"", 					85000, 650 },
				{ "arifle_MXM_Black_F", 							"", 					85000, 650 },
				{ "srifle_EBR_F", 									"MK18 SWAT", 			90000, 650 },
				{ "srifle_DMR_03_F", 								"", 					90000, 650 },
				{ "srifle_DMR_06_olive_F", 							"", 					90000, 650 },
				{ "arifle_SPAR_03_blk_F", 							"", 					95000, 650 },
				{ "arifle_AK12_F", 									"AK12 SWAT", 			100000, 650 },
				{ "arifle_SPAR_02_blk_F", 							"Spar 16S SWAT", 		150000, 650 },
				{ "srifle_DMR_05_blk_F", 							"Cyrus SWAT", 			250000, 650 },
				{ "LMG_03_F", 										"LIM 85 SWAT", 			200000, 650 },
				{ "srifle_GM6_F", 									"GM6 SWAT", 			500000, 650 },
				{ "hgun_Pistol_Signal_F", 							"", 					10000, 650 },
				{ "hgun_Pistol_heavy_01_snds_F", 					"4five SWAT", 			20000, 650 },
				{ "optic_MRD", 							  			"MRD SWAT", 			5000, 650 },
				{ "optic_ACO_grn_smg", 								"", 					5000, 650 },
				{ "optic_MRCO", 									"", 					7000, 650 },
				{ "optic_Hamr", 									"", 					7500, 650 },
				{ "optic_Arco", 									"", 					7500, 650 },
				{ "optic_ERCO_blk_F", 								"", 					8000, 650 },
				{ "optic_DMS", 										"", 					8000, 650 },
				{ "optic_AMS", 										"", 					9000, 650 },
				{ "optic_KHS_blk", 									"", 					9000, 650 },
				{ "optic_SOS", 										"MOS SWAT", 			10000, 650 },
				{ "optic_LRPS", 									"LRPS SWAT", 			15000, 650 },
				{ "optic_NVS", 					 					"NSV SWAT", 			20000, 650 },
				{ "muzzle_snds_L", 									"", 					5000, 650 },
				{ "muzzle_snds_M", 									"", 					6500, 650 },
				{ "muzzle_snds_58_blk_F", 							"", 					7000, 650 },
				{ "muzzle_snds_H", 									"", 					7500, 650 },
				{ "muzzle_snds_B", 									"", 					8000, 650 },
				{ "muzzle_snds_93mmg", 								"Cyrus SD SWAT", 		10000, 650 },
				{ "bipod_01_F_blk", 								"", 					7500, 650 },
				{ "acc_pointer_IR", 								"", 					5000, 100 },
				{ "acc_flashlight", 								"", 					4500, 100 },
				{ "HandGrenade_Stone", 					"Blendgranate", 					5000, -1 },
				{ "SmokeShell", 									"", 					500, 100 },
				{ "ToolKit", 										"", 					5500, 100 },
				{ "FirstAidKit", 									"", 					1500, 100 },
				{ "NVGoggles_OPFOR", 				"Nachtsicht schwarz",  					3000, 100 },
				{ "Binocular", 										"", 					3000, 100 },
				{ "Rangefinder", 									"", 					9000, 100 },
				{ "B_UavTerminal", 									"UAV SWAT", 			15000, 100 },
				{ "ItemGPS", 										"", 					3500, 100 },
				{ "ItemMap", 										"", 					200, 100 },
				{ "ItemCompass", 									"", 					200, 100 },
				{ "ItemRadio", 										"", 					200, 100 },
				{ "ItemWatch", 										"", 					200, 100 },
				{ "Chemlight_blue", 								"", 					350, 100 }
				
				
			};
			mags[] = {
				{ "16Rnd_9x21_Mag", 								"Taser", 					1500 },
				{ "30Rnd_9x21_Mag", 								"Sting/Taser", 				1500 },
				{ "30Rnd_9x21_Mag_SMG_02", 							"Protector", 				1500 },
				{ "20Rnd_556x45_UW_mag", 							"SDAR UW",	 				2000 },
				{ "30Rnd_556x45_Stanag", 				   			"", 						2000 },
				{ "30Rnd_580x42_Mag_F", 				   			"", 						2250 },
				{ "30Rnd_65x39_caseless_mag", 			   			"", 						2500 },
				{ "20Rnd_650x39_Cased_Mag_F", 			   			"", 						2500 },
				{ "100Rnd_65x39_caseless_mag", 			   			"", 						3000 },
				{ "20Rnd_762x51_Mag", 					   			"", 						4000 },
				{ "30Rnd_762x39_Mag_F", 					   		"", 						5000 },
				{ "150Rnd_556x45_Drum_Mag_F", 						"",							6000 },
				{ "10Rnd_93x64_DMR_05_Mag", 						"", 						9000 },
				{ "200Rnd_556x45_Box_F", 							"", 						10000 },
				{ "5Rnd_127x108_APDS_Mag", 							"", 						25000 },
				{ "6Rnd_GreenSignal_F", 							"Leucht Gruen", 			1500 },
				{ "6Rnd_RedSignal_F", 								"Leucht Rot", 				1500 }
				
				
				};
		};
		
		
		/* 	
			Admin hey, 
			Admin ho, 
			der Shop ist fertig,
			Griff ins Klo!
			
		*/	
		
		class admin {
			name = "Admin Shop";
			side = "";
			license = "";
			token = "";			
			level[] = { "life_adminlevel", "SCALAR", 3 , "Da musste schon Adminrechte haben! Mimimimi" };
			items[] = {
				{ "SMG_01_F", 										"",		 	10, 5 },
				{ "SMG_02_F", 										"",		 	10, 5 },
				{ "arifle_TRG21_F", 								"",		 	10, 5 },
				{ "arifle_TRG21_GL_F", 								"",		 	10, 5 },
				{ "arifle_Katiba_F", 								"", 		10, 5 },
				{ "arifle_Katiba_GL_F", 							"", 		10, 5 },
				{ "arifle_SDAR_F", 									"", 		10, 5 },
				{ "arifle_MX_F", 									"", 		10, 5 },
				{ "arifle_MX_khk_F", 								"", 		10, 5 },
				{ "arifle_MXC_F", 									"", 		10, 5 },
				{ "arifle_MXC_khk_F", 								"", 		10, 5 },
				{ "arifle_MXM_F",	 								"", 		10, 5 },
				{ "arifle_MXM_khk_F", 								"", 		10, 5 },
				{ "arifle_MX_SW_khk_F", 							"", 		10, 5 },
				{ "arifle_MX_SW_F", 								"", 		10, 5 },
				{ "arifle_MX_GL_F", 								"", 		10, 5 },
				{ "arifle_MX_GL_khk_F", 							"", 		10, 5 },
				{ "arifle_AK12_F", 									"", 		10, 5 },
				{ "arifle_AK12_GL_F",	 							"", 		10, 5 },
				{ "arifle_AKM_F", 									"", 		10, 5 },
				{ "arifle_AKS_F", 									"", 		10, 5 },
				{ "arifle_ARX_ghex_F", 								"", 		10, 5 },
				{ "arifle_ARX_hex_F", 								"", 		10, 5 },
				{ "arifle_CTAR_hex_F", 								"", 		10, 5 },
				{ "arifle_CTAR_GL_hex_F", 							"", 		10, 5 },
				{ "arifle_CTARS_hex_F", 							"", 		10, 5 },
				{ "arifle_CTAR_ghex_F", 							"", 		10, 5 },
				{ "arifle_CTAR_GL_ghex_F", 							"", 		10, 5 },
				{ "arifle_CTARS_ghex_F", 							"", 		10, 5 },
				{ "arifle_SPAR_01_khk_F", 							"", 		10, 5 },
				{ "arifle_SPAR_01_snd_F", 							"", 		10, 5 },
				{ "arifle_SPAR_01_GL_khk_F",						"", 		10, 5 },
				{ "arifle_SPAR_02_khk_F", 							"", 		10, 5 },
				{ "arifle_SPAR_02_snd_F", 							"", 		10, 5 },
				{ "arifle_SPAR_03_khk_F", 							"", 		10, 5 },
				{ "arifle_SPAR_03_snd_F", 							"", 		10, 5 },
				{ "LMG_03_F", 										"", 		10, 5 },
				{ "LMG_Zafir_F", 									"", 		10, 5 },
				{ "srifle_DMR_07_ghex_F", 							"", 		10, 5 },
				{ "srifle_DMR_07_hex_F", 							"", 		10, 5 },
				{ "srifle_DMR_06_camo_F", 							"", 		10, 5 },
				{ "srifle_DMR_06_olive_F", 							"", 		10, 5 },
				{ "srifle_EBR_F", 									"", 		10, 5 },
				{ "srifle_GM6_F", 									"", 		10, 5 },
				{ "srifle_GM6_ghex_F", 								"", 		10, 5 },
				{ "srifle_LRR_F", 									"", 		10, 5 },
				{ "srifle_LRR_tna_F", 								"", 		10, 5 },
				{ "srifle_DMR_05_tan_F", 							"", 		10, 5 },
				{ "srifle_DMR_05_hex_F", 							"", 		10, 5 },
				{ "srifle_DMR_05_blk_F", 							"", 		10, 5 },
				{ "optic_ACO_grn", 									"", 		10, 5 },
				{ "optic_Holosight", 								"", 		10, 5 },
				{ "optic_Holosight_khk_F", 							"", 		10, 5 },
				{ "optic_Holosight_smg_blk_F", 						"", 		10, 5 },
				{ "optic_Hamr", 									"", 		10, 5 },
				{ "optic_Hamr_khk_F", 								"", 		10, 5 },
				{ "optic_MRCO", 									"", 		10, 5 },
				{ "optic_ERCO_snd_F", 								"", 		10, 5 },
				{ "optic_Arco", 									"", 		10, 5 },
				{ "optic_Arco_ghex_F", 								"", 		10, 5 },
				{ "optic_SOS", 										"", 		10, 5 },
				{ "optic_LRPS_tna_F", 								"", 		10, 5 },
				{ "optic_LRPS_ghex_F", 								"", 		10, 5 },
				{ "optic_AMS", 										"", 		10, 5 },
				{ "optic_KHS_tan", 									"", 		10, 5 },
				{ "optic_DMS", 										"", 		10, 5 },
				{ "acc_pointer_IR", 								"", 		10, 5 },
				{ "acc_flashlight", 								"", 		10, 5 },
				{ "muzzle_snds_H", 									"", 		10, 5 },
				{ "muzzle_snds_acp", 								"", 		10, 5 },
				{ "muzzle_snds_65_TI_blk_F",		 				"", 		10, 5 },
				{ "muzzle_snds_58_wdm_F", 							"", 		10, 5 },
				{ "muzzle_snds_93mmg", 								"", 		10, 5 },
				{ "muzzle_snds_B_snd_F", 							"", 		10, 5 },
				{ "muzzle_snds_B_khk_F", 							"", 		10, 5 },
				{ "muzzle_snds_H_MG_khk_F", 						"", 		10, 5 },
				{ "muzzle_snds_65_TI_ghex_F", 						"", 		10, 5 },
				{ "muzzle_snds_65_TI_hex_F", 						"", 		10, 5 },
				{ "muzzle_snds_L", 									"", 		10, 5 },
				{ "muzzle_snds_M", 									"", 		10, 5 },
				{ "muzzle_snds_H", 									"", 		10, 5 },
				{ "muzzle_snds_B", 									"", 		10, 5 },
				{ "bipod_01_F_mtp", 								"", 		10, 5 },
				{ "bipod_02_F_hex", 								"", 		10, 5 },
				{ "bipod_01_F_blk", 								"", 		10, 5 },
				{ "bipod_02_F_tan", 								"", 		10, 5 },
				{ "bipod_03_F_oli", 								"", 		10, 5 },
				{ "bipod_01_F_khk", 								"", 		10, 5 }
				
				
			};
			mags[] = {
				{ "30Rnd_9x21_Mag", 								"", 		5 },
				{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", 			"", 		5 },
				{ "30Rnd_45ACP_Mag_SMG_01", 						"", 		5 },
				{ "30Rnd_556x45_Stanag", 							"", 		5 },
				{ "30Rnd_762x39_Mag_F", 							"", 		5 },
				{ "30Rnd_762x39_Mag_Green_F", 						"", 		5 },
				{ "30Rnd_762x39_Mag_Tracer_F", 						"", 		5 },
				{ "30Rnd_762x39_Mag_Tracer_Green_F", 				"", 		5 },
				
				
				{ "20Rnd_650x39_Cased_Mag_F", 						"", 		5 },
				
				{ "200Rnd_556x45_Box_F", 							"", 		5 },
				{ "200Rnd_556x45_Box_Red_F", 						"", 		5 },
				{ "200Rnd_556x45_Box_Tracer_F", 					"", 		5 },
				{ "200Rnd_556x45_Box_Tracer_Red_F", 				"", 		5 },
				
				{ "150Rnd_556x45_Drum_Mag_F", 						"", 		5 },
				{ "150Rnd_556x45_Drum_Mag_Tracer_F", 				"", 		5 },
				
				{ "30Rnd_580x42_Mag_F", 							"", 		5 },
				{ "30Rnd_580x42_Mag_Tracer_F", 						"", 		5 },
				
				{ "100Rnd_580x42_Mag_F", 							"", 		5 },
				{ "100Rnd_580x42_Mag_Tracer_F", 					"", 		5 },
				
				
				{ "10Rnd_762x54_Mag", 								"", 		5 },
				{ "30Rnd_545x39_Mag_F", 							"", 		5 },
				{ "30Rnd_545x39_Mag_Green_F", 						"", 		5 },
				{ "30Rnd_545x39_Mag_Tracer_Green_F", 				"", 		5 },
				{ "30Rnd_65x39_caseless_green", 					"", 		5 },
				{ "30Rnd_65x39_caseless_mag_Tracer",		 		"", 		5 },
				{ "30Rnd_65x39_caseless_mag", 						"", 		5 },
				{ "100Rnd_65x39_caseless_mag_Tracer",		 		"", 		5 },
				{ "100Rnd_65x39_caseless_mag", 						"", 		5 },
				{ "20Rnd_762x51_Mag", 								"", 		5 },
				{ "150Rnd_762x54_Box", 								"", 		5 },
				{ "150Rnd_762x54_Box_Tracer", 						"", 		5 },
				{ "5Rnd_127x108_Mag", 								"", 		5 },
				{ "5Rnd_127x108_APDS_Mag", 							"", 		5 },
				{ "10Rnd_93x64_DMR_05_Mag", 						"", 		5 },
				{ "7Rnd_408_Mag", 									"", 		5 },
				{ "1Rnd_Smoke_Grenade_shell", 						"", 		5 },
				{ "1Rnd_SmokeGreen_Grenade_shell", 					"", 		5 },
				{ "1Rnd_SmokePurple_Grenade_shell", 				"", 		5 },
				{ "1Rnd_SmokeBlue_Grenade_shell", 					"", 		5 },
				{ "1Rnd_SmokeOrange_Grenade_shell", 				"", 		5 },
				{ "20Rnd_556x45_UW_mag", 							"", 		5 }
			};
		};
		
		
		
		class token {
			name = "Event Shop";
			side = "";
			license = "";
			token = "tokenc1";
			level[] = { "", "", -1 , "" };
			items[] = {
				{ "SMG_01_F", 										"",		 	10, 5 },
				{ "SMG_02_F", 										"",		 	10, 5 },
				{ "arifle_TRG21_F", 								"",		 	10, 5 },
				{ "arifle_TRG21_GL_F", 								"",		 	10, 5 },
				{ "arifle_Katiba_F", 								"", 		10, 5 },
				{ "arifle_Katiba_GL_F", 							"", 		10, 5 },
				{ "arifle_SDAR_F", 									"", 		10, 5 },
				{ "arifle_MX_F", 									"", 		10, 5 },
				{ "arifle_MX_khk_F", 								"", 		10, 5 },
				{ "arifle_MXC_F", 									"", 		10, 5 },
				{ "arifle_MXC_khk_F", 								"", 		10, 5 },
				{ "arifle_MXM_F",	 								"", 		10, 5 },
				{ "arifle_MXM_khk_F", 								"", 		10, 5 },
				{ "arifle_MX_SW_khk_F", 							"", 		10, 5 },
				{ "arifle_MX_SW_F", 								"", 		10, 5 },
				{ "arifle_MX_GL_F", 								"", 		10, 5 },
				{ "arifle_MX_GL_khk_F", 							"", 		10, 5 },
				{ "arifle_AK12_F", 									"", 		10, 5 },
				{ "arifle_AK12_GL_F",	 							"", 		10, 5 },
				{ "arifle_AKM_F", 									"", 		10, 5 },
				{ "arifle_AKS_F", 									"", 		10, 5 },
				{ "arifle_ARX_ghex_F", 								"", 		10, 5 },
				{ "arifle_ARX_hex_F", 								"", 		10, 5 },
				{ "arifle_CTAR_hex_F", 								"", 		10, 5 },
				{ "arifle_CTAR_GL_hex_F", 							"", 		10, 5 },
				{ "arifle_CTARS_hex_F", 							"", 		10, 5 },
				{ "arifle_CTAR_ghex_F", 							"", 		10, 5 },
				{ "arifle_CTAR_GL_ghex_F", 							"", 		10, 5 },
				{ "arifle_CTARS_ghex_F", 							"", 		10, 5 },
				{ "arifle_SPAR_01_khk_F", 							"", 		10, 5 },
				{ "arifle_SPAR_01_snd_F", 							"", 		10, 5 },
				{ "arifle_SPAR_01_GL_khk_F",						"", 		10, 5 },
				{ "arifle_SPAR_02_khk_F", 							"", 		10, 5 },
				{ "arifle_SPAR_02_snd_F", 							"", 		10, 5 },
				{ "arifle_SPAR_03_khk_F", 							"", 		10, 5 },
				{ "arifle_SPAR_03_snd_F", 							"", 		10, 5 },
				{ "LMG_03_F", 										"", 		10, 5 },
				{ "LMG_Zafir_F", 									"", 		10, 5 },
				{ "srifle_DMR_07_ghex_F", 							"", 		10, 5 },
				{ "srifle_DMR_07_hex_F", 							"", 		10, 5 },
				{ "srifle_DMR_06_camo_F", 							"", 		10, 5 },
				{ "srifle_DMR_06_olive_F", 							"", 		10, 5 },
				{ "srifle_EBR_F", 									"", 		10, 5 },
				{ "srifle_GM6_F", 									"", 		10, 5 },
				{ "srifle_GM6_ghex_F", 								"", 		10, 5 },
				{ "srifle_LRR_F", 									"", 		10, 5 },
				{ "srifle_LRR_tna_F", 								"", 		10, 5 },
				{ "srifle_DMR_05_tan_F", 							"", 		10, 5 },
				{ "srifle_DMR_05_hex_F", 							"", 		10, 5 },
				{ "srifle_DMR_05_blk_F", 							"", 		10, 5 },
				{ "optic_ACO_grn", 									"", 		10, 5 },
				{ "optic_Holosight", 								"", 		10, 5 },
				{ "optic_Holosight_khk_F", 							"", 		10, 5 },
				{ "optic_Holosight_smg_blk_F", 						"", 		10, 5 },
				{ "optic_Hamr", 									"", 		10, 5 },
				{ "optic_Hamr_khk_F", 								"", 		10, 5 },
				{ "optic_MRCO", 									"", 		10, 5 },
				{ "optic_ERCO_snd_F", 								"", 		10, 5 },
				{ "optic_Arco", 									"", 		10, 5 },
				{ "optic_Arco_ghex_F", 								"", 		10, 5 },
				{ "optic_SOS", 										"", 		10, 5 },
				{ "optic_LRPS_tna_F", 								"", 		10, 5 },
				{ "optic_LRPS_ghex_F", 								"", 		10, 5 },
				{ "optic_AMS", 										"", 		10, 5 },
				{ "optic_KHS_tan", 									"", 		10, 5 },
				{ "optic_DMS", 										"", 		10, 5 },
				{ "acc_pointer_IR", 								"", 		10, 5 },
				{ "acc_flashlight", 								"", 		10, 5 },
				{ "muzzle_snds_H", 									"", 		10, 5 },
				{ "muzzle_snds_acp", 								"", 		10, 5 },
				{ "muzzle_snds_65_TI_blk_F",		 				"", 		10, 5 },
				{ "muzzle_snds_58_wdm_F", 							"", 		10, 5 },
				{ "muzzle_snds_93mmg", 								"", 		10, 5 },
				{ "muzzle_snds_B_snd_F", 							"", 		10, 5 },
				{ "muzzle_snds_B_khk_F", 							"", 		10, 5 },
				{ "muzzle_snds_H_MG_khk_F", 						"", 		10, 5 },
				{ "muzzle_snds_65_TI_ghex_F", 						"", 		10, 5 },
				{ "muzzle_snds_65_TI_hex_F", 						"", 		10, 5 },
				{ "muzzle_snds_L", 									"", 		10, 5 },
				{ "muzzle_snds_M", 									"", 		10, 5 },
				{ "muzzle_snds_H", 									"", 		10, 5 },
				{ "muzzle_snds_B", 									"", 		10, 5 },
				{ "bipod_01_F_mtp", 								"", 		10, 5 },
				{ "bipod_02_F_hex", 								"", 		10, 5 },
				{ "bipod_01_F_blk", 								"", 		10, 5 },
				{ "bipod_02_F_tan", 								"", 		10, 5 },
				{ "bipod_03_F_oli", 								"", 		10, 5 },
				{ "bipod_01_F_khk", 								"", 		10, 5 }
				
				
			};
			mags[] = {
				{ "30Rnd_9x21_Mag", 								"", 		5 },
				{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", 			"", 		5 },
				{ "30Rnd_45ACP_Mag_SMG_01", 						"", 		5 },
				{ "30Rnd_556x45_Stanag", 							"", 		5 },
				{ "30Rnd_762x39_Mag_F", 							"", 		5 },
				{ "30Rnd_762x39_Mag_Green_F", 						"", 		5 },
				{ "30Rnd_762x39_Mag_Tracer_F", 						"", 		5 },
				{ "30Rnd_762x39_Mag_Tracer_Green_F", 				"", 		5 },
				
				
				{ "20Rnd_650x39_Cased_Mag_F", 						"", 		5 },
				
				{ "200Rnd_556x45_Box_F", 							"", 		5 },
				{ "200Rnd_556x45_Box_Red_F", 						"", 		5 },
				{ "200Rnd_556x45_Box_Tracer_F", 					"", 		5 },
				{ "200Rnd_556x45_Box_Tracer_Red_F", 				"", 		5 },
				
				{ "150Rnd_556x45_Drum_Mag_F", 						"", 		5 },
				{ "150Rnd_556x45_Drum_Mag_Tracer_F", 				"", 		5 },
				
				{ "30Rnd_580x42_Mag_F", 							"", 		5 },
				{ "30Rnd_580x42_Mag_Tracer_F", 						"", 		5 },
				
				{ "100Rnd_580x42_Mag_F", 							"", 		5 },
				{ "100Rnd_580x42_Mag_Tracer_F", 					"", 		5 },
				
				
				{ "10Rnd_762x54_Mag", 								"", 		5 },
				{ "30Rnd_545x39_Mag_F", 							"", 		5 },
				{ "30Rnd_545x39_Mag_Green_F", 						"", 		5 },
				{ "30Rnd_545x39_Mag_Tracer_Green_F", 				"", 		5 },
				{ "30Rnd_65x39_caseless_green", 					"", 		5 },
				{ "30Rnd_65x39_caseless_mag_Tracer",		 		"", 		5 },
				{ "30Rnd_65x39_caseless_mag", 						"", 		5 },
				{ "100Rnd_65x39_caseless_mag_Tracer",		 		"", 		5 },
				{ "100Rnd_65x39_caseless_mag", 						"", 		5 },
				{ "20Rnd_762x51_Mag", 								"", 		5 },
				{ "150Rnd_762x54_Box", 								"", 		5 },
				{ "150Rnd_762x54_Box_Tracer", 						"", 		5 },
				{ "5Rnd_127x108_Mag", 								"", 		5 },
				{ "5Rnd_127x108_APDS_Mag", 							"", 		5 },
				{ "10Rnd_93x64_DMR_05_Mag", 						"", 		5 },
				{ "7Rnd_408_Mag", 									"", 		5 },
				{ "1Rnd_Smoke_Grenade_shell", 						"", 		5 },
				{ "1Rnd_SmokeGreen_Grenade_shell", 					"", 		5 },
				{ "1Rnd_SmokePurple_Grenade_shell", 				"", 		5 },
				{ "1Rnd_SmokeBlue_Grenade_shell", 					"", 		5 },
				{ "1Rnd_SmokeOrange_Grenade_shell", 				"", 		5 },
				{ "20Rnd_556x45_UW_mag", 							"", 		5 }
			};
		};
		
		
		
		//LRK Shops
		class med_basic {
			name = "Medizinisches Zubehör";
			side = "med";
			license = "";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "ToolKit", 										"", 		5500, 100 },
				{ "FirstAidKit", 									"", 		1500, 100 },
				{ "Medikit", 										"", 		2500, 100 },
				{ "NVGoggles", 										"", 		3500, 100 },
				{ "Binocular", 										"", 		3000, 100 },
				{ "ItemGPS", 										"", 		3500, 100 },
				{ "ItemMap", 										"", 		200, 100 },
				{ "ItemCompass", 									"", 		200, 100 },
				{ "ItemRadio", 										"", 		200, 100 },
				{ "ItemWatch", 										"", 		200, 100 },
				{ "Chemlight_red", 									"", 		350, 100 },
				{ "SmokeShellRed", 									"", 		7000, 100 }
				
			};
			mags[] = {};
		};
		
		//ALAC Shops
		class adac_basic {
			name = "ALAC Zubehör";
			side = "alac";
			license = "";
			token = "";
			level[] = { "", "", -1, "" };
			items[] = {
				{ "ToolKit", 										"", 		1500, 100 },
				{ "FirstAidKit", 									"", 		1500, 100 },
				{ "NVGoggles", 										"", 		1500, 100 },
				{ "Binocular", 										"", 		1500, 100 },
				{ "ItemGPS", 										"", 		1500, 100 },
				{ "ItemMap", 										"", 		200, 100 },
				{ "ItemCompass", 									"", 		200, 100 },
				{ "ItemRadio", 										"", 		200, 100 },
				{ "ItemWatch", 										"", 		200, 100 },
				{ "Chemlight_yellow", 								"", 		350, 100 },
				{ "SmokeShellYellow", 								"", 		3000, 100 }
			};
			mags[] = {};
		};
	};	
/*
|<-
*/	
class WeaponWH {
	class WH_1 {	/* Platz für mehrere Configs (WH_1,WH_2 usw.) */
		/*	Waffen	*/
				SMG_02_F[]					=	{"c2"	,	6	};
				SMG_01_F[]					=	{"c2"	,	6	};
				arifle_TRG21_GL_F[]			=	{"c2"	,	6	};
				arifle_TRG21_F[]			=	{"c2"	,	6	};
				arifle_AKS_F[]				=	{"c2"	,	6	};
				arifle_Mk20_F[]				=	{"c2"	,	6	};
				arifle_Mk20C_F[]			=	{"c2"	,	6	};
				arifle_SDAR_F[]				=	{"c2"	,	8	};
				arifle_MXC_F[]				=	{"c2"	,	10	};
				arifle_MXC_khk_F[]			=	{"c2"	,	10	};
				arifle_MX_F[]				=	{"c2"	,	14	};
				arifle_MX_khk_F[]			=	{"c2"	,	14	};
				arifle_Katiba_C_F[]			=	{"c2"	,	15	};
				arifle_Katiba_F[]			=	{"c2"	,	15	};
				arifle_Katiba_GL_F[]		=	{"c2"	,	15	};
				arifle_MXM_F[]				=	{"c2"	,	15	};
				arifle_MXM_khk_F[]			=	{"c2"	,	15	};
				arifle_MX_SW_F[]			=	{"c2"	,	18	};
				arifle_MX_SW_khk_F[]		=	{"c2"	,	18	};
				arifle_MX_GL_F[]			=	{"c2"	,	18	};
				arifle_MX_GL_khk_F[]		=	{"c2"	,	18	};
				arifle_AKM_F[]				=	{"c2"	,	21	};
				srifle_EBR_F[]				=	{"c2"	,	21	};
				arifle_AK12_F[]				=	{"c2"	,	25	};
				arifle_AK12_GL_F[]			=	{"c2"	,	25	};
				LMG_Zafir_F[]				=	{"c2"	,	53	};
				srifle_DMR_01_F[]			=	{"c2"	,	30	};
				srifle_DMR_06_olive_F[]		=	{"c2"	,	30	};
				srifle_DMR_06_camo_F[]		=	{"c2"	,	30	};
				srifle_DMR_07_hex_F[]		=	{"c2"	,	30	};
				srifle_DMR_07_ghex_F[]		=	{"c2"	,	30	};
				LMG_03_F[]					=	{"c2"	,	30	};
				arifle_ARX_ghex_F[]			=	{"c2"	,	30	};
				arifle_ARX_hex_F[]			=	{"c2"	,	30	};
				arifle_CTAR_hex_F[]			=	{"c2"	,	30	};
				arifle_CTAR_GL_hex_F[]		=	{"c2"	,	30	};
				arifle_CTARS_hex_F[]		=	{"c2"	,	30	};
				arifle_CTAR_ghex_F[]		=	{"c2"	,	30	};
				arifle_CTAR_GL_ghex_F[]		=	{"c2"	,	30	};
				arifle_CTARS_ghex_F[]		=	{"c2"	,	30	};
				srifle_DMR_03_F[]			=	{"c2"	,	34	};
				arifle_SPAR_01_khk_F[]		=	{"c2"	,	34	};
				arifle_SPAR_01_snd_F[]		=	{"c2"	,	34	};
				arifle_SPAR_01_GL_khk_F[]	=	{"c2"	,	34	};
				arifle_SPAR_02_khk_F[]		=	{"c2"	,	37	};
				arifle_SPAR_02_snd_F[]		=	{"c2"	,	37	};
				arifle_SPAR_03_khk_F[]		=	{"c2"	,	39	};
				arifle_SPAR_03_snd_F[]		=	{"c2"	,	39	};
				srifle_DMR_02_F[]			=	{"c2"	,	42	};
				MMG_02_black_F[]			=	{"c2"	,	57	};
				srifle_DMR_05_blk_F[]		=	{"c2"	,	48	};
				MMG_01_hex_F[]				=	{"c2"	,	60	};
				srifle_DMR_04_F[]			=	{"c2"	,	54	};
				srifle_GM6_F[]				=	{"c2"	,	65	};
				srifle_LRR_F[]				=	{"c2"	,	65	};
				srifle_LRR_tna_F[]			=	{"c2"	,	65	};
				srifle_GM6_ghex_F[]			=	{"c2"	,	65	};
			/*	Alte Config ENDE */
			
			
			/* Munition */
			/*	
				
				200Rnd_556x45_Box_F[]					=	{"c1"	,	5	};
				200Rnd_556x45_Box_Red_F[]				=	{"c1"	,	6	};
				200Rnd_556x45_Box_Tracer_F[]			=	{"c1"	,	6	};
				200Rnd_556x45_Box_Tracer_Red_F[]		=	{"c1"	,	6	};
				
				20Rnd_650x39_Cased_Mag_F[]				=	{"c1"	,	1	};
				
				30Rnd_580x42_Mag_F[]					=	{"c1"	,	1	};
				30Rnd_580x42_Mag_Tracer_F[]				=	{"c1"	,	1	};
				
				30Rnd_45ACP_Mag_SMG_01_tracer_green[]	=	{"c1"	,	1	};
				30Rnd_45ACP_Mag_SMG_01[]				=	{"c1"	,	1	};
				30Rnd_556x45_Stanag_Tracer_Red[]		=	{"c1"	,	2	};
				30Rnd_556x45_Stanag_Tracer_Green[]		=	{"c1"	,	2	};
				30Rnd_556x45_Stanag_Tracer_Yellow[]		=	{"c1"	,	2	};
				30Rnd_556x45_Stanag[]					=	{"c1"	,	2	};
				20Rnd_556x45_UW_mag[]					=	{"c1"	,	2	};
				30Rnd_65x39_caseless_green[]			=	{"c1"	,	3	};
				30Rnd_65x39_caseless_mag_Tracer[]		=	{"c1"	,	3	};
				30Rnd_65x39_caseless_mag[]				=	{"c1"	,	3	};
				100Rnd_65x39_caseless_mag_Tracer[]		=	{"c1"	,	3	};
				100Rnd_65x39_caseless_mag[]				=	{"c1"	,	3	};
				
				150Rnd_556x45_Drum_Mag_F[]					=	{"c1"	,	4	};
				150Rnd_556x45_Drum_Mag_Tracer_F[]			=	{"c1"	,	3	};
				
				10Rnd_762x54_Mag[]						=	{"c1"	,	3	};
				20Rnd_762x51_Mag[]						=	{"c1"	,	3	};
				30Rnd_762x39_Mag_F[]					=	{"c1"	,	3	};
				30Rnd_762x39_Mag_Green_F[]				=	{"c1"	,	3	};
				30Rnd_762x39_Mag_Tracer_F[]				=	{"c1"	,	3	};
				30Rnd_762x39_Mag_Tracer_Green_F[]		=	{"c1"	,	3	};
				150Rnd_762x54_Box[]						=	{"c1"	,	5	};
				150Rnd_762x54_Box_Tracer[]				=	{"c1"	,	3	};
				
			
				
				10Rnd_338_Mag[]							=	{"c1"	,	8	};
				130Rnd_338_Mag[]						=	{"c1"	,	10	};
				150Rnd_93x64_Mag[]						=	{"c1"	,	12	};
				10Rnd_93x64_DMR_05_Mag[]				=	{"c1"	,	10	};
				10Rnd_127x54_Mag[]						=	{"c1"	,	12	};
				5Rnd_127x108_Mag[]						=	{"c1"	,	12	};
				5Rnd_127x108_APDS_Mag[]					=	{"c1"	,	13	};
				7Rnd_408_Mag[]							=	{"c1"	,	10	};
			*/	
			/*	Alte Config ENDE */		
		
	};

	class WH_4 {	/* Platz für mehrere Configs (WH_1,WH_2 usw.) */
		/*	Waffen	*/
				SMG_02_F[]					=	{"c2"	,	6	};
				SMG_01_F[]					=	{"c2"	,	6	};
				arifle_TRG21_GL_F[]			=	{"c2"	,	6	};
				arifle_TRG21_F[]			=	{"c2"	,	6	};
				arifle_AKS_F[]				=	{"c2"	,	6	};
				arifle_Mk20_F[]				=	{"c2"	,	6	};
				arifle_Mk20C_F[]			=	{"c2"	,	6	};
				arifle_SDAR_F[]				=	{"c2"	,	8	};
				arifle_MXC_F[]				=	{"c2"	,	10	};
				arifle_MXC_khk_F[]			=	{"c2"	,	10	};
				arifle_MX_F[]				=	{"c2"	,	14	};
				arifle_MX_khk_F[]			=	{"c2"	,	14	};
				arifle_Katiba_C_F[]			=	{"c2"	,	15	};
				arifle_Katiba_F[]			=	{"c2"	,	15	};
				arifle_Katiba_GL_F[]		=	{"c2"	,	15	};
				arifle_MXM_F[]				=	{"c2"	,	15	};
				arifle_MXM_khk_F[]			=	{"c2"	,	15	};
				arifle_MX_SW_F[]			=	{"c2"	,	18	};
				arifle_MX_SW_khk_F[]		=	{"c2"	,	18	};
				arifle_MX_GL_F[]			=	{"c2"	,	18	};
				arifle_MX_GL_khk_F[]		=	{"c2"	,	18	};
				arifle_AKM_F[]				=	{"c2"	,	21	};
				srifle_EBR_F[]				=	{"c2"	,	21	};
				arifle_AK12_F[]				=	{"c2"	,	25	};
				arifle_AK12_GL_F[]			=	{"c2"	,	25	};
				LMG_Zafir_F[]				=	{"c2"	,	53	};
				srifle_DMR_01_F[]			=	{"c2"	,	30	};
				srifle_DMR_06_olive_F[]		=	{"c2"	,	30	};
				srifle_DMR_06_camo_F[]		=	{"c2"	,	30	};
				srifle_DMR_07_hex_F[]		=	{"c2"	,	30	};
				srifle_DMR_07_ghex_F[]		=	{"c2"	,	30	};
				LMG_03_F[]					=	{"c2"	,	30	};
				arifle_ARX_ghex_F[]			=	{"c2"	,	30	};
				arifle_ARX_hex_F[]			=	{"c2"	,	30	};
				arifle_CTAR_hex_F[]			=	{"c2"	,	30	};
				arifle_CTAR_GL_hex_F[]		=	{"c2"	,	30	};
				arifle_CTARS_hex_F[]		=	{"c2"	,	30	};
				arifle_CTAR_ghex_F[]		=	{"c2"	,	30	};
				arifle_CTAR_GL_ghex_F[]		=	{"c2"	,	30	};
				arifle_CTARS_ghex_F[]		=	{"c2"	,	30	};
				srifle_DMR_03_F[]			=	{"c2"	,	34	};
				arifle_SPAR_01_khk_F[]		=	{"c2"	,	34	};
				arifle_SPAR_01_snd_F[]		=	{"c2"	,	34	};
				arifle_SPAR_01_GL_khk_F[]	=	{"c2"	,	34	};
				arifle_SPAR_02_khk_F[]		=	{"c2"	,	37	};
				arifle_SPAR_02_snd_F[]		=	{"c2"	,	37	};
				arifle_SPAR_03_khk_F[]		=	{"c2"	,	39	};
				arifle_SPAR_03_snd_F[]		=	{"c2"	,	39	};
				srifle_DMR_02_F[]			=	{"c2"	,	42	};
				MMG_02_black_F[]			=	{"c2"	,	57	};
				srifle_DMR_05_blk_F[]		=	{"c2"	,	48	};
				MMG_01_hex_F[]				=	{"c2"	,	60	};
				srifle_DMR_04_F[]			=	{"c2"	,	54	};
				srifle_GM6_F[]				=	{"c2"	,	65	};
				srifle_LRR_F[]				=	{"c2"	,	65	};
				srifle_LRR_tna_F[]			=	{"c2"	,	65	};
				srifle_GM6_ghex_F[]			=	{"c2"	,	65	};
			/*	Alte Config ENDE */
			
			
			/* Munition */
			/*	
				
				200Rnd_556x45_Box_F[]					=	{"c1"	,	5	};
				200Rnd_556x45_Box_Red_F[]				=	{"c1"	,	6	};
				200Rnd_556x45_Box_Tracer_F[]			=	{"c1"	,	6	};
				200Rnd_556x45_Box_Tracer_Red_F[]		=	{"c1"	,	6	};
				
				20Rnd_650x39_Cased_Mag_F[]				=	{"c1"	,	1	};
				
				30Rnd_580x42_Mag_F[]					=	{"c1"	,	1	};
				30Rnd_580x42_Mag_Tracer_F[]				=	{"c1"	,	1	};
				
				30Rnd_45ACP_Mag_SMG_01_tracer_green[]	=	{"c1"	,	1	};
				30Rnd_45ACP_Mag_SMG_01[]				=	{"c1"	,	1	};
				30Rnd_556x45_Stanag_Tracer_Red[]		=	{"c1"	,	2	};
				30Rnd_556x45_Stanag_Tracer_Green[]		=	{"c1"	,	2	};
				30Rnd_556x45_Stanag_Tracer_Yellow[]		=	{"c1"	,	2	};
				30Rnd_556x45_Stanag[]					=	{"c1"	,	2	};
				20Rnd_556x45_UW_mag[]					=	{"c1"	,	2	};
				30Rnd_65x39_caseless_green[]			=	{"c1"	,	3	};
				30Rnd_65x39_caseless_mag_Tracer[]		=	{"c1"	,	3	};
				30Rnd_65x39_caseless_mag[]				=	{"c1"	,	3	};
				100Rnd_65x39_caseless_mag_Tracer[]		=	{"c1"	,	3	};
				100Rnd_65x39_caseless_mag[]				=	{"c1"	,	3	};
				
				150Rnd_556x45_Drum_Mag_F[]					=	{"c1"	,	4	};
				150Rnd_556x45_Drum_Mag_Tracer_F[]			=	{"c1"	,	3	};
				
				10Rnd_762x54_Mag[]						=	{"c1"	,	3	};
				20Rnd_762x51_Mag[]						=	{"c1"	,	3	};
				30Rnd_762x39_Mag_F[]					=	{"c1"	,	3	};
				30Rnd_762x39_Mag_Green_F[]				=	{"c1"	,	3	};
				30Rnd_762x39_Mag_Tracer_F[]				=	{"c1"	,	3	};
				30Rnd_762x39_Mag_Tracer_Green_F[]		=	{"c1"	,	3	};
				150Rnd_762x54_Box[]						=	{"c1"	,	5	};
				150Rnd_762x54_Box_Tracer[]				=	{"c1"	,	3	};
				
			
				
				10Rnd_338_Mag[]							=	{"c1"	,	8	};
				130Rnd_338_Mag[]						=	{"c1"	,	10	};
				150Rnd_93x64_Mag[]						=	{"c1"	,	12	};
				10Rnd_93x64_DMR_05_Mag[]				=	{"c1"	,	10	};
				10Rnd_127x54_Mag[]						=	{"c1"	,	12	};
				5Rnd_127x108_Mag[]						=	{"c1"	,	12	};
				5Rnd_127x108_APDS_Mag[]					=	{"c1"	,	13	};
				7Rnd_408_Mag[]							=	{"c1"	,	10	};
			*/	
			/*	Alte Config ENDE */		
		
	};
	
};


				/*

				{ "LMG_Zafir_F", 									"", 		1200000, 7500 },
				{ "srifle_DMR_07_ghex_F", 							"", 		850000, 7500 },
				{ "srifle_DMR_07_hex_F", 							"", 		850000, 7500 },
				{ "srifle_DMR_06_camo_F", 							"", 		975000, 7500 },
				{ "srifle_DMR_06_olive_F", 							"", 		975000, 7500 },
				{ "srifle_EBR_F", 									"", 		950000, 7500 },
				{ "srifle_GM6_F", 									"", 		3190000, 7500 },
				{ "srifle_GM6_ghex_F", 								"", 		3190000, 7500 },
				{ "srifle_LRR_F", 									"", 		3190000, 7500 },
				{ "srifle_LRR_tna_F", 								"", 		3190000, 7500 },
				
				
				
				
				
				*/



		/* 	Da hat der Zoran frech und frei,
			in blanker Raserei,
			geschwind eins, zwei, drei,
			die Config gemacht! Eieiei...
			
			Peace out! *drops the mic*
			
		 */

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