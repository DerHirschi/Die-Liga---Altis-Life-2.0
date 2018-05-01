//#define COMPF Liga\LigaHandy\fnc
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
	║ Author: Zoran & Hirschi - Die Liga
	╚══════════════════════════════════════════════════╝
*/

class HandySettings {	

	class MainApps 
	{
		IconArr[] = 
		{														
			{"textures\Handy\Icons\Telefonbuch.mittelgross.1.0.paa",0}, 		
			{"textures\Handy\Icons\Messanger.mittelgross.1.0.paa",1},  			
			{"textures\Handy\Icons\Nottrufmessanger.mittelgross.1.0.paa",2},	
			{"textures\Handy\Icons\GPS.mittelgross.1.0.paa",3},					
			//{"textures\Handy\Icons\Wetter.mittelgross.1.0.paa",4},				
			//{"textures\Handy\Icons\Markt.mittelgross.1.0.paa",5},				
			{"textures\Handy\Icons\fuel.mittelgross.1.0.paa",6},				
			{"textures\Handy\Icons\Eisntellungen.mittelgross.1.0.paa",7}//<--- Wattn das fürn Wort Herr Grafiker ??? "Eisntellungen" ???
		};	
		
	};
		
	class PIC 
	{
		//Wetter
		SONNIG 		= "textures\Handy\Wetter\Sonnig1.0.paa";
		BEWOLK 		= "textures\Handy\Wetter\Sonnigbevoelkt1.0.paa";
		WOLK   		= "textures\Handy\Wetter\Wolkig1.0.paa";
		REGEN  		= "textures\Handy\Wetter\Rain1.0.paa";
		//TelBuch
		COPICON 	= "textures\Handy\Icons\div\polizei1.paa";
		CIVICON 	= "textures\Handy\Icons\div\person1.paa";
		GANGICON 	= "textures\Handy\Icons\div\gruppe1.paa";
		LRKICON		= "textures\Handy\Icons\div\medic.paa";
		ALAICON 	= "textures\Handy\Icons\div\alac1.paa";
		FAVICON 	= "textures\Handy\Icons\Fav.mittelgross.1.0.paa";
		//Scroll oben 
		ICON1 		= "textures\Handy\Icons\Telefonbuch.mittelgross.1.0.paa";
		ICON2 		= "textures\Handy\Icons\Fav.mittelgross.1.0.paa";
		ICON3 		= "textures\Handy\Icons\LRKleuchte.mittelgross.1.0.paa";
		ICON4 		= "textures\Handy\Icons\div\gruppe1.paa";	
		//Diverse
		ICON5 		= "textures\Handy\Icons\Messanger.mittelgross.1.0.paa";
		//Setting ON / OFF
		ICON6 		= "textures\Handy\Icons\On.mittelgross.1.0.paa";	
		ICON7 		= "textures\Handy\Icons\Off.mittelgross.256.1.0.paa";	
		//Diverse
	
	};
		
