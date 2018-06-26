#include "..\..\..\script_macros.hpp"
/*
		File Name - fn_useAlcohol.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_item", "_uid"];
if ((side player) != civilian) exitWith {};
private _alcoholToAdd = M_CONFIG(getNumber,"VirtualItems",_item,"alcohol");
private _itemName = M_CONFIG(getText,"VirtualItems",_item,"displayName");
private _currentDrunkLevel = player getVariable "TFGG_drunkLevel";
if (_currentDrunkLevel < 100) then {
	player setVariable ["TFGG_drunkLevel",(_currentDrunkLevel + _alcoholToAdd)];
	[_alcoholToAdd, _uid] remoteExec ["TFGG_fnc_increaseAlcohol",2];
	hint parseText format ["You drank <t color='#ff0000'>%1</t> and the alcohol precent in your blood increased by <t color='#ffffff'>%2%3</t>",(localize _itemName), [_alcoholToAdd] call life_fnc_numberText, "%"];
	/*[] spawn {
	for "_i" from 0 to 30 do {
				"radialBlur" ppEffectEnable true;
				enableCamShake true;
				sleep 5;
				"radialBlur" ppEffectAdjust  [random 0.06,random 0.06,0.25,0.25]; 
				"radialBlur" ppEffectCommit 1; 
				addCamShake[random 3, 1, random 3];
				sleep 5;
				"radialBlur" ppEffectAdjust  [0,0,0,0];
				"radialBlur" ppEffectCommit 5; 
				sleep 5;
				"radialBlur" ppEffectEnable false;
				resetCamShake;
				sleep 5;
	};
};*/
} else {
	hint "Youre too drunk, You cant drink more alcohol.";
	[true,_item,1] call life_fnc_handleInv
};