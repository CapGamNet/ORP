#include "..\..\script_macros.hpp"
/*
    File: fn_atmMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Opens and manages the bank menu.
*/
private ["_units","_type"];

if (!life_use_atm) exitWith {
    hint format [localize "STR_Shop_ATMRobbed",(LIFE_SETTINGS(getNumber,"noatm_timer"))];
};

if (!dialog) then {
    if (!(createDialog "Life_atm_management")) exitWith {};
    _display = findDisplay 2700;
    _photoFade = _display displayCtrl 1200;
    _bankTitleFade = _display displayCtrl 2701;
    _moneyEditFade = _display displayCtrl 2702;
    _playerListFade = _display displayCtrl 2703;
    _cashTitleFade = _display displayCtrl 2704;
    //photo
    _photoFade ctrlSetFade 1;
    _photoFade ctrlCommit 0;
    _photoFade ctrlSetFade 0;
    _photoFade ctrlCommit 0.3;
    //photo
    //playerlist
    _playerListFade ctrlSetFade 1;
    _playerListFade ctrlCommit 0;
    _playerListFade ctrlSetFade 0;
    _playerListFade ctrlCommit 0.3;
    //playerlist
    //moneyedit
    _moneyEditFade ctrlSetFade 1;
    _moneyEditFade ctrlCommit 0;
    _moneyEditFade ctrlSetFade 0;
    _moneyEditFade ctrlCommit 0.3;
    //moneyedit
    //cashtitle
    _cashTitleFade ctrlSetFade 1;
    _cashTitleFade ctrlCommit 0;
    _cashTitleFade ctrlSetFade 0;
    _cashTitleFade ctrlCommit 0.3;
    //cashtitle
    //banktitle
    _bankTitleFade ctrlSetFade 1;
    _bankTitleFade ctrlCommit 0;
    _bankTitleFade ctrlSetFade 0;
    _bankTitleFade ctrlCommit 0.3;
    //banktitle
};

disableSerialization;
_units = CONTROL(2700,2703);

lbClear _units;
CONTROL(2700,2701) ctrlSetStructuredText parseText format ["$%1",[BANK] call life_fnc_numberText];
CONTROL(2700,2704) ctrlSetStructuredText parseText format ["$%1",[CASH] call life_fnc_numberText];

{
    _name = _x getVariable ["realname",name _x];
    if (alive _x && (!(_name isEqualTo profileName))) then {
        switch (side _x) do {
            case west: {_type = "Cop"};
            case civilian: {_type = "Civ"};
            case independent: {_type = "EMS"};
        };
        _units lbAdd format ["%1 (%2)",_x getVariable ["realname",name _x],_type];
        _units lbSetData [(lbSize _units)-1,str(_x)];
    };
} forEach playableUnits;

lbSetCurSel [2703,0];

if (isNil {(group player getVariable "gang_bank")}) then {
    (CONTROL(2700,2705)) ctrlEnable false;
    (CONTROL(2700,2706)) ctrlEnable false;
};
