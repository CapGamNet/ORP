#include "..\..\script_macros.hpp"
/*
    File: fn_hudUpdate.sqf
    Author: Daniel Stuart

    Description:
    Updates the HUD when it needs to.
    
    #
    #	Edited: David
    #
*/

    if (isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};
    LIFEctrl(1101) progressSetPosition (life_hunger / 100);
    LIFEctrl(1103) progressSetPosition (1 - (damage player));
    LIFEctrl(1102) progressSetPosition (life_thirst / 100);
    LIFEctrl(1100) progressSetPosition (1 - (getFatigue player));

    //Text
    LIFEctrl(1107) ctrlSetStructuredText parseText format["<t>%1</t>", round(((1 - (getFatigue player)) * 100))];
    LIFEctrl(1105) ctrlSetStructuredText parseText format["<t>%1</t>", round((life_thirst / 100) * 100)];
    LIFEctrl(1106) ctrlSetStructuredText parseText format["<t>%1</t>", round((life_hunger / 100) * 100)];
    LIFEctrl(1104) ctrlSetStructuredText parseText format["<t>%1</t>", round(((1 - (damage player)) * 100))];