params ["_uid","_player"];
private _uid = param [0,"",[""]];
private _player = param [1,objNull,[objNull]];
private _query = ""; 
if (_uid isEqualTo "") exitWith {};
_query = format ["SELECT playtime FROM players WHERE pid = '%1'", _uid];      
private _queryResult = [_query,2] call DB_fnc_asyncCall;  
_fuck = [_queryResult select 0] call DB_fnc_mresToArray;
_you = [_fuck] call DB_fnc_mresToArray;
_bitch = _you select 2;
_player setVariable ["TFGG_playTime",_bitch,true];
