/*Author : Hirschi - Die Liga*/

if( !(isNil "knebel") || !(player getVariable["restrained",false])	)exitWith	{};


hint "Dir wurde ein Knebel verpasst.. Also psst ....";

_tempHG = goggles player;

player addGoggles "G_Bandanna_shades";

knebel = true;

player say3D "car_unlock_mi";

waitUntil{sleep 1; isNil "knebel" || !(player getVariable["restrained",false])	};

knebel = nil;
removeGoggles player;
sleep 1;
player addGoggles _tempHG;
