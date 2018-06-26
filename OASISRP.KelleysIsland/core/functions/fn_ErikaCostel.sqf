#include "..\..\script_macros.hpp"
/*
 Author : 4GG 
 Description: 4GG Developers
*/
if (playerside == west) exitWith {}; 
//Code by Kvod Ha Rav That Lives in a toaster

//Primary weapon, ammo and accessories
if (primaryWeapon player != "") then {

   seize_box_special addWeaponCargoGlobal [(primaryWeapon player), 1];

   if (count (primaryWeaponMagazine player) > 0) then {

	_number_magsPrimary_player = {_x in getArray (configFile >> "CFGWeapons" >> (primaryWeapon player) >> "magazines") } count (magazines player);

	seize_box_special addMagazineCargoGlobal [(primaryWeaponMagazine player) select 0, _number_magsPrimary_player];

   };

   if ((primaryWeaponItems player) select 0 != "") then {seize_box_special addItemCargoGlobal [(primaryWeaponItems player) select 0, 1]; };

   if ((primaryWeaponItems player) select 1 != "") then {seize_box_special addItemCargoGlobal [(primaryWeaponItems player) select 1, 1]; };

if ((primaryWeaponItems player) select 2 != "") then {seize_box_special addItemCargoGlobal [(primaryWeaponItems player) select 2, 1]; };

};


if (secondaryWeapon player != "") then {

seize_box_special addWeaponCargoGlobal [(secondaryWeapon player), 1];

if (count (secondaryWeaponMagazine player) > 0) then {

	_number_magsSecondary_player = {_x in getArray (configFile >> "CFGWeapons" >> (secondaryWeapon player) >> "magazines") } count (magazines player);

	seize_box_special addMagazineCargoGlobal [(secondaryWeaponMagazine player) select 0, _number_magsSecondary_player];

};

};


if (handgunWeapon player != "") then {

seize_box_special addWeaponCargoGlobal [(handgunWeapon player), 1];

if (count (handgunMagazine player) > 0) then {

	_number_magsHandgun_player = {_x in getArray (configFile >> "CFGWeapons" >> (handgunWeapon player) >> "magazines") } count (magazines player);

	seize_box_special addMagazineCargoGlobal [(handgunMagazine player) select 0, _number_magsHandgun_player];

};

   if ((handgunItems player) select 0 != "") then {seize_box_special addItemCargoGlobal [(handgunItems player) select 0, 1]; };

   if ((handgunItems player) select 1 != "") then {seize_box_special addItemCargoGlobal [(handgunItems player) select 1, 1]; };

//Optics
if ((handgunItems player) select 2 != "") then {seize_box_special addItemCargoGlobal [(handgunItems player) select 2, 1]; };

};


//Backpack:
if (backpack player != "") then {

//Stuff in the backpack
//Magazines
_magsinbackpack = magazineCargo backpackContainer player;
{seize_box_special addMagazineCargoGlobal [_x, 1]; } forEach _magsinbackpack;

//Items
_itemsinbackpack = itemCargo backpackContainer player;
{seize_box_special addItemCargoGlobal [_x, 1]; } forEach _itemsinbackpack;

//Weapons
_weaponsinbackpack = weaponCargo backpackContainer player;
{seize_box_special addWeaponCargoGlobal [_x, 1]; } forEach _weaponsinbackpack;

};


//Vest
if (vest player != "") then {

//Stuff in the vest
//Magazines
_magsinvest = magazineCargo vestContainer player;
{seize_box_special addMagazineCargoGlobal [_x, 1]; } forEach _magsinvest;

//Items:
_itemsinvest = itemCargo vestContainer player;
{seize_box_special addItemCargoGlobal [_x, 1]; } forEach _itemsinvest;

//Weapons:
_weaponsinvest = weaponCargo vestContainer player;
{seize_box_special addWeaponCargoGlobal [_x, 1]; } forEach _weaponsinvest;

};



//Uniform
if (uniform player != "") then {

//Stuff in the uniform
//Magazines
_magsinuniform = magazineCargo uniformContainer player;
{seize_box_special addMagazineCargoGlobal [_x, 1]; } forEach _magsinuniform;

//Items
_itemsinuniform = itemCargo uniformContainer player;
{seize_box_special addItemCargoGlobal [_x, 1]; } forEach _itemsinuniform;

//Weapons
_weaponsinuniform = weaponCargo uniformContainer player;
{seize_box_special addWeaponCargoGlobal [_x, 1]; } forEach _weaponsinuniform;

};

hint "Your gear has been placed in the evidence locker!";
removeallWeapons player;