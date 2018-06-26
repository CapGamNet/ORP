
class Lega_Market_Listing_Background: Life_RscText
{
  idc = 1008;
  x = 0.174126 * safezoneW + safezoneX;
  y = 0.269 * safezoneH + safezoneY;
  w = 0.12993 * safezoneW;
  h = 0.484 * safezoneH;
  colorBackground[] = {0,0,0,0.7};
};
class Lega_Market_Listing_Title: Life_RscText
{
  idc = 1009;
  text = "Create Listing"; //--- ToDo: Localize;
  x = 0.174156 * safezoneW + safezoneX;
  y = 0.2448 * safezoneH + safezoneY;
  w = 0.12993 * safezoneW;
  h = 0.0242 * safezoneH;
  colorBackground[] = {1,0.565,0,1};
  font = "PuristaLight";
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};

class Lega_Market_Listing_CreateListing_Button: Life_RscButtonMenu
{
  idc = 2401;
  text = "Create Listing"; //--- ToDo: Localize;
  x = 0.176187 * safezoneW + safezoneX;
  y = 0.7266 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.0242 * safezoneH;
  colorBackground[] = {1,0.565,0,1};
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  onButtonClick = "[] spawn Lega_fnc_addListing";
};

class Lega_Market_Listing_Title_Edit: Life_RscEdit
{
  idc = 1401;
  text = "Listing Title"; //--- ToDo: Localize;
  x = 0.176187 * safezoneW + safezoneX;
  y = 0.2734 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.022 * safezoneH;
  font = "PuristaLight";
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  colorSelection[] = {1,0.565,0,1};
  colorBackground[] = {0, 0, 0, 0.4};
};

class Lega_Market_Listing_Desc_Edit: Life_RscEdit
{
  idc = 1402;
  text = "Listing Description"; //--- ToDo: Localize;
  x = 0.176187 * safezoneW + safezoneX;
  y = 0.2976 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.0836 * safezoneH;
  font = "PuristaLight";
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  colorSelection[] = {1,0.565,0,1};
  colorBackground[] = {0, 0, 0, 0.4};
  style = 16;
  lineSpacing = 1;
  maxChars = 300;
};

class Lega_Market_ListingCategory_Listbox: Life_RscCombo
{
  idc = 1502;
  x = 0.176187 * safezoneW + safezoneX;
  y = 0.3834 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.022 * safezoneH;
  sizeEx = 0.25 * (((safezoneW / safezoneH) min 1) * 0.15);
  font = "PuristaLight";
  onLBSelChanged = "_this call Lega_fnc_refreshPlayerItems";
  colorBackground[] = {0,0,0,0.8};
  colorPicture[] = {1,1,1,1};
  colorPictureSelected[] = {1,1,1,1};
  colorPictureDisabled[] = {1,1,1,1};
  colorPictudeDisabled[] = {1,1,1,0.25};
};
class Lega_Market_PlayerItems_title: Life_RscText
{
  idc = 959559;
  text = "Player Items"; //--- ToDo: Localize;
  x = 0.174125 * safezoneW + safezoneX;
  y = 0.3944 * safezoneH + safezoneY;
  w = 0.0567187 * safezoneW;
  h = 0.044 * safezoneH;
  font = "PuristaLight";
  sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
};
class Lega_Market_Listing_Listbox_Items: Life_RscListbox
{
  idc = 1500;
  x = 0.176188 * safezoneW + safezoneX;
  y = 0.4252 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.1144 * safezoneH;
  sizeEx = 0.25 * (((safezoneW / safezoneH) min 1) * 0.15);
  font = "PuristaLight";
  onLBDblClick = "_this call Lega_fnc_addItemtoCart";
  onLBSelChanged = "[] spawn Lega_fnc_objectView";
};
class Lega_Market_Listing_Price_Edit: Life_RscEdit
{
  idc = 1403;
  font = "PuristaLight";
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  colorSelection[] = {1,0.565,0,1};
  text = "Listing Price"; //--- ToDo: Localize;
  x = 0.176188 * safezoneW + safezoneX;
  y = 0.676 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.022 * safezoneH;
  colorBackground[] = {0,0,0,0.5};
  onKeyUp = "_this call Lega_fnc_updatePrice";
};
class Lega_Market_Listing_Price_Tax_Info: Life_RscText
{
  idc = 1100;
  text = "Tax Info"; //--- ToDo: Localize;
  x = 0.176188 * safezoneW + safezoneX;
  y = 0.7002 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.022 * safezoneH;
  font = "PuristaLight";
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
};
class Lega_Market_ListingBasket_title: Life_RscText
{
  idc = 465465;
  text = "Cart Items"; //--- ToDo: Localize;
  x = 0.174125 * safezoneW + safezoneX;
  y = 0.5286 * safezoneH + safezoneY;
  w = 0.0567187 * safezoneW;
  h = 0.044 * safezoneH;
  font = "PuristaLight";
  sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
};
class Lega_Market_ListingBasket_Listbox: Life_RscListBox
{
  idc = 1503;
  x = 0.176187 * safezoneW + safezoneX;
  y = 0.5594 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.1144 * safezoneH;
  sizeEx = 0.25 * (((safezoneW / safezoneH) min 1) * 0.15);
  font = "PuristaLight";
  onLBDblClick = "_this call Lega_fnc_removeItemFromCart";
};

class ListingExit: Life_RscPicture
{
  idc = 1200;
  text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
  x = 0.292714 * safezoneW + safezoneX;
  y = 0.2492 * safezoneH + safezoneY;
  w = 0.0082501 * safezoneW;
  h = 0.0154 * safezoneH;
};
class ListingExitBtn: Life_RscButtonInvisable
{
  idc = 65432;
  text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
  x = 0.292714 * safezoneW + safezoneX;
  y = 0.2492 * safezoneH + safezoneY;
  w = 0.0082501 * safezoneW;
  h = 0.0154 * safezoneH;
  onButtonClick = "[] call Lega_CloseCreateListing";
};