	class HG
	{
		HG0[] = {"","Ohne"};
		HG1[] = {"textures\Handy\HG\H\T1.H.t.paa","Frau"};
		HG2[] = {"textures\Handy\HG\H\T2.H.t.paa","Graffiti"};
		HG3[] = {"textures\Handy\HG\H\T3.H.t.paa","Joker"};
		HG4[] = {"textures\Handy\HG\H\T4.H.t.paa","Deadpool"};
		HG5[] = {"textures\Handy\HG\H\T5.H.t.paa","Tiger"};
		HG6[] = {"textures\Handy\HG\H\T6.H.t.paa","3D grün"};
		HG7[] = {"textures\Handy\HG\H\T7.H.t.paa","3D blau"};
		HG8[] = {"textures\Handy\HG\H\T8.H.t.paa","Eisenkarl"};
		HG9[] = {"textures\Handy\HG\H\T9.H.t.paa","Mustang"};
		
	};
	
	
	class Navi
	{
		IconArr[] = 
		{														
			{"icons\items\pickaxe.paa",								100}, 		
			{"textures\Handy\Icons\div\Rebellen1.paa",				101},			
			{"\A3\ui_f\data\map\markers\nato\c_unknown.paa",		102},  			
			{"\A3\ui_f\data\map\markers\nato\c_car.paa",			103},  			
			{"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",		104},  			
			{"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			105},  			
			{"\A3\ui_f\data\map\markers\nato\o_air.paa",			106},  			
			{"\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa",		107},			
			{"textures\Handy\Icons\div\polizei1.paa",				108}, 			
			{"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",			109}, 			
			{"textures\Handy\Icons\div\dp1.paa",					110}  			
		};
		
		100[] = 
		{
			{"Farming",					"",														{0,0,0}	},
			{"",						"",														{0,0,0}	},
			{"Ananasfeld Kavala",		"icons\items\ana.paa",									{3078.93,12123.3,0}	},			
			{"Ananasfeld Pyrgos",		"icons\items\ana.paa",		 							{17949.2,14390.7,0}	},
			{"",						"",														{0,0,0}	},
			
			{"Apfelplantage Airfield",	"icons\items\apple.paa",								{14572,1702,0}		},			
			{"Apfelplantage Sofia",		"icons\items\apple.paa",								{25982,20889,0}		},			
			{"Apfelplantage Kavala",	"icons\items\apple.paa",								{4186,1306,0}		},			
			{"Apfelplantage Zaros",		"icons\items\apple.paa",								{10022.5,12550.8,0}	},	
			{"",						"",														{0,0,0}	},
			
			{"Baumwollfeld West",		"icons\items\baumwolle.paa",							{7484,18173,0}		},				
			{"Baumwollfeld Ost",		"icons\items\baumwolle.paa",							{18020,10614,0}		},	
			{"",						"",														{0,0,0}	},
			//Pfirsichfeld
			{"Pfirsichfeld Kavala",		"icons\items\peach.paa",								{4345.09,13982.9,0}	},			
			{"Pfirsichfeld Zaros",		"icons\items\peach.paa",								{10800.9,13238.1,0}	},
			{"Pfirsichfeld Ahtira",		"icons\items\peach.paa",								{13120.2,19672.9,0}	},			
			{"Pfirsichfeld Pyrgos",		"icons\items\peach.paa",								{18124.5,13076.3,0}	},	
			{"",						"",														{0,0,0}	},
			//Müll
			{"Müllkippe Kavala",		"icons\items\ml.paa",									{4674.83,12718.2,0}	},
			{"Müllkippe Pyrgos",		"icons\items\ml.paa",									{17056.8,11884.4,0}	},	
			{"Müllkippe Athira",		"icons\items\ml.paa",									{14341.8,18383.8,0}		},			
			{"Recyclinghof",			"icons\items\ml.paa",									{11416.2,14224.8,0}	},	
			{"",						"",														{0,0,0}	},
			
			{"Sandmine",				"icons\items\sand.paa",									{6993.91,11637,0}	},			
			{"Glashersteller",			"icons\items\glass.paa",								{5390.48,17905.2,0}	},
			{"",						"",														{0,0,0}	},
			
			//Metall
			{"Eisenmine",				"icons\items\iron_ore.paa",								{6604.56,13103,0}	},	
			{"Eisenschmiede",			"icons\items\iron.paa",									{10276.2,14822.9,0}	},			
			{"Kupfermine",				"icons\items\copper_ore.paa",							{4372.79,12616.1,0}	},	
			{"Kupferschmiede",			"icons\items\copper.paa",								{9536.3,15083.7,0}	},			
			{"Metall- und Glashändler", "icons\items\iron.paa",									{5340.41,14476,0}	},				
			{"Schlosserei",				"icons\items\iron.paa",    {19402,14309,0}		},						
			{"",						"",														{0,0,0}	},
			
			
			//Öl
			{"Ölfeld",					"icons\items\oil_unprocessed.paa",						{9184.53,13980.4,0}	},	
			{"Ölraffenerie",			"icons\items\oil_unprocessed.paa",						{6263.76,16263.5,0}	},	
			{"Ölhändler",				"icons\items\oil_unprocessed.paa",						{12655.3,16365.8,0}	},		
			{"Benzinlager / Treibstofflager","icons\items\oil_unprocessed.paa",					{15273.5,17568.8,0}	},			
			{"Kerosinlager",			"icons\items\oil_unprocessed.paa",						{14953.3,17225.4,0}	},					
			{"",						"",														{0,0,0}	},
	
			
		

			//Gold
			{"Big Nugget Mine",			"icons\items\ggn.paa",									{6259,16865,0}		},	
			{"Goldwaschanlage",			"icons\items\ggn.paa",									{9474.58,22218.7,0}	},			
			{"Goldschmied",				"icons\items\ggn.paa",									{16029.1,16448.5,0}	},
			{"Münzpräger",				"icons\items\gm.paa",									{10479.5,17300.8,0}	},			
			{"Münzhändler",				"icons\items\gm.paa",									{13795.6,6392.69,0}	},				
			{"",						"",														{0,0,0}	},
	
			
			
			//HOLZ
			{"Wald Nord",				"icons\items\holz.paa",									{3172.75,21714.7,0}	},			
			{"Sägewerk",				"icons\items\holzv.paa",								{5869.8,20129,0}	},
			{"Leimabteilung",			"icons\items\leim.paa",									{8231.91,10897.4,0}	},
			{"Spanplattenfabrik",		"icons\items\spa.paa",									{12756.5,14776.6,0}	},
			{"Schreiner",				"icons\items\holzv.paa",								{9768.18,19415.4,0}	},			
			{"LIKEA",					"icons\items\l_23.paa",									{9254.4,15860.5,0}	},			
			{"",						"",														{0,0,0}	},			
			
			{"Salzmine",				"icons\items\salt_unprocessed.paa",						{23785.9,18715,0}},			
			{"Salzverarbeiter",			"icons\items\salt_unprocessed.paa",						{27361.7,24464.8,0}},	
			{"Salzhändler",				"icons\items\salt_unprocessed.paa",						{20695.3,19466.3,0}},	
			{"",						"",														{0,0,0}	},

			{"Steinbruch",				"icons\items\rock.paa",			{17081.2,11359.6,0}	},
			{"Zementmischer",			"icons\items\cement.paa",		{19315.5,16545,0}},				
			{"Zementhändler",			"icons\items\cement.paa",			{16582.1,15991.7,0}	},	
			{"",						"",														{0,0,0}	},

			{"Diamantenmine",			"icons\items\diamond.paa",								{13928.1,22310.9,0}	},
			{"Diamantenschleifer",		"icons\items\diamond.paa",								{14344,18950.3,0}	},			
			{"Diamantenhändler",		"icons\items\diamond.paa",								{17868.7,18200.3,0}	},				
			{"",						"",														{0,0,0}	},
			
			{"Jagdgebiet Hasen",		"icons\items\spa.paa",	{23958.6,18287.8,0}},				
			{"Jagdgebiet Ziegen & Schafe","icons\items\sand.paa",		{3551.84,18398.7,0}	},			
			{"Kürschner",				"icons\items\goaf.paa",									{6213.29,19308.7,0}	},
			{"Pelzhändler",				"icons\items\goaf.paa",									{7561.56,18355.7,0}	},			
			{"Dönerhersteller",			"icons\items\doe.paa",									{4845.71,16157.2,0}	},								
			{"",						"",														{0,0,0}	},
			
			{"Schildkrötenhändler Kavala","icons\items\turtle.paa",								{3436.17,11692.1,0}	},			
			{"Schildkrötenhändler",		"icons\items\turtle.paa",								{10246.4,11271.5,0}	},
			{"Schildkrötenhändler",		"icons\items\turtle.paa",								{16557.1,15549.4,0}	},			
			{"",						"",														{0,0,0}	},
			
			{"Fischmarkt Kavala",		"icons\items\fish.paa",									{3274.5,12933.6,0}	},			
			{"Fischmarkt Pyrgos",		"icons\items\fish.paa",									{16569.3,12436,0}	},			
			{"",						"",														{0,0,0}	},

			
			// Atom 
			{"Atomwaffentestgelände",	"icons\items\au1.paa",									{19354,9675,0}		},			
			{"Atommüllaufbereitung",	"icons\items\au1.paa",									{21128.5,13546.4,0}	},		
			{"Uranveredelung",			"icons\items\au1.paa",									{9191.78,19281.6,0}	},			
			{"Uranreinigung",			"icons\items\au1.paa",									{9145.14,21655.3,0}	},			
			{"Urananreicherung",		"icons\items\au1.paa",									{14212.4,21221.9,0}	},
			{"Brennstabherstellung",	"icons\items\au1.paa",									{13304.8,14540.6,0}	},			
			{"Brennstabhändler",		"icons\items\au1.paa",									{15441.5,15775.5,0}	},			
			{"",						"",														{0,0,0}	},
			
			{"Chemiewerk",				"textures\Handy\Icons\div\Fabrik1.paa",					{8239.38,10847.7,0}	},	
			{"Fracking",				"icons\items\prl.paa",									{9965.28,10214.6,0}	},					
			{"Gaswerk",					"textures\Handy\Icons\div\Fabrik1.paa",					{11957.4,12937.5,0}	},
			{"",						"",														{0,0,0}	},
			
			//Drogen
			{"Kannabisfeld",			"icons\items\cannabis.paa",								{11614,7036.49,0}	},			
			{"Weedveredelung",			"icons\items\cannabis.paa",								{11019.5,14854.9,0}	},
			{"",						"",														{0,0,0}	},
			
			{"Frösche",					"icons\items\lsdf.paa",									{21281.2,14744.8,0}	},
			{"LSD-Herstellung",			"icons\items\lsdf.paa",									{16656,20516.3,0}	},			
			{"",						"",														{0,0,0}	},
			
			{"Kokainfeld",				"icons\items\cocain_processed.paa",						{24714.7,22313.3,0}},	
			{"Kokainverarbeiter",		"icons\items\cocain_processed.paa",						{20595,16034.9,0}},	
			{"",						"",														{0,0,0}	},
			
			{"Heroinfeld",				"icons\items\heroin_processed.paa",						{19878.3,17011.6,0}},			
			{"Heroinverarbeiter",		"icons\items\heroin_processed.paa",						{20434.6,11469.4,0}	},	
			{"",						"",														{0,0,0}	},
			
			{"Apotheke Frini",			"textures\Handy\Icons\div\apotheke1.paa",				{14626,20800,0}		},			
			{"Apotheke Chalkeia",		"textures\Handy\Icons\div\apotheke1.paa",				{20185,11662,0}		},						
			{"Methherstellung",			"icons\items\cmu.paa",									{19440.3,19155.6,0}},		
			{"",						"",														{0,0,0}	},
			
			{"Drogendealer Kavala",		"textures\Handy\Icons\div\Rebellen1.paa",				{3489.59,14111.8,0}	},		
			{"Drogendealer Sofia",		"textures\Handy\Icons\div\Rebellen1.paa",				{26772.6,21204.4,0}},
			{"Drogendealer Airfield",	"textures\Handy\Icons\div\Rebellen1.paa",				{15353.5,16015.5,0}	},
			{"",						"",														{0,0,0}	},
			
				
			{"Schwefelmine",			"icons\items\c_3.paa",									{18477.4,14285.3,0}	},
			{"Waffenherstellung",		"textures\Handy\Icons\div\waffenshop1.paa",				{20909.9,19233.7,0}},	
			{"Terrorzelle",				"textures\Handy\Icons\div\Rebellen1.paa",				{24009.6,15451.3,0}}			

		};
		
		101[] = 
		{
			{"Rebellen",						"",												{0,0,0}	},
			{"",						"",														{0,0,0}	},
			{"Rebellen HQ",				"textures\Handy\Icons\div\Rebellen1.paa",				{23611.6,24416.6,0}},			
			{"Rebellen AIR Shop",		"textures\Handy\Icons\div\Rebellen1.paa",				{24134.8,24400,0}},			
			{"Rebellen AIR Garage",		"textures\Handy\Icons\div\Rebellen1.paa",				{23373.2,24184.6,0}},		
			{"Rebellenaußenposten Nord","textures\Handy\Icons\div\Rebellen1.paa",				{4841.32,21934.4,0}},			
			{"Rebellenaußenposten Süd",	"textures\Handy\Icons\div\Rebellen1.paa",				{11216.1,8701.09,0}},			
			{"",						"",																{0,0,0}	},		

			{"Gangversteck 1",			"textures\Handy\Icons\div\Rebellen1.paa",				{9268.83,12143.6,0}},		
			{"Gangversteck 2",			"textures\Handy\Icons\div\Rebellen1.paa",				{11693.2,15914.6,0}},	
			{"Gangversteck 3",			"textures\Handy\Icons\div\Rebellen1.paa",				{18383.8,15248.3,0}}
			
		};
		
		102[] = 
		{
			{"CIV Shop´s",						"",														{0,0,0}	},			
			{"",						"",																{0,0,0}	},
			
			{"Botthshändler Kavala",		"\A3\ui_f\data\map\markers\nato\c_ship.paa",				{3283.53,12936.7,0}	},
			{"Bootshändler Neochori",		"\A3\ui_f\data\map\markers\nato\c_ship.paa",				{12682.8,14214.5,0}	},			
			{"Boot & Tauchladen Pyrgos",	"\A3\ui_f\data\map\markers\nato\c_ship.paa",				{16576.7,12427.9,0}	},	
			{"",						"",																{0,0,0}	},		

			{"Tauchladen Kavala",			"textures\Handy\Icons\div\taucher1.paa",					{3274.48,12935,0}	},	
			{"Tauchladen Neochori",			"textures\Handy\Icons\div\taucher1.paa",					{11850.2,13615.5,0}	},	
			{"",						"",																{0,0,0}	},		
			
			{"Kiosk Airfield",		"textures\Handy\Icons\div\Shop1.paa",								{14615.6,16807.6,0}	},	
			{"Kiosk Athira",		"textures\Handy\Icons\div\Shop1.paa",								{14025.8,18810.5,0}	},			
			{"Kiosk Kavala",		"textures\Handy\Icons\div\Shop1.paa",								{3663.11,13099.4,0}	},	
			{"",						"",																{0,0,0}	},		

			{"Kleidung Airfield",	"textures\Handy\Icons\div\Shop1.paa",								{14491.3,16860.7,0}	},
			{"Kleidung Kavala",		"textures\Handy\Icons\div\Shop1.paa",								{3637.01,13074.3,0}	},			
			{"Kleidung Pyrgos",		"textures\Handy\Icons\div\Shop1.paa",								{16596.7,12825.7,0}	},	
			{"Kleidung Sofia",		"textures\Handy\Icons\div\Shop1.paa",								{25662.8,21298,0}	},				
			{"Kleidung Zaros",		"textures\Handy\Icons\div\Shop1.paa",								{8956.41,11999.5,0} },			
			{"",						"",																{0,0,0}	},		

			{"Bürgerbüro Airfield",		"textures\Handy\Icons\LRKleuchte.mittelgross.1.0.paa",			{14516.1,16760.7,0}	},	
			{"Lizenzamt Athira",		"textures\Handy\Icons\LRKleuchte.mittelgross.1.0.paa",			{14042,18786.9,0}	},
			{"Lizenzamt Kavala",		"textures\Handy\Icons\LRKleuchte.mittelgross.1.0.paa",			{3684.36,13104.8,0} },			
			{"Lizenzamt Pyrgos",		"textures\Handy\Icons\LRKleuchte.mittelgross.1.0.paa",			{16641.8,12806.8,0}	},	
			{"Lizenzamt Sofia",		"textures\Handy\Icons\LRKleuchte.mittelgross.1.0.paa",				{25779.4,21356,0}	},			
			{"",						"",																{0,0,0}	},		
			
			{"Markt & Zubehör Airfield",	"textures\Handy\Icons\div\Shop1.paa",						{14631.9,16821.9,0}	},	
			{"Markt & Zubehör Athira",		"textures\Handy\Icons\div\Shop1.paa",						{14028.3,18793.1,0}	},	
			{"Markt & Zubehör Kavala",		"textures\Handy\Icons\div\Shop1.paa",						{3685.22,13117.5,0} },			
			{"Markt & Zubehör Pyrgos",		"textures\Handy\Icons\div\Shop1.paa",						{16587.8,12826.2,0}	},
			{"Markt % Zubehör Sofia",		"textures\Handy\Icons\div\Shop1.paa",						{25623.5,21297.5,0}	},			
			{"Markt Zaros",					"textures\Handy\Icons\div\Shop1.paa",						{9085.42,12038.1,0} },	
			{"",						"",																{0,0,0}	},		
	
			{"Outdoor Shop",				"icons\items\l_23.paa",										{3869.8,17518.9,0}	},		
			{"",						"",																{0,0,0}	},		

			{"Paintball Rebellen HQ",	"textures\Handy\Icons\div\paintball1.paa",						{23823.8,24510.9,0}	},			
			{"Paintball Ahtira",		"textures\Handy\Icons\div\paintball1.paa",						{14025.7,18810.6,0}	},			
			{"Paintball Airfield",		"textures\Handy\Icons\div\paintball1.paa",						{14615.5,16807.6,0}	},			
			{"Paintball Kavalla",		"textures\Handy\Icons\div\paintball1.paa",						{3662.38,13099.4,0}	},	
			{"",						"",																{0,0,0}	},		
			
			{"Waffenladen Telos",		"textures\Handy\Icons\div\waffenshop1.paa",						{16340.4,17267.3,0}	},	
			{"Waffenladen Zaros",		"textures\Handy\Icons\div\waffenshop1.paa",						{10663.4,12292.9,0}	}			
		
			
		};

		103[] = 
		{
			{"Fahrzeuge",				"",																{0,0,0}	},			
			{"",						"",																{0,0,0}	},		

			{"Autohändler Airfield",	"\A3\ui_f\data\map\markers\nato\c_car.paa",{14530.4,16901.3,0}},	
			{"Autohändler Athira",		"\A3\ui_f\data\map\markers\nato\c_car.paa",{14033.7,18758.8,0}},
			{"Autohändler Kavala",		"\A3\ui_f\data\map\markers\nato\c_car.paa",{3719.23,13192.3,0}},				
			{"Autohändler Pyrgos",		"\A3\ui_f\data\map\markers\nato\c_car.paa",{16556,12790.9,0}},
			{"Autohändler Sofia",		"\A3\ui_f\data\map\markers\nato\c_car.paa",{25837.2,21443.8,0}},			

			{"Air Garage Airfield",		"\A3\ui_f\data\map\markers\nato\o_air.paa",{14718.1,16773.9,0}},
			{"Air Garage Athira",		"\A3\ui_f\data\map\markers\nato\o_air.paa",{14286.9,18635.8,0}},
			{"Air Garage Kavala",		"\A3\ui_f\data\map\markers\nato\o_air.paa",{4375.04,12931.1,0}},			
			{"Air Garage Pyrgos",		"\A3\ui_f\data\map\markers\nato\o_air.paa",{16908,12328,0}},		
			{"Air Garage Sofia",		"\A3\ui_f\data\map\markers\nato\o_air.paa",{25888.7,21411.7,0}},
			
			{"Boot Spawn Kavala",		"\A3\ui_f\data\map\markers\nato\c_ship.paa",{3290.73,12921.5,0}},		
			{"Boot Spawn Neochori",		"\A3\ui_f\data\map\markers\nato\c_ship.paa",{12697.1,14197.8,0}},	
			{"Boot Spawn Pyrgos",		"\A3\ui_f\data\map\markers\nato\c_ship.paa",{16559.7,12411.3,0}},	
			
			{"Cargo Shop Airfield",		"\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa",{14283.9,16364,0}},	
			{"Cargo Shop Charkia",		"\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa",{18306.6,15526.9,0}},
			{"Cargo Shop Kore",			"\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa",{6106.41,16264.6,0}},	
			
			{"Chop Shop Nord",			"\A3\ui_f\data\map\markers\nato\o_armor.paa",{27987.9,23704.4,0}},	
			{"Chop Shop Süd",			"\A3\ui_f\data\map\markers\nato\o_armor.paa",{21840.2,5978,0}},	
						
			{"Garage Airfield",			"\A3\ui_f\data\map\markers\nato\o_air.paa",{14465.6,16825.5,0}},
			{"Garage Athira",			"\A3\ui_f\data\map\markers\nato\o_air.paa",{14033.7,18758.8,0}},	
			{"Garage Kavala",			"\A3\ui_f\data\map\markers\nato\o_air.paa",{3739.51,13268.5,0}},	
			{"Garage Pyrgos",			"\A3\ui_f\data\map\markers\nato\o_air.paa",{16561.6,12739.3,0}},
			{"Garage Sofia",			"\A3\ui_f\data\map\markers\nato\c_car.paa",{25815.7,21493.9,0}},	
			
			{"Go-Kart Händler",			"\A3\ui_f\data\map\mapcontrol\power_ca.paa",{14166.8,16522.7,0}},	
			
			{"Heli Shop",				"\A3\ui_f\data\map\markers\nato\o_air.paa",{14622.5,16800.1,0}},
			{"Helikopter Wartung",		"\A3\ui_f\data\map\markers\nato\respawn_air_ca.paa",{14419,16244.8,0}},													
					
			{"Lackierer Gravia",		"\A3\ui_f\data\map\markers\nato\o_unknown.paa",{14301.1,17662.8,0}},	
			{"Lackierer Kore",			"\A3\ui_f\data\map\markers\nato\o_unknown.paa",{6795.85,15581.1,0}},				
			{"Lackierer Pyrgos",		"\A3\ui_f\data\map\markers\nato\o_unknown.paa",{17432.5,13940.1,0}},			

			{"LKW Händler Kavala",		"\A3\ui_f\data\map\markers\nato\c_car.paa",{3943.89,12598.4,0}},	
			{"LKW Parkpaltz Kavala",	"\A3\ui_f\data\map\markers\nato\c_car.paa",{3656.54,13201.8,0}},			
			
			{"Verwahrstelle Mitte",		"\A3\ui_f\data\map\Markers\Military\arrow2_ca.paa",{8989.88,15488.9,0}},			
			{"Verwahrstelle Nord",		"\A3\ui_f\data\map\Markers\Military\arrow2_ca.paa",{26901.7,23806.1,0}}						
		
		};	
		104[] = 
		{
			{"Tankstellen",						"",														{0,0,0}	},			
			{"",						"",																{0,0,0}	},		

			{"Tankstelle Agios Dionysios",		"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{9023.11,15729.2,0}},			
			{"Tankstelle Airfield",				"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{14173.7,16541.4,0}},						
			{"Tankstelle Airfield Nord",		"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{15297.3,17566.7,0}},			
			{"Tankstelle Ahtira",				"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{14221.9,18302.6,0}},			
			{"Tankstelle Autobahnpolizei",		"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{23378.7,19799.6,0}},			
			{"Tankstelle Chalkeia",				"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{19963.5,11450.5,0}},			
			{"Tankstelle Charkia",				"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{16873.6,15473,0}},			
			{"Tankstelle Kavala Nord",			"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{3757.37,13481.8,0}},			
			{"Tankstelle Kavala Ost",			"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{4001.31,12591.4,0}},			
			{"Tankstelle Kore",					"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{6797.65,15561.2,0}},			

			{"Tankstelle Nord",					"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{5765.25,20073.8,0}},			
			{"Tankstelle Paros",				"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{20787.4,16669.5,0}},		
			{"Tankstelle Pyrgos",				"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{16750.4,12514,0}},			
			{"Tankstelle Sofia",				"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{25700.6,21373.4,0}},			
			{"Tankstelle Syrta",				"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{12027,15829.9,0}},			
			{"Tankstelle Syrta",				"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{8482.62,18260.4,0}},			
			{"Tankstelle Telos",				"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",				{15781.2,17453.1,0}},			
			{"",						"",																{0,0,0}	},		

			
			{"Tankstellen Shop Agios Dionysios","textures\Handy\Icons\div\tankstellenshop1.paa",				{9031.32,15714.7,0}},					
			{"Tankstellen Shop Airfield",		"textures\Handy\Icons\div\tankstellenshop1.paa",				{14186,16532.1,0}},			
			{"Tankstellen Shop Athira",			"textures\Handy\Icons\div\tankstellenshop1.paa",				{14240.1,18315.9,0}},			
			{"Tankstellen Shop Autobahnpolizei","textures\Handy\Icons\div\tankstellenshop1.paa",				{23362.5,19809.9,0}},			
			{"Tankstellen Shop Chalkeia",		"textures\Handy\Icons\div\tankstellenshop1.paa",				{19956.4,11432.6,0}},			
			{"Tankstellen Shop Charkia",		"textures\Handy\Icons\div\tankstellenshop1.paa",				{16831.1,15476.4,0}},			
			{"Tankstellen Shop Kavala Nord",	"textures\Handy\Icons\div\tankstellenshop1.paa",				{3749.54,13456.9,0}},			
			{"Tankstellen Shop Neochori",		"textures\Handy\Icons\div\tankstellenshop1.paa",				{11847.8,14144.9,0}},			
			{"Tankstellen Shop Nord",			"textures\Handy\Icons\div\tankstellenshop1.paa",				{5765.25,20073.8,0}},			
			{"Tankstellen Shop Paros",			"textures\Handy\Icons\div\tankstellenshop1.paa",				{20769,16668.1,0}},			
			{"Tankstellen Shop Pyrgos",			"textures\Handy\Icons\div\tankstellenshop1.paa",				{16758.3,12500.2,0}},			
			{"Tankstellen Shop Sofia",			"textures\Handy\Icons\div\tankstellenshop1.paa",				{25691.6,21387.7,0}},			
			{"Tankstellen Shop Syrta",			"textures\Handy\Icons\div\tankstellenshop1.paa",				{8493.63,18275.2,0}},			
			{"",						"",																{0,0,0}	},		

			{"Heli Tankstelle Airfield",		"\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa",  			{14803.6,16834.1,0}},			
			{"Heli Tankstelle Rebellen HQ",		"textures\Handy\Icons\div\Rebellen1.paa",						{24139.1,24409.3,0}}			
			
		};
		105[] = 
		{
			{"ATM´s",					"",												{0,0,0}	},			
			{"",						"",												{0,0,0}	},		
			
			{"ATM Agios Dionysios","\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",		{9172.64,15834,0}},			
			{"ATM Airfield Hauptgebäude","\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",	{14602.6,16813.3,0}},			
			{"ATM Airfield Bank","\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{14518.4,16775,0}},			
			{"Bank Airfield",	"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{14520,16771.6,0}},			
	
			{"ATM Athira",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{14006.8,18780.2,0}},			
			{"ATM Athira Garage","\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{14032.1,18744.1,0}},			
			{"",						"",												{0,0,0}	},		

			{"ATM Feres",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{21727.9,7543.02,0}},			
			{"",						"",												{0,0,0}	},		
			{"ATM Kavala Nord",	"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{3835.45,13779,0}},			
			{"Bank Kavala",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{3687.97,13111.2,0}},			
			{"ATM Kavala",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{3685.51,13114.5,0}},			
			{"ATM Kavala",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{3682.99,13114.2,0}},			
			{"ATM Kavala Krankenhaus Ost","\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",{3773.88,13001.2,0}},			
			{"ATM Kavala Krankenhaus Süd","\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",{3734.33,12979.3,0}},			
			{"ATM Kavala Süd",  "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{3695.26,12254.3,0}},			
			{"ATM Katalaki",	"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{11778.7,13741.9,0}},			
			{"",						"",												{0,0,0}	},		
	
			{"ATM Negades",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{4810.15,16133.8,0}},			
			{"ATM Neochori",	"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{12691,14245.5,0}},			
			{"ATM Neri",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{4161.27,11815.6,0}},
			{"",						"",												{0,0,0}	},		
	
		
			{"ATM Panagia",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{20543.9,8903.81,0}},			
			{"ATM Paros",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{20769.1,16672.1,0}},			
			{"ATM Poliakko",	"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{10905.5,13420.3,0}},			
			{"ATM Pyrgos",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{16642.4,12801.3,0}},			
			{"",						"",												{0,0,0}	},		

			{"ATM Rodopoli",	"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{18859.4,16663.6,0}},			
			{"",						"",												{0,0,0}	},		
			
			{"ATM Sofia",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{25696.5,21388.3,0}},			
			{"ATM Syrta",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{8628.79,18264.2,0}},			
			{"",						"",												{0,0,0}	},		


			{"ATM Telos",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{16290.5,17295.1,0}},			
			{"ATM Therisa",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{10693.4,12237.7,0}},			
			{"",						"",												{0,0,0}	},		
		
			{"ATM Zaros",		"\A3\ui_f\data\map\mapcontrol\tourism_ca.paa",			{9024.71,12121.6,0}}		
		
		
		};
		106[] = 
		{
			{"Heli-Taxen",				"",														{0,0,0}	},			
			{"",						"",																{0,0,0}	},		
			{"Heli-Taxi Ahtira",		"\A3\ui_f\data\map\markers\nato\o_air.paa",	{13997.4,18894.8,0}},
			{"Heli-Taxi Airfield",		"\A3\ui_f\data\map\markers\nato\o_air.paa",	{14668.6,16699.6,0}},
			{"Heli-Taxi Kavala",		"\A3\ui_f\data\map\markers\nato\o_air.paa",	{3189.62,12898.2,0}},
			{"Heli-Taxi Pyrgos",		"\A3\ui_f\data\map\markers\nato\o_air.paa",	{16533.5,12545.3,0}},
			{"Heli-Taxi Sofia",			"\A3\ui_f\data\map\markers\nato\o_air.paa",	{25871.1,21485.1,0}}			
						
						
						
					
			
		};
		107[] = 
		{
			{"Liga News",				"",														{0,0,0}	},			
			{"",						"",																{0,0,0}	},		
						
			{"Liga News Nord",			"\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa",			{25313.8,21809.5,0}},			
			{"Liga News Rebellen HQ",	"\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa",			{23796,24222.4,0}},		
			{"Liga News West",			"\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa",			{4540.94,15411.4,0}}
			
		};
		108[] = 
		{
			{"Dienste",					"",																	{0,0,0}	},			
			{"",						"",																	{0,0,0}	},		
			
			{"Autobahnpolizei",				"textures\Handy\Icons\div\polizei1.paa",						{23636.2,20018.9,0}},			
			{"Polizei Luftstützpunkt",		"textures\Handy\Icons\div\polizei1.paa",						{15204.2,17346.4,0}},			
			{"Polizei Ahtira",				"textures\Handy\Icons\div\polizei1.paa",						{13849.2,18600.7,0}},			
			{"Polizei Hauptquartier Pyrgos","textures\Handy\Icons\div\polizei1.paa",						{17016.5,12816,0}},			
			{"Polizei Hauptquartier Kavala","textures\Handy\Icons\div\polizei1.paa",						{3674.33,13395.9,0}},			
			{"",						"",																	{0,0,0}	},		

			{"Krankenhaus Kavala",			"textures\Handy\Icons\div\medic.paa",							{3765.79,12990.2,0}},			
			{"Krankenhaus Airfield",		"textures\Handy\Icons\div\medic.paa",							{14610.4,16918.9,0}},			
			{"LRK Außenposten",				"textures\Handy\Icons\div\medic.paa",							{26811.6,24580.3,0}},			
			{"",						"",																	{0,0,0}	},		

			{"ALAC Molos",					"textures\Handy\Icons\div\alac1.paa",							{27165.9,24952,0}},			
			{"ALAC Airfield",				"textures\Handy\Icons\div\alac1.paa",							{15134.4,17278.9,0}},			
			{"ALAC Hauptquartier Kavala",	"textures\Handy\Icons\div\alac1.paa",							{4192.61,12829.6,0}},			
			{"",						"",																	{0,0,0}	},		

			{"Flugsicherung",				"\A3\ui_f\data\map\markers\nato\o_air.paa",						{14483.9,16328.7,0}},	
			{"",						"",																	{0,0,0}	},		

			{"Shutter Island Psychatrie",	"textures\Handy\Icons\div\medic.paa",							{13595,12194.9,0}},			
			{"Ligatraz Staatsgefängnis",	"textures\Handy\Icons\div\polizei1.paa",						{14096.6,11562.1,0}}			
			
		};
		109[] = 
		{
			{"Sehenswürdigkeiten ",		"",																	{0,0,0}	},			
			{"",						"",																	{0,0,0}	},		
			{"Amphitheater Pefkas-Bucht",	"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",						{20079.1,20064.7,0}	},			
			{"",						"",																	{0,0,0}	},		
			{"Beichtkirche",				"\A3\ui_f\data\map\mapcontrol\church_ca.paa",						{3007.55,12511.4,0}	},			
			{"Bojenhalde",					"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",						{21804.2,6252.46,0}	},			
			{"Burgruinen Kavala",			"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",						{3087.2,13186.7,0}	},			
			{"Burgruinen Oreokastro",		"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",						{4858.14,21912.3,0}	},			
			{"",						"",																	{0,0,0}	},		
			{"Fußballstadion",				"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",						{5474.48,14998.5,0}	},			
			{"",						"",																	{0,0,0}	},		

			{"Geisterhotel",				"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",						{21979.9,21034.2,0}	},			
			{"",						"",																	{0,0,0}	},		
			{"Kartbahn Airfield",			"\A3\ui_f\data\map\mapcontrol\power_ca.paa",						{14138.7,16475.7,0}	},			
			{"",						"",																	{0,0,0}	},		
			{"Leuchtturm Kap Strigla",		"\A3\ui_f\data\map\mapcontrol\lighthouse_ca.paa",						{28321.6,25785.3,0}	},			
			{"Leuchtturm Bomos",			"\A3\ui_f\data\map\mapcontrol\lighthouse_ca.paa",						{2078.63,22184.9,0}	},			
			{"Leuchtturm Kap Makrinos",		"\A3\ui_f\data\map\mapcontrol\lighthouse_ca.paa",						{13815.1,6397.47,0}	},			
			{"",						"",																	{0,0,0}	},		
			{"Paintballarena",				"textures\Handy\Icons\div\paintball1.paa",						{22918.1,17030.6,0}	},			
			{"",						"",																	{0,0,0}	},		
			{"Qurantänezone",				"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",						{20797.2,6712.79,0}	},			
			{"",						"",																	{0,0,0}	},		
			{"Ruinenstadt Aktinarki",		"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",						{21495.9,10821.5,0}	},			
			{"",						"",																	{0,0,0}	},		
			{"Stonehenge",					"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",						{14471.4,6185.27,0}	},			
			{"",						"",																	{0,0,0}	},		
			{"Tempelruinen Iraklia",		"\A3\ui_f\data\map\mapcontrol\ruin_ca.paa",						{21588.4,21276.2,0}	}		

						
		};
		110[] = 
		{
			{"DP Mission",				"",																	{0,0,0}	},			
			{"",						"",																	{0,0,0}	},		
			
			{"DP",		"textures\Handy\Icons\div\dp1.paa",				{3913.19,13590.8,0}},			
			{"DP 1",	"textures\Handy\Icons\div\dp1.paa",				{4177.86,11801.3,0}},			
			{"DP 2",	"textures\Handy\Icons\div\dp1.paa",				{4884.55,16149.8,0}},			
			{"DP 3",	"textures\Handy\Icons\div\dp1.paa",				{8646.53,18254.8,0}},			
			{"DP 4",	"textures\Handy\Icons\div\dp1.paa",				{4654.33,21400.8,0}},			
			{"DP 5",	"textures\Handy\Icons\div\dp1.paa",				{10279.8,19114.6,0}},			
			{"DP 6",	"textures\Handy\Icons\div\dp1.paa",				{14596.1,20818.6,0}},			
			{"DP 7",	"textures\Handy\Icons\div\dp1.paa",				{14006,18819,0}},			
			{"DP 8",	"textures\Handy\Icons\div\dp1.paa",				{5053.01,11397.8,0}},			
			{"DP 9",	"textures\Handy\Icons\div\dp1.paa",				{9086.45,11987.9,0}},			
			{"DP 10",	"textures\Handy\Icons\div\dp1.paa",				{12675.6,14231,0}},			
			{"DP 11",	"textures\Handy\Icons\div\dp1.paa",				{9188.25,15828.1,0}},			
			{"DP 12",	"textures\Handy\Icons\div\dp1.paa",				{12363.6,15690.5,0}},			
			{"DP 13",	"textures\Handy\Icons\div\dp1.paa",				{18850.1,16654.2,0}},			
			{"DP 14",	"textures\Handy\Icons\div\dp1.paa",				{20918.8,16929.1,0}},			
			{"DP 15",	"textures\Handy\Icons\div\dp1.paa",				{21360.6,16389.1,0}},			
			{"DP 16",	"textures\Handy\Icons\div\dp1.paa",				{25642.7,21310.5,0}},			
			{"DP 17",	"textures\Handy\Icons\div\dp1.paa",				{26976.7,23266.9,0}},			
			{"DP 18",	"textures\Handy\Icons\div\dp1.paa",				{16694,12757,0}},			
			{"DP 19",	"textures\Handy\Icons\div\dp1.paa",				{18111.9,15191,0}},			
			{"DP 20",	"textures\Handy\Icons\div\dp1.paa",				{28344.4,25776.9,0}},			
			{"DP 21",	"textures\Handy\Icons\div\dp1.paa",				{19364.6,13211.1,0}},			
			{"DP 22",	"textures\Handy\Icons\div\dp1.paa",				{20304.2,11573.1,0}},			
			{"DP 23",	"textures\Handy\Icons\div\dp1.paa",				{20509.9,8932.91,0}},			
			{"DP 24",	"textures\Handy\Icons\div\dp1.paa",				{21645.5,7514.16,0}},			
			{"DP 25",	"textures\Handy\Icons\div\dp1.paa",				{18226.7,8914.62,0}}		
			
			
			
		};
	};
	
	class EMS 
	{
		IconArr[] = 
		{														
			{"textures\Handy\Icons\Polizei.leuchte.mittelgross.1.0.paa",-1}, 	//Pol	
			{"textures\Handy\Icons\LRKleuchte.mittelgross.1.0.paa",-2},  		//LRK	
			{"textures\Handy\Icons\ALAC.leuchte.mittelgross.1.0.paa",-3},		//ALAC
			{"",999},		
			{"textures\Handy\Icons\div\Admin1.paa",-4},							//ADMIN				
			{"textures\Handy\Icons\Nottrufmessanger.mittelgross.1.0.paa",-5}	//Voice			
		};			
	};	
	
	class Settings 
	{
		SettingONOFF1[] = {"Wetter Widget","WETTWIDG"};
		
		SettingHMArr[] = 
		{
			{"Anzeige","Anzeigeneinstellungen","textures\Handy\Icons\Eisntellungen.mittelgross.1.0.paa"},
			{"","<<<<< HandyInfo >>>>>",""},
			//{"<<<<< HandyInfo >>>>>","",""},
			{"Firmware","L.I.G.A - OS # VER: 0.03 Alpha",""},
			{"TS3","ts3.Liga-Life.de",""},
			{"Homepage","Liga-Life.de",""},
			{"Forum","Liga-Life.de/Forum/",""},
			{"Developed by","Die Liga Team",""},
			{"Grafiken & Designs","Baskid - Die Liga",""},
			{"Scripting & Technische Umsetzung","Zoran & Hirschi - Die Liga",""}			
		};		
	};
	
	class LigaHandyFNCs
	{
		1  = "Liga\LigaHandy\fnc\LigaHandyFNC01.sqf";
		2  = "Liga\LigaHandy\fnc\LigaHandyFNC02.sqf";
		3  = "Liga\LigaHandy\fnc\LigaHandyFNC03.sqf";
		4  = "Liga\LigaHandy\fnc\LigaHandyFNC04.sqf";
		5  = "Liga\LigaHandy\fnc\LigaHandyFNC05.sqf";
		6  = "Liga\LigaHandy\fnc\LigaHandyFNC06.sqf";
		7  = "Liga\LigaHandy\fnc\LigaHandyFNC07.sqf";
		8  = "Liga\LigaHandy\fnc\LigaHandyFNC08.sqf";
		9  = "Liga\LigaHandy\fnc\LigaHandyFNC09.sqf";
		10 = "Liga\LigaHandy\fnc\LigaHandyFNC10.sqf";
		11 = "Liga\LigaHandy\fnc\LigaHandyFNC11.sqf";
		12 = "Liga\LigaHandy\fnc\LigaHandyFNC12.sqf";
		13 = "Liga\LigaHandy\fnc\LigaHandyFNC13.sqf";
		14 = "Liga\LigaHandy\fnc\LigaHandyFNC14.sqf";
		15 = "Liga\LigaHandy\fnc\LigaHandyFNC15.sqf";
		16 = "Liga\LigaHandy\fnc\LigaHandyFNC16.sqf";
		17 = "Liga\LigaHandy\fnc\LigaHandyFNC17.sqf";
		18 = "Liga\LigaHandy\fnc\LigaHandyFNC18.sqf";
		19 = "Liga\LigaHandy\fnc\LigaHandyFNC19.sqf";
		20 = "Liga\LigaHandy\fnc\LigaHandyFNC20.sqf";
		21 = "Liga\LigaHandy\fnc\LigaHandyFNC21.sqf";
		22 = "Liga\LigaHandy\fnc\LigaHandyFNC22.sqf";
		23 = "Liga\LigaHandy\fnc\LigaHandyFNC23.sqf";
		24 = "Liga\LigaHandy\fnc\LigaHandyFNC24.sqf";
		25 = "Liga\LigaHandy\fnc\LigaHandyFNC25.sqf";
		26 = "Liga\LigaHandy\fnc\LigaHandyFNC26.sqf";
		27 = "Liga\LigaHandy\fnc\LigaHandyFNC27.sqf";
		28 = "Liga\LigaHandy\fnc\LigaHandyFNC28.sqf";
		29 = "Liga\LigaHandy\fnc\LigaHandyFNC29.sqf";
		30 = "Liga\LigaHandy\fnc\LigaHandyFNC30.sqf";		
		
	};
};
