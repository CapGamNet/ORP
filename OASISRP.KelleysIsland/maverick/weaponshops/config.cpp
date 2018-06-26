/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the weaponshop

class maverick_weaponshop_cfg {

	cashVar = "life_cash";								//--- Cash Variable
	cashSymbol = "$"; 									//--- Currency Symbol
	rotationSpeed = 2; 									//--- Rotation speed for item in preview (1 - 10)
	saveFunction = "[] call SOCK_fnc_updateRequest"; 	//--- Function to save gear etc. once items are purchased

	class localization {
		//--- localization for hints etc.
		msgParamEmpty =						"Shop Parameter is empty!";
		msgInVehicle =						"You cannot be in a Vehicle!";
		msgShopExists =						"Shop doesn't Exist!";
		msgCondition =						"Not permitted to access this Shop!";
		msgCashOnHand =						"Cash on Hand - %1%2";
		msgCartTotal =						"Your Cart - %1%2";
		msgInfoTooltip =					"--> HOLD YOUR LEFT MOUSE BUTTON DOWN WHILE MOVING MOUSE TO ROTATE WEAPON.\n--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgInfoTooltip2 = 					"--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgEmptyShop = 						"Nothing Found...";
		msgInfoText	=						"<t color='#FFFFFF'>Price:</t> <t color='%1'>%3%2</t>";
		msgCartFull	=						"Cart is Full";
		msgCartEmpty =						"Cart is Empty";
		msgNotEnoughCash =					"Not enough Cash for this Transaction";
		msgOverrideAlert =					"Use the override feature to override gear!";
		msgTransactionComplete =			"Purchase completed for %1%2";
		msgNotEnoughSpace =				 	"You didn't have enough space for all the items. You however only paid for those you had space for!";
		msgClear =							"Clear";
		msgSearch =							"Search";

		//--- localization for dialogs
		#define dialogTabWeapon				"Weapon"
		#define dialogTabMagazines			"Magazines"
		#define dialogTabAttachments		"Attachments"
		#define dialogTabOther				"Other"
		#define dialogAddBtn				"Add"
		#define dialogOverrideTooltip		"Override Gear"
		#define dialogCompleteBtn			"Complete"
		#define dialogCloseBtn 				"Close"
	};

	class shops {
		class rebel {
			title = "Rebel Weapon Shop"; //--- Title of Shop
			condition = "license_civ_rebel"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				//Handguns
			{ "RH_Deagles", 35000, "", "" },
			{ "RH_g18", 35000, "", "" },
			{ "RH_tec9", 40000, "", "" },
			{ "RH_m1911", 15000, "", "" },
			{ "RH_muzi", 42000, "", "" },
			//ARs
			{ "RH_sbr9", 75000, "" , ""}, 
			{ "RH_sbr9_des", 77000, "", "" },
			{ "RH_sbr9_tg", 77000, "", "" }, 
			{ "RH_sbr9_wdl", 77000, "", "" }, 
			{ "FHQ_smg_p90_black", 80000, "", "" }, 
			{ "KA_PP19", 78000, "", "" },
			{ "KA_UMP45", 73000, "", "" },
			{ "RH_ar10", 85000, "", "" },
			{ "RH_M16a1", 500000, "", "" },
			{ "hlc_rifle_Bushmaster300", 520000, "", "" },
			{ "FHQ_arifle_Galil_black", 600000, "", "" },
			{ "bnae_rk95r_virtual", 610000, "", "" }
			};

