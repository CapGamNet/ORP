class Lega_GangManagement_Main {
	idd = 19930;
	name = "Lega_GangManagement_Main";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_GangManagement_Main', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_GangManagement_Main', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_GangManagement_Main', displayNull]";
	class controlsBackground {
    class Lega_GangManagement_Main_Background: Life_RscText
    {
      idc = -1;
      x = 0.355625 * safezoneW + safezoneX;
      y = 0.401 * safezoneH + safezoneY;
      w = 0.28875 * safezoneW;
      h = 0.286 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };
    class Lega_GangManagement_Main_ExitBtnPicture: Life_RscPicture
    {
      idc = -1;
      text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
      x = 0.634062 * safezoneW + safezoneX;
      y = 0.3834 * safezoneH + safezoneY;
      w = 0.00928135 * safezoneW;
      h = 0.0154 * safezoneH;
    };
  };
  class controls {
    class Lega_GangManagement_Main_BtnManageMembers: Life_RscButtonMenu
    {
      idc = 2400;
      text = "Manage Members"; //--- ToDo: Localize;
      x = 0.550531 * safezoneW + safezoneX;
			y = 0.4032 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
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
      onButtonClick = "_this call Lega_fnc_loadMemberManagement";
    };
    class Lega_GangManagement_Main_Title: Life_RscText
    {
      idc = 999;
      text = "Gang Management"; //--- ToDo: Localize;
      x = 0.355625 * safezoneW + safezoneX;
      y = 0.3812 * safezoneH + safezoneY;
      w = 0.288704 * safezoneW;
      h = 0.0198 * safezoneH;
      colorBackground[] = {1,0.565,0,1};
      sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      font = "puristaLight";
    };
    class Lega_GangManagement_Main_BtnManageRanks: Life_RscButtonMenu
    {
      idc = 2401;
      text = "Manage Ranks"; //--- ToDo: Localize;
      x = 0.550531 * safezoneW + safezoneX;
			y = 0.4318 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
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
      onButtonClick = "_this call Lega_fnc_loadRankMenu";
    };
    class Lega_GangManagement_Main_BtnDisbandGang: Life_RscButtonMenu
    {
      idc = 2402;
      text = "Disband Gang"; //--- ToDo: Localize;
      x = 0.550531 * safezoneW + safezoneX;
			y = 0.4604 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
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
      onButtonClick = "_this call Lega_fnc_disbandGang";
    };
    class Lega_GangManagement_Main_BtnGangPayoutOnline: Life_RscButtonMenu
    {
      idc = 2403;
      text = "Pay Online"; //--- ToDo: Localize;
			x = 0.550531 * safezoneW + safezoneX;
			y = 0.5176 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
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
			onButtonClick = "[""payonline""] call Lega_fnc_handleFundsClient";
    };
		class Lega_GangManagement_Main_BtnGangPayoutAll: Life_RscButtonMenu
		{
			idc = 2404;
			text = "Pay All"; //--- ToDo: Localize;
			x = 0.550531 * safezoneW + safezoneX;
			y = 0.5462 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
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
			onButtonClick = "[""payall""] call Lega_fnc_handleFundsClient";
		};
		class Lega_GangManagement_Main_BtnGangPayoutAmount: Life_RscEdit
		{
			idc = 2450;
			text = "Amount"; //--- ToDo: Localize;
			x = 0.550531 * safezoneW + safezoneX;
			y = 0.5748 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
			font = "puristaLight";
		};
    class Lega_GangManagement_Main_BtnLeave: Life_RscButtonMenu
    {
      idc = 2405;
      text = "Leave Gang"; //--- ToDo: Localize;
			x = 0.550531 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
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
      onButtonClick = "_this call Lega_fnc_leaveGangClient";
    };
    class Lega_GangManagement_Main_InfoGangMembers: Life_RscListbox
    {
      idc = 2406;
      text = "";
      x = 0.356657 * safezoneW + safezoneX;
      y = 0.4032 * safezoneH + safezoneY;
      w = 0.122713 * safezoneW;
      h = 0.2816 * safezoneH;
      sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      font = "puristaLight";
    };
    class Lega_GangManagement_Main_InfoGang: Life_RscStructuredText
    {
      idc = 2407;
      text = "";
      x = 0.480408 * safezoneW + safezoneX;
      y = 0.4032 * safezoneH + safezoneY;
      w = 0.0690933 * safezoneW;
      h = 0.2816 * safezoneH;
    };
  };
};
