#include "..\..\script_macros.hpp"
/*
    File: fn_p_openMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Opens the players virtual inventory menu
*/
if (!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "playerSettings";
    _display = findDisplay 2001;
    _photoFade = _display displayCtrl 1200;
    _bankStatusFade = _display displayCtrl 1600;
    _cashStatusFade = _display displayCtrl 1601;
    _dirtymoneyStatusFade = _display displayCtrl 1602;
    _itemListFade = _display displayCtrl 2005;
    _moneyEditFade = _display displayCtrl 2018;
    _nearPlayersFade = _display displayCtrl 2022;
    _itemEditFade = _display displayCtrl 2010;
    _iNearPlayersFade = _display displayCtrl 2023;
    _licenseesFade = _display displayCtrl 2014;
    _weightFade = _display displayCtrl 2408;
    //photo
    _photoFade ctrlSetFade 1;
    _photoFade ctrlCommit 0;
    _photoFade ctrlSetFade 0;
    _photoFade ctrlCommit 0.3;
    //photo
    //_bankStatusFade
    _bankStatusFade ctrlSetFade 1;
    _bankStatusFade ctrlCommit 0;
    _bankStatusFade ctrlSetFade 0;
    _bankStatusFade ctrlCommit 0.3;
    //_bankStatusFade
    //_dirtymoneyStatusFade
    _dirtymoneyStatusFade ctrlSetFade 1;
    _dirtymoneyStatusFade ctrlCommit 0;
    _dirtymoneyStatusFade ctrlSetFade 0;
    _dirtymoneyStatusFade ctrlCommit 0.3;
    //_dirtymoneyStatusFade
    //_cashStatusFade
    _cashStatusFade ctrlSetFade 1;
    _cashStatusFade ctrlCommit 0;
    _cashStatusFade ctrlSetFade 0;
    _cashStatusFade ctrlCommit 0.3;
    //_cashStatusFade
    //_itemListFade
    _itemListFade ctrlSetFade 1;
    _itemListFade ctrlCommit 0;
    _itemListFade ctrlSetFade 0;
    _itemListFade ctrlCommit 0.3;
    //_itemListFade
    //_moneyEditFade
    _moneyEditFade ctrlSetFade 1;
    _moneyEditFade ctrlCommit 0;
    _moneyEditFade ctrlSetFade 0;
    _moneyEditFade ctrlCommit 0.3;
    //_moneyEditFade
    //_nearPlayersFade
    _nearPlayersFade ctrlSetFade 1;
    _nearPlayersFade ctrlCommit 0;
    _nearPlayersFade ctrlSetFade 0;
    _nearPlayersFade ctrlCommit 0.3;
    //_nearPlayersFade
    //_itemEditFade
    _itemEditFade ctrlSetFade 1;
    _itemEditFade ctrlCommit 0;
    _itemEditFade ctrlSetFade 0;
    _itemEditFade ctrlCommit 0.3;
    //_itemEditFade
    //_iNearPlayersFade
    _iNearPlayersFade ctrlSetFade 1;
    _iNearPlayersFade ctrlCommit 0;
    _iNearPlayersFade ctrlSetFade 0;
    _iNearPlayersFade ctrlCommit 0.3;
    //_iNearPlayersFade
    //_licenseesFade
    _licenseesFade ctrlSetFade 1;
    _licenseesFade ctrlCommit 0;
    _licenseesFade ctrlSetFade 0;
    _licenseesFade ctrlCommit 0.3;
    //_licenseesFade
    //_weightFade
    _weightFade ctrlSetFade 1;
    _weightFade ctrlCommit 0;
    _weightFade ctrlSetFade 0;
    _weightFade ctrlCommit 0.3;
    //_weightFade
disableSerialization;

switch (playerSide) do {
    case west: {
        buttonSetAction [2012,"[] call life_fnc_wantedMenu"]; 
    };

    case civilian: {
        buttonSetAction [2012,"[] call Lega_fnc_initGangMenu"]; 
    };

    case independent: {
        ctrlShow[2012,false];
    };
};

if (FETCH_CONST(life_adminlevel) < 1) then {
    ctrlShow[2021,false];
};

[] call life_fnc_p_updateMenu;
