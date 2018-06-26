#include "..\..\..\script_macros.hpp"
//this file will open the tax dialog , that will be used to change the tax level.
disableSerialization;
private _getTax = missionNamespace getVariable "tax";//should return the number from the databse
createDialog "life_taxlevel";
ctrlSetText [1150,format ["The Current Tax Level is :%1%2", [_getTax] call life_fnc_numberText, "%"]];