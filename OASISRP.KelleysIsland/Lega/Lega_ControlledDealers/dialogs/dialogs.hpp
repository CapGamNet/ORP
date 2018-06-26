class Lega_GangControlledDealers_dialog
{
	idd = 19930;
	name = "Lega_GangControlledDealers_dialog";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_GangControlledDealers_dialog', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_GangControlledDealers_dialog', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_GangControlledDealers_dialog', displayNull]";
  class controlsBackground
  {
    class RscText_1000: Life_RscText
    {
      idc = 1000;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.313 * safezoneH + safezoneY;
      w = 0.144375 * safezoneW;
      h = 0.4356 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };
    class RscText_1001: Life_RscText
    {
      idc = 1001;
      text = "Lega's Controlled Dealers"; //--- ToDo: Localize;
      x = 0.427812 * safezoneW + safezoneX;
      y = 0.291 * safezoneH + safezoneY;
      w = 0.144374 * safezoneW;
      h = 0.022 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
  };
  class controls
  {
    class RscText_1004: Life_RscText
    {
      idc = 1004;
      text = "Current Tax :"; //--- ToDo: Localize;
      x = 0.428 * safezoneW + safezoneX;
      y = 0.3592 * safezoneH + safezoneY;
      w = 0.136116 * safezoneW;
      h = 0.0176 * safezoneH;
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscText_1003: Life_RscText
    {
      idc = 1003;
      text = "Controlled By :"; //--- ToDo: Localize;
      x = 0.428 * safezoneW + safezoneX; y = 0.3394 * safezoneH + safezoneY;
      w = 0.136116 * safezoneW;
      h = 0.0176 * safezoneH;
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class ProgressBar: Life_RscProgress {
        idc = 38201;
        x = 0.429874 * safezoneW + safezoneX;
        y = 0.3174 * safezoneH + safezoneY;
        w = 0.14024 * safezoneW;
        h = 0.0176 * safezoneH;
				colorBar[] = {1,0.565,0,1};
    };
    class ProgressText: Life_RscStructuredText {
        idc = 38202;
        text = "Time left to capture";
        x = 0.429874 * safezoneW + safezoneX;
        y = 0.316 * safezoneH + safezoneY;
        w = 0.14024 * safezoneW;
        h = 0.0176 * safezoneH;
        font = "PuristaLight";
        size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
        sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };

    class RscButtonMenu_2402: Life_RscButtonMenu
    {
      idc = 2402;
      text = "Settings"; //--- ToDo: Localize;
      x = 0.429876 * safezoneW + safezoneX;
      y = 0.72 * safezoneH + safezoneY;
      w = 0.139209 * safezoneW;
      h = 0.0242 * safezoneH;
      font = "PuristaLight";
      colorBackground[] = {1,0.565,0,1};
    };
    class RscButtonMenu_2401: Life_RscButtonMenu
    {
      idc = 2401;
      text = "Sell All"; //--- ToDo: Localize;
      x = 0.429874 * safezoneW + safezoneX;
      y = 0.698 * safezoneH + safezoneY;
      w = 0.139209 * safezoneW;
      h = 0.022 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
			onButtonClick = "['all'] spawn Lega_fnc_sellItem";
    };
    class RscListbox_1500: Life_RscListbox
    {
      idc = 1500;
      x = 0.429876 * safezoneW + safezoneX;
      y = 0.379 * safezoneH + safezoneY;
      w = 0.139219 * safezoneW;
      h = 0.2684 * safezoneH;
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscEdit_1400: Life_RscEdit
    {
      idc = 1400;
      text = "Amount"; //--- ToDo: Localize;
      x = 0.429876 * safezoneW + safezoneX;
      y = 0.6496 * safezoneH + safezoneY;
      w = 0.139209 * safezoneW;
      h = 0.0242 * safezoneH;
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      colorBackground[] = {0,0,0,0.3};
      colorSelection[] = {1,0.565,0,1};
    };
    class RscButtonMenu_2400: Life_RscButtonMenu
    {
      idc = 2400;
      text = "Sell Amount"; //--- ToDo: Localize;
      x = 0.429876 * safezoneW + safezoneX;
      y = 0.6738 * safezoneH + safezoneY;
      w = 0.139209 * safezoneW;
      h = 0.0242 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
			onButtonClick = "['amount'] spawn Lega_fnc_sellItem";
    };
  };
};

class Lega_GangControlledDealers_Settings
{
	idd = 19930;
	name = "Lega_GangControlledDealers_Settings";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_GangControlledDealers_Settings', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_GangControlledDealers_Settings', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_GangControlledDealers_Settings', displayNull]";
  class controlsBackground
  {
    class RscText_1000: Life_RscText
    {
      idc = 1000;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.0528 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };
    class RscText_1001: Life_RscText
    {
      idc = 1001;
      text = "Lega's Controlled Dealers"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.2954 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.0176 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
  };
  class controls
  {
    class RscText_1003: Life_RscEdit
    {
      idc = 1003;
      text = "Tax Amount Edit"; //--- ToDo: Localize;
			x = 0.480406 * safezoneW + safezoneX;
			y = 0.3174 * safezoneH + safezoneY;
			w = 0.0897261 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.3};
			colorSelection[] = {1,0.565,0,1};
			font = "PuristaLight";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscText_1002: Life_RscText
    {
      idc = 1002;
      text = "Tax Amount"; //--- ToDo: Localize;
			x = 0.429874 * safezoneW + safezoneX;
		  y = 0.3174 * safezoneH + safezoneY;
		  w = 0.0495075 * safezoneW;
		  h = 0.022 * safezoneH;
			font = "PuristaLight";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscButtonMenu_2400: Life_RscButtonMenu
    {
      idc = 2400;
      text = "Set Amount"; //--- ToDo: Localize;
			x = 0.428844 * safezoneW + safezoneX;
		  y = 0.3416 * safezoneH + safezoneY;
		  w = 0.14231 * safezoneW;
		  h = 0.022 * safezoneH;
			font = "PuristaLight";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			colorBackground[] = {1,0.565,0,1};
    };
  };
};
