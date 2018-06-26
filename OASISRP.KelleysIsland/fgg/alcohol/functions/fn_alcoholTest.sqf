/*
		File Name - fn_alcoholTest.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params [ "_target", "_cop", "_uid", "_profileName"];
private _target = player;
private _player = player;
private _uid = getPlayerUID _target;
private _profileName = _target getVariable ["realname",name _target];
[_target, _player, _uid, _profileName] remoteExecCall ["TFGG_fnc_getDrunkLevel",2];