#include "..\script_macros.hpp"
/*
    File: init.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master client initialization file
*/

private ["_handle","_timeStamp","_extDB_notLoaded"];
_whitelist = [
    "76561198209403059",
    "76561198151257790",
    "76561198154957767",
    "76561198097251235",
    "76561198080439043",
    "76561198083005919",
    "76561198031169353",
    "76561198344566925",
    "76561198056501386",
    "76561198149302379",
    "76561197993382235",
    "76561198140534472",
    "76561198051345747",
    "76561198140341717",
    "76561198153151695",
    "76561197960287930",
    "76561198201826331",
    "76561198156598221",
    "76561198157370798",
    "76561198102914689"
    ];
    _uid = getPlayerUID player;
/*if !(_uid in _whitelist) exitWith {
    [] spawn life_fnc_whiteList;
    };*/
life_firstSpawn = true;
life_session_completed = false;
[] call mav_introcam_fnc_startCinematicCam;
[0, "Setting up client, please wait"] call mav_introcam_fnc_updateCinematicStatus;
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
_extDB_notLoaded = "";
diag_log "----------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log "------------------------------------------ Version 5.0.0 -------------------------------------------";
diag_log "----------------------------------------------------------------------------------------------------";
waitUntil {!isNull player && player == player}; //Wait till the player is ready
[] call compile preprocessFileLineNumbers "core\clientValidator.sqf";
enableSentences false;

//Setup initial client core functions
diag_log "::Life Client:: Initialization Variables";
[] call compile preprocessFileLineNumbers "core\configuration.sqf";

diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil "TON_fnc_clientGangLeader")};

diag_log "::Life Client:: Received server functions.";
[0, "Waiting for server to be ready"] call mav_introcam_fnc_updateCinematicStatus;
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil {!isNil "life_server_isReady"};
waitUntil {!isNil "life_HC_isActive" && {!isNil "life_server_extDB_notLoaded"}};
[] remoteExec["TFGG_fnc_getTaxLevel",2]; // this function will set the tax level from the database to the whole players..
[] remoteExec["TFGG_fnc_getBankVal",2]; // this function will set the bank value from the database to the whole players..

if (life_server_extDB_notLoaded) exitWith {
    999999 cutText [localize "STR_Init_ExtdbFail","BLACK FADED"];
    999999 cutFadeOut 99999999;
};

waitUntil {life_server_isReady};
[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
[1, "PRESS SPACE TO CONTINUE"] call mav_introcam_fnc_updateCinematicStatus;
waitUntil {mav_introcam_continue};
0 cutFadeOut 9999999;

//diag_log "::Life Client:: Group Base Execution";
[] spawn life_fnc_escInterupt;

//Set bank amount for new players
switch (playerSide) do {
    case west: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
    };
    case civilian: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
    };
    case independent: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
    };
};

switch (playerSide) do {
    case west: {
        _handle = [] spawn life_fnc_initCop;
        waitUntil {scriptDone _handle};
    };
    case civilian: {
        //Initialize Civilian Settings
        _handle = [] spawn life_fnc_initCiv;
        waitUntil {scriptDone _handle};
    };
    case independent: {
        //Initialize Medics and blah
        _handle = [] spawn life_fnc_initMedic;
        waitUntil {scriptDone _handle};
    };
};

player setVariable ["restrained",false,true];
player setVariable ["Escorting",false,true];
player setVariable ["transporting",false,true];
player setVariable ["playerSurrender",false,true];
player setVariable ["ziptied",false,true];
player setVariable ["blindfolded",false,true];
player setVariable ["gagged",false,true];

diag_log "Past Settings Init";
[] execFSM "core\fsm\client.fsm";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];

[player,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC",RSERV];
0 cutText ["","BLACK IN"];
[] spawn CBX_fnc_setupHud;
player setVariable ["steam64ID",getPlayerUID player,true];
player setVariable ["realname",profileName,true];

/* Set up frame-by-frame handlers */
LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;



life_fnc_moveIn = compileFinal
"
    life_disable_getIn = false;
    player moveInCargo (_this select 0);
    life_disable_getOut = true;
";

life_fnc_RequestClientId = player;
publicVariableServer "life_fnc_RequestClientId"; //Variable OwnerID for HeadlessClient

[] spawn life_fnc_survival;

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil {(!isNull (findDisplay 49)) && {(!isNull (findDisplay 602))}}; // Check if Inventory and ESC dialogs are open
        (findDisplay 49) closeDisplay 2; // Close ESC dialog
        (findDisplay 602) closeDisplay 2; // Close Inventory dialog
    };
};

