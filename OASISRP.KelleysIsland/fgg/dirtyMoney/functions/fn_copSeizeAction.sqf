/*
		File Name - fn_copSeizeAction.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_player", "_toDecrease", "_target"];
private _player = param [0,objNull,[objNull]];
private _toDecrease = param [1,0,[0]];
private _target = param [2,objNull,[objNull]];
private _targetName = _target getVariable ["realname",name _target];
	if (_toDecrease > 0) then {
		private _copMessage = format ["You successfully seized %1 dirty money from %2.",([_toDecrease] call life_fnc_numberText), _targetName];
		private _civMessage = format ["All of your dirty money is being seized by the police."];
		} else {
		private _copMessage = format ["The Player %1 has no dirty money.",_targetName];
		private _civMessage = format ["The police checked your dirty money and they found out you dont have any."];
	};
[1,_copMessage] remoteExecCall ["life_fnc_broadcast",_player]; //hint the cop that the action is done.
[1,_civMessage] remoteExecCall ["life_fnc_broadcast",_target]; //hint the target that the action is done.
_target setVariable ["TFGG_DirtyMoney",0,true];
