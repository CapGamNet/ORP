class Lega_Veh_bolo_RscButtonInvisable : Life_RscShortcutButton
{
    idc = -1;
    type = 16;
    style = "0x02 + 0xC0";
    default = 0;
    shadow = 0;
    x = 0;
    y = 0;
    w = 0.095589;
    h = 0.039216;
    animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
    animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
    colorBackground[] = {0,0,0,0};
    colorBackgroundFocused[] = {0,0,0,0};
    colorBackground2[] = {0,0,0,0};
    color[] = {0,0,0,0};
    colorFocused[] = {0,0,0,0};
    color2[] = {0,0,0,0};
    colorText[] = {0,0,0,0};
    colorDisabled[] = {1,1,1,0.25};
    period = 1.2;
    periodFocus = 1.2;
    periodOver = 1.2;
    size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {1,1,1,1};
    tooltipColorShade[] = {0,0,0,0.65};
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
    class ShortcutPos
    {
        left = "(6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
        top = 0.005;
        w = 0.0225;
        h = 0.03;
    };
    soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
    soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
    soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
    textureNoShortcut = "";
};

class Lega_VBolo_ViewDialog {
	idd = 19930;
	name = "Lega_VBolo_ViewDialog";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_VBolo_ViewDialog', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_VBolo_ViewDialog', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_VBolo_ViewDialog', displayNull]";
  class controlsBackground
  {
    class Background: Life_RscPicture
		{
			idc = 1200;
			text = "textures\bolo_system1.paa";
			x = 0.21125 * safezoneW + safezoneX;
			y = -0.039 * safezoneH + safezoneY;
			w = 0.608437 * safezoneW;
			h = 1.078 * safezoneH;
		};
  };
  class controls
  {
    class Lega_VBolo_Listbox: Life_RscListNBox
    {
      idc = 1990;
      x = 0.231875 * safezoneW + safezoneX;
			y = 0.387 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.4048 * safezoneH;
			columns[] = {0,0.06 * safezoneW,0.135 * safezoneW,0.215 * safezoneW,0.288 * safezoneW};
			drawSideArrows = 0;
			idcLeft = -1;
			idcRight = -1;
			rowHeight = 0.025 * safezoneW;
			colorBackground[] = {0,0,0,0.5};
      colorText[] = { 0, 0, 0, 1 };
			font = "PuristaLight";
			onLBDblClick = "[] call Lega_fnc_showBoloData";
    };
    class Lega_VBolo_SearchButton: Lega_Veh_bolo_RscButtonInvisable
    {
      idc = 1991;
      text = "Search"; //--- ToDo: Localize;
      x = 0.779468 * safezoneW + safezoneX;
			y = 0.3482 * safezoneH + safezoneY;
			w = 0.0216567 * safezoneW;
			h = 0.0308 * safezoneH;
      onButtonClick = "[] call Lega_fnc_SearchBoloClient";
    };
    class Lega_VBolo_Searchbox: Life_RscEdit
    {
      idc = 1992;
      text = "Search"; //--- ToDo: Localize;
      x = 0.675312 * safezoneW + safezoneX;
			y = 0.3504 * safezoneH + safezoneY;
			w = 0.104155 * safezoneW;
			h = 0.0308 * safezoneH;
      colorBackground[] = {0, 0, 0, 0.4};
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      colorSelection[] = {1,0.565,0,1};
    };
    class Lega_VBolo_ColorSort: Lega_Veh_bolo_RscButtonInvisable
    {
      idc = 1993;
      x = 0.228781 * safezoneW + safezoneX;
			y = 0.3504 * safezoneH + safezoneY;
			w = 0.0443438 * safezoneW;
			h = 0.0286 * safezoneH;
      tooltip = "Click here to sort the reports by colors";
      onButtonClick = "['color'] call Lega_fnc_boloSortClient";
    };
    class Lega_VBolo_MakeSort: Lega_Veh_bolo_RscButtonInvisable
    {
      idc = 1994;
      x = 0.309219 * safezoneW + safezoneX;
			y = 0.3504 * safezoneH + safezoneY;
			w = 0.0443438 * safezoneW;
			h = 0.0286 * safezoneH;
      tooltip = "Click here to sort the reports by makes";
      onButtonClick = "['make'] call Lega_fnc_boloSortClient";
    };
    class Lega_VBolo_ModelSort: Lega_Veh_bolo_RscButtonInvisable
    {
      idc = 1995;
      text = "Model"; //--- ToDo: Localize;
      x = 0.394812 * safezoneW + safezoneX;
			y = 0.3504 * safezoneH + safezoneY;
			w = 0.0443438 * safezoneW;
			h = 0.0286 * safezoneH;
      tooltip = "Click here to sort the reports by models";
      onButtonClick = "['model'] call Lega_fnc_boloSortClient";
    };
    class Lega_VBolo_PlateSort: Lega_Veh_bolo_RscButtonInvisable
    {
      idc = 1996;
      x = 0.485562 * safezoneW + safezoneX;
			y = 0.3504 * safezoneH + safezoneY;
			w = 0.0443438 * safezoneW;
			h = 0.0286 * safezoneH;
      tooltip = "Click here to sort the reports by plate numbers";
      onButtonClick = "['plate'] call Lega_fnc_boloSortClient";
    };
    class Lega_VBolo_InsertDateSort: Lega_Veh_bolo_RscButtonInvisable
    {
      idc = 1996;
      x = 0.578375 * safezoneW + safezoneX;
			y = 0.3504 * safezoneH + safezoneY;
			w = 0.078375 * safezoneW;
			h = 0.0286 * safezoneH;
      tooltip = "Click here to sort the reports by dates";
      onButtonClick = "['date'] call Lega_fnc_boloSortClient";
    };
    class Close: Lega_Veh_bolo_RscButtonInvisable
		{
			idc = 2407;
			x = 0.229813 * safezoneW + safezoneX;
			y = 0.2074 * safezoneH + safezoneY;
			w = 0.0309377 * safezoneW;
			h = 0.0176 * safezoneH;
      onButtonClick = "closeDialog 0;";
		};
  };
};




