#include "..\..\..\script_macros.hpp"
/*		File Name - fn_grabMoney.sqf.
		Author - Beast.
*/
if ((side player) != civilian) exitWith {};
private _getBankVal = missionNameSpace getVariable "gover_bank";
private _moneyTaken = _getBankVal;
private _moneyObject = cursorObject;
if (_getBankVal == 0) exitWith {hint "There is no money in the bank!"};
if !((typeOf _moneyObject) isEqualTo "I_supplyCrate_F") exitWith {hint "Your are not looking at the object"};
deleteVehicle _moneyObject;
CASH = CASH + _moneyTaken;
[] remoteExec ["TFGG_fnc_updateBankValRob",2];
hint format ["You took %1%2 from the government vault",_moneyTaken,"$"];
