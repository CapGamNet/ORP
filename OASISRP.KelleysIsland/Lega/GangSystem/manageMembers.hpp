class Lega_GangManagement_ManageMembers {
	idd = 19920;
	name = "Lega_GangManagement_ManageMembers";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['Lega_GangManagement_ManageMembers', _this select 0];";
	onUnload = "uiNamespace setVariable ['Lega_GangManagement_ManageMembers', displayNull]";
	onDestroy = "uiNamespace setVariable ['Lega_GangManagement_ManageMembers', displayNull]";
	class controlsBackground{
		class Lega_GangManagement_Main_Background: Life_RscText
		{
			idc = -1;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.28875 * safezoneW;
			h = 0.286 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class Lega_GangManagement_Main_ExitBtnPicture: life_RscPicture
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
		class Lega_GangManagement_Main_Title: Life_RscText
		{
			idc = 2500;
			font = "puristaLight";
			text = "Gang Management"; //--- ToDo: Localize;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.3812 * safezoneH + safezoneY;
			w = 0.288704 * safezoneW;
			h = 0.0198 * safezoneH;
			colorBackground[] = {1,0.565,0,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
		};
		class Lega_GangManagement_MemberManagement_MemberListbox: Life_RscListBox
		{
			idc = 2502;
			x = 0.356656 * safezoneW + safezoneX;
			y = 0.4318 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.253 * safezoneH;
      sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      font = "puristaLight";
		};
		class Lega_GangManagement_MemberManagement_MemberOnlineSort: Life_RscCombo
		{
			idc = 2503;
			text = "Leave Gang"; //--- ToDo: Localize;
			x = 0.356656 * safezoneW + safezoneX;
			y = 0.4032 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.0264 * safezoneH;
			colorText[] = {1,1,1,1};
      sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      font = "puristaLight";
		};
		class Lega_GangManagement_MemberManagement_RankListbox: Life_RscListBox
		{
			idc = 2504;
			x = 0.465942 * safezoneW + safezoneX;
			y = 0.4032 * safezoneH + safezoneY;
			w = 0.083533 * safezoneW;
			h = 0.2816 * safezoneH;
      sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      font = "puristaLight";
		};
		class Lega_GangManagement_MemberManagement_BackButton: Life_RscButtonMenu
		{
			idc = 2505;
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
		class Lega_GangManagement_MemberManagement_KickMemberButton: Life_RscButtonMenu
		{
			idc = 2506;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			text = "Kick Member"; //--- ToDo: Localize;
			x = 0.550531 * safezoneW + safezoneX;
			y = 0.4318 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,0.565,0,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      onButtonClick = "_this call Lega_fnc_kickMember";
      class Attributes
      {
          font = "PuristaLight";
          color = "#E5E5E5";
          align = "center";
          shadow = "false";
      };
		};
		class Lega_GangManagement_MemberManagement_UpdateRankButton: Life_RscButtonMenu
		{
			idc = 2507;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			text = "Update Rank"; //--- ToDo: Localize;
			x = 0.550531 * safezoneW + safezoneX;
			y = 0.4604 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,0.565,0,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      onButtonClick = "_this call Lega_fnc_updateRank";
      class Attributes
      {
          font = "PuristaLight";
          color = "#E5E5E5";
          align = "center";
          shadow = "false";
      };
		};
		class Lega_GangManagement_MemberManagement_PayMemberButton: Life_RscButtonMenu
		{
			idc = 2508;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			text = "Pay Member"; //--- ToDo: Localize;
			x = 0.550531 * safezoneW + safezoneX;
			y = 0.5176 * safezoneH + safezoneY;
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
			onButtonClick = "[""paymember""] call Lega_fnc_handleFundsClient";
		};
		class Lega_GangManagement_MemberManagement_InvitePlayerButton: Life_RscButtonMenu
		{
			idc = 2509;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			text = "Invite Player"; //--- ToDo: Localize;
			x = 0.550531 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,0.565,0,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
      onButtonClick = "_this call Lega_fnc_inviteMember";
      class Attributes
      {
          font = "PuristaLight";
          color = "#E5E5E5";
          align = "center";
          shadow = "false";
      };
		};
		class Lega_GangManagement_MemberManagement_PayMemberEdit: Life_RscEdit
		{
			idc = 1655;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
			font = "puristaLight";
			text = "Amount"; //--- ToDo: Localize;
			x = 0.550531 * safezoneW + safezoneX;
			y = 0.5462 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0242 * safezoneH;
			colorText[] = {1,1,1,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
		};
	};
};
