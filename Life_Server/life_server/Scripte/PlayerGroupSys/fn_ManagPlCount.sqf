/*Author: Hirschi - Die Liga*/
private["_flag","_temp"];
_player 	= [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_mode 		= [_this,2,false,[true]] call BIS_fnc_param;
if(isNull _player) exitWith {
	{	
		_flag	= _x;
		_temp 	= [];		
		{
			if(isPlayer _x) then {
				_temp pushBack _x
			}; 
		}forEach _flag;
		
		liga_plCount 		set[_forEachIndex,_temp];
		liga_plCountNumb 	set[_forEachIndex,(count _temp)];	
	}forEach liga_plCount;	
	
	publicVariable "liga_plCountNumb";
};

if(_mode) then {	
	_side 		= [_this,1,sideUnknown,[civilian]] call BIS_fnc_param;		
	_sel 		= switch(_side) do {	
		case civilian: 		{0};
		case west: 			{1};
		case independent: 	{2};
		case east: 			{3};
		case default 		{-1};
	};	
	if!(_sel isEqualTo -1) then {
		_temp = (liga_plCount select _sel);
		_temp pushBack _player;			
		liga_plCount set[_sel,_temp];		
	};
	diag_log format["║DEBUG _temp 		: %1",_temp];
	diag_log format["║DEBUG liga_plCount 		: %1",liga_plCount];
};

{	
	_flag	= _x;
	_temp 	= [];		
	{
		if(isPlayer _x) then {
			_temp pushBack _x
		}; 
	}forEach _flag;
		
	liga_plCount 		set[_forEachIndex,_temp];
	liga_plCountNumb 	set[_forEachIndex,(count _temp)];	
}forEach liga_plCount;	
	

publicVariable "liga_plCountNumb";

diag_log format["║DEBUG liga_plCount 		: %1",liga_plCount];
diag_log format["║DEBUG liga_plCountNumb 	: %1",liga_plCountNumb];
