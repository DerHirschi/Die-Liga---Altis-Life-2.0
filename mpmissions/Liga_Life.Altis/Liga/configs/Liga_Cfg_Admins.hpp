#define true 1
#define false 0
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
	║	File: Liga_Cfg_Admins.hpp
	║		
	║	Author: Hirschi - Die Liga	
	║
	║	Edited: Zoran 	- Die Liga
	╚══════════════════════════════════════════════════╝
*/

class Admin_config {
			
	class admin_level_1 {
		
		openSupportmenu = false;
		HCoffCheck		= true;		// Wenn HC offline dann ist Supportmenü u anderes gesperrt
		AdminMSG		= true;		// Shift + F5 - alte Nachrichten Menü
		//WantedAdd		= false;
		//WantedDel		= false;
		//EMP			= false;		
		//StartMusic	= false;	
		
		class Supportmenu {
			
			showSteamName	= false;
			showUID			= false;
			
			ID				=	false;		//2304
			POS				=	false;
			Airdrop			=	false;
			CopMenu			=	false;
			FPSlog			=	false;		//2308
			NEWS			=	false;	
			DebugRPT		=	false;
			bigINV			=	false;		//2311
			normINV			=	false;
			Bombe			=	false;		//2313
			Wanted			=	false;
			Baustelle		=	false;
			Schnee			=	false;		//2316
			GarageSuppAir	=	false;		//
			GarageSuppCar	=	false;
			GarageSuppShip	=	false;
			GarageAir		=	false;
			GarageCar		=	false;
			GarageShip		=	false;		//2322
			IMPGarage		=	false;		//2323
			ChopShop		=	false;		//2324
			ATM				=	false;		//2325
			AirdopBug		=	false;
			TrunkBug		=	false;		//2327
			DispScan		= 	false;		//2328 // Disp Scan !!!
			HausTrunkBug	=	false;		//2329
			CommMarker		=	false;		//2330
			CommMarkerDel	=	false;		//2331
			LU				=	false;		//2332
			ClanLizenz		=	false;		//2333
			Brett			=	false;		//2334
			Shop			=	false;		//2335
		};	
		
	};

	class admin_level_2 {
		
		openSupportmenu = true;
		HCoffCheck		= true;		// Wenn HC offline dann ist Supportmenü u anderes gesperrt
		AdminMSG		= true;		// Shift + F5 - alte Nachrichten Menü
		//WantedAdd		= false;
		//WantedDel		= false;
		//EMP			= false;		
		//StartMusic	= false;	
		
		class Supportmenu {
			
			showSteamName	= true;
			showUID			= true;
			
			ID				=	false;
			POS				=	false;
			Airdrop			=	false;
			CopMenu			=	false;
			FPSlog			=	false;
			NEWS			=	true;
			DebugRPT		=	false;
			bigINV			=	false;
			normINV			=	false;
			Bombe			=	false;
			Wanted			=	true;
			Baustelle		=	false;
			Schnee			=	false;
			GarageSuppAir	=	true;
			GarageSuppCar	=	true;
			GarageSuppShip	=	true;
			GarageAir		=	true;
			GarageCar		=	true;
			GarageShip		=	true;
			IMPGarage		=	true;
			ChopShop		=	true;
			ATM				=	true;
			AirdopBug		=	false;
			TrunkBug		=	false;
			DispScan		= 	false;
			HausTrunkBug	=	false;
			CommMarker		=	false;
			CommMarkerDel	=	false;
			LU				=	false;
			ClanLizenz		=	false;
			Brett			=	true;
			Shop			=	false;
		};	
		
	};	

	class admin_level_3 {
		
		openSupportmenu = true;
		HCoffCheck		= true;		// Wenn HC offline dann ist Supportmenü u anderes gesperrt
		AdminMSG		= true;		// Shift + F5 - alte Nachrichten Menü
		//WantedAdd		= true;
		//WantedDel		= true;
		//EMP			= false;		
		//StartMusic	= false;	
		//AutoGodmode	= false;
		
		class Supportmenu {
			
			showSteamName	= true;
			showUID			= true;
			
			ID				=	false;
			POS				=	false;
			Airdrop			=	true;
			CopMenu			=	false;
			FPSlog			=	false;
			NEWS			=	true;
			DebugRPT		=	false;
			bigINV			=	false;
			normINV			=	false;
			Bombe			=	false;
			Wanted			=	true;
			Baustelle		=	false;
			Schnee			=	false;
			GarageSuppAir	=	true;
			GarageSuppCar	=	true;
			GarageSuppShip	=	true;
			GarageAir		=	true;
			GarageCar		=	true;
			GarageShip		=	true;
			IMPGarage		=	true;
			ChopShop		=	true;
			ATM				=	true;
			AirdopBug		=	false;
			TrunkBug		=	false;
			DispScan		= 	false;
			HausTrunkBug	=	false;
			CommMarker		=	false;
			CommMarkerDel	=	true;
			LU				=	false;
			ClanLizenz		=	false;
			Brett			=	true;
			Shop			=	true;
		};	
		
	};	

	
	/*
	
		Rettet die Bäume, esst mehr Biber!
	
	*/
	
