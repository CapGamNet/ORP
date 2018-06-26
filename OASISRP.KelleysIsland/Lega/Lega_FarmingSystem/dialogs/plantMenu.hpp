class Lega_Plantables_Dialog {
  idd = 993;
  onLoad = "uiNamespace setVariable ['Lega_Plantables_Dialog', _this select 0]";
  onUnload = "uiNamespace setVariable ['Lega_Plantables_Dialog', displayNull]";
  duration = 99999999;
  class controlsBackground
  {
    class Lega_Plantables_Background: Life_RscText
    {
      idc = -1;
      x = 0.304062 * safezoneW + safezoneX;
      y = 0.269 * safezoneH + safezoneY;
      w = 0.12375 * safezoneW;
      h = 0.396 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };
    class Lega_Plantables_Title: Life_RscText
    {
      idc = -1;
      text = "Plantables"; //--- ToDo: Localize;
      x = 0.304062 * safezoneW + safezoneX;
      y = 0.247 * safezoneH + safezoneY;
      w = 0.123744 * safezoneW;
      h = 0.022 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
    };
  };
  class controls
  {
    class Lega_Plantables_Listbox: Life_RscListbox
    {
      idc = 954;
      x = 0.306125 * safezoneW + safezoneX;
      y = 0.2734 * safezoneH + safezoneY;
      w = 0.119625 * safezoneW;
      h = 0.3608 * safezoneH;
      sizeEx = 0.25 * (((safezoneW / safezoneH) min 1) * 0.15);
      font = "PuristaLight";
    };
    class Lega_Plantables_Btn_Plant: Life_RscButtonMenu
    {
      idc = 955;
      text = "Plant Selected"; //--- ToDo: Localize;
      x = 0.306125 * safezoneW + safezoneX;
      y = 0.6386 * safezoneH + safezoneY;
      w = 0.11962 * safezoneW;
      h = 0.0242 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
      class Attributes
      {
          font = "PuristaLight";
          color = "#E5E5E5";
          align = "center";
          valign = "middle";
          shadow = "false";
      };
    };
  };
};
