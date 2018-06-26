/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_P07_F", "", 6500, 1000, "" },
            { "hgun_Rook40_F", "", 7200, 1200, "" },
            { "RH_m9", "", 8300, 1260, "" },
            { "RH_g17", "", 12500, 1500, "" },
            { "KA_P226_Black", "", 11000, 1400, "" },
            { "RH_cz75", "", 12000, 1450, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 100, 10, "" },
            { "16Rnd_9x21_Mag", "", 100, 10, "" },
            { "RH_15Rnd_9x19_M9", "", 120, 10, "" },
            { "RH_17Rnd_9x19_g17", "", 250, 15, "" },
            { "KA_P226_15Rnd_9x19_FMJ_Mag", "", 200, 13, "" },
            { "RH_16Rnd_9x19_CZ", "", 240, 14, "" }
        };
        accs[] = {
            { "RH_X300", "Glock 17 Flashlight", 1200, 100, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
			//Handguns
            { "RH_Deagles", "", 35000, 0, "" },
            { "RH_g18", "", 35000, 0, "" },
            { "RH_tec9", "", 40000, 0, "" },
            { "RH_m1911", "", 15000, 0, "" },
            { "RH_muzi", "", 42000, 0, "" },
			//ARs
            { "RH_sbr9", "", 75000, 0, "" }, 
			{ "RH_sbr9_des", "", 77000, 0, "" },
			{ "RH_sbr9_tg", "", 77000, 0, "" }, 
			{ "RH_sbr9_wdl", "", 77000, 0, "" }, 
            { "FHQ_smg_p90_black", "", 80000, 0, "" }, 
            { "KA_PP19", "", 78000, 0, "" },
            { "KA_UMP45", "", 73000, 0, "" },
            { "RH_ar10", "", 85000, 0, "" },
			{ "RH_M16a1", "", 500000, 0, "" },
			{ "hlc_rifle_Bushmaster300", "", 520000, 0, "" },
			{ "FHQ_arifle_Galil_black", "", 600000, 0, "" },
			{ "bnae_rk95r_virtual", "", 610000, 0, "" }
        };
        mags[] = {
			//Handguns
            { "RH_7Rnd_50_AE", "", 500, 0, "" },
            { "RH_19Rnd_9x19_g18", "", 350, 0, "" },
            { "RH_32Rnd_9x19_tec", "", 400, 0, "" },
            { "RH_7Rnd_45cal_m1911", "", 250, 0, "" },
            { "RH_30Rnd_9x19_UZI", "", 420, 0, "" },
			//ARs
            { "RH_32Rnd_9mm_M822", "", 500, 0, "" },
            { "FHQ_50Rnd_57x28_Mag", "", 700, 0, "" },
			{ "KA_64Rnd_9x18_PMM_FMJ_Mag", "", 600, 0, "" },
			{ "KA_25Rnd_45ACP_FMJ_Mag", "", 650, 0, "" },
			{ "RH_20Rnd_762x51_AR10", "", 750, 0, "" },
			{ "30Rnd_762x39_Magazine", "", 1000, 0, "" },
			{ "FHQ_25Rnd_762x51_Mag", "", 1200, 0, "" },
			{ "29rnd_300BLK_STANAG", "", 850, 0, "" },
			{ "RH_30Rnd_556x45_M855A1", "", 900, 0, "" }
        };
        accs[] = {
            { "FHQ_optic_AC11704", "", 3200, 0, "" },
            { "RH_tundra", "", 2500, 0, "" },
            { "muzzle_snds_M", "", 2500, 0, "" },
            { "KA_kobra_PP19", "", 3200, 0, "" },
			{ "KA_PBS_1_Silencer_PP19", "", 2500, 0, "" },
			{ "RH_compM2l", "", 3200, 0, "" },
			{ "KA_UMP45_Silencer", "", 2500, 0, "" },
			{ "RH_Delft", "", 4000, 0, "" },
			{ "optic_Aco", "", 3200, 0, "" },
			{ "SMA_CMORE", "", 3200, 0, "" },
			{ "FHQ_optic_AIM", "", 4000, 0, "" },
			{ "KA_Eotech553", "", 4000, 0, "" },
			{ "Kio_SB_ShortDot", "", 6200, 0, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "RH_Deagleg", "", 35000, 0, "" },
			{ "RH_fn57", "", 38000, 0, "" },
			{ "KA_knife", "", 25000, 0, "" },
			{ "KA_dagger", "", 25000, 0, "" }
        };
        mags[] = {
            { "RH_7Rnd_50_AE", "", 500, 0, "" },
            { "RH_20Rnd_57x28_FN", "", 600, 0, "" },
            { "KA_knife_blade", "", 350, 0, "" },
            { "KA_dagger_blade", "", 350, 0, "" }
        };
        accs[] = {
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 250, 75, "" },
            { "ItemGPS", "", 120, 50, "" },
            { "ItemMap", "", 20, 15, "" },
            { "ItemCompass", "", 20, 15, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 100, 75, "" },
            { "NVGoggles", "", 2500, 50, "" },
			{ "tf_anprc152", "", 450, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 250, 75, "" },
            { "ItemGPS", "", 120, 50, "" },
            { "ItemMap", "", 20, 15, "" },
            { "ItemCompass", "", 20, 15, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 100, 75, "" },
            { "NVGoggles", "", 2500, 50, "" },
			{ "tf_anprc152", "", 450, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    ///Cop Shops
    class cop_cadet {
        name = "Altis Cadet Shop";
        side = "cop"; 
        conditions = "";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 0, 0, "call life_coplevel >= 1" },
			{ "RH_g19", "", 0, 0, "call life_coplevel >= 1" },
			//Items
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
		};
        mags[] = {
			{ "16Rnd_9x21_Mag", "Taser Mags", 0, 0, "call life_coplevel >= 1" },
			{ "RH_17Rnd_9x19_g17", "", 0, 0, "call life_coplevel >= 1" }
		};
        accs[] = {};
    };

    class cop_officer {
        name = "Altis Officer Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 0, 0, "call life_coplevel >= 2" },
			{ "RH_g19", "", 0, 0, "call life_coplevel >= 2" },
			{ "RH_M16A2", "", 0, 0, "call life_coplevel >= 2" },
			{ "RH_M16A3", "", 0, 0, "call life_coplevel >= 2" },
			{ "SMA_BARSKA", "", 0, 0, "call life_coplevel >= 2" },
			//Items
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
		};
        mags[] = {
			{ "16Rnd_9x21_Mag", "Taser Mags", 0, 0, "call life_coplevel >= 2" },
			{ "RH_17Rnd_9x19_g17", "", 0, 0, "call life_coplevel >= 2" },
			{ "RH_30Rnd_556x45_M855A1", "", 0, 0, "call life_coplevel >= 2" },
			{ "RH_30Rnd_556x45_M855A1", "", 0, 0, "call life_coplevel >= 2" }
		};
        accs[] = {};
    };

	class cop_corporal {
        name = "Altis Corporal Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 0, 0, "call life_coplevel >= 3" },
			{ "RH_g19", "", 0, 0, "call life_coplevel >= 3" },
			{ "RH_kimber_nw", "", 0, 0, "call life_coplevel >= 3" },
			{ "RH_M16A4", "", 0, 0, "call life_coplevel >= 3" },
			{ "FHQ_optic_AIM", "", 0, 0, "call life_coplevel >= 3" },
			{ "hlc_rifle_Colt727", "", 0, 0, "call life_coplevel >= 3" },
			{ "SMA_AIMPOINT", "", 0, 0, "call life_coplevel >= 3" },
			{ "RH_ta31rco", "", 0, 0, "call life_coplevel >= 3" },
			{ "Mossberg_590", "", 0, 0, "call life_coplevel >= 3" },
			//Items
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
		};
        mags[] = {
			{ "16Rnd_9x21_Mag", "Taser Mags", 0, 0, "call life_coplevel >= 3" },
			{ "RH_17Rnd_9x19_g17", "", 0, 0, "call life_coplevel >= 3" },
			{ "RH_7Rnd_45cal_m1911", "", 0, 0, "call life_coplevel >= 3" },
			{ "RH_30Rnd_556x45_M855A1", "", 0, 0, "call life_coplevel >= 3" },
			{ "hlc_30rnd_556x45_EPR", "", 0, 0, "call life_coplevel >= 3" },
			{ "8Rnd_Mossberg_590_Pellets", "", 0, 0, "call life_coplevel >= 3" }
		};
        accs[] = {};
    };


	class cop_sergeant {
        name = "Altis Sergeantr Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 0, 0, "call life_coplevel >= 4" },
			{ "RH_g19", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_kimber_nw", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_M4_ris", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_compM2l", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_ta31rco", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_Mk11", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_TD_ACB_b", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_accupoint", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_m110sd", "", 0, 0, "call life_coplevel >= 4" },
			//Items
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
		};
        mags[] = {
			{ "16Rnd_9x21_Mag", "Taser Mags", 0, 0, "call life_coplevel >= 4" },
			{ "RH_17Rnd_9x19_g17", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_7Rnd_45cal_m1911", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_30Rnd_556x45_M855A1", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_20Rnd_762x51_M80A1", "", 0, 0, "call life_coplevel >= 4" },
			{ "CSW_LVOA_30rnd_Mk318_SOST_mag", "", 0, 0, "call life_coplevel >= 4" }
		};
        accs[] = {};
    };

	class cop_staf_sergeant { //This is the Lieutenant shop
        name = "Altis Staff Sergeant Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 0, 0, "call life_coplevel >= 5" },
			{ "CSW_FN57", "", 0, 0, "call life_coplevel >= 5" },
			{ "RH_Hk416c", "", 0, 0, "call life_coplevel >= 5" },
			{ "RH_barska_rds", "", 0, 0, "call life_coplevel >= 5" },
			{ "RH_c79_2d", "", 0, 0, "call life_coplevel >= 5" },
			{ "KA_ANPEQ15_Black_IR", "", 0, 0, "call life_coplevel >= 5" },
			//Items
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
		};
        mags[] = {
			{ "16Rnd_9x21_Mag", "Taser Mags", 0, 0, "call life_coplevel >= 5" },
			{ "CSW_20Rnd_57x28_SS190", "", 0, 0, "call life_coplevel >= 5" },
			{ "RH_30Rnd_556x45_M855A1", "", 0, 0, "call life_coplevel >= 5" }
		};
        accs[] = {};
    };

	class cop_Lieutenant { //This is the Captain shop
        name = "Altis Lieutenant Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 0, 0, "call life_coplevel >= 6" },
			{ "RH_fnp45", "", 0, 0, "call life_coplevel >= 6" },
			{ "RH_docter", "", 0, 0, "call life_coplevel >= 6" },
			{ "RH_Hk416s", "", 0, 0, "call life_coplevel >= 6" },
			{ "FHQ_optic_AC12136", "", 0, 0, "call life_coplevel >= 6" },
			{ "RH_ta31rco_2D", "", 0, 0, "call life_coplevel >= 6" },
			{ "KA_ANPEQ15_Black_IR", "", 0, 0, "call life_coplevel >= 6" },
			//Items
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
		};
        mags[] = {
			{ "16Rnd_9x21_Mag", "Taser Mags", 0, 0, "call life_coplevel >= 6" },
			{ "RH_15Rnd_45cal_fnp", "", 0, 0, "call life_coplevel >= 6" },
			{ "RH_30Rnd_556x45_M855A1", "", 0, 0, "call life_coplevel >= 6" },
		};
        accs[] = {};
    };

	class cop_captain { //This is the Undersheriff shop
        name = "Altis Captain Shop";
		side = "cop";
        conditions = "";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 0, 0, "call life_coplevel >= 7" },
			{ "RH_fnp45t", "", 0, 0, "call life_coplevel >= 7" },
			{ "RH_docter", "", 0, 0, "call life_coplevel >= 7" },
			{ "SMA_MK18afgBLK_SM", "", 0, 0, "call life_coplevel >= 7" },
			{ "RH_cmore", "", 0, 0, "call life_coplevel >= 7" },
			{ "RH_ta31rco", "", 0, 0, "call life_coplevel >= 7" },
			//Items
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
		};
        mags[] = {
			{ "16Rnd_9x21_Mag", "Taser Mags", 0, 0, "call life_coplevel >= 7" },
			{ "RH_15Rnd_45cal_fnp", "", 0, 0, "call life_coplevel >= 7" },
			{ "SMA_30Rnd_556x45_M855A1", "", 0, 0, "call life_coplevel >= 7" }
		};
        accs[] = {};
    };

    class cop_Command { //This is the Sheriff shop
        name = "Altis Command Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 0, 0, "call life_coplevel >= 8" },
			{ "KA_Mk23_silver", "", 0, 0, "call life_coplevel >= 8" },
			{ "SMA_HK416afgQCB", "", 0, 0, "call life_coplevel >= 8" },
			{ "FHQ_optic_AIM", "", 0, 0, "call life_coplevel >= 8" },
			{ "RH_ta31rco", "", 0, 0, "call life_coplevel >= 8" },
			//Items
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
		};
        mags[] = {
			{ "16Rnd_9x21_Mag", "Taser Mags", 0, 0, "call life_coplevel >= 8" },
			{ "KA_12Rnd_45ACP_FMJ_Mag", "", 0, 0, "call life_coplevel >= 8" },
			{ "SMA_30Rnd_556x45_M855A1", "", 0, 0, "call life_coplevel >= 8" }
		};
        accs[] = {};
    };
	
	class swat_shop {
        name = "SWAT Weapon Shop";
        side = "cop";
        conditions = "license_cop_swat";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 0, 0, "" },
			{ "KA_FNP45", "", 0, 0, "" },
			{ "KA_red", "", 0, 0, "" },
			{ "KA_FNP45_Flashlight", "", 0, 0, "" },
			{ "KA_FNP45_shield2", "", 0, 0, "" },
			{ "RH_p226s", "", 0, 0, "" },
			{ "RH_M6X", "", 0, 0, "" },
			{ "RH_M4sbr_b", "", 0, 0, "" },
			{ "SMA_AIMPOINT", "", 0, 0, "" },
			{ "RH_c79", "", 0, 0, "" },
			{ "RH_peq15b", "", 0, 0, "" },
			{ "muzzle_snds_Shield_black_M", "", 0, 0, "" },
			{ "RH_M4_moe_b", "", 0, 0, "" },
			{ "RH_reflex", "", 0, 0, "" },
			{ "SMA_SFFL_BLK", "", 0, 0, "" },
			{ "RH_fa556", "", 0, 0, "" },
			{ "RH_c79", "", 0, 0, "" },
			{ "bnae_trg42_f_mmrs_virtual", "", 0, 0, "" },
			{ "bnae_scope_v2_virtual", "", 0, 0, "" },
			{ "bnae_silencer_virtual", "", 0, 0, "" },
			{ "bnae_bipod_blk_virtual", "", 0, 0, "" },
			{ "CSW_M870", "", 0, 0, "" }, //Shotgun start
			{ "FHQ_optic_AC12136", "", 0, 0, "" },
			{ "CSW_M870_flashlight_normal", "", 0, 0, "" }, //Shotgun end
			//Items
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
		};
        mags[] = {
			{ "16Rnd_9x21_Mag", "Taser Mags", 0, 0, "" },
			{ "KA_15Rnd_45ACP_Mag", "", 0, 0, "" },
			{ "RH_15Rnd_9x19_SIG", "", 0, 0, "" },
			{ "RH_30Rnd_556x45_M855A1", "", 0, 0, "" },
			{ "RH_30Rnd_556x45_M855A1", "", 0, 0, "" },
			{ "5Rnd_338LM_Magazine", "", 0, 0, "" },
			{ "CSW_M870_8Rnd_slug", "", 0, 0, "" }
		};
        accs[] = {};
    };

    class dea_shop {
        name = "DEA Shop";
        side = "cop"; 
        conditions = "";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 0, 0, "call life_coplevel >= 4" },
			{ "CSW_FN57_Ballistic_Shield", "", 0, 0, "call life_coplevel >= 4" },
			{ "CSW_FN57_flashlight_normal_2", "", 0, 0, "call life_coplevel >= 4" },
			{ "CSW_FN57_Shield_P", "", 0, 0, "call life_coplevel >= 4" },
			{ "KA_Mk23_black", "", 0, 0, "call life_coplevel >= 4" },
			{ "KA_Mk23_Flashlight", "", 0, 0, "call life_coplevel >= 4" },
			{ "hlc_rifle_M4", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_barska_rds", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_c79", "", 0, 0, "call life_coplevel >= 4" },
			{ "SMA_SFFL_BLK", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_fa556", "", 0, 0, "call life_coplevel >= 4" },
			{ "kio_H_Bipod", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_Mk11", "", 0, 0, "call life_coplevel >= 4" },
			{ "SMA_ELCAN_SPECTER_ARDRDS", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_HBLM", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_peq2_top", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_m110sd", "", 0, 0, "call life_coplevel >= 4" },
			{ "bnae_trg42_f_mmrs_virtual", "", 0, 0, "call life_coplevel >= 4" },
			{ "bnae_scope_v2_virtual", "", 0, 0, "call life_coplevel >= 4" },
			{ "bnae_silencer_virtual", "", 0, 0, "call life_coplevel >= 4" },
			{ "bnae_bipod_blk_virtual", "", 0, 0, "call life_coplevel >= 4" },
			{ "CSW_M870", "", 0, 0, "" }, //Shotgun start
			{ "FHQ_optic_AC12136", "", 0, 0, "" },
			{ "CSW_M870_flashlight_normal", "", 0, 0, "" }, //Shotgun end
			//Items
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
		};
        mags[] = {
			{ "16Rnd_9x21_Mag", "Taser Mags", 0, 0, "call life_coplevel >= 4" },	
			{ "CSW_20Rnd_57x28_SS190", "", 0, 0, "call life_coplevel >= 4" },
			{ "KA_12Rnd_45ACP_FMJ_Mag", "", 0, 0, "call life_coplevel >= 4" },
			{ "hlc_30rnd_556x45_EPR", "", 0, 0, "call life_coplevel >= 4" },
			{ "RH_20Rnd_762x51_M80A1", "", 0, 0, "call life_coplevel >= 4" },
			{ "5Rnd_338LM_Magazine", "", 0, 0, "call life_coplevel >= 4" },
			{ "CSW_M870_8Rnd_slug", "", 0, 0, "" }
		};
        accs[] = {};
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ItemMap", "", 0, 0, "" },
            { "ItemCompass", "", 0, 0, "" },
            { "ItemWatch", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "tf_anprc152", "", 0, 0, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};