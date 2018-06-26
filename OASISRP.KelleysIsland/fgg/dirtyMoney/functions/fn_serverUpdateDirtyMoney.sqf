/*
		File Name - fn_serverUpdateDirtyMoney.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_uid", "_player", "_dirtyMoneyToUpdate"];
_uid = param [0,"",[""]];
_player = param [1,objNull,[objNull]];
_dirtyMoneyToUpdate = param [2,0,[0]];
if (_uid isEqualTo "") exitWith {}; //Bad data
private _query = "";
_query = format ["UPDATE players SET dirtymoney = '%1' WHERE pid = '%2'", _dirtyMoneyToUpdate, _uid];    
private _queryResult = [_query,1] call DB_fnc_asyncCall;
[_uid, _player] remoteExec ["TFGG_fnc_getDirtyMoney",2];