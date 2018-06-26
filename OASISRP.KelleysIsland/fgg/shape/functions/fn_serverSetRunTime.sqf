params ["_player", "_uid", "_runTimeSet", "_case"];
_player = param [0,objNull,[objNull]];
_uid = param [1,"",[""]];
_runTimeSet = param [2,0,[0]];
_case = param [3,0,[0]];
switch (_case) do {
	case 0: {
	private _query = "";
	_query = format ["SELECT runtime FROM players WHERE pid = '%1'", _uid];    
	private _queryResult = [_query,2] call DB_fnc_asyncCall; 
	private _runTime = _queryResult select 0;
	_player setVariable ["runTime",_runTime,true];
	};
	case 1: {
	private _query = "";
	_query = format ["UPDATE players SET runtime = '%1' WHERE pid = '%2'",_runTimeSet, _uid];    
	private _queryResult = [_query,1] call DB_fnc_asyncCall;
	_player setVariable ["runTime",_runTimeSet,true];
	[_player] remoteExec ["TFGG_fnc_levelUp",_player];
	};
		default {};
};
