class Life_atm_management {
    idd = 2700;
    name= "life_atm_menu";
    movingEnable = 0;
    enableSimulation = 1;
        class controlsBackground {
            class RscPicture: Life_RscPicture
            {
                idc = 1200;
                text = "textures\atm_menu.jpg";
                x = 0.386562 * safezoneW + safezoneX;
                y = 0.247 * safezoneH + safezoneY;
                w = 0.221719 * safezoneW;
                h = 0.506 * safezoneH;
            };
        };
        class controls {
		class TitleBank: Life_RscStructuredText
		{
			idc = 2701;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.3416 * safezoneH + safezoneY;
			w = 0.167063 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class TitleCash: Life_RscStructuredText
		{
			idc = 2704;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.3834 * safezoneH + safezoneY;
			w = 0.167063 * safezoneW;
			h = 0.033 * safezoneH;
		};
        class WithdrawButton: Life_RscButtonInvisable
		{
			idc = -1;
			x = 0.399969 * safezoneW + safezoneX;
			y = 0.5088 * safezoneH + safezoneY;
			w = 0.0629063 * safezoneW;
			h = 0.0374 * safezoneH;
            onButtonClick = "[] call life_fnc_bankWithdraw";
		};
        class DepositButton: Life_RscButtonInvisable
		{
			idc = -1;
			x = 0.467 * safezoneW + safezoneX;
			y = 0.5088 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.0374 * safezoneH;
            onButtonClick = "[] call life_fnc_bankDeposit";
		};
            class moneyEdit: Life_RscEdit
		{
			idc = 2702;
			text = "1"; //--- ToDo: Localize;
			x = 0.401 * safezoneW + safezoneX;
			y = 0.4318 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.0264 * safezoneH;
		};
        class PlayerList: Life_RscCombo
		{
			idc = 2703;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.4714 * safezoneH + safezoneY;
			w = 0.117562 * safezoneW;
			h = 0.0242 * safezoneH;
		};
        class TransferButton: Life_RscButtonInvisable
		{
			idc = -1;
			x = 0.533 * safezoneW + safezoneX;
			y = 0.5088 * safezoneH + safezoneY;
			w = 0.0629063 * safezoneW;
			h = 0.0374 * safezoneH;
            onButtonClick = "[] call life_fnc_bankTransfer";
		};
        class GangWithdraw: Life_RscButtonInvisable
		{
			idc = -1;
			x = 0.444313 * safezoneW + safezoneX;
			y = 0.5847 * safezoneH + safezoneY;
			w = 0.10725 * safezoneW;
			h = 0.0484 * safezoneH;
            onButtonClick = "[] call life_fnc_gangWithdraw";
		};
        class GangDeposit: Life_RscButtonInvisable
		{
			idc = -1;
			x = 0.444313 * safezoneW + safezoneX;
			y = 0.6584 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.0484 * safezoneH;
            onButtonClick = "[] call life_fnc_gangDeposit";
		};
    };
};

