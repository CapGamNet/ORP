class cop_int {
    idd = 2201;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
		  class background: Life_RscPicture
		{
			idc = 1200;
			text = "textures\cop_menu.jpg";
			x = 0.428844 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.462 * safezoneH;
		};
    };
    class controls {
		class RestrainButton: Life_RscButtonInvisable
		{
			idc = 2400;
			x = 0.441219 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0299065 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class SearchButton: Life_RscButtonInvisable
		{
			idc = 2401;
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0299065 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class registerationButton: Life_RscButtonInvisable
		{
			idc = 2402;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0299065 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class escortButton: Life_RscButtonInvisable
		{
			idc = 2403;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0299065 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class TicketButton: Life_RscButtonInvisable
		{
			idc = 2404;
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.4758 * safezoneH + safezoneY;
			w = 0.0299065 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PatDownButton: Life_RscButtonInvisable
		{
			idc = 2405;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0299065 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class GPSButton: Life_RscButtonInvisable
		{
			idc = 2406;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.5748 * safezoneH + safezoneY;
			w = 0.0299065 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PutincarButton: Life_RscButtonInvisable
		{
			idc = 2407;
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0299065 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class sentToJailButton: Life_RscButtonInvisable
		{
			idc = 2408;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0299065 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class standUpButton: Life_RscButtonInvisable
		{
			idc = 2409;
			x = 0.437094 * safezoneW + safezoneX;
			y = 0.6628 * safezoneH + safezoneY;
			w = 0.0381563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class sitDownButton: Life_RscButtonInvisable
		{
			idc = 2410;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0381563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class close: Life_RscButtonInvisable
		{
			idc = 2411;
			x = 0.478344 * safezoneW + safezoneX;
			y = 0.6606 * safezoneH + safezoneY;
			w = 0.0536249 * safezoneW;
			h = 0.0396 * safezoneH;
			onButtonClick = "closeDialog 0;";
        };
    };
};