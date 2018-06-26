/*
		File Name - fn_getDirtyMoney.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_uid", "_player", "_dirtyMoney"];
private _uid = param [0,"",[""]];
private _player = param [1,objNull,[objNull]];
if (_uid isEqualTo "") exitWith {}; //Bad data
private _query = "";
_query = format ["SELECT dirtymoney FROM players WHERE pid = '%1'", _uid];    
private _queryResult = [_query,2] call DB_fnc_asyncCall; 
private _dirtyMoney = _queryResult select 0;
[_uid, _player, _dirtyMoney] remoteExec ["TFGG_fnc_clientGetDirtyMoney",_player];