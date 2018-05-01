/*
Author: Stig (http://steamcommunity.com/profiles/76561198074709001)
Description: Script to create and manage cool restriction zones visible on the map with a easy-to-use GUI (which is inside this SQF script).

You can use/edit this script as long as you give full credits and dont remove my name.
If you use parts of it, do not use them for commercial purposes and give credits.
*/
diag_log "Sperrzonensystem wird geladen.";


stig_sz_msg_add =
compileFinal "

_text = round (( player distance2D (getMarkerPos ( format ['stig_sz_markerA%1',_this]))) - ((getMarkerSize ( format ['stig_sz_markerA%1',_this])) select 0 ) );
if(_text < 0)then{
	_text = ""<br/><t color='#FF0000'>WARNUNG: Du bist in der Sperrzone!</t>"";
}else{
	_text = format [""<br/>Diese liegt %1 Meter von dir entfernt."",_text];
};
hint parseText format [""<t size='2'><t color='#0026FF'>Sperrzone</t></t><br/>Die Polizei hat eine neue Sperrzone ausgerufen.<br/>%1 <br/><br/>Fuer weitere Informationen, siehe auf dein GPS Geraet."",_text];

";
publicVariable "stig_sz_msg_add";


stig_sz_msg_del =
compileFinal "
hint parseText ""<t size='2'><t color='#0026FF'>Sperrzone</t></t><br/>Die Polizei hat eine Sperrzone entfernt.<br/>Du kannst das Gebiet nun wieder sicher betreten."";
";
publicVariable "stig_sz_msg_del";

diag_log "Sperrzonensystem erfolgreich geladen.";