class perk_Fatigur_1 {
	displayName = "Ausdauer";
	requiredPerkPoints = 45;
	requiredLevel = 38;
	requiredPerk = "";
	subtitle = "Level 38 Erforderlich, 45 Erfahrungspunkte";
	description = "Trainiere deinen Körper um mehr Ausdauer zu erhalten.<br/><br/><t color='#10FF45'>unendlich Ausdauer</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_Fatigur_1.sqf";
	limitToSides[] = {};
	color[] = {0.2,1,0.2,1};
};
// -- Weapon related perks
class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Rückstoß Kompensation";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Erforderlich, 5 Erfahrungspunkte";
	description = "Lerne, Waffen besser zu kontrollieren und den Rückstoß zu senken<br/><br/><t color='#10FF45'>-5% weniger Rückstoß</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_1.sqf";
	limitToSides[] = {};
	color[] = {1,0.2,0.2,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Rückstoß Kompensation 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Level 16 Erforderlich, 6 Erfahrungspunkte";
	description = "Lerne, Waffen besser zu kontrollieren und den Rückstoß zu senken<br/><br/><t color='#10FF45'>-10% weniger Rückstoß</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,0.2,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Rückstoß Kompensation 3";
	requiredPerkPoints = 7;
	requiredLevel = 25;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Level 25 Erforderlich, 7 Erfahrungspunkte";
	description = "Lerne, Waffen besser zu kontrollieren und den Rückstoß zu senken<br/><br/><t color='#10FF45'>-20% weniger Rückstoß</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_3.sqf";
	limitToSides[] = {};
	color[] = {0.2,1,0.2,1};
};

// -- Paycheck
class perk_paycheck_1 {
	displayName = "Gehaltsscheck";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Erforderlich, 2 Erfahrungspunkte";
	description = "Erhalte mehr Geld auf dein Gehaltsscheck<br/><br/><t color='#10FF45'>+25% mehr Geld pro Gehaltsscheck</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_1.sqf";
	limitToSides[] = {};
	color[] = {1,0.2,0.2,1};
};

class perk_paycheck_2 {
	displayName = "Gehaltsscheck 2";
	requiredPerkPoints = 3;
	requiredLevel = 8;
	requiredPerk = "perk_paycheck_1";
	subtitle = "Level 8 Erforderlich, 3 Erfahrungspunkte";
	description = "Erhalte mehr Geld auf dein Gehaltsscheck<br/><br/><t color='#10FF45'>+50% mehr Geld pro Gehaltsscheck</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,0.2,1};
};

class perk_paycheck_3 {
	displayName = "Gehaltsscheck 3";
	requiredPerkPoints = 6;
	requiredLevel = 21;
	requiredPerk = "perk_paycheck_2";
	subtitle = "Level 21 Erforderlich, 6 Erfahrungspunkte";
	description = "Erhalte mehr Geld auf dein Gehaltsscheck<br/><br/><t color='#10FF45'>+100% mehr Geld pro Gehaltsscheck</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_3.sqf";
	limitToSides[] = {};
	color[] = {0.2,1,0.2,1};
};

// -- Faster processing
class perk_processing_1 {
	displayName = "Verarbeitungsgeschwindigkeit";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Level 4 Erforderlich, 3 Erfahrungspunkte";
	description = "Lerne, Materialien effizienter zu verarbeiten<br/><br/><t color='#10FF45'>+10% schneller verarbeiten</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,0.2,0.2,1};
};

class perk_processing_2 {
	displayName = "Verarbeitungsgeschwindigkeit 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_processing_1";
	subtitle = "Level 7 Erforderlich, 3 Erfahrungspunkte";
	description = "Lerne, Materialien effizienter zu verarbeiten<br/><br/><t color='#10FF45'>+15% schneller verarbeiten</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,0.2,1};
};

class perk_processing_3 {
	displayName = "Verarbeitungsgeschwindigkeit 3";
	requiredPerkPoints = 4;
	requiredLevel = 17;
	requiredPerk = "perk_processing_2";
	subtitle = "Level 17 Erforderlich, 4 Erfahrungspunkte";
	description = "Lerne, Materialien effizienter zu verarbeiten<br/><br/><t color='#10FF45'>+25% schneller verarbeiten</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {0.2,1,0.2,1};
};

