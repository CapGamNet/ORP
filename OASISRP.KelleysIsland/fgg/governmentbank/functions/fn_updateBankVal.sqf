  params ["_taxPaid"];
  private _curBankVal = missionNameSpace getVariable "gover_bank";
  private _query = "";
  private _toUpdate = _taxPaid + _curBankVal;
  _query = format ["UPDATE tax SET gov_bank='%1'", _toUpdate];
  [_query,1] call DB_fnc_asyncCall;
  [] remoteExec["TFGG_fnc_getBankVal",2]; // this function will set the bank value from the database to the whole players..