CONSTVAR(life_paycheck); //Make the paycheck static.
if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};

if (LIFE_SETTINGS(getNumber,"pump_service") isEqualTo 1) then {
    [] execVM "core\fn_setupStationService.sqf";
};


/*
    https://feedback.bistudio.com/T117205 - disableChannels settings cease to work when leaving/rejoining mission
    Universal workaround for usage in a preInit function. - AgentRev
    Remove if Bohemia actually fixes the issue.
*/
{
    _x params [["_chan",-1,[0]], ["_noText","false",[""]], ["_noVoice","false",[""]]];

    _noText = [false,true] select ((["false","true"] find toLower _noText) max 0);
    _noVoice = [false,true] select ((["false","true"] find toLower _noVoice) max 0);

    _chan enableChannel [!_noText, !_noVoice];

} forEach getArray (missionConfigFile >> "disableChannels");

if (life_HC_isActive) then {
    [getPlayerUID player,player getVariable ["realname",name player]] remoteExec ["HC_fnc_wantedProfUpdate",HC_Life];
} else {
    [getPlayerUID player,player getVariable ["realname",name player]] remoteExec ["life_fnc_wantedProfUpdate",RSERV];
};
[] spawn {
_uid = getPlayerUID player;
_player = player;
player setVariable ["TFGG_DirtyMoney",0,true];
[_uid, _player] remoteExec ["TFGG_fnc_getDirtyMoney",2]; // will set the dirty money as variable.
};

[] spawn {
_player = player;
_uid = getPlayerUID player;
[_player, _uid] remoteExec ["TFGG_fnc_playerJoined",2]; // will set the drunk level as variable.
};
/*[] spawn {
    _uid = getPlayerUID player;
    player setVariable ["runTime",0,true];
        [player, _uid, 0, 0] remoteExec ["TFGG_fnc_serverSetRunTime",2];
        }; 
        [] spawn TFGG_fnc_setPlayerRunTime;
        [] spawn {
    _uid = getPlayerUID player;
    player setVariable ["shapeLevel",0,true];
        [_uid, player, 0, 0] remoteExec ["TFGG_fnc_setPlayerShape",2];
        }; */
 /*private _drunkLevel = player getVariable "TFGG_drunklevel";
 [_drunkLevel] spawn {
     _drunkLevel = param [0,0,[0]];
        while {(_drunkLevel >= 30)} do {
            waitUntil { _drunkLevel >= 30; };
            "radialBlur" ppEffectEnable true;
            enableCamShake true;
            sleep 5;
            "radialBlur" ppEffectAdjust  [random 0.06,random 0.06,0.25,0.25]; 
            "radialBlur" ppEffectCommit 1; 
            addCamShake[random 3, 1, random 3];
            sleep 5;
            "radialBlur" ppEffectAdjust  [0,0,0,0];
            "radialBlur" ppEffectCommit 5; 
            sleep 5;
            "radialBlur" ppEffectEnable false;
            resetCamShake;
            sleep 5;
        };
    };*/
    
    [] spawn {
    _uid = getPlayerUID player;
    [_uid,player] remoteExec ["life_fnc_getPlayerPlayTime",2];
    };
life_hideoutBuildings = [];
{
    private _building = nearestBuilding getMarkerPos _x;
    life_hideoutBuildings pushBack _building;   
    false
} count ["gang_area_1","gang_area_2","gang_area_3"];
[] spawn {
    while {true} do {
        sleep 60;
        _uid = getPlayerUID player;
        private _currentDrunkLevel = player getVariable "TFGG_drunkLevel";
        if ((_currentDrunkLevel - 10) <= 0) then {
        player setVariable ["TFGG_drunkLevel",0];
        [_uid] remoteExec ["TFGG_fnc_decreaseAlcohol",2];
        } else {
         player setVariable ["TFGG_drunkLevel",(_currentDrunkLevel - 10)];
        [_uid] remoteExec ["TFGG_fnc_decreaseAlcohol",2];
        };
    };
};   
/*[] spawn { 
    while {true} do {
     sleep 4;
      CASH = CASH + 999999;
       }; 
    };*/
[] spawn {
    while {true} do {
        sleep 600;
        [] remoteExec ["TFGG_fnc_getTaxLevel",2];
        }; 
    };
    private _profileName = player getVariable ["realname",name player];

diag_log "----------------------------------------------------------------------------------------------------";
diag_log format ["               End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "----------------------------------------------------------------------------------------------------";