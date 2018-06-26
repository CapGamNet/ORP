class Lega_Market_EditingListing_Background: Life_RscText
{
  idc = 3210;
  x = 0.174125 * safezoneW + safezoneX;
  y = 0.269 * safezoneH + safezoneY;
  w = 0.12993 * safezoneW;
  h = 0.484 * safezoneH;
  colorBackground[] = {0,0,0,0.7};
};
class Lega_Market_EditingListing_Title: Life_RscText
{
  idc = 3211;
  font = "PuristaLight";
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
  text = "Edit Listing"; //--- ToDo: Localize;
  x = 0.174125 * safezoneW + safezoneX;
  y = 0.2448 * safezoneH + safezoneY;
  w = 0.12993 * safezoneW;
  h = 0.0242 * safezoneH;
  colorBackground[] = {1,0.565,0,1};
};
class Lega_Market_Listing_CreateListing_Button: Life_RscButtonMenu
{
  idc = 3212;
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  onButtonClick = "";
  text = "Create Listing"; //--- ToDo: Localize;
  x = 0.176187 * safezoneW + safezoneX;
  y = 0.7266 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.0242 * safezoneH;
  colorText[] = {1,1,1,1};
  colorBackground[] = {1,0.565,0,1};
  sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
};
class Lega_Market_EditingListing_ListingName: Life_RscEdit
{
  idc = 3213;
  font = "PuristaLight";
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  colorSelection[] = {1,0.565,0,1};
  text = "Listing Title"; //--- ToDo: Localize;
  x = 0.176187 * safezoneW + safezoneX;
  y = 0.2734 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {0,0,0,0.4};
  sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
};
class Lega_Market_EditingListing_Description: Life_RscEdit
{
  idc = 3214;
  font = "PuristaLight";
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  colorSelection[] = {1,0.565,0,1};
  style = 16;
  lineSpacing = 1;
  maxChars = 300;
  text = "Listing Description"; //--- ToDo: Localize;
  x = 0.176187 * safezoneW + safezoneX;
  y = 0.2976 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.3762 * safezoneH;
  colorBackground[] = {0,0,0,0.4};
  sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
};
class Lega_Market_EditingListing_Price: Life_RscEdit
{
  idc = 3215;
  font = "PuristaLight";
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  colorSelection[] = {1,0.565,0,1};
  onKeyUp = "";
  text = "Listing Price"; //--- ToDo: Localize;
  x = 0.176187 * safezoneW + safezoneX;
  y = 0.6738 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.0242 * safezoneH;
  colorBackground[] = {0,0,0,0.5};
  sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
};
class Lega_Market_EditingListing_ListingExit: Life_RscPicture
{
  idc = 3216;
  text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
  x = 0.292714 * safezoneW + safezoneX;
  y = 0.2492 * safezoneH + safezoneY;
  w = 0.0082501 * safezoneW;
  h = 0.0154 * safezoneH;
};
class Lega_Market_EditingListing_ExitBtn: Life_RscButtonInvisable
{
  idc = 3217;
  text = "";
  x = 0.292714 * safezoneW + safezoneX;
  y = 0.2492 * safezoneH + safezoneY;
  w = 0.0082501 * safezoneW;
  h = 0.0154 * safezoneH;
};
