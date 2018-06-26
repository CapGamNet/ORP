/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

private _shop = param [0, "", [""]];
if (side player isEqualTo civilian) then {
private _requestedTime = 360;
private _player = player;
[_uid,_player] remoteExec ["life_fnc_getPlayerPlayTime",2];
private _playTime = player getVariable "TFGG_playTime";

if (_requestedTime > _playTime) exitWith {hint format ["You cant buy weapon if you havent played at least %1 minutes in the server as civ.",_requestedTime]};

[nil, nil, nil, _shop] call mav_shop_fnc_initWeaponShop;
} else {
   [nil, nil, nil, _shop] call mav_shop_fnc_initWeaponShop; 
};