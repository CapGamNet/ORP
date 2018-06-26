class veh_int {
    idd = 2200;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
		class RscPicture: life_RscPicture
		{
			idc = 1200;
			text = "textures\veh_menu.jpg";
			x = 0.428844 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.462 * safezoneH;
		};
    };
    class controls {
        class RscButtonRepair: Life_RscButtonInvisable
		{
			idc = 2400;
            tooltip = "Click here to repair this vehicle";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class RscButtonImpound: Life_RscButtonInvisable
		{
			idc = 2401;
            tooltip = "Click here to impound this vehicle (only police)";
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class RscButtonUnFlip: Life_RscButtonInvisable
		{
			idc = 2402;
            tooltip = "Click here to unflip this vehicle";
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class RscButtonSearch: Life_RscButtonInvisable
		{
			idc = 2403;
            tooltip = "Click here to search this vehicle (only police)";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class RscButtonOwner: Life_RscButtonInvisable
		{
			idc = 2404;
            tooltip = "Click here to get the registration of this vehicle (only police)";
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class RscButtonPullOut: Life_RscButtonInvisable
		{
			idc = 2405;
            tooltip = "Click here to pull out players from this vehicle";
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class RscButtonGPS: Life_RscButtonInvisable
		{
			idc = 2406;
            tooltip = "Click here to attach a gps to this vehicle";
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.5682 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.0748 * safezoneH;
		};
        class CloseMenu: Life_RscButtonInvisable
		{
			idc = 2407;
            tooltip = "Click here to close this menu";
            onButtonClick = "closeDialog 0;";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0495 * safezoneW;
			h = 0.0308 * safezoneH;
		};
    };
};