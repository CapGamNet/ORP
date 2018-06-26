class Lega_GangManagement_ManageRanks {
	idd = 65463;
	name = "Lega_GangManagement_ManageRanks";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_GangManagement_ManageRanks', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_GangManagement_ManageRanks', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_GangManagement_ManageRanks', displayNull]";
	class controlsBackground{
		class Lega_GangManagement_ManageRanks_Background: Life_RscText
		{
			idc = -1;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.28875 * safezoneW;
			h = 0.286 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class Lega_GangManagement_ManageRanks_ExitButtonPicture: life_RscPicture
		{
			idc = -1;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"; //--- ToDo: Localize;
			x = 0.634062 * safezoneW + safezoneX;
			y = 0.3834 * safezoneH + safezoneY;
			w = 0.00928135 * safezoneW;
			h = 0.0154 * safezoneH;
		};
	};
	class controls {
		class Lega_GangManagement_ManageRanks_Title: Life_RscText
		{
			idc = 3000;
			font = "puristaLight";
			text = "Gang Management"; //--- ToDo: Localize;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.3812 * safezoneH + safezoneY;
			w = 0.288704 * safezoneW;
			h = 0.0198 * safezoneH;
			colorBackground[] = {1,0.565,0,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
		};
		class Lega_GangManagement_ManageRanks_MemberListbox: Life_RscListBox
		{
			idc = 3001;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			x = 0.356656 * safezoneW + safezoneX;
			y = 0.4032 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.2816 * safezoneH;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      onLbSelChanged = "_this call Lega_fnc_rankListboxChanged";
      class Attributes
      {
          font = "PuristaLight";
          color = "#E5E5E5";
          align = "center";
          shadow = "false";
      };
		};
		class Lega_GangManagement_ManageRanks_BackButton: Life_RscButtonMenu
		{
			idc = 3002;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			text = "Back"; //--- ToDo: Localize;
			x = 0.550531 * safezoneW + safezoneX;
			y = 0.4032 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,0.565,0,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      onButtonClick = "closeDialog 0;[] call Lega_fnc_initGangMenu";
      class Attributes
      {
          font = "PuristaLight";
          color = "#E5E5E5";
          align = "center";
          shadow = "false";
      };
		};
		class Lega_GangManagement_ManageRanks_RankNameBox: Life_RscEdit
		{
			idc = 3003;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			text = "Rank Name"; //--- ToDo: Localize;
      x = 0.550531 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
			colorText[] = {1,1,1,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
		};
		class Lega_GangManagement_ManageRanks_Controls: Life_RscControlsGroup
		{
			idc = 3004;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			x = 0.465969 * safezoneW + safezoneX;
			y = 0.4032 * safezoneH + safezoneY;
			w = 0.083533 * safezoneW;
			h = 0.2816 * safezoneH;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      class controls {};
		};
		class Lega_GangManagement_ManageRanks_DeleteRankButton : Life_RscButtonMenu
		{
			idc = 3006;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			text = "Delete Rank"; //--- ToDo: Localize;
      x = 0.550534 * safezoneW + safezoneX;
      y = 0.4318 * safezoneH + safezoneY;
      w = 0.0928125 * safezoneW;
      h = 0.0242 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,0.565,0,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      class Attributes
      {
          font = "PuristaLight";
          color = "#E5E5E5";
          align = "center";
          shadow = "false";
      };
      onButtonClick = "_this call Lega_fnc_deleteRank";
		};
		class Lega_GangManagement_ManageRanks_AddRankButton : Life_RscButtonMenu
		{
			idc = 3007;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			text = "Add Rank"; //--- ToDo: Localize;
      x = 0.550531 * safezoneW + safezoneX;
			y = 0.4604 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,0.565,0,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      onButtonClick = "_this call LegA_fnc_addRank";
      class Attributes
      {
          font = "PuristaLight";
          color = "#E5E5E5";
          align = "center";
          shadow = "false";
      };
		};
	};
};
