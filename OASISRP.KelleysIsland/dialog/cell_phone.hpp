class Life_cell_phone {
    idd = 3000;
    name= "life_cell_phone";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_cellphone";

    class controlsBackground {
		class RscPicture: life_RscPicture
		{
			idc = 1200;
			text = "textures\cell_phone.jpg";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.2954 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.4136 * safezoneH;
		};
    };
    class controls {
		class textEdit: Life_RscEdit 
        {
            idc = 3003;
            text = "";
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.392906 * safezoneW;
			h = 0.044 * safezoneH;
		};
        class TextMsgButton: Life_RscButtonInvisable
		{
			idc = 3015;
            onButtonClick = "[] call TON_fnc_cell_textmsg";
			x = 0.302 * safezoneW + safezoneX;
			y = 0.4054 * safezoneH + safezoneY;
			w = 0.122719 * safezoneW;
			h = 0.0506 * safezoneH;
		};
		class PlayerList: Life_RscCombo
		{
			idc = 3004;
			x = 0.303031 * safezoneW + safezoneX;
			y = 0.4648 * safezoneH + safezoneY;
			w = 0.120656 * safezoneW;
			h = 0.0352 * safezoneH;
		};
        class TextCopButton: Life_RscButtonInvisable
		{
			idc = 3016;
            onButtonClick = "[] call TON_fnc_cell_textcop";
			x = 0.517531 * safezoneW + safezoneX;
			y = 0.4054 * safezoneH + safezoneY;
			w = 0.0845625 * safezoneW;
			h = 0.0484 * safezoneH;
		};
        class TextAdminButton: Life_RscButtonInvisable
		{
			idc = 3017;
            onButtonClick = "[] call TON_fnc_cell_textadmin";
			x = 0.607147 * safezoneW + safezoneX;
			y = 0.40584 * safezoneH + safezoneY;
			w = 0.0845625 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class EMSRequest: Life_RscButtonInvisable
		{
			idc = 3022;
            onButtonClick = "[] call TON_fnc_cell_emsrequest";
			x = 0.429875 * safezoneW + safezoneX;
			y = 0.4054 * safezoneH + safezoneY;
			w = 0.0845625 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class AdminMsgButton: Life_RscButtonInvisable
		{
			idc = 3020;
			text = "Admin Message"; //--- ToDo: Localize;
            onButtonClick = "[] call TON_fnc_cell_adminmsg";
			x = 0.429875 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0814687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class AdminMsgAllButton: Life_RscButtonInvisable
		{
			idc = 3021;
			text = "Admin Msg All"; //--- ToDo: Localize;
            onButtonClick = "[] call TON_fnc_cell_adminmsgall";
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0814687 * safezoneW;
			h = 0.022 * safezoneH;
		};
        class goBack: Life_RscButtonInvisable
		{
			idc = 2404;
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
			x = 0.302 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.078375 * safezoneW;
			h = 0.044 * safezoneH;
		};
    };
};