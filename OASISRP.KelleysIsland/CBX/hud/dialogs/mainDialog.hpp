		
class CBXHud {
    idd = -1;
    movingEnable = 0;
    enableSimulation = 1;
    duration = 10e10;
    name = "CBXHud";
	fadein = 0;
	fadeout = 0;
    onLoad = "uiNamespace setVariable ['CBXHud',_this select 0]";

    class controlsBackground {
        class Background: Life_RscPicture
		{
			idc = 1200;
			text = "CBX\hud\images\hud_final.paa";
			x = 0.843404 * safezoneW + safezoneX;
			y = 0.4714 * safezoneH + safezoneY;
			w = 0.156752 * safezoneW;
			h = 0.2904 * safezoneH;
		};
    };
    class controls {
		class Health: Life_RscPicture
		{
			idc = 1201;
			text = "";
			x = 0.84751 * safezoneW + safezoneX;
			y = 0.6342 * safezoneH + safezoneY;
			w = 0.149546 * safezoneW;
			h = 0.0264 * safezoneH;
		};
		class Water: Life_RscPicture
		{
			idc = 1202;
			text = "";
			x = 0.847532 * safezoneW + safezoneX;
			y = 0.6628 * safezoneH + safezoneY;
			w = 0.149546 * safezoneW;
			h = 0.0264 * safezoneH;
		};
		class Food: Life_RscPicture
		{
			idc = 1234;
			text = "";
			x = 0.847531 * safezoneW + safezoneX;
			y = 0.6914 * safezoneH + safezoneY;
			w = 0.149546 * safezoneW;
			h = 0.0264 * safezoneH;
		};
		class Name: Life_RscStructuredText
		{
			idc = 2400;
			font = "PuristaBold";
			text = "";
			x = 0.848562 * safezoneW + safezoneX;
			y = 0.523 * safezoneH + safezoneY;//5264
			w = 0.146426 * safezoneW;
			h = 0.0308 * safezoneH;
		};
		class Side: Life_RscStructuredText
		{
			idc = 2401;
			font = "PuristaBold";
			text = "";
			x = 0.849594 * safezoneW + safezoneX;
			y = 0.5726 * safezoneH + safezoneY;
			w = 0.0989998 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class FPS: Life_RscText
		{
			idc = 2402;
			text = "";
			font = "RobotoCondensedBold";
            sizeEx = 0.05;
			x = 0.961 * safezoneW + safezoneX;//956843
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0237193 * safezoneW;
			h = 0.0242 * safezoneH;
		};
    };
};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Beast, v1.063, #Wupate)
		////////////////////////////////////////////////////////

		
		/*class RscPicture_1204: RscPicture
		{
			idc = 1204;
			text = "CBX\hud\images\hp\100.jpg";
			x = 0.847532 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.149546 * safezoneW;
			h = 0.0264 * safezoneH;
		};*/ //wanted
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////






		