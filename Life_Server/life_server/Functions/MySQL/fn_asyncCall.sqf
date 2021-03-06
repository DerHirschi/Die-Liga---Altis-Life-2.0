/*
	File: fn_asyncCall.sqf
	Author: Bryan "Tonic" Boardwine
	Description:
	Commits an asynchronous call to ExtDB
	Parameters:
		0: STRING (Query to be ran).
		1: INTEGER (1 = ASYNC + not return for update/insert, 2 = ASYNC + return for query's).
		3: BOOL (True to return a single array, false to return multiple entries mainly for garage).
*/

private["_queryStmt","_queryResult","_key","_mode","_return","_loop"];

_tickTime = diag_tickTime;

_queryStmt = [_this,0,"",[""]] call BIS_fnc_param;
_mode = [_this,1,1,[0]] call BIS_fnc_param;
_multiarr = [_this,2,false,[false]] call BIS_fnc_param;

_key = "extDB3" callExtension format["%1:%2:%3",_mode,(call life_sql_id),_queryStmt];
//diag_log format ["KEY: %1",_queryStmt];
if(_mode isEqualTo 1) exitWith {true};

_key = call compile format["%1",_key];
_key = _key select 1;

_queryResult = "";
_loop = true;

while{_loop} do
{
    _queryResult = "extDB3" callExtension format["4:%1", _key];
	//diag_log format [">>>>>>>>> Querry ASC : %1 ",_queryResult];
    if (_queryResult isEqualTo "[5]") then {
		// extDB returned that result is Multi-Part Message
		_queryResult = "";
		while{true} do {
			_pipe = "extDB3" callExtension format["5:%1", _key];
			if(_pipe isEqualTo "") exitWith {_loop = false};
        	_queryResult = _queryResult + _pipe;
        };
    } else {
		if (_queryResult isEqualTo "[3]") then {
			//diag_log format ["extDB2: uisleep [4]: %1", diag_tickTime];
			
		} else {
			_loop = false;
		};
	};
};
//diag_log format [">>>>>>>>> Querry ASC : %1 ",_queryResult];
_queryResult = call compile _queryResult;
//diag_log format [">>>>>>>>> Querry ASC : %1 ",_queryResult];
if(count (_queryResult select 1) isEqualTo 0) exitWith {[]};

_return = (_queryResult select 1);

if(!_multiarr) then {
        _return = _return select 0;
};

_return;
