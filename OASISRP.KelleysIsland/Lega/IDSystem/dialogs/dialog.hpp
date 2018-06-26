class LegA_ID_Dialog
{
  idd = 19930;
  name = "LegA_ID_Dialog";
  movingEnable = 0;
  enableSimulation = 1;
  onLoad = "uiNamespace setVariable ['LegA_ID_Dialog', _this select 0];";
  onUnload = "uiNamespace setVariable ['LegA_ID_Dialog', displayNull]";
  onDestroy = "uiNamespace setVariable ['LegA_ID_Dialog', displayNull]";

  class controlsBackground {
    class RscPicture_1200: Life_RscPicture
    {
      idc = 1200;
      text = "#(argb,8,8,3)color(1,1,1,1)";
      x = 0.482469 * safezoneW + safezoneX;
      y = 0.3394 * safezoneH + safezoneY;
      w = 0.128906 * safezoneW;
      h = 0.1342 * safezoneH;
    };
  };
  class controls
  {
    class RscText_1000: Life_RscText
    {
      idc = 1000;
      x = 0.417499 * safezoneW + safezoneX;
      y = 0.335 * safezoneH + safezoneY;
      w = 0.195937 * safezoneW;
      h = 0.198 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };
    class RscPicture_1200aasd: Life_RscPicture
    {
      idc = 1199;
      text = "Lega\IDSystem\images\IDCard.paa";
      x = 0.416469 * safezoneW + safezoneX;
      y = 0.2096 * safezoneH + safezoneY;
      w = 0.198012 * safezoneW;
      h = 0.4224 * safezoneH;
    };
  };
};


class Lega_IDCreation {
  idd = 19930;
	name = "Lega_IDCreation";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_IDCreation', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_IDCreation', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_IDCreation', displayNull]";
  class controlsBackground
  {
    class RscText_1000: Life_RscText
    {
      idc = -1;
      x = 0.4175 * safezoneW + safezoneX;
      y = 0.291 * safezoneH + safezoneY;
      w = 0.165 * safezoneW;
      h = 0.1892 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };
    class RscText_1001: Life_RscText
    {
      idc = -1;
      text = "ID Creation"; //--- ToDo: Localize;
      x = 0.4175 * safezoneW + safezoneX;
      y = 0.269 * safezoneH + safezoneY;
      w = 0.165 * safezoneW;
      h = 0.022 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
      font = "PuristaLight";
    };
  };
  class controls
  {
    class RscStructuredText_1100: Life_RscStructuredText
    {
      idc = 1100;
      text = "Welcome Message"; //--- ToDo: Localize;
      x = 0.419564 * safezoneW + safezoneX;
      y = 0.2954 * safezoneH + safezoneY;
      w = 0.160871 * safezoneW;
      h = 0.0506 * safezoneH;
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscText_1002: Life_RscText
    {
      idc = 1002;
      text = "First Name"; //--- ToDo: Localize;
      x = 0.41545 * safezoneW + safezoneX;
      y = 0.3526 * safezoneH + safezoneY;
      w = 0.111372 * safezoneW;
      h = 0.022 * safezoneH;
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscText_1003: Life_RscText
    {
      idc = 1003;
      text = "Last Name"; //--- ToDo: Localize;
      x = 0.416481 * safezoneW + safezoneX;
      y = 0.3768 * safezoneH + safezoneY;
      w = 0.111372 * safezoneW;
      h = 0.022 * safezoneH;
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscText_1004: Life_RscText
    {
      idc = 1004;
      text = "Birthplace"; //--- ToDo: Localize;
      x = 0.416481 * safezoneW + safezoneX;
      y = 0.401 * safezoneH + safezoneY;
      w = 0.111372 * safezoneW;
      h = 0.022 * safezoneH;
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscText_1005: Life_RscText
    {
      idc = 1005;
      text = "Age"; //--- ToDo: Localize;
      x = 0.4175 * safezoneW + safezoneX;
      y = 0.4252 * safezoneH + safezoneY;
      w = 0.111372 * safezoneW;
      h = 0.022 * safezoneH;
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscEdit_1400: Life_RscEdit
    {
      idc = 1400;
      text = "age"; //--- ToDo: Localize;
      x = 0.46905 * safezoneW + safezoneX;
      y = 0.4252 * safezoneH + safezoneY;
      w = 0.111372 * safezoneW;
      h = 0.022 * safezoneH;
      font = "PuristaLight";
      colorSelection[] = {1,0.565,0,1};
      colorBackground[] = {0,0,0,0.3};
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscEdit_1401: Life_RscEdit
    {
      idc = 1401;
      text = "birthplace"; //--- ToDo: Localize;
      x = 0.469062 * safezoneW + safezoneX;
      y = 0.401 * safezoneH + safezoneY;
      w = 0.111372 * safezoneW;
      h = 0.022 * safezoneH;
      font = "PuristaLight";
      colorSelection[] = {1,0.565,0,1};
      colorBackground[] = {0,0,0,0.3};
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscEdit_1402: Life_RscEdit
    {
      idc = 1402;
      text = "lastname"; //--- ToDo: Localize;
      x = 0.469062 * safezoneW + safezoneX;
      y = 0.3768 * safezoneH + safezoneY;
      w = 0.111372 * safezoneW;
      h = 0.022 * safezoneH;
      font = "PuristaLight";
      colorSelection[] = {1,0.565,0,1};
      colorBackground[] = {0,0,0,0.3};
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscEdit_1403: Life_RscEdit
    {
      idc = 1403;
      text = "firstname"; //--- ToDo: Localize;
      x = 0.469062 * safezoneW + safezoneX;
      y = 0.3526 * safezoneH + safezoneY;
      w = 0.111372 * safezoneW;
      h = 0.022 * safezoneH;
      font = "PuristaLight";
      colorSelection[] = {1,0.565,0,1};
      colorBackground[] = {0,0,0,0.3};
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    };
    class RscButtonMenu_2400: Life_RscButtonMenu
    {
      idc = 2400;
      text = "Register"; //--- ToDo: Localize;
      x = 0.419563 * safezoneW + safezoneX;
      y = 0.4516 * safezoneH + safezoneY;
      w = 0.16086 * safezoneW;
      h = 0.0242 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
      font = "PuristaLight";
    };
  };
};
