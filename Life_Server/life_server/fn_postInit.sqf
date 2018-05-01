/*
	Die Liga - Life Server Post Init
	
	Author: Hirschi - Die Liga
*/
if(isNil "Start_Delay") then {Start_Delay = diag_tickTime};
sleep 1;
[] spawn liga_fnc_LigaServerinit; 
//[] call compile PreprocessFileLineNumbers "\life_server\init.sqf";

//[8,true,true,12] execFSM "core\fsm\timeModule.fsm";