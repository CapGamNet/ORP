//Author : Beast And Devill
_Message = "The President, Richie Land Is Now Online";
if ((getPlayerUID player) != "76561198093913516") exitWith {};
if ((profileName) != "Richie Land") exitWith {};
{
["President Online","The President Richie Land Is Now Online",[0,1,0,1]] remoteExec ["Lega_fnc_addNotification", _x];
}  forEach playableUnits;
"president_house" setMarkerColor "ColorGreen"; //Changes The Color Of The Marker
"president_house" setMarkerText  "President Online"; //Changes The Text Of The Marker
