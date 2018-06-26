#include "..\..\script_macros.hpp"
/*
    File: fn_hudSetup.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Setups the hud for the player?
    
    #
    #	Edited: David
    #
*/
  
disableSerialization;

cutRsc ["playerHUD", "PLAIN", 2, false];
[] call life_fnc_hudUpdate;

[] spawn
{
  //Define variables into private scope
    private["_dam", "_stam"];

  //Setup for statement 
    for "_i" from 0 to 1 step 0 do {
      
      //Define Variables
      _stam = getFatigue player;
      _dam = damage player;
	
      //Check if values have updated
      if((getFatigue player) != _stam) then {
        //If condition is met, or not met in this case; call hudupdate
        [] call life_fnc_hudUpdate;
      };
      
	  //Check if values have updated
      if((damage player) != _dam) then {
        //If condition is met, or not met in this case; call hudupdate
        [] call life_fnc_hudUpdate;
      };
    };
};