	class admin_level_4 {
		
		openSupportmenu = false;
		HCoffCheck		= true;		// Wenn HC offline dann ist Supportmenü u anderes gesperrt
		AdminMSG		= true;		// Shift + F5 - alte Nachrichten Menü
		//WantedAdd		= false;
		//WantedDel		= false;
		//EMP			= false;		
		//StartMusic	= false;	
		//AutoGodmode	= false;
		
		class Supportmenu {
			
			showSteamName	= false;
			showUID			= false;
			
			ID				=	false;
			POS				=	false;
			Airdrop			=	false;
			CopMenu			=	false;
			FPSlog			=	false;
			NEWS			=	false;
			DebugRPT		=	false;
			bigINV			=	false;
			normINV			=	false;
			Bombe			=	false;
			Wanted			=	false;
			Baustelle		=	false;
			Schnee			=	false;
			GarageSuppAir	=	false;
			GarageSuppCar	=	false;
			GarageSuppShip	=	false;
			GarageAir		=	false;
			GarageCar		=	false;
			GarageShip		=	false;
			IMPGarage		=	false;
			ChopShop		=	false;
			ATM				=	false;
			AirdopBug		=	false;
			TrunkBug		=	false;
			DispScan		= 	false;
			HausTrunkBug	=	false;
			CommMarker		=	false;
			CommMarkerDel	=	true;
			LU				=	false;
			ClanLizenz		=	false;
			Brett			=	false;
			Shop			=	false;
		};	
		
	};	

	class admin_level_5 {	// Projektleitung
		
		openSupportmenu = true;
		HCoffCheck		= false;	// Wenn HC offline dann ist Supportmenü u anderes gesperrt
		AdminMSG		= true;		// Shift + F5 - alte Nachrichten Menü
		//WantedAdd		= true;
		//WantedDel		= true;
		//EMP			= true;		
		//StartMusic	= true;	
		//AutoGodmode	= false;	
		
		class Supportmenu {
			
			showSteamName	= true;
			showUID			= true;
			
			ID				=	true;
			POS				=	true;
			Airdrop			=	true;
			CopMenu			=	true;
			FPSlog			=	true;
			NEWS			=	true;
			DebugRPT		=	true;
			bigINV			=	true;
			normINV			=	true;
			Bombe			=	true;
			Wanted			=	true;
			Baustelle		=	true;
			Schnee			=	true;
			GarageSuppAir	=	true;
			GarageSuppCar	=	true;
			GarageSuppShip	=	true;
			GarageAir		=	true;
			GarageCar		=	true;
			GarageShip		=	true;
			IMPGarage		=	true;
			ChopShop		=	true;
			ATM				=	true;
			AirdopBug		=	true;
			TrunkBug		=	true;
			DispScan		= 	true;
			HausTrunkBug	=	true;
			CommMarker		=	true;
			CommMarkerDel	=	true;
			LU				=	true;
			ClanLizenz		=	true;
			Brett			=	true;
			Shop			=	true;
		};	
		
	};	
	
	class admin_level_6 {	//Developer
		
		openSupportmenu = true;
		HCoffCheck		= false;	// Wenn HC offline dann ist Supportmenü u anderes gesperrt
		AdminMSG		= true;		// Shift + F5 - alte Nachrichten Menü
		//WantedAdd		= true;
		//WantedDel		= true;
		//EMP			= true;		
		//StartMusic	= false;	
		//AutoGodmode	= true;	
		
		class Supportmenu {
			
			showSteamName	= true;
			showUID			= true;
			
			ID				=	true;
			POS				=	true;
			Airdrop			=	true;
			CopMenu			=	true;
			FPSlog			=	true;
			NEWS			=	true;
			DebugRPT		=	true;
			bigINV			=	true;
			normINV			=	true;
			Bombe			=	true;
			Wanted			=	true;
			Baustelle		=	true;
			Schnee			=	true;
			GarageSuppAir	=	true;
			GarageSuppCar	=	true;
			GarageSuppShip	=	true;
			GarageAir		=	true;
			GarageCar		=	true;
			GarageShip		=	true;
			IMPGarage		=	true;
			ChopShop		=	true;
			ATM				=	true;
			AirdopBug		=	true;
			TrunkBug		=	true;
			DispScan		= 	true;
			HausTrunkBug	=	true;
			CommMarker		=	true;
			CommMarkerDel	=	true;
			LU				=	true;
			ClanLizenz		=	true;
			Brett			=	true;
			Shop			=	true;
		};	
		
	};		
	
};