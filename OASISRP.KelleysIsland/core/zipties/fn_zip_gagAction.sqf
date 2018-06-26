/*
  File: fn_zip_gagAction.sqf
  Author: Wackbatt | 76561198071769386
  Desciption: Executes the gagPlayer function.
  Notes: N/A
  Origin: Altisliferpg.com and armargplife.com
*/
if (cursorobject GetVariable "gagged") exitWith {
    [player] remoteExec["zipties_fnc_zip_gagPlayer", cursorobject];
    [true, "gag", 1] call life_fnc_handleInv;
};

if (life_inv_gag < 1) exitWith {
    ["ERROR","You don't have a gag.",[1,0,0,1]] call Lega_fnc_addNotification;
};
if !(cursorobject getVariable "ziptied") exitWith {
    ["ERROR","Player is not ziptied.",[1,0,0,1]] call Lega_fnc_addNotification;
};

[false, "gag", 1] call life_fnc_handleInv;
[cursorObject, "gag"] remoteExec["life_fnc_say3D", -2];
[player] remoteExec["zipties_fnc_zip_gagPlayer", cursorobject];
