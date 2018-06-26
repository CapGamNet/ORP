/*
		File Name - fn_clientGetDrunkLevel.sqf.
		Author - Beast.
		Script made for - Green Island RP ©
*/
params ["_drunkLevel", "_profileName"];
private _profileName = _profileName;
private _drunkLevel = param [0, 0, [0]];
_drunkLevel = _drunkLevel;
private _drunkLevelSTR = str _drunkLevel;
if (_drunkLevel >= 30) then {
	if (_drunkLevel < 100) then {
		hint format ["Processing Details For %1...",_profileName];
		sleep 2.5;
		hint format ["The Person %1 Is Drunk And His Drunk Level Is %2%3", _profileName, _drunkLevelSTR, "%"];
		} else {
		hint format ["Processing Details For %1...",_profileName];
		sleep 2.5;
		hint format ["The Drunk Level For %1 Is 100 Or Higher", _profileName];
		};
		} else {
		hint format ["Processing Details For %1...", _profileName];
		sleep 2.5;
		hint format ["The Person %1 Is Not Drunk", _profileName];
	};