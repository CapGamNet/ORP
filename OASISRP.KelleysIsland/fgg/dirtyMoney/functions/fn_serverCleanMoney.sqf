/*
		File Name - fn_serverCleanMoney.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_uid", "_player", "_curDirtyMoney", "_toDecrease", "_sender", "_target"];
private _uid = param [0,"",[""]];
private _player = param [1,objNull,[objNull]];
private _curDirtyMoney = param [2,0,[0]];
private _toDecrease = param [3,0,[0]];
private _sender = param [4,objNull,[objNull]];
private _target = param [5,objNull,[objNull]];
private _toUpdate = (_curDirtyMoney - _toDecrease);
if (_uid isEqualTo "") exitWith {}; //Bad data
private _query = "";
_query = format ["UPDATE players SET dirtymoney='%1' WHERE pid = '%2'", _toUpdate, _uid];    
private _queryResult = [_query,1] call DB_fnc_asyncCall;
if (side _sender == west) then {
	[_player, _toDecrease, _target] remoteExec ["TFGG_fnc_copSeizeAction",_player];
} else {
	[_player, _curDirtyMoney] remoteExec ["TFGG_fnc_clientCleanAction",_player];
};