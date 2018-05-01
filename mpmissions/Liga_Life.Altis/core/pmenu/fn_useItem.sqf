#include "..\..\Liga_script_macros.hpp"
#define MACN(CFG) M_CONFIG(getNumber,"VirtualLigaItems",_item,CFG)
#define MACT(CFG) M_CONFIG(getText,"VirtualLigaItems",_item,CFG)
#define MACA(CFG) M_CONFIG(getArray,"VirtualLigaItems",_item,CFG)
/*	
	Author 	: H1rsch1 - D1e L1ga	
*/
private["_flag","_t"];
disableSerialization;
if((lbCurSel 2005) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = lbData[2005,(lbCurSel 2005)];

if(isClass (missionConfigFile >> "VirtualLigaItems" >> _item)) exitWith { 
	if!(  str playerSide in (MACA("allowside")) ) exitWith {hint "Deine Fraktion kann das nicht benutzen."};	
	if(([false,_item,MACN("verbrauch")] call life_fnc_handleInv)) then
	{	
		_t = true;	
		if!(EQUAL(MACN("fat"),-1)) then {
			_flag = (getFatigue player) - MACN("fat");
			player setFatigue (_flag max 0);
			_t = false;
		};		
		if!(EQUAL(MACN("essbar"),-1)) then {
			_flag = life_hunger + MACN("essbar");
			if(_flag > 100) then {
				_flag = 100; 
				player setFatigue 1; 
				hint "Du hast dich ueberfressen und fuehlst dich muede!";
			};
			life_hunger = _flag;
			_t = false;
		};
		if!(EQUAL(MACN("trinkbar"),-1)) then {
			_flag = life_thirst + MACN("trinkbar");
			life_thirst = _flag min 100;	
			_t = false;
		};
		if!(EQUAL(MACN("gulltime"),-1)) then {			
			_item spawn
			{
				_item = _this;
				life_redgull_effect = time;
				titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
				player enableFatigue false;
				waitUntil {!alive player OR ((time - life_redgull_effect) > (MACN("gulltime") * 60))};
				player enableFatigue true;				
			};	
			_t = false;
		};		
		if!(EQUAL(MACT("useablefnc"),"")) then { 			
			_item call compile (MACT("useablefnc"));
			_t = false;
		};	
		if (EQUAL(MACN("closeDiag"),1)	) then { closeDialog 0; _t = false; };
		if!(EQUAL(MACT("sound"),"")		) then { playSound 	MACT("sound"); 	_t = false;	};
		if!(EQUAL(MACT("hinttext"),"")	) then { hint 		MACT("hinttext"); _t = false;	};
		if!(EQUAL(MACT("titletext"),"")	) then { titleText[(MACT("titletext")),"PLAIN"]; _t = false; };
		if!(EQUAL(MACA("dazu"),[])		) then { 
			{	[true,SEL(_x,0),SEL(_x,1)] call life_fnc_handleInv;	}forEach (MACA("dazu"));
			_t = false;
		};	
		if(_t)then {
			hint localize "STR_ISTR_NotUsable";
		}else{	
			[] call life_fnc_p_updateMenu;
			[] call life_fnc_hudUpdate;
		};	
	};	
};
hint localize "STR_ISTR_NotUsable";