params ["_uid","_player", "_level", "_case"];
_uid = param [0,"",[""]];
_player = param [1,objNull,[objNull]];
_level = param [2,0,[0]];
_case = param [3,0,[0]];
switch (_case) do {
	case 0: {
	private _query = "";
	_query = format ["SELECT shape FROM players WHERE pid = '%1'", _uid];    
	private _queryResult = [_query,2] call DB_fnc_asyncCall; 
	private _level = _queryResult select 0;
	_player setVariable ["shapeLevel",_level,true];
	[_level, _player] remoteExec ["TFGG_fnc_setPlayerAbility",_player];
	};
	case 1: {
	private _query = "";
	_query = format ["UPDATE players SET shape = '%1' WHERE pid = '%2'",_level, _uid];   
	private _queryResult = [_query,1] call DB_fnc_asyncCall;
	_player setVariable ["shapeLevel",_level,true];
	_level2 = _player getVariable "shapeLevel";
	[_level, _player] remoteExec ["TFGG_fnc_setPlayerAbility",_player];
	};
		default {};
};









