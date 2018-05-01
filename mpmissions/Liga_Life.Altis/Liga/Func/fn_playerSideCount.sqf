/*Author: Hirschi - Die Liga*/
/*
_side 		= [_this,0,sideUnknown,[civilian]] call BIS_fnc_param;		
_sel 		= switch(_side) do {	
	case civilian: 		{0};
	case west: 			{1};
	case independent: 	{2};
	case east: 			{3};
	case default 		{0};
};
if!(_sel isEqualTo -1) then { liga_plCountNumb select _sel };
*/
