/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
null = allUnits execVM "H8_dragBody.sqf";
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

MAC_fnc_switchMove = {
    private["_object","_anim"];
    _object = _this select 0;
    _anim = _this select 1;

    _object switchMove _anim;
    
};

StartProgress = true;
