
class LegA_Market_BtnExtra: Life_RscButtonMenu
{
  text = ""; //--- ToDo: Localize;
  x = 0.176187 * safezoneW + safezoneX;
  y = 0.7266 * safezoneH + safezoneY;
  w = 0.125806 * safezoneW;
  h = 0.0242 * safezoneH;
  colorBackground[] = {1,0.565,0,1};
  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
  sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
};

#include "editListing.hpp"

class Lega_Market {
	idd = 19930;
	name = "Lega_Market";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_Market', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_Market', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_Market', displayNull]";
	class controlsBackground {
    class Lega_Market_Title: Life_RscText
    {
      idc = 19931;
			text = "Market";
      x = 0.304062 * safezoneW + safezoneX;
      y = 0.2448 * safezoneH + safezoneY;
      w = 0.39187 * safezoneW;
      h = 0.0242 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
    };
    class Lega_Market_Background: Life_RscText
    {
      idc = -1;
      x = 0.304062 * safezoneW + safezoneX;
      y = 0.269 * safezoneH + safezoneY;
      w = 0.391875 * safezoneW;
      h = 0.484 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };
		class Lega_Market_Sort_Name_Button: Life_RscButtonMenu
		{
		  size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 37) * 1);
		  idc = -1;
		  text = "Name"; //--- ToDo: Localize;
      onButtonClick = "['name'] call Lega_SortSorting";
		  x = 0.307212 * safezoneW + safezoneX;
		  y = 0.2998 * safezoneH + safezoneY;
		  w = 0.230003 * safezoneW;
		  h = 0.0132 * safezoneH;
		  colorText[] = {1,1,1,1};
		  colorBackground[] = {0,0,0,0.8};
		  sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 37) * 1);
		  class TextPos
		  {
		      left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		      top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		      right = 0.005;
		      bottom = 0.0;
		  };
		  class Attributes
		  {
		      font = "PuristaLight";
		      color = "#E5E5E5";
		      align = "left";
		      shadow = "false";
		  };
		};

		class Lega_Market_Sort_Category_Button: Life_RscButtonMenu
		{
		  size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 37) * 1);
		  idc = -1;
		  text = "Category"; //--- ToDo: Localize;
      onButtonClick = "['type'] call Lega_SortSorting";
		  x = 0.537125 * safezoneW + safezoneX;
		  y = 0.2998 * safezoneH + safezoneY;
		  w = 0.0970031 * safezoneW;
		  h = 0.0132 * safezoneH;
		  colorText[] = {1,1,1,1};
		  colorBackground[] = {0,0,0,0.8};
		  sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 37) * 1);
		  class TextPos
		  {
		      left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		      top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		      right = 0.005;
		      bottom = 0.0;
		  };
		  class Attributes
		  {
		      font = "PuristaLight";
		      color = "#E5E5E5";
		      align = "left";
		      shadow = "false";
		  };
		};
    class Lega_Market_Sort_Price_Button: Life_RscButtonMenu
    {
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 37) * 1);
			idc = -1;
			text = "Price"; //--- ToDo: Localize;
      onButtonClick = "['price'] call Lega_SortSorting";
			x = 0.634062 * safezoneW + safezoneX;
			y = 0.2998 * safezoneH + safezoneY;
			w = 0.0598781 * safezoneW;
			h = 0.0132 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 37) * 1);
      class TextPos
      {
          left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
          top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
          right = 0.005;
          bottom = 0.0;
      };
      class Attributes
      {
          font = "PuristaLight";
          color = "#E5E5E5";
          align = "left";
          shadow = "false";
      };
    };
	};
	class controls
	{

		class RscText_1027: Life_RscButtonMenu
		{
		  idc = 959594;
		  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
		  text = "Create Listing"; //--- ToDo: Localize;
		  x = 0.435 * safezoneW + safezoneX;
		  y = 0.2756 * safezoneH + safezoneY;
		  w = 0.0721871 * safezoneW;
		  h = 0.022 * safezoneH;
		  colorText[] = {1,1,1,1};
		  colorBackground[] = {1,0.565,0,1};
		  sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
			onButtonClick = "[] call Lega_ShowCreateListing";
		};
		class RscText_1028: Life_RscButtonMenu
		{
		  idc = 959595;
		  size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
		  onButtonClick = "[] call Lega_fnc_listPlayerListings";

		  text = "My Listings"; //--- ToDo: Localize;
		  x = 0.50825 * safezoneW + safezoneX;
		  y = 0.2756 * safezoneH + safezoneY;
		  w = 0.0721871 * safezoneW;
		  h = 0.022 * safezoneH;
		  colorText[] = {1,1,1,1};
		  colorBackground[] = {1,0.565,0,1};
		  sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
		};
		class Lega_Market_CategorySearch: Life_RscCombo
		{
			idc = 9595;
			font = "PuristaLight";
			onLBSelChanged = "[] call Lega_fnc_updateCategory";//TBD
			colorPicture[] = {1,1,1,1};
			colorPictureSelected[] = {1,1,1,1};
			colorPictureDisabled[] = {1,1,1,1};
			colorPictudeDisabled[] = {1,1,1,0.25};
			x = 0.307156 * safezoneW + safezoneX;
			y = 0.2756 * safezoneH + safezoneY;
			w = 0.125806 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
			sizeEx = 0.25 * (((safezoneW / safezoneH) min 1) * 0.15);
		};
    class Lega_Market_Search_Bar: Life_RscEdit
    {
      idc = 19937;
      text = "Search";
      x = 0.610351 * safezoneW + safezoneX;
			colorBackground[] = {0, 0, 0, 0.4};
      y = 0.2734 * safezoneH + safezoneY;
      w = 0.0690937 * safezoneW;
      h = 0.022 * safezoneH;
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      colorSelection[] = {1,0.565,0,1};
    };
    class Lega_Market_Search_Button_Icon: Life_RscPictureKeepAspect
    {
      idc = 199315;
      text = "Lega\Market\images\search.paa";
      x = 0.678405 * safezoneW + safezoneX;
      y = 0.2734 * safezoneH + safezoneY;
      w = 0.0144377 * safezoneW;
      h = 0.022 * safezoneH;
    };
    class Lega_Market_Search_Button: Life_RscButtonMenu
    {
      idc = 19938;
      x = 0.678405 * safezoneW + safezoneX;
      y = 0.2734 * safezoneH + safezoneY;
      w = 0.0144377 * safezoneW;
      h = 0.022 * safezoneH;
      colorBackground[] = {0,0,0,0};
			onButtonClick = "[] call Lega_fnc_searchBox";
    };
		class Lega_Market_Group_Control: Life_RscListNBox
		{
			colorDisabled[] = {0,0,0,0};
			idc = 19932;
      x = 0.307156 * safezoneW + safezoneX;
      y = 0.3152 * safezoneH + safezoneY;
      w = 0.385688 * safezoneW;
      h = 0.4356 * safezoneH;
			columns[] = {0,0.25 * safezoneW,0.35 * safezoneW};
			drawSideArrows = 0;
			idcLeft = -1;
			idcRight = -1;
			rowHeight = 0.025 * safezoneW;
			colorBackground[] = {0,0,0,0.5};
			font = "PuristaLight";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			onLBSelChanged = "[] call Lega_fnc_updateInfo";
		};
		#include "ListingInfoPanel.hpp"
		#include "MakeListingPanel.hpp"
	};
};
