_mode = [_this,0,-1] call BIS_FNC_PARAM;
_info = [_this,1,-1] call BIS_FNC_PARAM;

//if (isNil "SAH_offers") then {SAH_offers=[];};
private["_SAH_offers","_players","_curOffer"];
switch (_mode) do
{
	case 0:
	{
		_SAH_offers = SAH_offers;
		_players = [];
		{
			if (isPlayer _x) then {
				_players pushBack [_x,getPlayerUID _x];
			};
		} forEach playableUnits;		
		{
			_isOn = false;
			_curOffer = _x;
			{
				if ((_x select 1) == (_curOffer select 0)) then {_isOn = true;};
			} forEach _players;
			if (!_isOn) then {
				_index = -1;
				_handled = false;
				{
					_index = _index + 1;
					if (_x isEqualTo _curOffer AND !_handled) then {_SAH_offers deleteAt _index;_handled = true;};
				} forEach _SAH_offers;
			};
		} forEach _SAH_offers;				
		
		
		//[[2,_SAH_offers],"life_fnc_CAH_reciever",_info,false] spawn life_fnc_mp;
		[2,_SAH_offers] remoteExec ["life_fnc_CAH_reciever",_info];
	};
	case 1:
	{
		{ SAH_offers pushBack _x; } forEach _info;
		profileNamespace setVariable ["LIGA_BAY",SAH_offers];
	};
};