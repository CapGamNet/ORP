class house_sell {
    idd = 12346;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class RscPicture: life_RscPicture
		{
			idc = 1200;
			text = "textures\house_sell.jpg";
			x = 0.428844 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.462 * safezoneH;
		};
    };
    class controls {
        class SellProperty: Life_RscButtonInvisable
		{
			idc = 2400;
            tooltip = "Click here to sell this property";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class StorageLock: Life_RscButtonInvisable
		{
			idc = 2401;
            tooltip = "Click here to unlock / lock your storage";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Lights: Life_RscButtonInvisable
		{
			idc = 2402;
            tooltip = "Click here to turn on / off your house lights";
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.077 * safezoneH;
		};
        class CloseMenu: Life_RscButtonInvisable
		{
			idc = 2403;
            tooltip = "Click here to close this menu";
            onButtonClick = "closeDialog 0;";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0495 * safezoneW;
			h = 0.0308 * safezoneH;
		};
    };
};