/*
File : fn_copShowLicense.sqf
Create : Black Lagoon
edit: Hirschi - Die Liga
Edit : Noldy and CYNX
Link : http://www.global-gamer.com/home/wbb/index.php/Thread/509-Turorial-Polizeimarke-zeigen/

Beschreibung : Fuegt einen 'Polizeiausweis' hinzu, den man ueber scrollen Zivilisten zeigen kann
*/

private["_target", "_message"];

_target = cursorTarget;

if(playerSide != civilian) exitWith
{
	hint "Du bist kein Zivilist!";
};

if( isNull _target) then {_target = player;};

if( !(_target isKindOf "Man") ) then {_target = player;};

if( !(alive _target) ) then {_target = player;};


_message = format["<img size='10' color='#FFFFFF' image='textures\ausweis_civ.jpg'/><br/><br/><t size='2.5'>%1</t><br/><t size='1.8'>%2</t><br/>", name player];

[player, _message] remoteExec ["life_fnc_civLicenseShown",_target];
