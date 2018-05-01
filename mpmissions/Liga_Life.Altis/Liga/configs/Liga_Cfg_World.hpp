#define true 1
#define false 0

class Schiffswrack {
	
	Positionen[]			= {
		{4462.89,6515.78,-2.19486},
		{5391.75,25136.2,-1.98308},
		{25323.2,27886.6,-2.15125},
		{27923.2,08086.6,-2.15125},
		{02623.2,02686.6,-2.15125},
		{03423.2,28486.6,-2.15125},
		{18423.2,28686.6,-2.15125},
		{29423.2,30086.6,-2.15125},
		{13523.2,10886.6,-2.15125}
	};
	Loot[]					={
		{{"gl",18}	},
		{{"gl",40}	},
		{{"gl",47}	},
		{{"gl",58}	},
		{{"gl",58}	},
		{{"gl",77}	},
		{{"gl",78}	},
		{{"gl",100}	},
		{{"gl",125}	},
		{{"gl",125}	},
		{{"gl",142}	},
		{{"gl",182}	}
	};
	
	TriggerRadius			= 900;
	MarkerRadius			= 600;
	ZeugMenge				= 7;
	ZeugRadius				= 80;
	ZeugClassNames[]		={		
		"Land_Pallets_F",
		"Land_Cages_F",
		"Land_CratesPlastic_F",
		"Land_CratesWooden_F"
	};
	startTimer				= 15;//Minute(n)
	ranstartTimer			= 15;//Minute(n)
	/*SafeDespawn*/
	coolDownTimer			= 90;//Minute(n) + startTimer + ranstartTimer
	
	bombNoWrackText 		= "Du musst erst das Schiffswrack suchen und die Bombe an dem Safe anbringen.";
	bombWrackOffenText 		= "Das Schiff wurde bereits geoeffnet!";
	bombBoom 				= "Die Sprengladung wurde gezuendet!! Der Laderaum ist jetzt offen !";
	
};

class Ligaworld {
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
	║	File: Liga_Cfg_World.hpp	
	║		
	║	Author:  Hirschi - Die Liga		
	║	
	╠═════════════════════════════════════════════════════════════════╗
	║
	╚═════════════════════════════════════════════════════════════════╝
*/

	class Liga_Tankstellen {
		
		TankstLimit 	= 2;
		TankstKaufPreis = 27500000;
		TankstVerkPreis = 18500000;
		TankstAbmahnung = 4;
		
		TankPos[] = {			
			{9205.75,12112.2,-0.0487232},
			{11831.6,14155.9,-0.0342016},
			{12024.7,15830,-0.0298138},
			{12026.6,15830.1,-0.0342979},
			{12028.4,15830,-0.0388737},
			{9023.75,15729,-0.0271606},
			{4001.12,12592.1,-0.0966625},
			{14221.4,18302.5,-0.0697155},
			{8481.69,18260.7,-0.0266876},
			{16750.9,12513.1,-0.0525198},
			{25701.2,21372.6,-0.0774155},
			{3757.14,13477.9,-0.0540276},
			{5023.26,14429.6,-0.0978947},
			{5019.68,14436.7,-0.0114822},
			{9025.78,15729.4,-0.0206528},
			{9021.82,15728.7,-0.0293427},
			{6798.15,15561.6,-0.0441437},
			{6198.83,15081.4,-0.0912418},
			{14173.2,16541.8,-0.0946102},
			{17417.2,13936.7,-0.10652},
			{3757.54,13485.9,-0.010498},
			{15781,17453.2,-0.285281},
			{16875.2,15469.4,0.037343},
			{16871.7,15476.6,0.010293},
			{15297.1,17565.9,-0.283808},
			{5769,20085.7,-0.0156555},
			{19961.3,11454.6,-0.0349236},
			{19965.1,11447.6,-0.0483704},
			{20784.8,16665.9,-0.0521202},
			{20789.6,16672.3,-0.0213318},
			{14826.3,16818.4,0},
			{14805.7,16829.6,0},
			{14792.5,16838.5,0},
			{24139.8,24409.3,0},
			{15218.6,17312,0.00143623},
			{21230.4,7116.56,-0.0604229},
			{23379.4,19799,-0.0544052}
		};
	};
};

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
	║	File: Liga_Cfg_World.hpp	
	║		
	║	Author:  Hirschi - Die Liga		
	║	
	╠══════════════════════════════════════════════════╗
	║	!!!!!!!!!!! CON_Air !!!!!!!!!!! && Taxen
	╚══════════════════════════════════════════════════╝
*/
class LigaTaxen {
	
	/*Grundconfig*/
	
	ServerinitWait	= 90;		// Server-Initverzögerung ( bis Crew im Heli )
	HCinitWait		= 150;		// HC-Initverzögerung ( bis Crew im Heli )
	searchrange 	= 80;		// Suchdurchmesser
	searchraster 	= 4;		// Suchraster
	freeRadius 		= 20;		// Größe der Freifläche
	Taxipreis		= 16000;
	ALACpreis		= 29000;
	
	class LigaTaxi_Air {	// Grundconfig Con - Air

