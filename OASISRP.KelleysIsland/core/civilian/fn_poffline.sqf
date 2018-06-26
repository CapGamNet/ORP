//Author : Beast And Devill
_Messagee = "The President, Richie Land Is Now Offline";
if ((getPlayerUID player) != "76561198093913516") exitWith {};
if ((profileName) != "Richie Land") exitWith {};
{
["President Offline","The President Richie Land Is Now Offline",[1,0,0,1]] remoteExec ["Lega_fnc_addNotification", _x];
}  forEach playableUnits;

"president_house" setMarkerColor "ColorRed"; //Changes The Color Of The Marker
"president_house" setMarkerText  "President Offline"; //Changes The Text Of The Marker


