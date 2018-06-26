params ["_player", "_uid", "_drunkLevel"];
if (_uid isEqualTo "") exitWith {};
private _query = "";
_query = format ["SELECT drunk FROM players WHERE pid = '%1'", _uid];    
private _queryResult = [_query,2] call DB_fnc_asyncCall; 
private _drunkLevel = _queryResult select 0;
[_drunkLevel] remoteExec ["TFGG_fnc_civGetDrunkLevel",_player];