
#include "player_sys.sqf"

class playerSettings {
    idd = playersys_DIALOG;
    movingEnable = 1;
    enableSimulation = 1;
    class controlsBackground {
        class picture: life_RscPicture
		{
			idc = 1200;
			text = "textures\y_menu.jpg";
			x = 0.228781 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.567187 * safezoneW;
			h = 0.5654 * safezoneH;
		};
        class bankStatus: Life_RscStructuredText
		{
			idc = 1600;
			x = 0.287562 * safezoneW + safezoneX;
			y = 0.3152 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class cashStatus: Life_RscStructuredText
		{
			idc = 1601;
			x = 0.286531 * safezoneW + safezoneX;
			y = 0.3856 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class dirtymoneyStatus: Life_RscStructuredText
		{
			idc = 1602;
			x = 0.286531 * safezoneW + safezoneX;
			y = 0.4582 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
    };
    class controls {
		class itemList: Life_RscListBox
		{
			idc = item_list;
            sizeEx = 0.030;
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.126844 * safezoneW;
			h = 0.2596 * safezoneH;
		};
        class moneyEdit: Life_RscEdit
		{
			idc = 2018;
            text = "1";
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.133031 * safezoneW;
			h = 0.0176 * safezoneH;
		};
        class NearPlayers: Life_RscCombo {
            idc = 2022;
			x = 0.270031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.137156 * safezoneW;
			h = 0.022 * safezoneH;
		};
        class moneyDrop: Life_RscButtonInvisable 
        {
            idc = 2001;
            onButtonClick = "[] call life_fnc_giveMoney";
            sizeEx = 0.025;
			x = 0.297875 * safezoneW + safezoneX;
			y = 0.5748 * safezoneH + safezoneY;
			w = 0.0845625 * safezoneW;
			h = 0.0242 * safezoneH;
		};
        class itemEdit: Life_RscEdit 
        {
            idc = item_edit;
            text = "1";
            sizeEx = 0.030;
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.6166 * safezoneH + safezoneY;
			w = 0.126844 * safezoneW;
			h = 0.022 * safezoneH;
		};
        class iNearPlayers: Life_RscCombo 
        {
            idc = 2023;
			x = 0.647469 * safezoneW + safezoneX;
			y = 0.5792 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
        class UseButton: Life_RscButtonInvisable 
        {
			idc = 2410;
            onButtonClick = "[] call life_fnc_useItem;";
			x = 0.647469 * safezoneW + safezoneX;
			y = 0.6518 * safezoneH + safezoneY;
			w = 0.130969 * safezoneW;
			h = 0.0264 * safezoneH;
		};
		class DropButton: Life_RscButtonInvisable 
        {
            idc = 2002;
			onButtonClick = "[] call life_fnc_giveItem;";
			x = 0.647469 * safezoneW + safezoneX;
			y = 0.6848 * safezoneH + safezoneY;
			w = 0.130969 * safezoneW;
			h = 0.0264 * safezoneH;
		};
		class RemoveButton: Life_RscButtonInvisable
		{
			idc = 2412;
            onButtonClick = "[] call life_fnc_removeItem;";
			x = 0.647778 * safezoneW + safezoneX;
			y = 0.7189 * safezoneH + safezoneY;
			w = 0.130969 * safezoneW;
			h = 0.0286 * safezoneH;
		};
         class Life_Licenses: Life_RscStructuredText
		{
			idc = 2014;
            sizeEx = 0.020;
            text = "";
			x = 0.478344 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.126844 * safezoneW;
			h = 0.3388 * safezoneH;
		};
        class ButtonGangList: Life_RscButtonInvisable 
        {
            idc = 2012;
            x = 0.398937 * safezoneW + safezoneX;
			y = 0.6166 * safezoneH + safezoneY;
			w = 0.0732187 * safezoneW;
			h = 0.0704 * safezoneH;
        };
        class ButtonKeys: Life_RscButtonInvisable 
        {
            idc = 2013;
            onButtonClick = "createDialog ""Life_key_management"";";
            x = 0.477312 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.127875 * safezoneW;
			h = 0.0726 * safezoneH;
        };   
         class ButtonCell: Life_RscButtonInvisable 
         {
            idc = 2014;
            onButtonClick = "createDialog ""Life_cell_phone"";";
            x = 0.477312 * safezoneW + safezoneX;
			y = 0.6144 * safezoneH + safezoneY;
			w = 0.127875 * safezoneW;
			h = 0.0726 * safezoneH;
        }; 
        class ButtonAdminMenu: Life_RscButtonInvisable
		{
			idc = 2021;
            onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
			x = 0.398937 * safezoneW + safezoneX;
			y = 0.7002 * safezoneH + safezoneY;
			w = 0.0732187 * safezoneW;
			h = 0.0704 * safezoneH;
		};
        class ButtonSettings: Life_RscButtonInvisable 
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.24425 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.151594 * safezoneW;
			h = 0.0726 * safezoneH;
        };
        class ButtonSyncData: Life_RscButtonInvisable
		{
			idc = -1;
            onButtonClick = "[] call SOCK_fnc_syncData;";
			x = 0.24425 * safezoneW + safezoneX;
			y = 0.6144 * safezoneH + safezoneY;
			w = 0.151594 * safezoneW;
			h = 0.0726 * safezoneH;
		};
        class weightShow: Life_RscText
		{
			idc = 2408;
			x = 0.680469 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.066 * safezoneW;
			h = 0.0176 * safezoneH;
		};
    };
};