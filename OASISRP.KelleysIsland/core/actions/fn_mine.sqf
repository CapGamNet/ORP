if (life_action_inUse) exitWith {};
if !(isNull objectParent player) exitWith {};
if (player getVariable "restrained") exitWith {
    hint localize "STR_NOTF_isrestrained";
};
_exit = false;
if (player getVariable "playerSurrender") exitWith {
    hint localize "STR_NOTF_surrender";
};

_maxGather = 0;
_requiredItem = "";
_ranArr = [];
_zone = "";

private _resources = "true" configClasses (missionConfigFile >> "CfgGather" >> "Minerals");
{
  _maxGather = getNumber(_x >> "amount");
  private _resources = getArray(_x >> "mined");
  private _zoneSize = getNumber(_x >> "zoneSize");
  private _resourceZones = getArray(_x >> "zones");
  private _requiredItem = getText(_x >> "item");
  if (_resources isEqualto []) exitWith {};
  _ranArr = [];
  for "_i" from 1 to 100 step 1 do {
    private _percent = (floor random 100) + 1;
    if (count _resources isEqualTo 1) then {
      if (!((_resources select 0) isEqualType [])) then {
          _ranArr pushBack (_resources select 0);
      } else {
          _ranArr pushBack ((_resources select 0) select 0);
      };
    } else {
      {
        for "_i" from (_x select 1) to (_x select 2) do {
          _ranArr pushBack (_x select 0);
        };
      } forEach _resources;
    };
    if ((count _ranArr) >= 101) exitWith {};
  };
  {
    if ((player distance(getMarkerPos _x)) < _zoneSize) exitWith {
        _zone = _x;
    };
  } forEach _resourceZones;
  if (_zone != "") exitWith {};
} forEach _resources;

if (_requiredItem != "") then {
    _valItem = missionNamespace getVariable "life_inv_" + _requiredItem;

    if (_valItem < 1) exitWith {
        switch (_requiredItem) do {
            case "pickaxe": {
                titleText[(localize "STR_NOTF_Pickaxe"), "PLAIN"];
            };
        };
        life_action_inUse = false;
        _exit = true;
  };
};



if (_zone isEqualTo "") exitWith {life_action_inUse = false;};
for "_i" from 0 to 1 step 0 do {
  _breakChance = 10;
  private _amount = round(random(_maxGather)) + 1;
  private _mined = selectRandom _ranArr;
  _diff = [_mined, _amount, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff;
  if (_diff isEqualTo 0) exitWith {
      hint localize "STR_NOTF_InvFull";
      life_action_inUse = false;
  };
  [player,"mining",35,1] remoteExecCall ["life_fnc_say3D", -2];

  for "_i" from 0 to 4 do {
      player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
      waitUntil {
          animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
      };
      sleep 0.5;
  };
  if (([true, _mined, _diff] call life_fnc_handleInv)) then {
      _itemName = getText(missionconfigfile >> "VirtualItems" >> _mined >> "displayName");
      titleText[format [localize "STR_NOTF_Mine_Success", (localize _itemName), _diff], "PLAIN"];
  };
  sleep 2.5;
  if (_requiredItem != "") then {
    if ((round (random 100))  < _breakChance) exitWith {
      hint format ["Your %1 broke",localize (getText (missionconfigfile >> "VirtualItems" >> _requiredItem >> "displayName"))];
      [false, _requiredItem, 1] call life_fnc_handleInv;
    };
  };
  if (life_interrupted) exitWith {};
};
if (life_interrupted) exitWith {life_interrupted = false;hint "You have cancelled gathering";life_action_inUse = false};

sleep 1;

life_action_inUse = false;
