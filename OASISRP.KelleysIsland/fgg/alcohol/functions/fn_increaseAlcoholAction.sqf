#include "..\..\..\script_macros.hpp"

/*
		File Name - fn_increaseAlcohol.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
		description - this function will update the drunk level for the player in the database.
*/
params ["_alcoholToAdd", "_uid", "_drunkLevel"];
private _uid = _uid;
if (_drunkLevel >= 100) exitWith {};
private _alcoholToUpdate = _drunkLevel + _alcoholToAdd;
private _query = "";
_query = format ["UPDATE players SET drunk = '%1' WHERE pid = '%2'", _alcoholToUpdate, _uid];    
[_query,1] call DB_fnc_asyncCall;