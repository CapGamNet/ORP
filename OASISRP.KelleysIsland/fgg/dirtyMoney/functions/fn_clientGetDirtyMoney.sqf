/*
		File Name - fn_clientGetDirtyMoney.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_uid", "_player", "_dirtyMoney"];
private _uid = param [0,"",[""]];
private _player = param [1,objNull,[objNull]];
private _dirtyMoney = param [2,0,[0]];
if (_dirtyMoney <= 0) then {
	_dirtyMoney = 0;
	_player setVariable ["TFGG_DirtyMoney",_dirtyMoney,true];
} else {
	_player setVariable ["TFGG_DirtyMoney",_dirtyMoney,true];
};