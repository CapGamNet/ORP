params ["_level", "_player"];
_level = param [0,0,[0]];
_player = param [1,objNull,[objNull]];
	_curLevel = _player getVariable "shapeLevel";
	private	_timeToRunOrg = getNumber (missionConfigFile >> "shapeLevels" >> format ["Level_%1",_curLevel] >> "canRun");
	private	_timeToRun = getNumber (missionConfigFile >> "shapeLevels" >> format ["Level_%1",_curLevel] >> "canRun");
	private _timeToWait = getNumber (missionConfigFile >> "shapeLevels" >> format ["Level_%1",_curLevel] >> "waitRun");
	if (vehicle player != player) exitWith {};
	switch (_level) do {
		case 0: {
			_player enableFatigue false;
			_player allowSprint false;
			};
		case 1: {
			while {true} do {
			while {_timeToRun != 0} do {
			if (speed player > 0) then {
				sleep 1;
				_timeToRun = (_timeToRun - 1);
				};
			};
			_player allowSprint false;
			sleep _timeToWait;
			_player allowSprint true; 
			_timeToRun = _timeToRunOrg;
			};
		};
		case 2: {
			while {true} do {
			while {_timeToRun != 0} do {
			if (speed player > 0) then {
				sleep 1;
				_timeToRun = (_timeToRun - 1);
				};
			};
			_player allowSprint false;
			sleep _timeToWait;
			_player allowSprint true; 
			_timeToRun = _timeToRunOrg;
			};
		};
		case 3: {
			while {true} do {
			while {_timeToRun != 0} do {
			if (speed player > 0) then {
				sleep 1;
				_timeToRun = (_timeToRun - 1);
				};
			};
			_player allowSprint false;
			sleep _timeToWait;
			_player allowSprint true; 
			_timeToRun = _timeToRunOrg;
			};
		};
		case 4: {
			while {true} do {
			while {_timeToRun != 0} do {
			if (speed player > 0) then {
				sleep 1;
				_timeToRun = (_timeToRun - 1);
				};
			};
			_player allowSprint false;
			sleep _timeToWait;
			_player allowSprint true; 
			_timeToRun = _timeToRunOrg;
			};
		};
		case 5: {
			while {true} do {
			while {_timeToRun != 0} do {
			if (speed player > 0) then {
				sleep 1;
				_timeToRun = (_timeToRun - 1);
				};
			};
			_player allowSprint false;
			sleep _timeToWait;
			_player allowSprint true; 
			_timeToRun = _timeToRunOrg;
			};
		};
		case 6: {
			_player allowSprint true;
			_player enableFatigue false;
		};
		default {
			_player allowSprint false;
			_player enableFatigue true;
		};
	};