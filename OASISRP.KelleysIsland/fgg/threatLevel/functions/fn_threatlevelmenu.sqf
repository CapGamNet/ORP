#include "..\..\..\script_macros.hpp"
//if ((FETCH_CONST (life_coplevel) >= 5)) exitWith { closeDialog 0; hint "You are not a high enough rank to change the threat level!"; };
if (FETCH_CONST(life_coplevel) < 5) exitWith { hint "You are not a high enough rank to change the threat level!"; };
private ["_index"];

createDialog "Life_Threat_Level";
waitUntil {!(isNull (findDisplay 2720))};


{
	_index = lbAdd [ 1102, ( _x select 0 ) ]; 
	lbSetData [ 1102, _index, ( _x select 1 ) ];  
} forEach [
	["Green", "execvm'fgg\threatLevel\functions\fn_green.sqf';"],
	["Amber","execvm'fgg\threatLevel\functions\fn_amber.sqf';"],
	["Red","execvm'fgg\threatLevel\functions\fn_red.sqf';"],
	["Martial Law","execvm'fgg\threatLevel\functions\fn_martial.sqf';"]
];

lbSetCurSel [ 1102, 0 ];


//[] call life_fnc_threatlevelmenu;


