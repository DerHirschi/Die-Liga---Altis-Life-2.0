/*	
	Get RealTime & Date [Laufzeit],[WoTag,Jahr,Monat,Tag,Std,Minuten,Sek]	
	Triggert auch 0 Uhr und updatet Sys_Date Variable
*/
fnc_secToTime = compileFinal "
	
	
	_fnc_splitSec = {
		_Std	=	floor (_this	/	3600	);
		_Min	=	floor ((_this -	(	_Std * 3600))	/	60		);
		_Sek	=	floor ((_this -	(	_Std * 3600)	-	_Min * 60)		);
		[_Std,_Min,_Sek]
	};
	
	_secTime = _this ;
	_realTime= ((missionStart select 3) * 3600) + ((missionStart select 4) *	60	) + (	(missionStart select 5)	);

	_temp 		= _secTime call _fnc_splitSec;
	_tempreal 	= ((_realTime - Start_Delay) + _secTime) call _fnc_splitSec;
	diag_log format['RunTime :Std: %1 Min: %2 Sek: %3',_temp select 0,_temp select 1,_temp select 2];
	diag_log format['RealTime:Std: %1 Min: %2 Sek: %3',_tempreal select 0,_tempreal select 1,_tempreal select 2];
	_back = [Sys_Date select 0, ((Sys_Date select 1) select 0),((Sys_Date select 1) select 1),((Sys_Date select 1) select 2),_tempreal select 0,_tempreal select 1,_tempreal select 2];
	
	[[_temp select 0,_temp select 1,_temp select 2],_back];	
	_realStd = (_temp select 0) + ((_realTime call _fnc_splitSec) select 0);
	if(_realStd >= 24 ) then {		
		if(isNil 'Next_Day') then {
			Next_Day = true;
			_temp	 = missionStart;
			_temp set [2,(missionStart select 2) + 1];
			Sys_Date = _temp call fnc_DateToDay;
		};
	};
";

/* angepasste Funktion aus Wiki WochenFaktor = (Wochen =(Res = Tage seit 4.1.1970 (Montag)))*/
fnc_calcSysDate = compileFinal "
	_fnc_daysFromEpoc =  
	{ 
		private _year = param [0]; 
		private _days = 5; 
		for '_i' from 1970 to _year - 1 do  
		{ 
			_days = _days + round linearConversion [0, 1, dateToNumber [_i, 12, 31, 23, 59], 0, 365, false]; 
		}; 
		_days + linearConversion [0, 1, dateToNumber _this, 0, 365, false]; 
	}; 

	_ServerDate = _this;
	for '_i' from 4 to 5 do { _ServerDate set [_i,0]; };
	_temp 	= _ServerDate;
	_temp set [3,0];
	_flag 	= floor ((_temp call _fnc_daysFromEpoc) 			/ 7 );
	_dayNum = (	(((_temp call _fnc_daysFromEpoc) / 7 )	- _flag)	);
	diag_log str _flag;
	diag_log str _dayNum;
	
	[_dayNum,_ServerDate];
";

/*prüft und gibt Datum Zurück (28 Tage Monat (Schaltjahr usw)) */
fnc_DateToDay = compileFinal "
		
	_fnc_checkDate = {
		if(	(_this select 2) > 28 && !((_this select 1) isEqualTo 12)	) then {
			_res1 	= _this call fnc_calcSysDate;
			_res2 	= [_this select 0,(_this select 1) + 1,1] call fnc_calcSysDate;			
			if((str (_res1 select 0)) isEqualTo (str (_res2 select 0)) ) then {_res2}else{_res1};
			
		}else{
			_this call fnc_calcSysDate;
		};			
	};

	
	_temp = _this call _fnc_checkDate;
	diag_log str (_temp);
	diag_log str (_temp select 0);

	_ret 	= switch (str (_temp select 0)) do {
		
		case '0' 			: {'Mo'};
		case '0.142822' 	: {'Di'};
		case '0.285645' 	: {'Mi'};
		case '0.428467' 	: {'Do'};
		case '0.571533' 	: {'Fr'};
		case '0.714355' 	: {'Sa'};
		case '0.857178' 	: {'So'};
		
		default 		{'ERROR'};
		
	};

	diag_log str([_ret,((_temp select 1) select [0,3])]);

	[_ret,((_temp select 1) select [0,3])]		
";


/*Init*/
Sys_Date = missionStart call fnc_DateToDay;
/*Ticker / Get Time & Date */
//diag_log str(diag_tickTime call fnc_secToTime);
//diag_log str Sys_Date;
/*
[]spawn {
	while {true} do {
		diag_log str(diag_tickTime call fnc_secToTime);
		diag_log str Sys_Date;
		sleep 10;
	};
};
*/