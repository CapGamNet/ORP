/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

life_actions = [];

switch (playerSide) do {

    //Civilian
    case civilian: {
        //Drop fishing net
        life_actions pushBack (player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']);

        //Rob person
        life_actions pushBack (player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']);
        life_actions pushBack (player addAction["<t color='#0099FF'>Sit down</t>",{[cursorObject,player] execVM "scripts\sitdown.sqf"},true,1,true,true,"""",'player distance cursorObject < 3 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr)} ']);
    };
    
    //Cops
    case west: { 
        life_actions pushBack (player addaction ["Open bolo system",{[] call Lega_fnc_boloCheck}]);
        life_actions pushBack (player addAction["<t color='#0099FF'>Sit down</t>",{[cursorObject,player] execVM "scripts\sitdown.sqf"},true,1,true,true,"""",'player distance cursorObject < 3 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr)} ']);
                };
    
    //EMS
    case independent: {
        life_actions pushBack (player addAction["<t color='#0099FF'>Sit down</t>",{[cursorObject,player] execVM "scripts\sitdown.sqf"},true,1,true,true,"""",'player distance cursorObject < 3 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr)} ']);
        //Inject Morphine
        life_actions = life_actions + [player addAction[localize "STR_pAct_Inject",life_fnc_injectAction,"",0,false,false,"",'
        !isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && damage cursorTarget > 0.1']];
     };

};
life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
//life_actions pushBack (player addaction ["Open Market",{createDialog "Lega_Market";[] call Lega_fnc_marketOnload}]);
