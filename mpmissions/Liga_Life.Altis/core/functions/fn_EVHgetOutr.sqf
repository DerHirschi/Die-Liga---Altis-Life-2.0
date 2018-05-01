if!((currentWeapon player isEqualTo "") && (player getVariable ["restrained", false])) then {
	life_curWep_h = currentWeapon player;
	player action ["SwitchWeapon", player, player, 100];
	player switchcamera cameraView;
};