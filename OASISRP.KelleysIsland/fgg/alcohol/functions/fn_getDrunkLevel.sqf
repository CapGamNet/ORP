/*
		File Name - fn_getDrunkLevel.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
		description - this function asking the server the player's drunk level
	    and sends it to the cop / civ (depends who asks for it)
*/

params ["_target", "_player", "_uid", "_profileName", "_drunkLevel"];
_target = _target;
_profileName = _profileName;
_player = _player;
if (_uid isEqualTo "" || _profileName isEqualTo "") exitWith {};
private _query = "";
_query = format ["SELECT drunk FROM players WHERE pid = '%1'", _uid];    
private _queryResult = [_query,2] call DB_fnc_asyncCall; 
private _drunkLevel = _queryResult select 0;
private _side = side _player;
if (_side isEqualTo west) then {
    [_drunkLevel, _profileName] remoteExec ["TFGG_fnc_clientGetDrunkLevel",_player];
} else {
	[_drunkLevel] remoteExec ["TFGG_civGetDrunkLevel",_player];
};