		CallMSG 		= "Ein Helitaxi wurde gerufen ...";
		noFreeMSG 		= "Sorry .. Derzeit kein Helitaxi verfuegbar ...";
		Keys[]			= {};	// Schlüssel an Fraktion verteilen
		ZusatzTransport[] 		= {	"<t color='#DF0101'>!! Gefangenen abtransportieren !!</t>"		, { 17453.2,13203.2,0.001441 } ,	" (side player) isEqualTo WEST && !isEngineOn _target "	};
		MarkerRauch		= "SmokeShellPurple";	

		ZielPads[]		= {
			{	"<t color='#FF4000'>Kavala</t>"					, {3201.04,12890.5,0.00143886}	,	" !isNull objectParent player && !isEngineOn _target"	},		
			{	"<t color='#0040FF'>Pyrgos</t>"					, {16525.1,12557.7,0.00143886}	,	" !isNull objectParent player && !isEngineOn _target"	},
			{	"<t color='#FF0000'>Athira</t>"					, {13998.9,18889.9,0.00146675}	,	" !isNull objectParent player && !isEngineOn _target"	},
			{	"<t color='#74DF00'>Sofia</t>"					, {25859.3,21480.2,0.00136185}	,	" !isNull objectParent player && !isEngineOn _target"	},
			{	"<t color='#CC2EFA'>Altis Int Airport</t>"		, {14668.9,16699.1,0.00143814}	,	" !isNull objectParent player && !isEngineOn _target"	},
			{	"<t color='#CC2EFA'>Molos Airport</t>"			, {26822.5,24591.7,0.00153542}	,	" !isNull objectParent player && !isEngineOn _target"	},
			{	"<t color='#CC2EFA'>Selakano Airbase</t>"		, {20796.2,7226.38,0.00143814}	,	" !isNull objectParent player && lci_reb && !isEngineOn _target"	},
			{	"<t color='#FACC2E'>Rebellen HQ</t>"			, {24149.8,24405.8,0.00139427}	,	" !isNull objectParent player && lci_reb && !isEngineOn _target"	},
			{	"<t color='#FACC2E'>Rebellen OP Nord</t>"		, {4973.14,21831.7,0.00106812}	,	" !isNull objectParent player && lci_reb && !isEngineOn _target"	},
			{	"<t color='#00FF00'>A - Base</t>"				, {20262,8881.65,0.00154495}	,	" !isNull objectParent player && call life_adminlevel > 3 && !isEngineOn _target"	},
			{	"<t color='#FF4000'>Air - HQ</t>"				, {15155.7,17332.1,0.00144196}	,	" !isNull objectParent player && call life_adminlevel > 3 && !isEngineOn _target"	},		
			{	"<t color='#4B0FF0'>LPD - Sofia</t>"			, {23626.9,20037.9,0.00138569}	,	" !isNull objectParent player && call life_adminlevel > 3 && !isEngineOn _target"	},
			{	"<t color='#4B0FF0'>LPD - Pyrgos</t>"			, {17454.8,13206.8,0.00144768}	,	" !isNull objectParent player && call life_adminlevel > 3 && !isEngineOn _target"	}
		};		
		
		
		class LigaTaxi_Air_1 {//Airport
			Heli_var		= "Liga4";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Liga_Taxi.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_2 {//Airport
			Heli_var		= "Liga3";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Liga_Taxi.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_3 {//Pyrgos
			Heli_var		= "Liga3_3";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Liga_Taxi.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_4 {//Sofia
			Heli_var		= "Liga3_2";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Liga_Taxi.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_5 {//Sofia
			Heli_var		= "Liga3_2";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Liga_Taxi.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};		

		class LigaTaxi_Air_6 {//Kavala
			Heli_var		= "Liga3_1";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Liga_Taxi.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_7 {//Rebbel OP Nord
			Heli_var		= "Liga3_4";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Liga_Taxi.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};	

		class LigaTaxi_Air_8 {//Rebbel HQ
			Heli_var		= "Liga3_5";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 50;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Liga_Taxi.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 0;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Liga-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {			};
		};			
	
	};	
	
	class LigaALAC_Air {	// Grundconfig Con - Air

		CallMSG 		= "Der ALAC Heli wurde gerufen ...";
		noFreeMSG 		= "Sorry .. Alle ALAC Helis befinden sich derzeit im Einsatz. Versuche es spaeter nocheinmal ...";
		Keys[]			= {"EAST"};	// Schlüssel an Fraktion verteilen
		ZusatzTransport[] 		= {		};
		MarkerRauch		= "SmokeShellYellow";		
		ZielPads[]		= {		};		
		
		
		class LigaALAC_Air_1 {
			Heli_var		= "ALAC_AIR_1";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 120;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Humm\adac_hummingbird.paa"};			//Helitexture
			crewTexture[]	= {	"U_C_WorkerCoveralls" , "textures\ADAC\adac_uniform.jpg"};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 2;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","ALAC-BOT"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {	
				" addAction['Markt',life_fnc_virt_menu,'market']; "	, 
				" addAction['Zubehör',life_fnc_weaponShopMenu,'genstore']; ",
				" addAction['<t color=''#ADFF2F''>ATM</t>',life_fnc_atmMenu,'',0,false,false,'',' vehicle player isEqualTo player  ']; "
			};
		};	

		class LigaALAC_Air_2 {
			Heli_var		= "ALAC_AIR_2";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 120;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= false;			//Gefangenentransport	
		
			texture[]		= {"textures\Humm\adac_hummingbird.paa"};			//Helitexture
			crewTexture[]	= {	"U_C_WorkerCoveralls" , "textures\ADAC\adac_uniform.jpg"};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 2;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","ALAC-BOT"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {	
				" addAction['Markt',life_fnc_virt_menu,'market']; "	, 
				" addAction['Zubehör',life_fnc_weaponShopMenu,'genstore']; ",
				" addAction['<t color=''#ADFF2F''>ATM</t>',life_fnc_atmMenu,'',0,false,false,'',' vehicle player isEqualTo player  ']; "
			};
		};			
		
	
	};

	
	class LigaTaxi_Admin {	// Grundconfig Con - Air

		CallMSG 		= "Ein Helitaxi wurde gerufen ...";
		noFreeMSG 		= "Sorry .. Derzeit kein Helitaxi verfuegbar ...";
		Keys[]			= {};	// Schlüssel an Fraktion verteilen
		ZusatzTransport[] 		= {	"<t color='#DF0101'>!! Gefangenen abtransportieren !!</t>"		, { 17453.2,13203.2,0.001441 } ,	" (side player) isEqualTo WEST "	};
		MarkerRauch		= "SmokeShellGreen";		
		ZielPads[]		= {
			{	"<t color='#FF4000'>Kavala</t>"					, {3201.04,12890.5,0.00143886}	,	" call life_adminlevel > 3 "	},		
			{	"<t color='#0040FF'>Pyrgos</t>"					, {16525.1,12557.7,0.00143886}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#FF0000'>Athira</t>"					, {13998.9,18889.9,0.00146675}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#74DF00'>Sofia</t>"					, {25859.3,21480.2,0.00136185}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#CC2EFA'>Altis Int Airport</t>"		, {14668.9,16699.1,0.00143814}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#CC2EFA'>Molos Airport</t>"			, {26822.5,24591.7,0.00153542}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#CC2EFA'>Selakano Airbase</t>"		, {20796.2,7226.38,0.00143814}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#FACC2E'>Rebellen HQ</t>"			, {24149.8,24405.8,0.00139427}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#FACC2E'>Rebellen OP Nord</t>"		, {4973.14,21831.7,0.00106812}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#00FF00'>A - Base</t>"				, {20262,8881.65,0.00154495}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#FF4000'>Air - HQ</t>"				, {15155.7,17332.1,0.00144196}	,	" call life_adminlevel > 3 "	},		
			{	"<t color='#4B0FF0'>LPD - Sofia</t>"			, {23626.9,20037.9,0.00138569}	,	" call life_adminlevel > 3 "	},
			{	"<t color='#4B0FF0'>LPD - Pyrgos</t>"			, {17454.8,13206.8,0.00144768}	,	" call life_adminlevel > 3 "	}

		
		};		
		
		
		class LigaTaxi_Admin_1 {
			Heli_var		= "Liga3_7";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= 360;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= true;			//Gefangenentransport	
		
			texture[]		= {"textures\Liga_Taxi.jpg"};			//Helitexture
			crewTexture[]	= {	};			
		
			damageHeli		= false;
			damageCrew		= false;
			lock			= 2;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","Admin-Taxi"}};	//UID , NAME
			
			trunk[]			= {		{	},0	};
			extraActions[]	= {		
				" addAction['<t color=''#4B0FF0''>Token Shop</t>',life_fnc_virt_menu,'admin',0,false,false,'',' call life_adminlevel > 2  ']; "	, 
				" addAction['<t color=''#F00FBF''>Admin Waffen Shop</t>',life_fnc_weaponShopMenu,'admin']; ",
				" addAction['<t color=''#F00FBF''>Event Waffen Shop</t>',life_fnc_weaponShopMenu,'token']; ",
				" addAction['<t color=''#ADFF2F''>ATM</t>',life_fnc_atmMenu,'',0,false,false,'',' vehicle player isEqualTo player  ']; "

			};
		};			
	
	};
	
	class LigaCon_Air {	// Grundconfig Con - Air

		CallMSG 		= "Con - Air wurde gerufen ...";
		noFreeMSG 		= "Sorry .. Derzeit kein Con - Air verfuegbar ...";
		Keys[]			= {"WEST"};	// Schlüssel an Fraktion verteilen
		ZusatzTransport[] 		= {	"<t color='#DF0101'>!! Gefangenen abtransportieren !!</t>"		, { 17453.2,13203.2,0.001441 } ,	" (side player) isEqualTo WEST && !isEngineOn _target"	};
		MarkerRauch		= "SmokeShellBlue";		
		ZielPads[]		= {
			{	"<t color='#FF4000'>Air - HQ</t>"		, {15155.7,17332.1,0.00144196}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},		
			{	"<t color='#4B0FF0'>LPD - Sofia</t>"	, {23626.9,20037.9,0.00138569}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#4B0FF0'>LPD - Pyrgos</t>"	, {17454.8,13206.8,0.00144768}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#F00FBF'>Kavala</t>"			, {3200.75,12891.1,0.00143886}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#F00FBF'>Pyrgos</t>"			, {16525.3,12558,0.00143886}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#F00FBF'>Sofia</t>"			, {25859.7,21480.4,0.00134087}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#F00FBF'>Athira</t>"			, {13997.4,18890.3,0.0015049}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#FF4000'>Flughafen</t>"		, {14620.3,16748.8,0.00143814}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	},
			{	"<t color='#FF4000'>AirBase - Molos</t>", {26822,24592.2,0.00156975}	,	" (side player) isEqualTo WEST && !isEngineOn _target"	}
		};		
		
		
		class LigaCon_Air_1 {
			Heli_var		= "con_air";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= -1;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= true;			//Gefangenentransport	
		
			texture[]		= {
				"textures\mohawk\Cop\mohowk_cop1.jpg",
				"textures\mohawk\Cop\mohowk_cop2.paa",
				"textures\mohawk\Cop\mohowk_cop3.paa"
			};			//Helitexture
			crewTexture[]	= {	"U_Competitor","textures\Polizei\Kleidung\PM_PHM_shirt.jpg"	};			
		
			damageHeli		= true;
			damageCrew		= true;
			lock			= 3;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","L.P.D."}};	//UID , NAME
			
			trunk[]			= {
				{
					{"fuelF",4},
					{"fireWo",1},
					{"mauer",15},
					{"strahler",8},
					{"14",1},
					{"b22",2},
					{"kegel",12},
					{"spikeStrip",10},
					{"lockpick",6},
					{"donuts",4},
					{"coffee",4},
					{"gpstracker",1}
				},200
			};
			extraActions[]	= {	
				" addAction['<t color=''#FF0000''>Sperren</t>',{	(_this select 0) setVariable['hasTask',true,true];	},'',0,false,false,'',' side player isEqualTo WEST && !( _target getVariable[''hasTask'',false] )  ']; "	,	
				" addAction['<t color=''#ADFF2F''>Freigeben</t>',{	(_this select 0) setVariable['hasTask',nil,true];	},'',0,false,false,'',' side player isEqualTo WEST && ( _target getVariable[''hasTask'',false] ) ']; "	
			};
		};	
	/*
		class LigaCon_Air_2 {
			Heli_var		= "con_air_1";	//Heli Var Name	
			ZielPads[]		= {		};		//Zusatzziel	
			FlyHigh 		= 20;
			FlyAutoBack		= -1;			//-1 - Disable
			FlyAutoOneWay	= false;		//Bei Ankuft KEIN Actions für nächstes Ziel zeigen
			ConAir			= true;			//Gefangenentransport	
		
			texture[]		= {
				"textures\mohawk\Cop\mohowk_cop1.jpg",
				"textures\mohawk\Cop\mohowk_cop2.paa",
				"textures\mohawk\Cop\mohowk_cop3.paa"
			};			//Helitexture
			crewTexture[]	= {	"U_Competitor","textures\Polizei\Kleidung\PM_PHM_shirt.jpg"	};			
		
			damageHeli		= true;
			damageCrew		= true;
			lock			= 3;			// 0 - Unlocked; 1 - Default; 2 - Locked; 3 - Locked for player;
			veh_owner[]		= {{"00000000","L.P.D."}};	//UID , NAME
			
			trunk[]			= {
				{
					{"fuelF",4},
					{"fireWo",1},
					{"mauer",15},
					{"strahler",8},
					{"14",1},
					{"b22",2},
					{"kegel",12},
					{"spikeStrip",10},
					{"lockpick",6},
					{"donuts",4},
					{"coffee",4},
					{"gpstracker",1}
				},200
			};
			extraActions[]	= {	
				" addAction['<t color=''#FF0000''>Sperren</t>',{	(_this select 0) setVariable['hasTask',true,true];	},'',0,false,false,'',' side player isEqualTo WEST && !( _target getVariable[''hasTask'',false] ) ']; "	,	
				" addAction['<t color=''#ADFF2F''>Freigeben</t>',{	(_this select 0) setVariable['hasTask',nil,true];	},'',0,false,false,'',' side player isEqualTo WEST && ( _target getVariable[''hasTask'',false] ) ']; "	
			};
		};	
		*/
	
	};	
};
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
	║	File: Liga_Cfg_World.hpp	
	║		
	║	Author:  Hirschi - Die Liga		
	║	
	╠══════════════════════════════════════════════════╗
	║	!!!!!!!!!!! HOUSING !!!!!!!!!!!
	╚══════════════════════════════════════════════════╝
*/
class LigaHousingClass {
	
	//////////////
	//TANOA 	//
	//////////////
	// mit Garage 
	class Land_GarageShelter_01_F {
		//				Preis	,Kisten	
		Preis[]		= {900000	,0	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{1.7	,-8.5,0		},	0};
		BoxPos[]	= {{0	,0	,0		}};
	}; 
	class Land_House_Big_02_F {
		Preis[]		= {7950000	,3	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{16	,6	,0		},	80};
		BoxPos[]	= {
			{3.5	,2.6	,0		},
			{-6		,0.4	,0		},
			{-8		,2.4	,0		}
		};		
	}; 
	class Land_House_Big_03_F {
		Preis[]		= {11450000	,4	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{15.5	,-3	,0		},	0};
		BoxPos[]	= {
			{7		,2		,0	},
			{7		,-2		,0	},
			{9		,1		,-3	},
			{5.7	,1		,-3	}
		};			
	};
	// ohne Garage 	
	class Land_House_Big_01_F {
		Preis[]		= {4150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{1		,0		,-0.5		},
		    {1		,4.5	,-0.5		}
		};
	};
	class Land_House_Big_04_F {
		Preis[]		= {8450000	,4	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{0	,0	,0		},	0};
		BoxPos[]	= {
			{2		,3		,2.2	},
			{-3		,3		,2		},
			{-4		,-4		,0		},
			{3		,-4		,0		}
		//	{0		,-2.5	,0		}
		};				
	};	
	class Land_Slum_02_F {
		Preis[]		= {2250000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{0.5		,0.5		,0		}
		};			
	}; 
	class Land_Slum_03_F {
		Preis[]		= {6250000	,3	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{-1		,0		,0		},
			{-1		,4		,0		},
			{3		,3		,0		}
		};			
	}; 	
	class Land_Hotel_02_F {
		Preis[]		= {17500000	,6	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{-6.5	,-1		,-2		},
			{-5.5	,3		,-2		},
			{-1.8	,10		,-2		}, 
			{-1.8	,-10	,-2		},
			{-6.5 	,-0.7  	,0		},
			{3.4 	,1.9  	,0		}
		};				
	}; 	
	/*
	class Land_i_Shed_Ind_F {
		Preis[]		= {25000000	,8		};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{-3		,0.5	,-1.5	},
			{-0.5	,0.5	,-1.5	},
			{2		,0.5	,-1.5	},
			{4.5	,0.5	,-1.5	},
			{7		,0.5	,-1.5	},
			{9.5	,0.5	,-1.5	},
			{5.5	,0.5	,-1.5	},
			{9.5	,5		,1.5	}
		};			
	}; 
	*/
	class Land_Shed_02_F {
		Preis[]		= {2250000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{1	,1	,0	}
		};			
	}; 	
	
	class Land_House_Small_01_F {
		Preis[]		= {2250000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{-2  	,0 		,0		}
		};			
	}; 
	class Land_House_Small_02_F {
		Preis[]		= {4150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{-3  	,-2 	,0		},
			{-3  	,2 		,0		}
		};				
	}; 
	class Land_House_Small_03_F {
		Preis[]		= {4150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{-1.5	,3.9	,0	},
			{-3.5	,3.9	,0	}
		};			
	}; 
	class Land_House_Small_04_F {
		Preis[]		= {2250000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{0		,-2		,0		}
		};			
	}; 
	class Land_House_Small_05_F {
		Preis[]		= {4150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{-3  	,4  	,0		},
			{0.4  	,4  	,0		}
		};			
	}; 	
	class Land_House_Small_06_F {
		Preis[]		= {4150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{-1.5  	,1.5  	,0	},
			{-1.5  	,-4.5  	,0		}
		};			
	}; 
	
	class Land_House_Native_01_F {
		Preis[]		= {4150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{0	,2	,-1.3	},
			{0	,-2	,-1.3	}
		};				
	}; 
	class Land_House_Native_02_F {
		Preis[]		= {2250000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{-1.5	,-1.7	,-1	}
		};				
	}; 
	
	//////////////
	//TANOA ENDE//
	//////////////
	
	//////////////
	//Altis 	//
	//////////////
	
	//3 Boxen
	class Land_i_House_Big_02_V1_F {
		Preis[]		= {4650000	,3	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{0		,2		,-2		},	0},
			{{2		,2		,1		},	0},
			{{-3.5	,2		,1		},	90}

		};			
	};	
	class Land_i_House_Big_02_V2_F {
		Preis[]		= {4650000	,3	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{0		,2		,-2		},	0},
			{{2		,2		,1		},	0},
			{{-3.5	,2		,1		},	90}

		};			
	};	
	class Land_i_House_Big_02_V3_F {
		Preis[]		= {4650000	,3	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{0		,2		,-2		},	0},
			{{2		,2		,1		},	0},
			{{-3.5	,2		,1		},	90}

		};			
	};	
	
