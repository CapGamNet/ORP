#include "..\..\script_macros.hpp"
/*
    File: fn_houseBuyMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Building interaction menu
*/
#define Btn1 2400
#define Btn2 2401

private ["_display","_curTarget","_Btn1","_Btn2"];
disableSerialization;
_curTarget = param [0,objNull,[objNull]];
if (isNull _curTarget) exitWith {}; //Bad target
_houseCfg = [(typeOf _curTarget)] call life_fnc_houseConfig;
if (count _houseCfg isEqualTo 0 && playerSide isEqualTo civilian) exitWith {};

if (!dialog) then {
    createDialog "house_buy";
};

_Btn1 = CONTROL(12345,Btn1);
_Btn2 = CONTROL(12345,Btn2);
{_x ctrlShow false;} forEach [_Btn1,_Btn2];

life_pInact_curTarget = _curTarget;

if (_curTarget in life_hideoutBuildings) exitWith {
    closeDialog 0;
    hint localize "STR_House_Hideout";
};

if (_curTarget isKindOf "House_F" && playerSide isEqualTo west) exitWith {};

if (!(_curTarget in life_vehicles) || isNil {_curTarget getVariable "house_owner"}) then {

    private _isHouse = false;
    if !(_curTarget getVariable "can_buy") then {
        _Btn1 ctrlEnable false;
    } else {
        _Btn1 ctrlEnable true;
    };

    if (isClass (missionConfigFile >> "Housing" >> worldName >> (typeOf _curTarget))) then {
        //_Btn1 ctrlSetText localize "STR_pInAct_BuyHouse";
        _Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_buyHouse;";
        _isHouse = true;
    } else {
        //_Btn1 ctrlSetText localize "STR_pInAct_BuyGarage";
        _Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_buyHouse;";
    };
    _Btn1 ctrlShow true;
};
