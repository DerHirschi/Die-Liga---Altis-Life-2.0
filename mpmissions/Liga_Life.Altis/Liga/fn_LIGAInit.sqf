#define F false
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
║ File: fn_LIGAInit.sqf
║ Author: Hirschi Liga-Life	
║	
║ Beschreibung: Init Schlampe für Liga Script Gedönz
╚══════════════════════════════════════════════════╝
*/	


	diag_log "╠══════════════════════════════════════════════════╣";
 	diag_log "║ Liga Init gestartet !!! ";
	
	life_id = 9999;				// PVC ID
	pvc_mp = F;     		// PVC Marktpreis Trigger
	

	Imp_Fac = 1;				// Verwahrstellen Faktor
	
	//Player Count
	if(isNil "liga_plCountNumb")then { liga_plCountNumb = [0,0,0,0];};
	
	// Markt Variablen
	markt_type_1 = "";
	markt_type = "";
	markt_amount = 0;
	WH_ind = 0;
	// DB Send Trigger
	
	markt_trig = F;
	
	fuelsave = F;
	life_trusafe = F;
	
	liga_destOb_ar = [];
	liga_dest1 = ObjNull;
	l_dest_1 = ObjNull;
	//Com Baustelle
	
	//liga_baust_tar = ["a5","cement","glass","stt"]; 
	liga_baust_count_ar = [0,0,0,0]; 
	liga_baust_trig = F;
	
	liga_lock = F;
	
	// Liga World
	liga_leim_tank = 0;
		
	// Markt PVC Arrays
	m_preis_ar = [0,1,2,3,4,5,6,7,8];	
	m_name_ar = [20,21,22,23,24,25,26,27,28];	
	m_resources_ar =[40,41,42,43,44,45,46,47,48];
	
	// Bos
	liga_bos = [F,F,F,F,F,F,F,F,true];
	
	[] call life_fnc_AdminStats;	
	[] call life_fnc_clanKey;		
	[] call life_fnc_PVCgetID;  	
	
	fuel_diesel = 63;
	fuel_super = 86;
	fuel_Kerosin = 570;
	liga_fuwait_tr = F;
			
	liga_sit = F;
	liga_anim = F;
	// Disp
	liga_tooltip = true;

	
	diag_log "║ Liga Init erfolgreich !!! ";
	diag_log "╠══════════════════════════════════════════════════╣";
