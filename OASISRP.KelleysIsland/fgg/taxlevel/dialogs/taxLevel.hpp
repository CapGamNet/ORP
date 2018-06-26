class life_taxlevel {
    idd = 2018;
    name= "life_taxlevel";
    movingEnable = 1;
    enableSimulation = 1;
class controlsBackground {
        class MainBackground: Life_RscText
        {
            idc = 2200;

            x = 0.412344 * safezoneW + safezoneX;
            y = 0.357 * safezoneH + safezoneY;
            w = 0.165 * safezoneW;
            h = 0.242 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
    };
    class controls {
        class RscEdit: Life_RscEdit
        {
            idc = 1400;
            text = "100";
            x = 0.448438 * safezoneW + safezoneX;
            y = 0.5 * safezoneH + safezoneY;
            w = 0.094875 * safezoneW;
            h = 0.044 * safezoneH;
            colorBackground[] = {-1,-1,-1,0.8};
        };
        class RscButton: Life_RscButtonMenu
        {
            idc = 1600;
            onButtonClick = "[] spawn TFGG_fnc_setTaxLevel;";
            text = "Accept"; //--- ToDo: Localize;
            x = 0.474219 * safezoneW + safezoneX;
            y = 0.566 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.022 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class RscText_2: Life_RscText
        {
            idc = 1000;

            text = "Set The Tax Level :"; //--- ToDo: Localize;
            x = 0.45875 * safezoneW + safezoneX;
            y = 0.368 * safezoneH + safezoneY;
            w = 0.0721875 * safezoneW;
            h = 0.022 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class RscText_3: Life_RscText
        {
            idc = 1001;
            text = "Enter number between 100-150"; //--- ToDo: Localize;
            x = 0.437094 * safezoneW + safezoneX;
            y = 0.39 * safezoneH + safezoneY;
            w = 0.120656 * safezoneW;
            h = 0.044 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class RscText_4: Life_RscText
        {
            idc = 1150;
            text = "The Current Tax Level is :"; //--- ToDo: Localize;
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.456 * safezoneH + safezoneY;
            w = 0.118594 * safezoneW;
            h = 0.022 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
    };
};