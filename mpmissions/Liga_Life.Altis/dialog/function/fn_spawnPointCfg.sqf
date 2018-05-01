/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["cop_spawn_1","Kavala HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","Pyrgos HQ","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_3","Athira HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_4","Air HQ","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_5","HW Patrol","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]
//			["cop_spawn_6","Trainingsg","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]
//			["cop_spawn_7","Gefaengniss","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	};
	
	case default
	{
	
					// Ohne die Lizenz für Rebellen bekommt man die normale Auswahl
		
		_return = [
					["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
					["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
					["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
					["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
				];	
	
				if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestObject [_pos, "House_F"];
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};					
				
/*
		if((getPlayerUID player) in ["0","0","0"])then 
		{
			_return = _return + [
				["admin_spawn_1","Admin Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["admin_spawn_2","Admin Reb. HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			  ];
		};		
		*/
				
		// Adminspawns
		if(ad_spwn) then {
            _return = _return + [
                ["skull","Skull Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["rsnx_spawn","R.N.S.X. Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["aod_spawn","A.o.D. Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["anon_1","Anonymous HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["tower_1","Flusi HQ","\a3\ui_f\data\map\Markers\NATO\b_air.paa"]
                ];
        };
		
		
				//Mit einer Lizenz für Rebellen kann man nur diese Spawnpunkte wählen
		if(lci_reb) then {
					_return = _return + [
					["reb_spawn_1","Rebell HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
					["reb_spawn_2","Rebell HQ Air","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
				//	["reb_spawn_3","Rebell OP","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				//	["reb_spawn_op","Rebell OP Nord","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
				];
		};			
		// Flusi
		if!(life_blacklisted isEqualTo 0) then {
			_return = _return + [
				["tower_1","Flusi HQ","\a3\ui_f\data\map\Markers\NATO\b_air.paa"]
				];
		};	
		
		// Anonymos
		if(cl_ano) exitWith {
			_return = _return + [
				["anon_1","Anonymous HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
				];
		};	
		
		// A.o.D.
		if(cl_aod) exitWith {
					_return = _return + [
				["aod_spawn","A.o.D. Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
				];
		};	
		
				//RSNX Raven Syntax
		if(cl_rnsx) exitWith {
					_return = _return + [
				["rsnx_spawn","R.N.S.X. Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
				];
		};	
		
		// Skull
		if(cl_skull) exitWith {
					_return = _return + [
				["skull","Skull Base","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]

				];
		};	
		
	
};		
	
	case independent: {
		_return = [
			["medic_spawn_1","Kavala Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","DRF HQ","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
		//	["medic_spawn_3","Pygros Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_4","Molos OP","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_1_1","Shutter Island","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
	case east: {
		_return = [
			["adac_spawn_1","Basis 1 ADAC","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["adac_spawn_3","Basis 3 ADAC","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["adac_spawn_4","Basis 4 ADAC","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	}; 
};

_return;