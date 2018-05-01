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
	║	File: Scheduler.hpp	
	║		
	║	Author:  Hirschi - Die Liga	
	║	
	║	Prio: 0 = keine
	║	Prio: 1 = höchste
	║	Prio: 9 = kleinste
	║	
	║	Day[]	= {	"Mo","Mi"	};	=	bestimmte Tage
	║	Day[]	= {		};			=	jeden Tag
	║	
	║	Loop	= Wiederholungen in Minuten. -1 Aus
	║	
	╚══════════════════════════════════════════════════╝
*/

class Server_Events {
	
	class Event_1 {	//Lotto
		
		Prio		= 0;
		Day[]		= {				};	//	{	"Mo","Mi"	};
		StartTime[]	= {	18,	30,	00	}; 	//	erster Start	HH,MM,SS
		StartDate[]	= {				}; 	//	{	2017,	4,	17};	YY DD MM		
		Loop		= -1;				//	wird in x Minuten wiederholt. -1 Disabled
		
		cond		= "";				//	Bedingung
		extraThread	= false;			// 	Spawn = true / call = false
	};
	
};