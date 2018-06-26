if (playerside != west) exitWith {}; 
_clear = nearestObjects [player,["weaponholder"],3];
_clear = _clear + nearestObjects [player,["groundWeaponHolder"],3];
_seizedno = 0;

for "_i" from 0 to (count _clear - 1) do {

		_seizedno = _seizedno + 1;
		_harveyisacunt = _clear select _i;
		_mags = getMagazineCargo _harveyisacunt;
		_items = getItemCargo _harveyisacunt;
		_weapons = getWeaponCargo _harveyisacunt;
		clearBackpackCargo _harveyisacunt;
		
		if (count (_mags select 0) > 0) then {
			{seize_box addMagazineCargoGlobal [(_mags select 0) select _forEachIndex,(_mags select 1) select _forEachIndex]} forEach (_mags select 0); 
			clearMagazineCargo _harveyisacunt;
		};
		
		if (count (_items select 0) > 0) then {
			{seize_box addItemCargoGlobal [(_items select 0) select _forEachIndex,(_items select 1) select _forEachIndex]} forEach (_items select 0); 
			clearItemCargo _harveyisacunt; 
		};
		if (count (_weapons select 0) > 0) then {
			{seize_box addWeaponCargoGlobal [(_weapons select 0) select _forEachIndex,(_weapons select 1) select _forEachIndex]} forEach (_weapons select 0); 
			clearWeaponCargo _harveyisacunt; 
		};
		
		deleteVehicle (_clear select _i);
		uiSleep 0.056;
};

_seizedno = _seizedno - 1;
titleText[format["You Have Seized %1 items,The Seized Items Has Been Moved Into The Weapon Storage.", _seizedno],"PLAIN"];