class Lega_Create_Edit_Bolo {
	idd = 19930;
	name = "Lega_Create_Edit_Bolo";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_Create_Edit_Bolo', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_Create_Edit_Bolo', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_Create_Edit_Bolo', displayNull]";
	class controlsBackground
	{
		class Backgroundd: Life_RscPicture
		{
			idc = 1300;
			text = "textures\bolo_system2.paa";
			x = 0.21125 * safezoneW + safezoneX;
			y = -0.039 * safezoneH + safezoneY;
			w = 0.608437 * safezoneW;
			h = 1.078 * safezoneH;
		};
	};
	class controls 
  {
    class RscText_1003: Life_RscEdit
		{
		  idc = 1003;
		  text = "Plate"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.4318 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.0308 * safezoneH;
			colorBackground[] = {0, 0, 0, 0.4};
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
		};
		class RscText_1005: Life_RscEdit
		{
		  idc = 1005;
		  text = "Color"; //--- ToDo: Localize;
			x = 0.396738 * safezoneW + safezoneX;
			y = 0.495022 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.0308 * safezoneH;
			colorBackground[] = {0, 0, 0, 0.4};
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
		};
		class RscText_1006: Life_RscEdit
		{
		  idc = 1006;
		  text = "Make"; //--- ToDo: Localize;
			x = 0.396845 * safezoneW + safezoneX;
			y = 0.559607 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.0308 * safezoneH;
			colorBackground[] = {0, 0, 0, 0.4};
      font = "PuristaLight";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
		};
		class RscText_1009: Life_RscEdit
		{
		  idc = 1009;
		  font = "PuristaLight";
		  text = "Model"; //--- ToDo: Localize;
			x = 0.396239 * safezoneW + safezoneX;
			y = 0.623141 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.0308 * safezoneH;
			colorBackground[] = {0, 0, 0, 0.4};
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
		};
		class RscStructuredText_1100: Life_RscEdit
		{
			idc = 1100;
			x = 0.5165 * safezoneW + safezoneX;
			y = 0.497452 * safezoneH + safezoneY;
			w = 0.15055 * safezoneW;
			h = 0.1562 * safezoneH;
			colorBackground[] = {0, 0, 0, 0.4};
      font = "PuristaLight";
			text = "Report Information";
      size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
      sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			style = 16;
		};
		class RscButtonMenu_2400: Lega_Veh_bolo_RscButtonInvisable
		{
			idc = 2400;
			x = 0.555688 * safezoneW + safezoneX;
			y = 0.6672 * safezoneH + safezoneY;
			w = 0.0721873 * safezoneW;
			h = 0.0374 * safezoneH;
			onButtonClick = "_this call Lega_fnc_PlaceBolo";
		};
	};
};
class Lega_VBolo_ViewInfo {
	idd = 19930;
	name = "Lega_VBolo_ViewInfo";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_VBolo_ViewInfo', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_VBolo_ViewInfo', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_VBolo_ViewInfo', displayNull]";
  class controlsBackground
  {
    class Backgrounddd: Life_RscPicture
		{
			idc = 1400;
			text = "textures\bolo_system3.paa";//["0.21125 * safezoneW + safezoneX","-0.039 * safezoneH + safezoneY","0.608437 * safezoneW","1.078 * safezoneH"]
			x = 0.21125 * safezoneW + safezoneX;
			y = -0.039 * safezoneH + safezoneY;
			w = 0.608437 * safezoneW;
			h = 1.078 * safezoneH;
		};
  };
  class controls
  {
    class RscStructuredText_1100: Life_RscStructuredText
    {
      idc = 1100;
      text = ""; //--- ToDo: Localize;
      x = 0.339125 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.155705 * safezoneW;
			h = 0.3564 * safezoneH;

    };
    class RscStructuredText_1101 : Life_RscControlsGroup {
      idc = -1;
      x = 0.494844 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.196945 * safezoneW;
			h = 0.3564 * safezoneH;
      class Controls {
        class Life_Licenses: Life_RscStructuredText {
            idc = 1101;
            text = "";
            w = 0.118594 * safezoneW;
            h = 0.2068 * safezoneH;
        };
      };
    };
    class delete: Life_RscButtonMenu
    {
      idc = -1;
      text = "Delte Bolo";
      x = 0.610342 * safezoneW + safezoneX;
			y = 0.7156 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[] call Lega_fnc_deleteBolo";
    };
    class ExitBtn: Lega_Veh_bolo_RscButtonInvisable
    {
      idc = -1;
      x = 0.229813 * safezoneW + safezoneX;
			y = 0.2074 * safezoneH + safezoneY;
			w = 0.0309377 * safezoneW;
			h = 0.0176 * safezoneH;
			onButtonClick = "closeDialog 0";
    };
  };
};