	// 2 Boxen Typ 2
	class Land_i_House_Small_03_V1_F {
		Preis[]		= {3250000	,3	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{1		,2.5	,0.5	},	90},
			{{-5	,2.5	,0.5	},	90},
			{{4		,-4		,0.5	},	90}
		};			
	};	
	
	// 4 Boxen
	class Land_i_House_Big_01_V2_F {
		Preis[]		= {6600000	,4	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{3		,4		,-2		},	0},
			{{2		,-0.2	,-2		},	0},
			{{3.5	,4		,1		},	0},
			{{3.5	,-3.8	,1		},	90}

		};	
	};	
	class Land_i_House_Big_01_V3_F {
		Preis[]		= {6600000	,4	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{3		,4		,-2		},	0},
			{{2		,-0.2	,-2		},	0},
			{{3.5	,4		,1		},	0},
			{{3.5	,-3.8	,1		},	90}

		};			
	};	
	class Land_i_House_Big_01_V1_F {
		Preis[]		= {6600000	,4	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{3		,4		,-2		},	0},
			{{2		,-0.2	,-2		},	0},
			{{3.5	,4		,1		},	0},
			{{3.5	,-3.8	,1		},	90}

		};			
	};	
	
			
	// 2 Boxen
	class Land_i_House_Small_01_V1_F {
		Preis[]		= {3150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-3	,0.6	,-0.5	},	0},
			{{-3	,-3 	,-0.5	},	0}			
		};			
	};		

	class Land_i_House_Small_01_V2_F {
		Preis[]		= {3150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-3	,0.6	,-0.5	},	0},
			{{-3	,-3 	,-0.5	},	0}			
		};			
	};	
	
	class Land_i_House_Small_01_V3_F {
		Preis[]		= {3150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-3	,0.6	,-0.5	},	0},
			{{-3	,-3 	,-0.5	},	0}			
		};			
	};		
	
	// 2 Boxen Type 2
	class Land_i_House_Small_02_V1_F {
		Preis[]		= {3150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{2		,-2		,-0.5	},	0},			
			{{0		,-2		,-0.5	},	0}			
		};			
	};	
	class Land_i_House_Small_02_V2_F {
		Preis[]		= {3150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{2		,-2		,-0.5	},	0},			
			{{0		,-2		,-0.5	},	0}			
		};			
	};	
	class Land_i_House_Small_02_V3_F {
		Preis[]		= {3150000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{2		,-2		,-0.5	},	0},			
			{{0		,-2		,-0.5	},	0}			
		};			
	};	

	// 1 Box Steinhaus
	
	class Land_i_Stone_HouseSmall_V2_F {
		Preis[]		= {2250000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-2	,2		,-0.5	},	0}			
		};			
	};	
	class Land_i_Stone_HouseSmall_V1_F {
		Preis[]		= {2250000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-2	,2		,-0.5	},	0}			
		};			
	};	
	class Land_i_Stone_HouseSmall_V3_F {
		Preis[]		= {2250000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-2	,2		,-0.5	},	0}			
		};			
	};		
	/////
	class Land_i_Shed_Ind_F {
		Preis[]		= {25000000	,7	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-3		,-0.5	,-1.5	},	0},
			{{-0.5		,-0.5	,-1.5	},	0},
			{{2			,-0.5	,-1.5	},	0},
			{{4.5		,-0.5	,-1.5	},	0},
			{{8			,-0.5	,-1.5	},	0},
			{{4.5		,7.8	,-1.5	},	0},
			{{2 		,7.8	,-1.5	},	0}
		};			
	}; 	
	// Garagen
	class Land_i_Garage_V1_F {
		//				Preis	,Kisten	
		Preis[]		= {1500000	,0	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-9	,0	,0		},	0};
		BoxPos[]	= {};
	}; 	
	class Land_i_Garage_V2_F {
		//				Preis	,Kisten	
		Preis[]		= {1500000	,0	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-9	,0	,0		},	0};
		BoxPos[]	= {};
	};	
	
	// Base
	// Turm
	/*
	class Land_Cargo_Tower_V1_F {
		Preis[]		= {5650000	,3	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-3	,-3		,0		},	0},
			{{-3	,-3		,2.7	},	0},
			{{1 	,0		,2.7	},	0}


		};			
	};
	class Land_Cargo_Tower_V2_F {
		Preis[]		= {5650000	,3	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-3	,-3		,0		},	0},
			{{-3	,-3		,2.7	},	0},
			{{1 	,0		,2.7	},	0}


		};			
	};
	class Land_Cargo_Tower_V3_F {
		Preis[]		= {5650000	,3	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-3	,-3		,0		},	0},
			{{-3	,-3		,2.7	},	0},
			{{1 	,0		,2.7	},	0}


		};			
	};	
	*/
	// kleiner container
	class Land_Cargo_House_V1_F {
		Preis[]		= {2750000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-2	,1		,0		},	0}			
		};			
	};	
	class Land_Cargo_House_V2_F {
		Preis[]		= {2750000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-2	,1		,0		},	0}			
		};			
	};
	class Land_Cargo_House_V3_F {
		Preis[]		= {2750000	,1	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{-2	,1		,0		},	0}			
		};			
	};	
	// HQ Container
	class Land_Cargo_HQ_V1_F {
		Preis[]		= {3950000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{0		,3		,-2.5	},	0},			
			{{3		,3		,-2.5	},	0}			
		};			
	};
	class Land_Cargo_HQ_V2_F {
		Preis[]		= {3950000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{0		,3		,-2.5	},	0},			
			{{3		,3		,-2.5	},	0}			
		};			
	};	
	class Land_Cargo_HQ_V3_F {
		Preis[]		= {3950000	,2	,0 ,7	};
		LightPOS[] 	= {{0	,0	,0		}};
		GaragSP[]	= {{-10	,0	,0		},	90};
		BoxPos[]	= {
			{{0		,3		,-2.5	},	0},			
			{{3		,3		,-2.5	},	0}			
		};			
	};	
	
	
	//////////////
	//Altis ENDE//
	//////////////
	
};
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
	║	File: Liga_Cfg_World.hpp	
	║		
	║	Author:  Hirschi - Die Liga		
	║	
	╠══════════════════════════════════════════════════╗
	║	!!!!!!!!!!! LÄDEN !!!!!!!!!!!
	╚══════════════════════════════════════════════════╝
