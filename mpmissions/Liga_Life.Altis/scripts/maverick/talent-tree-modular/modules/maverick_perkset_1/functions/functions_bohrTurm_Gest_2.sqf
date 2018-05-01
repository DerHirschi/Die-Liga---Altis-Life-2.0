scriptName "functions_bohrTurm_Gest_2";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_processSpeed_2.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_bohrTurm_Gest_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_bohrGest_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_bohrturmGestange = 200;
};