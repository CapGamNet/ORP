class Lega_Plantables_Setup {
  idd = 1993;
  onLoad = "uiNamespace setVariable ['Lega_Plantables_Setup', _this select 0]";
  onUnload = "uiNamespace setVariable ['Lega_Plantables_Setup', displayNull]";
  duration = 99999999;
  class controlsBackground
  {
    class RscText_1000: Life_RscText
    {
      idc = -1;

      x = 0.322625 * safezoneW + safezoneX;
      y = 0.28 * safezoneH + safezoneY;
      w = 0.120656 * safezoneW;
      h = 0.0792 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };
    class RscText_1002: Life_RscText
    {
      idc = -1;
      size = "0.23 * (((safezoneW / safezoneH) min 1) * 0.15)";

      text = "Plant Setup"; //--- ToDo: Localize;
      x = 0.322625 * safezoneW + safezoneX;
      y = 0.258 * safezoneH + safezoneY;
      w = 0.120656 * safezoneW;
      h = 0.022 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
    };
  };
  class controls
  {

		class RscText_1002: Life_RscButtonMenu
		{
			idc = 9556;
			text = "Set Highest"; //--- ToDo: Localize;
			x = 0.383469 * safezoneW + safezoneX;
			y = 0.2844 * safezoneH + safezoneY;
			w = 0.05775 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,0.565,0,1};
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		};
		class RscText_1003: Life_RscButtonMenu
		{
			idc = 9555;
			text = "Set Lowest"; //--- ToDo: Localize;
			x = 0.383468 * safezoneW + safezoneX;
			y = 0.3086 * safezoneH + safezoneY;
			w = 0.05775 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,0.565,0,1};
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		};

		class RscText_1006: Life_RscEdit
		{
			idc = 2219;
			text = "POS HIGHEST"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.2844 * safezoneH + safezoneY;
			w = 0.05775 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
      shadow = 0;
		};
		class RscText_1007: Life_RscEdit
		{
			idc = 2220;
			text = "POS LOWEST"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.3086 * safezoneH + safezoneY;
			w = 0.05775 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
      shadow = 0;
		};

		class RscText_1008: Life_RscButtonMenu
		{
			idc = 2221;
			text = "Move Down"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.3328 * safezoneH + safezoneY;
			w = 0.05775 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
      colorBackground[] = {1,0.565,0,1};
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		};
    class RscText_1004: Life_RscButtonMenu
    {
      idc = 2222;
      text = "Move Up"; //--- ToDo: Localize;
      x = 0.383469 * safezoneW + safezoneX;
      y = 0.3328 * safezoneH + safezoneY;
      w = 0.05775 * safezoneW;
      h = 0.022 * safezoneH;
      colorText[] = {1,1,1,1};
      colorBackground[] = {1,0.565,0,1};
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    };
  };
};
