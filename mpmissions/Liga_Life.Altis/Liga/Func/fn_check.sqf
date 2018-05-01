_unitThatDealtDamage = param[0,objNull,[objNull]];

if (_unitThatDealtDamage == player OR _unitThatDealtDamage == (vehicle player)) then {
		while {rating player > -100000} do { 
		  player addRating -500000000; 
		};
	};
