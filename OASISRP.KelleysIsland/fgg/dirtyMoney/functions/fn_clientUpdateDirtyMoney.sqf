/*
		File Name - fn_clientUpdateDirtyMoney.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_uid", "_player", "_toAddDirtyMoeny", "_dirtyMoneyToUpdate"];
_uid = param [0,"",[""]];
_player = param [1,objNull,[objNull]];
_toAddDirtyMoeny = param [2,0,[0]];
_curDirtyMoney = player getVariable "TFGG_DirtyMoney";
_dirtyMoneyToUpdate = (_curDirtyMoney + _toAddDirtyMoeny);
[_uid, _player, _dirtyMoneyToUpdate] remoteExec ["TFGG_fnc_serverUpdateDirtyMoney",2];
