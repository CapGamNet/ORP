class civ_int {
    idd = 2202;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class background: Life_RscPicture
		{
			idc = 1200;
			text = "textures\player_menu.jpg";
			x = 0.428844 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.462 * safezoneH;
		};
    };
    class controls {
		class restrain: Life_RscButtonInvisable
		{
			idc = 2400;
			x = 0.441218 * safezoneW + safezoneX;
			y = 0.3702 * safezoneH + safezoneY;
			w = 0.0319689 * safezoneW;
			h = 0.0638 * safezoneH;
		};
		class patdown: Life_RscButtonInvisable
		{
			idc = 2401;
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.3724 * safezoneH + safezoneY;
			w = 0.0319689 * safezoneW;
			h = 0.0638 * safezoneH;
		};
		class gag: Life_RscButtonInvisable
		{
			idc = 2402;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0319689 * safezoneW;
			h = 0.0682 * safezoneH;
		};
		class escort: Life_RscButtonInvisable
		{
			idc = 2403;
			x = 0.44225 * safezoneW + safezoneX;
			y = 0.4736 * safezoneH + safezoneY;
			w = 0.0319689 * safezoneW;
			h = 0.0638 * safezoneH;
		};
		class blindfold: Life_RscButtonInvisable
		{
			idc = 2404;
			x = 0.487625 * safezoneW + safezoneX;
			y = 0.4714 * safezoneH + safezoneY;
			w = 0.0330001 * safezoneW;
			h = 0.0638 * safezoneH;
		};
		class putincar: Life_RscButtonInvisable
		{
			idc = 2405;
			x = 0.535063 * safezoneW + safezoneX;
			y = 0.4692 * safezoneH + safezoneY;
			w = 0.0330001 * safezoneW;
			h = 0.0638 * safezoneH;
		};
		class gps: Life_RscButtonInvisable
		{
			idc = 2406;
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.5638 * safezoneH + safezoneY;
			w = 0.0330001 * safezoneW;
			h = 0.0638 * safezoneH;
		};
		class close: Life_RscButtonInvisable
		{
			idc = 2407;
			x = 0.478344 * safezoneW + safezoneX;
			y = 0.6606 * safezoneH + safezoneY;
			w = 0.0536249 * safezoneW;
			h = 0.0396 * safezoneH;
			onButtonClick = "closeDialog 0;";
		};
    };
};