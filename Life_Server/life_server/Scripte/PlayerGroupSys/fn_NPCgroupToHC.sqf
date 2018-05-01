_unit 	= [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _unit) exitWith {};

if(SKY_HC_aktiv_1) then {
	if(!isPlayer _unit && alive _unit) then {
		if!( (groupOwner (group _unit)) isEqualTo HC_id ) then {
			(group _unit) setGroupOwner HC_id;
			diag_log format["Gruppe an HC uebergeben : %1", (group _unit)];
		};		
	};
};