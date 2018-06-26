/*
		File Name - fn_copCheckDirtyMoney.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
private _target = cursorObject;
private _targetDirtyMoney = _target getVariable "TFGG_DirtyMoney";
private _STRDirtyMoney = str _targetDirtyMoney;
private _targetName = _target getVariable ["realname",name _target];
if (isNull _target) exitWith {};
if (side player != west) exitWith {hint "Youre not a cop!!"};
hint format ["Checking %1 for dirty money...", _targetName];
sleep 2;
if (_targetDirtyMoney > 0) then {
	hint format ["The player %1 has %2 dirty money.",_targetName, ([_targetDirtyMoney] call life_fnc_numberText)];
} else {
	hint format ["The player %1 doesn't have dirty money.", _targetName];
};