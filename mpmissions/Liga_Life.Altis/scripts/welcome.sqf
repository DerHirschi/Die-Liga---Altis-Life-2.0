/*
File: welcome.sqf
Author: ZedBuster
Link: opendayz.net/threads/dayz-welcome-message-credits-style.13071/
Description:
Creates an intro on the bottom-right hand corner of the screen.
*/

_onScreenTime = 8; //Zeit wie lange ein Text angezeigt wird
sleep 0.5; //Zeit bis die Willkommensnachricht erscheint (in Sekunden)

_role1 = "Willkommen"; //In Grün
_role1names = ["auf dem Liga-Life Server"]; //In Weiß

_role2 = "Projektleitung:";
_role2names = ["Hirschi, Zoran und Dermash"];

_role3 = "Gameadmins:";
_role3names = ["Saberdo und Willi"]; 

_role4 = "Mapping:";
_role4names = ["Gladi, Otti, Snick4Zz, Hirschi"];

_role5 = "Scripting:";
_role5names = ["Hirschi und Zoran ... Besten Dank an Otti, ARMM4G3DON und Kengglol"];

_role6 = "Grafik und Design:";
_role6names = ["Baskid und John Manny"];

_role7 = "Unser Forum:";
_role7names = ["http://Liga-Life.de/Liga-Forum/"];

_role8 = "Unser TeamSpeak Server:";
_role8names = ["ts3.Liga-Life.de"];

_role9 = "Server Restarts:";
_role9names = ["2, 10, 18 Uhr"];

_role10 = "Wir wuenschen euch viel Spass";
_role10names = ["Bitte achtet auf Fair Play !!!"];
{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.80' color='#097A1E' align='center'>%1<br /></t>", _memberFunction]; //Changes colours
_finalText = _finalText + "<t size='1.10' color='#FFFFFF' align='center'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 1.3,0.70], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.4,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [
//The list below should have exactly the same amount of roles as the list above
[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names],
[_role6, _role6names],
[_role7, _role7names],
//[_role8, _role8names],
[_role9, _role9names]
];


99 cutRsc["Liga_logo","PLAIN",0];
((uiNamespace getVariable  ["Liga_logo",displayNull]) displayCtrl 88885) ctrlSetPosition [safeZoneX +  (safeZoneW * 0.4), safeZoneY +   (safeZoneH * 0.77), safeZoneW *  0.2,safeZoneH *  0.368159 ]; 
((uiNamespace getVariable  ["Liga_logo",displayNull]) displayCtrl 88885) ctrlCommit 0;

((uiNamespace getVariable  ["Liga_logo",displayNull]) displayCtrl 88885) ctrlSetFade 1; 
((uiNamespace getVariable  ["Liga_logo",displayNull]) displayCtrl 88885) ctrlCommit 0; 