			magazines[] = {
			//Handguns
            { "RH_7Rnd_50_AE", 500, "", "" },
            { "RH_19Rnd_9x19_g18", 350, "", "" },
            { "RH_32Rnd_9x19_tec", 400, "", "" },
            { "RH_7Rnd_45cal_m1911", 250, "", "" },
            { "RH_30Rnd_9x19_UZI", 420, "", "" },
			//ARs
            { "RH_32Rnd_9mm_M822", 500, "", "" },
            { "FHQ_50Rnd_57x28_Mag", 700, "", "" },
			{ "KA_64Rnd_9x18_PMM_FMJ_Mag", 600, "", "" },
			{ "KA_25Rnd_45ACP_FMJ_Mag", 650, "", "" },
			{ "RH_20Rnd_762x51_AR10", 750, "", "" },
			{ "30Rnd_762x39_Magazine", 1000, "", "" },
			{ "FHQ_25Rnd_762x51_Mag", 1200, "", "" },
			{ "29rnd_300BLK_STANAG", 850, "", "" },
			{ "RH_30Rnd_556x45_M855A1", 900, "", "" }
			};

			attachments[] = {
			{ "FHQ_optic_AC11704", 3200, "", "" },
            { "RH_tundra", 2500, "", "" },
            { "muzzle_snds_M", 2500, "", "" },
            { "KA_kobra_PP19", 3200, "", "" },
			{ "KA_PBS_1_Silencer_PP19", 2500, "" , ""},
			{ "RH_compM2l", 3200, "", "" },
			{ "KA_UMP45_Silencer", 2500, "", "" },
			{ "RH_Delft", 4000, "", "" },
			{ "optic_Aco", 3200, "", "" },
			{ "SMA_CMORE", 3200, "", "" },
			{ "FHQ_optic_AIM", 4000,"", "" },
			{ "KA_Eotech553", 4000, "", "" },
			{ "Kio_SB_ShortDot", 6200, "", "" }
			};
			
			items[] = {
				{"Binocular", 50, "license_civ_rebel", ""},
				{"NVGoggles", 10000, "license_civ_rebel", ""}
			};
		};
		
