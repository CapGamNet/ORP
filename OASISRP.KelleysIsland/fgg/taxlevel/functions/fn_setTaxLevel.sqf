//this mini function should return bool, whether is is a number or not.
  private _miniLocalFucntion = {
    params ["_string"];
    private _isNumber = true;
    private _allowedNumbers = ["1","2","3","4","5","6","7","8","9","0"];
    private _strArr = _string splitString "";
    {
      if !(_x in _allowedNumbers) exitWith {
        _isNumber = false;
        _isNumber;
      }
    }forEach _strArr;
    _isNumber;
  };


  //Variables.
  private _entered = ctrlText 1400;
  private _minTax = 100;
  private _maxTax = 150;
  //Make sure someone has entered something.
  if (_entered == "") exitWith {hint "You must enter something to do that!"};

  //check if the entered text is a number
  private _isNumber = [_entered] call _miniLocalFucntion;

  //if it isnt, exitwith.
  if !(_isNumber) exitWith {hint "You must only enter numbers!"};

  //Parse the string number into an int
  private _taxInt = parseNumber _entered;

  //check if the tax is between min and max
  if (_taxInt > _maxTax) exitWith {hint format ["The Tax must be below %1%2",_maxTax,"%"]};
  if (_taxInt < _minTax) exitWith {hint format ["The Tax must be above %1%2",_minTax,"%"]};
   [_taxInt,player] remoteExec ["TFGG_fnc_updateDatabase",2];
   closedialog 0;
   hint format ["The tax level has been changed to %1%2",_entered,"%"];