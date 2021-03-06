#define true 1
#define false 0
/*
	╔═════════════════════════════════════════════════════╗
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░░█▀▀▀▄░▄░░░░░░░█░░░░▄░░░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░░░░░█░░░█░░░█▀▀▀░░█░░░░░░░█▀▀▀▀█░█▀▀▀█░░░░░░░░░░░║
	║░░░░░░░░█░░░█░█░█▀▀▀░░█░░░░█░░█░░░░█░█░░░█░░░░░░░░░░░║
	║░░░░░░░░▀▀▀▀░░▀░▀▀▀▀░░▀▀▀▀░▀░░▀▀▀▀▀█░▀▀▀▀█░░░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄█░░░░░░░░░░░░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	║░░░░▀▀▀▀░░░█░░░█░░▀░░░░░▀░░░░░██░░░█░░░░░░░▀▀▀█▀▀▀░░░║
	║░░░█░░░░░░░█░░█░░░░▀░░░▀░░░░░░█░█░░█░░█▀▀▀░░░░█░░░░░░║
	║░░░░▀▀▀░░░░█▀▀░░░░░░▀░▀░░░▀▀░░█░░█░█░░█▀▀▀░░░░█░░░░░░║
	║░░░░░░░█░░░█░░█░░░░░░█░░░░░░░░█░░░██░░▀▀▀▀░░░░█░░░░░░║
	║░░░▀▀▀▀░░░░▀░░░▀░░░░░▀░░░░░░░░▀░░░░▀░░░░░░░░░░▀░░░░░░║
	║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║
	╠═════════════════════════════════════════════════════╝
	║ File: Liga_objekte.cpp
	║ Author: Hirschi - Die Liga
	╚═════════════════════════════════════════════════════╝
*/

class Liga_Objekte {
	
	class Bohrturm_ob {		
	
		BT_1[] = {

			/*	Classname 				,	AttObj	,Attatch Pos		,dir,	AllowDamage*/	
			{"ContainmentArea_01_sand_F",		-1	,{0   ,0   ,0   } 	,0	,true},		//0

			{"Land_TTowerBig_2_f",  			0	,{0   ,0   ,-6  }	,0	,true},
			{"Land_Tank_rust_F",  				1	,{4   ,2   ,7	}	,90	,true},

			{"Land_Research_house_V1_F",  		1	,{0	  ,-6  ,7   }	,0	,true},
			{"Land_Tank_rust_F",  				1	,{-4  ,2   ,7   }	,90	,true},
			{"Land_PortableLight_double_F",  	3	,{0   ,1   ,3.5 }	,0	,true},
			
			{"Land_MobileLandingPlatform_01_F", 1	,{-1  ,0   ,25.5}	,0	,true},
			{"Land_IndPipe1_valve_F",  			1	,{0   ,2   ,6.5 }	,270,true},
			{"Oil_Spill_F",  					10	,{0.5 ,1   ,0	}	,0	,true},	
			
			{"Land_IndPipe1_ground_F",  		7	,{0   ,-7  ,-0.2}	,180,true},
			{"Land_MetalBarrel_F",  			3	,{-3  ,-2  ,-0.8}	,0	,true},
			{"Land_MetalBarrel_empty_F", 		10	,{0.75,0.75,0   }	,0	,true},
			
			{"Oil_Spill_F",  					11	,{0.5,-0.75,-0.2}	,0	,true},
			{"Land_Coil_F",  					6	,{1	  ,0.15,1.3 }	,0	,true},
		//		{"test_EmptyObjectForFireBig", 		13	,{0	  ,0   ,2.8 }	,90	,false},
			
			{"Oil_Spill_F",  					10	,{0.5 ,0.4 ,0   }	,0	,true},
			{"Oil_Spill_F",  					10	,{0.8 ,0.5 ,0   }	,140,true},
			{"Land_Wall_Tin_Pole",  			6	,{-3  ,0   ,-1.5}	,0	,true},
			
			{"Land_Wall_Tin_Pole",  			16	,{0   ,0   ,-2.7}	,0	,true},
			{"Land_Wall_Tin_Pole",  			17	,{0   ,0   ,-2.7}	,0	,true},
			{"Land_Wall_Tin_Pole",  			18	,{0   ,0   ,-2.7}	,0	,true},
			
			{"Land_Wall_Tin_Pole",  			19	,{0   ,0   ,-2.7}	,0	,true},
			{"Land_Pallet_F",  					20	,{0   ,0   ,-1.5}	,0	,true},
			
			{"Land_MetalBarrel_F",  			21	,{-0.3,0   ,0.4 }	,0	,true},
			{"Land_MetalBarrel_F",  			21	,{0.3 ,-0.2,0.4 }	,0	,true},
			{"Land_MetalBarrel_F",  			21	,{0.25, 0.3,0.4 }	,0	,true}
		
		
		};
	};	
};