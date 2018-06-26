/*
		File Name - fn_clientSeizeDirtyMoney.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_uid", "_player", "_curDirtyMoney", "_toDecrease", "_sender", "_target"];
private _uid = getPlayerUID cursorObject;
private _player = player;
private _curDirtyMoney = cursorObject getVariable "TFGG_DirtyMoney";
private _toDecrease = _curDirtyMoney;
private _sender = player;
private _target = cursorObject;
private _targetName = cursorObject getVariable ["realname",name cursorObject];
[_uid, _player, _curDirtyMoney, _toDecrease, _sender, _target] remoteExec ["TFGG_fnc_serverCleanMoney",2];

