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
║	File: db_macro.h
║	 
║ Edit & Author: Hirschi Liga-Life.de
║
║ Macros ... Yeahhh
╚══════════════════════════════════════════════════╝	
*/	

#define DEVLOGRPT true //DEV RPTLog ON/OFF

// DEV RPT Log

#define RPT(name,var1) if(DEVLOGRPT) then { \
diag_log "╠══════════════════════════════════════════════════╣";\
diag_log format ["║ ### DEV RPT Ausgabe: %1 ###",name];\
diag_log "╠══════════════════════════════════════════════════╣";\
diag_log format ["║ %2 : %1 ",var1,name];\
diag_log "╠══════════════════════════════════════════════════╣";\
}

// asynCaller Macros

#define DB_CHAN_CHECK(DB) if (DB < 1 || DB > 3) exitWith {\
diag_log "╔══════════════════════════════════════════════════╗";\
diag_log "║ !!! DB_CALL WARNUNG !!! Keine DB adressiert !!!";\
diag_log "╚══════════════════════════════════════════════════╝"; }

#define DB_CHAN(DB) switch (DB) do {\
																	case 1: {_id = HC_SQL_ID1; _extDB = "extDB1"; };\
																	case 2: {_id = HC_SQL_ID2; _extDB = "extDB2"; };\
																	case 3: {_id = HC_SQL_ID3; _extDB = "extDB3"; };\
																}
