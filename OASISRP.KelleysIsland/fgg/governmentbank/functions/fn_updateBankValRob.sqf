  //funtios that will reset the bank value to 0 after it's being robbed
  private _query = "";
  private _toUpdate = 0;
  _query = format ["UPDATE tax SET gov_bank='%1'", _toUpdate];
  [_query,1] call DB_fnc_asyncCall;
  [] remoteExec["TFGG_fnc_getBankVal",2]; // this function will set the bank value from the database to the whole players..

