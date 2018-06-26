#include "..\..\script_macros.hpp"
/*
    File: fn_p_updateMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Updates the player menu (Virtual Interaction Menu)
*/
private ["_inv","_lic","_licenses","_near","_near_units","_mstatus","_shrt","_side","_struct"];
disableSerialization;

if (FETCH_CONST(life_adminlevel) < 1) then {
    ctrlShow[2021,false];
};

_side = switch (playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};

_inv = CONTROL(2001,2005);
_lic = CONTROL(2001,2014);
_near = CONTROL(2001,2022);
_near_i = CONTROL(2001,2023);
_bankstatus = CONTROL(2001,1600);
_cashstatus = CONTROL(2001,1601);
_dirtymoneystatus = CONTROL(2001,1602);
_dirtMoney = player getVariable "TFGG_DirtyMoney";
_struct = "";
lbClear _inv;
lbClear _near;
lbClear _near_i;

//Near players
_near_units = [];
{ if (player distance _x < 10) then {_near_units pushBack _x};} forEach playableUnits;
{
    if (!isNull _x && alive _x && player distance _x < 10 && !(_x isEqualTo player)) then {
        _near lbAdd format ["%1 - %2",_x getVariable ["steam64ID",getPlayerUID _x], side _x];
        _near lbSetData [(lbSize _near)-1,str(_x)];
        _near_i lbAdd format ["%1 - %2",_x getVariable ["steam64ID",getPlayerUID _x], side _x];
        _near_i lbSetData [(lbSize _near)-1,str(_x)];
    };
} forEach _near_units;

_bankstatus ctrlSetStructuredText parseText format ["<t size='1' align='center'>$%1</t>",[BANK] call life_fnc_numberText];
_cashstatus ctrlSetStructuredText parseText format ["<t size='1' align='center'>$%1</t>",[CASH] call life_fnc_numberText];
_dirtymoneystatus ctrlSetStructuredText parseText format ["<t size='1' align='center'>$%1</t>",[_dirtMoney] call life_fnc_numberText];
ctrlSetText[2408,format ["Weight: %1 / %2", life_carryWeight, life_maxWeight]];

{
    if (ITEM_VALUE(configName _x) > 0) then {
        _inv lbAdd format ["%2 [x%1]",ITEM_VALUE(configName _x),localize (getText(_x >> "displayName"))];
        _inv lbSetData [(lbSize _inv)-1,configName _x];
        _icon = M_CONFIG(getText,"VirtualItems",configName _x,"icon");
        if (!(_icon isEqualTo "")) then {
            _inv lbSetPicture [(lbSize _inv)-1,_icon];
        };
    };
} forEach ("true" configClasses (missionConfigFile >> "VirtualItems"));

{
    _displayName = getText(_x >> "displayName");

    if (LICENSE_VALUE(configName _x,_side)) then {
        _struct = _struct + format ["%1<br/>",localize _displayName];
    };
} forEach (format ["getText(_x >> 'side') isEqualTo '%1'",_side] configClasses (missionConfigFile >> "Licenses"));

if (_struct isEqualTo "") then {
    _struct = "No Licenses";
};

_lic ctrlSetStructuredText parseText format ["
<t size='0.8px'>
%1
</t>
",_struct];
