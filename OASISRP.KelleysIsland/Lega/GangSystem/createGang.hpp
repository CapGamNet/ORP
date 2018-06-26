class Lega_GangManagement_GangCreation
{
	idd = 99563;
	name = "Lega_GangManagement_GangCreation";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_GangManagement_GangCreation', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_GangManagement_GangCreation', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_GangManagement_GangCreation', displayNull]";
	class controlsBackground
	{
		class Lega_GangManagement_GangCreation_Background: Life_RscText
		{
			idc = -1;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.3812 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.132 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
    class Lega_GangManagement_GangCreation_Title: Life_RscText
    {
      idc = -1;
      text = "Gang Creation"; //--- ToDo: Localize;
      x = 0.4175 * safezoneW + safezoneX;
      y = 0.3592 * safezoneH + safezoneY;
      w = 0.165 * safezoneW;
      h = 0.022 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
      sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      font = "puristaLight";
    };
	};
	class controls
	{
		class Lega_GangManagement_GangCreation_GangName_Edit: Life_RscEdit
		{
			idc = 1000;
			text = "Enter Your Gang Name";
			x = 0.418532 * safezoneW + safezoneX;
			y = 0.4648 * safezoneH + safezoneY;
			w = 0.162922 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
			colorSelection[] = {1,0.565,0,1};
			font = "puristaLight";
		};
		class Lega_GangManagement_GangCreation_BtnCreateGang: Life_RscButtonMenu
		{
			idc = 1001;
			text = "Confirm"; //--- ToDo: Localize;
			x = 0.418532 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.162922 * safezoneW;
			h = 0.022 * safezoneH;
      onButtonClick = "_this call Lega_fnc_createGang";
			colorBackground[] = {1,0.565,0,1};
      sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      font = "puristaLight";
      class Attributes
      {
          font = "PuristaLight";
          color = "#E5E5E5";
          align = "center";
          shadow = "false";
      };
		};
		class Lega_GangManagement_GangCreation_GangName_InfoText: Life_RscStructuredText
		{
			idc = 1002;
			x = 0.418532 * safezoneW + safezoneX;
			y = 0.3856 * safezoneH + safezoneY;
			w = 0.162922 * safezoneW;
			h = 0.077 * safezoneH;
		};
	};
};