		class gunstore {
			title = "Gun Store"; //--- Title of Shop
			condition = "license_civ_gun"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"RH_python", 20000, "license_civ_gun", ""}, //{"srifle_DMR_01_F", 500, "call life_coplevel >= 2", "Test"}
				{"RH_cz75", 15000, "license_civ_gun", ""},
				{"RH_p226", 25000, "license_civ_gun", ""},
				{"KA_dagger", 10000, "license_civ_gun", ""}
			};

			magazines[] = {
				{"RH_6Rnd_357_Mag", 1000, "license_civ_gun", ""},
				{"RH_16Rnd_9x19_CZ", 1000, "license_civ_gun", ""},
				{"RH_15Rnd_9x19_SIG", 1000, "license_civ_gun", ""},
				{"KA_dagger_blade", 75, "license_civ_gun", ""}
			};

			attachments[] = {
			};
			
			items[] = {
				{"Binocular", 50, "license_civ_gun", ""},
				{"NVGoggles", 10000, "license_civ_gun", ""} //--- NV goggles won't be shown on preview
			};
		};
		
		class donator1 {
			title = "Donator 1 Weapons Store"; //--- Title of Shop
			condition = "license_civ_donator1"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"RH_python", 8500, "license_civ_donator1", ""}
			};

			magazines[] = {
				{"RH_6Rnd_357_Mag", 100, "license_civ_donator1", ""}
			};

			attachments[] = {
				{"RH_6Rnd_357_Mag", 100, "license_civ_donator1", ""}
			};
			
			items[] = {
				{"Binocular", 50, "license_civ_donator1", ""}
			};
		};
		
		class donator2 {
			title = "Donator 2 Weapons Store"; //--- Title of Shop
			condition = "license_civ_donator2"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"RH_python", 8500, "", ""}
			};

			magazines[] = {
				{"RH_6Rnd_357_Mag", 100, "license_civ_donator2", ""}
			};

			attachments[] = {
				{"RH_6Rnd_357_Mag", 100, "license_civ_donator2", ""}
			};
			
			items[] = {
				{"Binocular", 50, "license_civ_donator2", ""}
			};
		};
		
		class donator3 {
			title = "Donator 3 Weapons Store"; //--- Title of Shop
			condition = "license_civ_donator3"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"RH_python", 8500, "license_civ_donator3", ""}
			};

			magazines[] = {
				{"RH_6Rnd_357_Mag", 100, "license_civ_donator3", ""}
			};

			attachments[] = {
				{"RH_6Rnd_357_Mag", 100, "license_civ_donator3", ""}
			};
			
			items[] = {
				{"Binocular", 50, "license_civ_donator3", ""}
			};
		};
		
		class swat {
			title = "SWAT Weapons Shop"; //--- Title of Shop
			condition = "license_cop_swat"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"hlc_rifle_bcmblackjack", 8500, "license_cop_swat", ""},
				{"CSW_FN57", 8500, "license_cop_swat", ""},
				{"RH_M4sbr_b", 8500, "license_cop_swat", ""},
				{"RH_M4_moe_b", 8500, "license_cop_swat", ""},
				{"bnae_trg42_f_mmrs_virtual", 8500, "license_cop_swat", ""},
				{"CSW_M870", 8500, "license_cop_swat", ""},
				{"KA_Mx4_Black", 8500, "license_cop_swat", ""},
				{"RH_g17", 8500, "license_cop_swat", ""}
			};

			magazines[] = {
				{"29rnd_300BLK_STANAG", 100, "license_cop_swat", ""},
				{"CSW_20Rnd_57x28_SS190", 100, "license_cop_swat", ""},
				{"5Rnd_338LM_Magazine", 100, "license_cop_swat", ""}
			};

			attachments[] = {
				{"RH_fa762", 100, "license_cop_swat", ""},
				{"RH_SFM952V", 100, "license_cop_swat", ""},
				{"FHQ_optic_ACOG", 100, "license_cop_swat", ""},
				{"kio_H_Bipod", 100, "license_cop_swat", ""},
				{"CSW_FN57_silencer3", 100, "license_cop_swat", ""},
				{"CSW_FN57_laser_IR_2", 100, "license_cop_swat", ""},
				{"FHQ_optic_AC12136", 100, "license_cop_swat", ""},
				{"RH_qdss_nt4", 100, "license_cop_swat", ""},
				{"RH_m4covers_f", 100, "license_cop_swat", ""},
				{"FHQ_optic_AC11704", 100, "license_cop_swat", ""},
				{"bnae_silencer_virtual", 100, "license_cop_swat", ""},
				{"bnae_scope_blk_virtual", 100, "license_cop_swat", ""},
				{"bipod_02_F_blk", 100, "license_cop_swat", ""}
			};
			
			items[] = {
				{"Binocular", 50, "license_cop_swat", ""}
			};
		};
		
		class pmc {
			title = "PMC Weapons Shop"; //--- Title of Shop
			condition = "license_civ_pmc"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"hlc_rifle_bcmblackjack", 50000, "license_civ_pmc", ""},
				{"CSW_LVOA_C_Black_TOB", 50000, "license_civ_pmc", ""},
				{"SMA_MK18afgBLK", 50000, "license_civ_pmc", ""}
			};

			magazines[] = {
				{"29rnd_300BLK_STANAG", 500, "license_civ_pmc", ""},
				{"CSW_LVOA_30rnd_M995_AP_mag", 500, "license_civ_pmc", ""},
				{"SMA_30Rnd_556x45_Mk262", 500, "license_civ_pmc", ""}
			};

			attachments[] = {
				{"SMA_eotech", 1000, "license_civ_pmc", ""},
				{"FHQ_optic_ACOG", 1000, "license_civ_pmc", ""},
				{"FHQ_optic_AIM", 1000, "license_civ_pmc", ""},
				{"RH_Saker762", 1000, "license_civ_pmc", ""}
			};
			
			items[] = {
				{"Binocular", 50, "license_civ_pmc", ""}
			};
		};
	};
};

#include "gui\weapon_gui_master.cpp"
