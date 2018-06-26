class house_buy {
    idd = 12345;
    movingEnable = 0;
    enableSimulation = 1;
    class controlsBackground {
		class RscPicture: life_RscPicture
		{
			idc = 1200;
			text = "textures\house_buy.jpg";
			x = 0.428844 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.462 * safezoneH;
		};
    };
    class controls {
        class BuyProperty: Life_RscButtonInvisable
		{
			idc = 2400;
			tooltip = "Click here to buy this property";
			x = 0.465969 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.143 * safezoneH;
		};
		class CloseButton: Life_RscButtonInvisable
		{
			idc = 2401;
            tooltip = "Click here to close this menu";
            onButtonClick = "closeDialog 0;";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0495 * safezoneW;
			h = 0.0308 * safezoneH;
		};
    };
};