#include "..\..\..\script_macros.hpp"

/*
		File Name - fn_decreaseAlcohol.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
		description - go to fn_decreaseAlcohol.sqf to see what the function does.
*/
params ["_uid", "_drunkLevel"];
	private _alcoholToDecrease = 10;
	if (((_drunkLevel - _alcoholToDecrease) <= 0)) then {
		private _alcoholToUpdate = 0;
		private _query = "";
		_query = format ["UPDATE players SET drunk = '%1' WHERE pid = '%2'", _alcoholToUpdate, _uid];    
		[_query,1] call DB_fnc_asyncCall;
			} else {
			_alcoholToUpdate =( _drunkLevel - _alcoholToDecrease);
			_query = "";
			_query = format ["UPDATE players SET drunk = '%1' WHERE pid = '%2'", _alcoholToUpdate, _uid];    
			[_query,1] call DB_fnc_asyncCall;
		};