params ["_player"];
_player = param [0,objNull,[objNull]];
_curTimeRun = _player getVariable "runTime";
_curLevel = _player getVariable "shapeLevel";
_maxLevel = getNumber (missionConfigFile >> "shapeLevels" >> "maxLevel");
_uid = getPlayerUID _player;
if (_curLevel == _maxLevel) exitWith {};
_toRun = getNumber (missionConfigFile >> "shapeLevels" >> format ["Level_%1",_curLevel] >> "reqRun");
if (_curTimeRun >= _toRun) exitWith {
	sleep 0.1;
	_level = _curLevel + 1;
	[_uid, _player, _level, 1] remoteExec ["TFGG_fnc_setPlayerShape",2];
	["Health Improvement", "You just got in a bit more shape you can run for longer times now!",[0,1,0,1]] remoteExec ["Lega_fnc_addNotification", _player];
};
