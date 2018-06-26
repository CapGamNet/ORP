#include "..\..\..\script_macros.hpp"

/*
		File Name - fn_civGetAlcohol.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
		description - this function will send the server the player's drunk level and then it will decrease the player's drunk level every X time (defined in core/init.sqf).
*/
params [ "_uid", "_drunkLevel"];
private _query = "";
_query = format ["SELECT drunk FROM players WHERE pid = '%1'", _uid];    
private _queryResult = [_query,2] call DB_fnc_asyncCall; 
private _drunkLevel = _queryResult select 0;
[_uid, _drunkLevel] remoteExec ["TFGG_fnc_decreaseAlcoholAction",2];