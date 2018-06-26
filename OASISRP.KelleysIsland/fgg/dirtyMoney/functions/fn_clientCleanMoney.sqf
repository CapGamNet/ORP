/*
		File Name - fn_clientCleanMoney.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_uid", "_player", "_curDirtyMoney", "_toDecrease", "_sender", "_target"];
private _uid = player getVariable "steam64ID";
private _player = player;
private _curDirtyMoney = _player getVariable "TFGG_DirtyMoney";
private _toDecrease = _curDirtyMoney;
private _sender = player;
private _target = player;
private _waitTime = 1;
hint format ["Cleaning your dirty money, please stay near the NPC. This process will take %1 second/s",_waitTime];
sleep _waitTime;
[_uid, _player, _curDirtyMoney, _toDecrease, _sender, _target] remoteExec ["TFGG_fnc_serverCleanMoney",2];
