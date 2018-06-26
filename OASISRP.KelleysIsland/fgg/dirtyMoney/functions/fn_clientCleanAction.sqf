/*
		File Name - fn_clientCleanAction.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_player", "_curDirtyMoney"];
private _player = param [0,objNull,[objNull]];
private _curDirtyMoney = param [1,0,[0]];
_player setVariable ["TFGG_DirtyMoney",0,true];
CASH = CASH + _curDirtyMoney;
hint format ["You successfully cleaned %1 dirty money", ([_curDirtyMoney] call life_fnc_numberText)];