private _query = format ["SELECT gov_bank FROM tax"];    
private _queryResult = [_query,2] call DB_fnc_asyncCall;  //
_queryResult; 
private _bankVal = _queryResult select 0; 
[_bankVal] remoteExecCall ["TFGG_fnc_clientGetBankVal",2];