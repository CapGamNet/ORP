#include "..\..\..\script_macros.hpp"

/*
		File Name - fn_civGetAlcohol.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
		description - this function will send the server the player's drunk level and then it will increase the player's drunk level by X precent (based on the drink).
*/
params ["_alcoholToAdd", "_uid","_drunkLevel"];
private _uid = _uid;
if (_uid isEqualTo "") exitWith {};
private _query = "";
_query = format ["SELECT drunk FROM players WHERE pid = '%1'", _uid];    
private _queryResult = [_query,2] call DB_fnc_asyncCall; 
private _drunkLevel = _queryResult select 0;
[_alcoholToAdd, _uid, _drunkLevel] remoteExec ["TFGG_fnc_increaseAlcoholAction",2];