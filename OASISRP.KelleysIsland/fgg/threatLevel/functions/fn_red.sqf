#include "..\..\..\script_macros.hpp"
//if ((FETCH_CONST (life_coplevel) >= 5)) exitWith { closeDialog 0; hint "You are not a high enough rank to change the threat level!"; };
//if(4gg_antispam == 1) exitWith {};
closeDialog 0;
hint "Threat level has been changed.";
{
["WARNING",format ["The threat level has been changed to RED by :%1",name player],[1,0,0,1]] remoteExec ["Lega_fnc_addNotification", _x];
} forEach playableUnits;