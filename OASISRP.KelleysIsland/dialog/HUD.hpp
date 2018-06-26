#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0
/*
#
#	Author: David
#
#	Release: V2.1
#
#	Community: Altisliferpg.com
#
#	Do Not Re-Upload Anywhere Else
#
*/
  
      class playerHUD {
        idd = -1;
        duration = 10e10;
        movingEnable = 0;
        enableSimulation = 1;
        fadein = 0;
        fadeout = 0;
        name = "playerHUD";
        onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
        class controls
        {
            /*
            Life_RscProgress_HUDHealth,
            Life_RscProgress_HUDFood,
            Life_RscProgress_HUDWater,
            Life_RscProgress_HUDStamina
            */
            class Life_RscProgress_HUDHealth_Background: Life_RscText
            {
                idc = 9991;
                style = 0x01;
                colorBackground[] = {0,0,0,0.6};
                x = 0.958906 * safezoneW + safezoneX;
                y = 0.819 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.154 * safezoneH;
            };

            class Life_RscProgress_HUDFood_Background: Life_RscText
            {
                idc = 9992;
                style = 0x01;
                colorBackground[] = {0,0,0,0.6};
                x = 0.922813 * safezoneW + safezoneX;
                y = 0.819 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.154 * safezoneH;
            };

            class Life_RscProgress_HUDWater_Background: Life_RscText
            {
                idc = 9993;
                style = 0x01;
                colorBackground[] = {0,0,0,0.6};
                x = 0.886719 * safezoneW + safezoneX;
                y = 0.819 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.154 * safezoneH;
            };

            class Life_RscProgress_HUDStamina_Background: Life_RscText
            {
                idc = 9994;
                style = 0x01;
                colorBackground[] = {0,0,0,0.6};
                x = 0.850625 * safezoneW + safezoneX;
                y = 0.819 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.154 * safezoneH;
            };

        /* Progress Bars */
            class LIFE_RscProgress_HUDCommon: Life_RscProgress {
                colorFrame[] = {0, 0, 0, 0.8};
                y = 0.972223 * safezoneH + safezoneY;
                w = 0.0462964 * safezoneW;
                h = 0.0222222 * safezoneH;
            };

            class Life_RscProgress_HUDHealth: LIFE_RscProgress_HUDCommon
            {
                idc = 1100;
                style = 0x01;
                colorBar[] = {1,0.557,0.118,0.75};
                x = 0.958906 * safezoneW + safezoneX;
                y = 0.819 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.154 * safezoneH;
            };
            class Life_RscProgress_HUDFood: LIFE_RscProgress_HUDCommon
            {
                idc = 1101;
                style = 0x01;
                colorBar[] = {0.459,0.918,0,0.75};
                x = 0.922813 * safezoneW + safezoneX;
                y = 0.819 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.154 * safezoneH;
            };
            class Life_RscProgress_HUDWater: LIFE_RscProgress_HUDCommon
            {
                idc = 1102;
                style = 0x01;
                colorBar[] = {0.118,0.557,1,0.75};
                x = 0.886719 * safezoneW + safezoneX;
                y = 0.819 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.154 * safezoneH;
            };
            class Life_RscProgress_HUDStamina: LIFE_RscProgress_HUDCommon
            {
                idc = 1103;
                style = 0x01;
                colorBar[] = {1,0.118,0.118,0.75};
                x = 0.850625 * safezoneW + safezoneX;
                y = 0.819 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.154 * safezoneH;
            };
            class img4: life_RscPicture
            {
                idc = 1200;
                text = "textures\healthhud.paa";
                x = 0.855781 * safezoneW + safezoneX;
                y = 0.929 * safezoneH + safezoneY;
                w = 0.0154688 * safezoneW;
                h = 0.033 * safezoneH;
            };
            class img3: life_RscPicture
            {
                idc = 1201;
                text = "textures\thirsthud.paa";
                x = 0.891875 * safezoneW + safezoneX;
                y = 0.929 * safezoneH + safezoneY;
                w = 0.0154688 * safezoneW;
                h = 0.033 * safezoneH;
            };
            class img2: life_RscPicture
            {
                idc = 1202;
                text = "textures\foodhud.paa";
                x = 0.927969 * safezoneW + safezoneX;
                y = 0.929 * safezoneH + safezoneY;
                w = 0.0154688 * safezoneW;
                h = 0.033 * safezoneH;
            };
            class img1: life_RscPicture
            {
                idc = 1203;
                text = "textures\staminahud.paa";
                x = 0.964063 * safezoneW + safezoneX;
                y = 0.929 * safezoneH + safezoneY;
                w = 0.0154688 * safezoneW;
                h = 0.033 * safezoneH;
            };
            class text4: Life_RscStructuredText
            {
                idc = 1104;
                text = "";
                shadow = 0;
                x = 0.850625 * safezoneW + safezoneX;
                y = 0.863 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.022 * safezoneH;
                class Attributes
                {
                    color = "#FFFFFF";
                    align = "center";
                    valign = "middle";
                    underline = false;
                };
            };
            class text3: Life_RscStructuredText
            {
                idc = 1105;
                text = "";
                shadow = 0;
                x = 0.886719 * safezoneW + safezoneX;
                y = 0.863 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.022 * safezoneH;
                class Attributes
                {
                    color = "#FFFFFF";
                    align = "center";
                    valign = "middle";
                    underline = false;
                };
            };
            class text2: Life_RscStructuredText
            {
                idc = 1106;
                text = "";
                shadow = 0;
                x = 0.922813 * safezoneW + safezoneX;
                y = 0.863 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.022 * safezoneH;
                class Attributes
                {
                    color = "#FFFFFF";
                    align = "center";
                    valign = "middle";
                    underline = false;
                };
            };
            class text1: Life_RscStructuredText
            {
                idc = 1107;
                text = "";
                shadow = 0;
                x = 0.958906 * safezoneW + safezoneX;
                y = 0.863 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.022 * safezoneH;
                class Attributes
                {
                    color = "#FFFFFF";
                    align = "center";
                    valign = "middle";
                    underline = false;
                };
            };
        };
    };