// -- Faster lockpicking
class perk_locksmith_1 {
	displayName = "Dietrich Josef";
	requiredPerkPoints = 5;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Erforderlich, 5 Erfahrungspunkte";
	description = "Lerne, Fahrzeuge schneller aufzubrechen.<br/><br/><t color='#10FF45'>+10% schneller Fahrzeuge knacken</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,0.2,0.2,1};
};

class perk_locksmith_2 {
	displayName = "Dietrich Josef 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_locksmith_1";
	subtitle = "Level 16 Erforderlich, 6 Erfahrungspunkte";
	description = "Lerne, Fahrzeuge schneller aufzubrechen.<br/><br/><t color='#10FF45'>+15% schneller Fahrzeuge knacken</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,0.2,1};
};

class perk_locksmith_3 {
	displayName = "Dietrich Josef 3";
	requiredPerkPoints = 4;
	requiredLevel = 28;
	requiredPerk = "perk_locksmith_2";
	subtitle = "Level 28 Erforderlich, 4 Erfahrungspunkte";
	description = "Lerne, Fahrzeuge schneller aufzubrechen.<br/><br/><t color='#10FF45'>+25% schneller Fahrzeuge knacken</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {0.2,1,0.2,1};
};

// -- Faster Gather
class perk_gather_1 {
	displayName = "Sammeln";
	requiredPerkPoints = 5;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Erforderlich, 5 Erfahrungspunkte";
	description = "Lerne, schneller zu sammeln.<br/><br/><t color='#10FF45'>+25% mehr sammeln</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatherSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,0.2,0.2,1};
};

class perk_gather_2 {
	displayName = "Sammeln 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_gather_1";
	subtitle = "Level 16 Erforderlich, 6 Erfahrungspunkte";
	description = "Lerne, schneller zu sammeln.<br/><br/><t color='#10FF45'>+75% mehr sammeln</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatherSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,0.2,1};
};

class perk_gather_3 {
	displayName = "Sammeln 3";
	requiredPerkPoints = 4;
	requiredLevel = 28;
	requiredPerk = "perk_gather_2";
	subtitle = "Level 28 Erforderlich, 4 Erfahrungspunkte";
	description = "Lerne, schneller zu sammeln.<br/><br/><t color='#10FF45'>+125% mehr sammeln</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatherSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {0.2,1,0.2,1};
};
// -- Faster Repair
class perk_repair_1 {
	displayName = "Reparieren";
	requiredPerkPoints = 5;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Erforderlich, 5 Erfahrungspunkte";
	description = "Lerne, schneller Fahrzeuge zu reparieren.<br/><br/><t color='#10FF45'>+15% schneller reparieren</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_1.sqf";
	limitToSides[] = {};
	color[] = {1,0.2,0.2,1};
};

class perk_repair_2 {
	displayName = "Reparieren 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_repair_1";
	subtitle = "Level 16 Erforderlich, 6 Erfahrungspunkte";
	description = "Lerne, schneller Fahrzeuge zu reparieren.<br/><br/><t color='#10FF45'>+45% schneller reparieren</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,0.2,1};
};

class perk_repair_3 {
	displayName = "Reparieren 3";
	requiredPerkPoints = 19;
	requiredLevel = 38;
	requiredPerk = "perk_repair_2";
	subtitle = "Level 38 Erforderlich, 7 Erfahrungspunkte";
	description = "Lerne, schneller Fahrzeuge zu reparieren.<br/><br/><t color='#10FF45'>+75% schneller reparieren</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_3.sqf";
	limitToSides[] = {};
	color[] = {0.2,1,0.2,1};
};

// -- Spritsparen ECO
class perk_eco_1 {
	displayName = "Treibstoff sparen";
	requiredPerkPoints = 12;
	requiredLevel = 8;
	requiredPerk = "";
	subtitle = "Level 8 Erforderlich, 12 Erfahrungspunkte";
	description = "Lerne, deine Fahrzeuge spritsparender zu fahren.<br/><br/><t color='#10FF45'>-20% Treibstoff verbrauch</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_eco_1.sqf";
	limitToSides[] = {};
	color[] = {1,0.2,0.2,1};
};

