#include "..\..\script_macros.hpp"
/*

	File: fn_copStand.sqf
	Author: ToxicRageTv

	Description: Makes the target stand
	
*/
if !(player getVariable "life_cop_sitting") exitWith {};
player setVariable ["life_cop_sitting",false,true];
player switchMove "";
player playMoveNow "";
player playActionNow "stop";