*/
class LigaLadenCFG {
	class LimitCFG {		
			buylimit1 = 2;				// Ladenlimit 1
			
			ItemLimit = 6;				// Item Sorten Limit
	};
};	
class LigaLadenClass {
	
	class Land_Shop_Town_01_F {
		//				Preis	,Kassen	
		Preis[]		= {8500000	,1, 5	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{-0.85,-0.5,-3.26},0		}
		};
		ZusatzPos[]	= {
			{
				{{-4.55,1.6,-3.26},0},
				{{-4.55,-0.4,-3.26},0},
				{{-4.55,-2.4,-3.26},0},
				{{1,-0.9,-3.26},90},
				{{3,-0.9,-3.26},90}
			}
		};
	}; 	
	class Land_Shop_Town_03_F {
		//				Preis	,Kassen	
		Preis[]		= {15900000	,2	,8 ,9.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0		,-7.3,3.7},
			{-4.5	,-7.3,3.7},
			{4.5	,-7.3,3.7}
		};
		BoxPos[]	= {
			{{-2.35,-0.4,-3.385},0		},
			{{2.35,-1,-3.385   },0		}
		};
		ZusatzPos[]	= {
			{
				{{-6.51,-5.45,-3.385},0	},
				{{-6.51,-3.45,-3.385},0	},
				{{-6.51,-1.45,-3.385},0	},
				{{-5.17,-6.25,-3.385 },90	}
			},
			{
				{{ -0.2,0.8,-3.385  },90	},
				{{ 1.8,0.8,-3.385  },90	},
				{{0.2,-6.25,-3.385  },90	},
				{{5.3,-6.25,-3.385  },90	}
			}			
		};		
	}; 
	class Land_Shop_City_01_F {
		//				Preis	,Kassen	
		Preis[]		= {17900000	,1	,9, 6.8	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{6,-10,0},
			{3,-10.8,0},
			{0,-10.8,0},
			{-3,-10.8,0},
			
			{9,-8,0},
			{9,-5,0},
			{9.5,-2,0},
			{9.6,1,0}		
		};
		BoxPos[]	= {
			{{3,2.7,-4.96},-45		}
		};
		ZusatzPos[]	= {
			{
				{{-0.3	,2.7	,-4.96},0	},
				{{-0.3	,0.7	,-4.96},0	},
				{{-0.3	,-1.3	,-4.96},0	},
				{{4.78,5.75,-4.96},90	},
				{{6.78,5.75,-4.96},90	},
				{{0.7,-1.9,-4.96},90	},
				{{2.7,-1.9,-4.96},90	},
				{{7.4,4.72,-4.96},0	},
				{{7.4,2.72,-4.96},0	}
			}
		};		
	}; 	
	// Mehrfach Teil 
	class Land_Shop_City_02_F {
		//				Preis	,Kassen, Regale	
		Preis[]		= {31200000	,5, 12	, 12};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{6,-10,0},
			{3,-10.8,0},
			{0,-10.8,0},
			{-3,-10.8,0},
			
			{9,-8,0},
			{9,-5,0},
			{9.5,-2,0},
			{9.6,1,0}		
		};
		BoxPos[]	= {
			{{3	,-4	,-4.385},-35		},
			{{3	,2	,-4.385},-90		},
			{{6	,9.8,-4.385},-90		},
			{{-0.9,-6.5,-4.385},0		},
			{{-10.5,-4.5,-4.385},0		}
		};
		ZusatzPos[]	= {
			{
				{{8		,-2	,-4.385},0},
				{{4.5	,-7.7,-4.385},0},
				{{1.25 ,-1.1,-4.385},90},
				{{0.26,-7.9,-4.385},0},
				{{0.26,-5.9,-4.385},0},
				{{0.26,-3.9,-4.385},0}
					
			},
			{
				{{8	,2	,-4.385},0},
				{{0.4,0.3,-4.385},0}
					
			},	
			{
				{{4	,7.55	,-4.385},90}
					
			},	
			{
				{{-3.4,-5.5,-4.385},0}
					
			},	
			{
				{{-8.3,-8,-4.385},0},
				{{-10,-1.7,-4.385},90}
					
			}
				
		};		
	}; 
	

	// Kiosk
	class Land_Kiosk_blueking_F {
		//				Preis	,Kassen	
		Preis[]		= {8500000	,1, 2	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{0,-1.75,-1.601},0		}
		};
		ZusatzPos[]	= {
			{
				{{1.8,1.18,-1.8}	,0},
				{{-1.8,1.18,-1.8}		,0}
			}
		};
	}; 	
	
	class Land_Kiosk_gyros_F {
		//				Preis	,Kassen	
		Preis[]		= {8500000	,1, 2	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{0,-1.75,-1.8},0		}
		};
		ZusatzPos[]	= {
			{
				{{1.8,1.18,-2}	,0},
				{{-1.8,1.18,-2}		,0}
			}
		};
	}; 	

	class Land_Kiosk_papers_F {
		//				Preis	,Kassen	
		Preis[]		= {8500000	,1, 2	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{0,-1.75,-1.8},0		}
		};
		ZusatzPos[]	= {
			{
				{{1.8,1.18,-2}	,0},
				{{-1.8,1.18,-2}		,0}
			}
		};
	};
	
	class Land_Kiosk_redburger_F {
		//				Preis	,Kassen	
		Preis[]		= {8500000	,1, 2	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{0,-1.75,-2.7},0		}
		};
		ZusatzPos[]	= {
			{
				{{1.8,1.18,-3}	,0},
				{{-1.8,1.18,-3}		,0}
			}
		};
	};	

	/// LÄDEN mit O.G.
	
	class Land_i_Shop_01_V3_F {
		//				Preis	,Kassen	
		Preis[]		= {15900000	,1, 5	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{0.55,3.323,-2.9},0		}
		};
		ZusatzPos[]	= {
			{
				{{2		,1.95	,-2.9}	,0},
				{{-2.8,-2,-2.9},90},
				{{-0.8,-2,-2.9},90},
				
				{{-3.5,1,-2.9},0},
				{{-3.5,3,-2.9},0}
			}
		};
	}; 	
	
	/// LÄDEN mehrfach
	
	class Land_i_Shop_02_V2_F {
		//				Preis	,Kassen	
		Preis[]		= {21500000	,2, 11	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{1,1.7,-2.8},270		},
			{{-2,1.85,1},90		}//OG
		};
		ZusatzPos[]	= {
			{
				{{3.31,2.03,-2.8}	,0},
				{{3.31,-1.973,-2.8}	,0},
				
				{{1.06,-4.55,-2.8},90},
				{{-0.94,-4.55,-2.8},90},
				
				{{-1.99,-3.58,-2.8},0},
				{{-1.99,-1.58,-2.8},0}
			},
			
			{//OG
				
				{{1.06,-4.55,1.1},90},
				{{-0.94,-4.55,1.1},90},
				{{-2.94,-4.55,1.1},90},
				
				{{-1.94,-1.55,1.1},90},
				{{0.06,-1.55,1.1},90}
			}			
		};
	}; 		
	
	class Land_i_Shop_02_V1_F {
		//				Preis	,Kassen	
		Preis[]		= {21500000	,2, 11	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{1,1.7,-2.8},270		},
			{{-2,1.85,1},90		}//OG
		};
		ZusatzPos[]	= {
			{
				{{3.31,2.03,-2.8}	,0},
				{{3.31,-1.973,-2.8}	,0},
				
				{{1.06,-4.55,-2.8},90},
				{{-0.94,-4.55,-2.8},90},
				
				{{-1.99,-3.58,-2.8},0},
				{{-1.99,-1.58,-2.8},0}
			},
			
			{//OG
				
				{{1.06,-4.55,1.1},90},
				{{-0.94,-4.55,1.1},90},
				{{-2.94,-4.55,1.1},90},
				
				{{-1.94,-1.55,1.1},90},
				{{0.06,-1.55,1.1},90}
			}			
		};
	}; 		

	class Land_i_Shop_02_V3_F {
		//				Preis	,Kassen	
		Preis[]		= {21500000	,2, 11	, 6.5	};
		LightPOS[] 	= {{0	,0	,0		}};
	//	GaragSP[]	= {{1.7	,-8.5,0		},	0};
		FireWPOS[]		= {
			{0,-4,6}
		};
		BoxPos[]	= {
			{{1,1.7,-2.8},270		},
			{{-2,1.85,1},90		}//OG
		};
		ZusatzPos[]	= {
			{
				{{3.31,2.03,-2.8}	,0},
				{{3.31,-1.973,-2.8}	,0},
				
				{{1.06,-4.55,-2.8},90},
				{{-0.94,-4.55,-2.8},90},
				
				{{-1.99,-3.58,-2.8},0},
				{{-1.99,-1.58,-2.8},0}
			},
			
			{//OG
				
				{{1.06,-4.55,1.1},90},
				{{-0.94,-4.55,1.1},90},
				{{-2.94,-4.55,1.1},90},
				
				{{-1.94,-1.55,1.1},90},
				{{0.06,-1.55,1.1},90}
			}			
		};
	}; 	
};	

