#include "..\..\script_macros.hpp"
/*

	File: fn_copSit.sqf
	Author: ToxicRageTv

	Description: makes the target sit
	
*/
private ["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit) exitWith {}; //Not valid
if (player getVariable "life_cop_sitting") exitWith {};

player setVariable ["life_cop_sitting",true];

[] spawn {
	while {player getVariable "life_cop_sitting" && player getVariable "restrained"} do {
		if (animationState player != "Acts_AidlPsitMstpSsurWnonDnon02") then {
			[player,"Acts_AidlPsitMstpSsurWnonDnon02",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
			player switchMove "Acts_AidlPsitMstpSsurWnonDnon02";
			player playMoveNow "Acts_AidlPsitMstpSsurWnonDnon02";
		};
		if (!(player getVariable "life_cop_sitting") || !(player getVariable "restrained")) exitWith {
			player switchMove "";
			player playMoveNow "";
			player playActionNow "stop";
		};
	};
	player setVariable ["life_cop_sitting",false,true];
};