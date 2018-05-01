_caller			= [_this,0,objNull] call BIS_FNC_PARAM;
_offer 			= [_this,2,[]] call BIS_FNC_PARAM;
_sellerObj		= [_this,1,objNull] call BIS_FNC_PARAM;

if (!(_offer in SAH_offers)) exitWith {[3] remoteExec ["life_fnc_CAH_reciever",_caller];};

_offer spawn LIGA_fnc_SAH_removeOffer;

[0,[_offer select 1,_offer select 2,_sellerObj]] remoteExec ["life_fnc_CAH_reciever",_caller];

[1,[_caller,_offer select 2,_offer]]remoteExec ["life_fnc_CAH_reciever",_sellerObj];
