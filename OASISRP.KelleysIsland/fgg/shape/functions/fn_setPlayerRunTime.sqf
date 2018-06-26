params ["_player", "_uid", "_runTimeSet"];
private _player = player;
private _uid = getPlayerUID _player;
while {((speed player) >= 0)} do 
	{
	if (vehicle player != player) exitWith {};
	waitUntil {((speed player) > 11)};
	_start = round (serverTime);
	waitUntil {((speed player) < 11)};
	_stop = round (serverTime);
	_runTimeSec = (_stop - _start);
	_runTimeMin = (_runTimeSec / 60);
	_curTime = _player getVariable "runTime";
	_runTimeSet = (_runTimeMin + _curTime);
	[_player, _uid, _runTimeSet,1] remoteExec ["TFGG_fnc_serverSetRunTime",2]; //will send the time the player ran in minutes
	};