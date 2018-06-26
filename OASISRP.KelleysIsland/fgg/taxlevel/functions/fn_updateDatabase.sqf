  //server side function to change the tax.

  params ["_taxnumber"];
  private _query = "";
  _query = format ["UPDATE tax SET taxlevel='%1'",_taxnumber];
  [_query,1] call DB_fnc_asyncCall;
  [] remoteExec["TFGG_fnc_getTaxLevel",2]; // this function will set the tax level from the database to the whole players..

