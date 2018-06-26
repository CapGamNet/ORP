#include "..\..\script_macros.hpp"
/*
    File: fn_houseBuyMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Building interaction menu
*/
#define Btn1 2400
#define Btn2 2401
#define Btn3 2402


private ["_display","_curTarget","_Btn1","_Btn2","_Btn3"];
disableSerialization;
_curTarget = param [0,objNull,[objNull]];
if (isNull _curTarget) exitWith {}; //Bad target
_houseCfg = [(typeOf _curTarget)] call life_fnc_houseConfig;
if (count _houseCfg isEqualTo 0 && playerSide isEqualTo civilian) exitWith {};

if (!dialog) then {
    createDialog "house_sell";
};

_Btn1 = CONTROL(12346,Btn1);
_Btn2 = CONTROL(12346,Btn2);
_Btn3 = CONTROL(12346,Btn3);
{_x ctrlShow false;} forEach [_Btn1,_Btn2,_Btn3];

life_pInact_curTarget = _curTarget;

if (_curTarget in life_hideoutBuildings) exitWith {
    closeDialog 0;
    hint localize "STR_House_Hideout";
};

if (_curTarget isKindOf "House_F" && playerSide isEqualTo west) exitWith {};

if ((_curTarget in life_vehicles) || ({_curTarget getVariable "house_owner"})) exitWith {

		_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_SellHouse; closeDialog 0;";
		_Btn1 ctrlShow true;
        _Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_lockHouse; closeDialog 0;";
        _Btn2 ctrlShow true;
        _Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_lightHouseAction; closeDialog 0;";
        _Btn3 ctrlShow true;
};
