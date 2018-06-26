//Listing Information Panel
/*
class Lega_Market_ListingInfo_Description: Life_RscTextMulti
{
  idc = 9512;
  x = 0.699032 * safezoneW + safezoneX;
  y = 0.2734 * safezoneH + safezoneY;
  w = 0.124775 * safezoneW;
  h = 0.4224 * safezoneH;
};
*/
class Lega_Market_ListingInfo_Background: Life_RscText
{
  idc = 9494;
  x = 0.696968 * safezoneW + safezoneX;
  y = 0.269 * safezoneH + safezoneY;
  w = 0.12993 * safezoneW;
  h = 0.484 * safezoneH;
  colorBackground[] = {0,0,0,0.7};
};


class Lega_Market_ListingInfo_Description: Life_RscControlsGroup
{
  idc = 3215;
  colorDisabled[] = {0,0,0,0};
  x = 0.699032 * safezoneW + safezoneX;
  y = 0.2734 * safezoneH + safezoneY;
  w = 0.124775 * safezoneW;
  h = 0.4224 * safezoneH;
  colorBackground[] = {0,0,0,0};
  class Controls {
    class Lega_Market_ListingInfo_Description_text : Life_RscStructuredText {
      idc = 9512;
      sizeEx = 0.020;
      text = "";
      w = 0.124775 * safezoneW;
      h = 0.4224 * safezoneH;
      colorDisabled[] = {0,0,0,0};
      colorBackground[] = {0,0,0,0};
    };
  };
};

class Lega_Market_ListingInfo_DeliverButton: Life_RscButtonMenu
{
  idc = 2402;
  text = ""; //--- ToDo: Localize;
  x = 0.699032 * safezoneW + safezoneX;
  y = 0.7266 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.0242 * safezoneH;
  colorBackground[] = {1,0.565,0,1};
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
};
class Lega_Market_ListingInfo_PurchaseButton: Life_RscButtonMenu
{
  idc = 2403;
  text = ""; //--- ToDo: Localize;
  x = 0.699032 * safezoneW + safezoneX;
  y = 0.7002 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.0242 * safezoneH;
  colorBackground[] = {1,0.565,0,1};
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
};

class Lega_Market_ListingInfo_Title: Life_RscText
{
  idc = 1011;
  text = "Listing Info"; //--- ToDo: Localize;
  x = 0.696968 * safezoneW + safezoneX;
  y = 0.2448 * safezoneH + safezoneY;
  w = 0.12993 * safezoneW;
  h = 0.0242 * safezoneH;
  colorBackground[] = {1,0.565,0,1};
  font = "PuristaLight";
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};
class InfoExit: Life_RscPicture
{
  idc = 1201;
  text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
  x = 0.816595 * safezoneW + safezoneX;
  y = 0.2492 * safezoneH + safezoneY;
  w = 0.0082501 * safezoneW;
  h = 0.0154 * safezoneH;
};
class InfoExitBtn: Life_RscButtonInvisable
{
  idc = 94532;
  text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
  x = 0.816595 * safezoneW + safezoneX;
  y = 0.2492 * safezoneH + safezoneY;
  w = 0.0082501 * safezoneW;
  h = 0.0154 * safezoneH;
  onButtonClick = "[] call Lega_CloseListingInfo";
};
