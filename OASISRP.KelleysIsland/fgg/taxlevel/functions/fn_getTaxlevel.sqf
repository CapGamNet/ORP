
//server side function should return [taxlevel];
private _query = format ["SELECT taxlevel FROM tax"];    
private _queryResult = [_query,2] call DB_fnc_asyncCall;  //
_queryResult; 
private _exchanged = _queryResult select 0; 
[_exchanged] remoteExecCall ["TFGG_fnc_clientGetTax",2];
hint format ["Your tax level has been changed and its %1%2 now",_exchanged,"%"];