class perk_eco_2 {
	displayName = "Treibstoff sparen 2";
	requiredPerkPoints = 19;
	requiredLevel = 17;
	requiredPerk = "perk_eco_1";
	subtitle = "Level 17 Erforderlich, 19 Erfahrungspunkte";
	description = "Lerne, deine Fahrzeuge spritsparender zu fahren.<br/><br/><t color='#10FF45'>-40% Treibstoff verbrauch</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_eco_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,0.2,1};
};

class perk_eco_3 {
	displayName = "Treibstoff sparen 3";
	requiredPerkPoints = 28;
	requiredLevel = 37;
	requiredPerk = "perk_eco_2";
	subtitle = "Level 37 Erforderlich, 28 Erfahrungspunkte";
	description = "Lerne, deine Fahrzeuge spritsparender zu fahren.<br/><br/><t color='#10FF45'>-60% Treibstoff verbrauch</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_eco_3.sqf";
	limitToSides[] = {};
	color[] = {0.2,1,0.2,1};
};

// -- Bohrturm mehr ausbeute
class perk_bohrturm_1 {
	displayName = "Bohrmeister";
	requiredPerkPoints = 9;
	requiredLevel = 12;
	requiredPerk = "perk_gather_1";
	subtitle = "Level 9 Erforderlich, 12 Erfahrungspunkte";
	description = "Lerne, die Fördermenge deines Bohrtums zu erhöhen.<br/><br/><t color='#10FF45'>+15% höhere Fördermenge</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_bohrTurm_1.sqf";
	limitToSides[] = {};
	color[] = {1,0.2,0.2,1};
};

class perk_bohrturm_2 {
	displayName = "Bohrmeister 2";
	requiredPerkPoints = 12;
	requiredLevel = 23;
	requiredPerk = "perk_bohrturm_1";
	subtitle = "Level 23 Erforderlich, 12 Erfahrungspunkte";
	description = "Lerne, die Fördermenge deines Bohrtums zu erhöhen.<br/><br/><t color='#10FF45'>+45% höhere Fördermenge</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_bohrTurm_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,0.2,1};
};

class perk_bohrturm_3 {
	displayName = "Bohrmeister 3";
	requiredPerkPoints = 23;
	requiredLevel = 42;
	requiredPerk = "perk_bohrturm_2";
	subtitle = "Level 42 Erforderlich, 23 Erfahrungspunkte";
	description = "Lerne, die Fördermenge deines Bohrtums zu erhöhen.<br/><br/><t color='#10FF45'>+75% höhere Fördermenge</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_bohrTurm_3.sqf";
	limitToSides[] = {};
	color[] = {0.2,1,0.2,1};
};

class perk_bohrGest_1 {
	displayName = "Tiefenbohrer";
	requiredPerkPoints = 5;
	requiredLevel = 8;
	requiredPerk = "perk_gather_1";
	subtitle = "Level 8 Erforderlich, 5 Erfahrungspunkte";
	description = "Lerne, dein Bohrgestänge zu schonen und den Verbrauch zu senken.<br/><br/><t color='#10FF45'>+50% Bohrtiefe je Bohrgestänge</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_bohrTurm_Gest_1.sqf";
	limitToSides[] = {};
	color[] = {1,0.2,0.2,1};
};

class perk_bohrGest_2 {
	displayName = "Tiefenbohrer 2";
	requiredPerkPoints = 7;
	requiredLevel = 16;
	requiredPerk = "perk_bohrGest_1";
	subtitle = "Level 16 Erforderlich, 7 Erfahrungspunkte";
	description = "Lerne, dein Bohrgestänge zu schonen und den Verbrauch zu senken.<br/><br/><t color='#10FF45'>+100% Bohrtiefe je Bohrgestänge</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_bohrTurm_Gest_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,0.2,1};
};

class perk_bohrGest_3 {
	displayName = "Tiefenbohrer 3";
	requiredPerkPoints = 11;
	requiredLevel = 29;
	requiredPerk = "perk_bohrGest_2";
	subtitle = "Level 29 Erforderlich, 11 Erfahrungspunkte";
	description = "Lerne, dein Bohrgestänge zu schonen und den Verbrauch zu senken.<br/><br/><t color='#10FF45'>+150% Bohrtiefe je Bohrgestänge</t>";
	initScript = "scripts\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_bohrTurm_Gest_3.sqf";
	limitToSides[] = {};
	color[] = {0.2,1,0.2,1};
};