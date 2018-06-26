/*
  File: fn_zip_gagPlayer.sqf
  Author: Wackbatt | 76561198071769386
  Desciption: Give's robbers the ability to gag the player they have captured.
  Notes: N/A
  Origin: Altisliferpg.com and armargplife.com
*/
if(player getVariable ["isGagged",false]) then {
  ["Un - Gagged","You have been un-gagged.",[0,1,0,1]] call Lega_fnc_addNotification;
  //5 enableChannel true;
  player setVariable ["isGagged",true,true]
 } else {
  ["Gagged","You have been gagged by someone.",[1,1,0,1]] call Lega_fnc_addNotification;
  //5 enableChannel false;
  player setVariable ["isGagged",false,true]
};
