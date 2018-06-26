class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_transport_F", "" } 
        };
    };
	
	class evys_sports {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "d3s_nemises_f90_18_EX", "" },
			{ "d3s_srthellcat_15", "" },
			{ "d3s_srthellcat_15_392", "" },
			{ "d3s_srthellcat_15_HELL", "" },
			{ "d3s_boss_15_payback", "" },
			{ "d3s_boss_15", "" },
			{ "d3s_giulia_16_SE", "" },
			{ "d3s_giulia_quad_16", "" },
			{ "d3s_giulia_ti_16", "" },
			{ "d3s_giulia_q4_16", "" },
			{ "d3s_nemises_f87_17_sport", "" },
			{ "d3s_nemises_f87_17", "" },
			{ "d3s_nemises_f87_17_m", "" },
			{ "d3s_nemises_f80_14_EX", "" },
			{ "d3s_nemises_f80_14_GTS", "" },
			{ "d3s_nemises_f82_14_CE", "" },
			{ "d3s_nemises_f82_14_EX", "" },
			{ "d3s_amazing_f82_16_IND", "" },
			{ "d3s_amazing_f82_16_EX", "" },
			{ "d3s_amazing_f10_12", "" },
            { "d3s_amazing_f90_18_FE", "" },
            { "d3s_amazing_f90_18_m", "" },
            { "d3s_amazing_f10_12_EX", "" },
            { "d3s_amazing_f10_12_IND", "" },
            { "d3s_charger_15_SXT", "" },
            { "d3s_charger_15_RT", "" },
            { "d3s_charger_15_FnF7", "" },
            { "d3s_charger_15", "" },
            { "d3s_nemises_wrx_sti_17", "" },
            { "d3s_amazing_ACS8_17_IND", "" },
            { "d3s_amazing_ACS8_17", "" }	
        };
    };
	
	class bob_high_pref {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
			{ "d3s_ctsv_16", "" },
			{ "d3s_ctsv_16_1", "" },
			{ "d3s_ctsv_16_SE", "" },	
			{ "d3s_nemises_xe_15", "" },
			{ "d3s_nemises_xer_15", "" },
			{ "d3s_nemises_xes_15", "" },
			{ "d3s_nemises_xes_15_SE", "" },
			{ "d3s_nemises_is_16", "" },
            { "d3s_nemises_is_16_SE", "" },
			{ "d3s_nemises_is_f_16", "" },
			{ "d3s_nemises_is_16_1", "" },	
			{ "d3s_ghibli_14_30", "" },
			{ "d3s_nemises_ghinli_14_q4", "" },
			{ "d3s_ghibli_14_sq4", "" },
            { "d3s_ghibli_14_s", "" },
			{ "d3s_ghibli_14", "" },
			{ "d3s_nemises_C43_16", "" },	
			{ "d3s_nemises_C63_14", "" },
			{ "d3s_nemises_C63S_14_SE", "" },
			{ "d3s_nemises_C63S_14", "" }
        };
    };
	
	class jake_luxry {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "Bentley_01", "" },
			{ "Bentley_11", "" },
			{ "Bentley_05", "" },
			{ "Bentley_10", "" },
			{ "G65_01", "" },
			{ "G65_11", "" },
			{ "G65_10", "" },
			{ "G65_03", "" },
			{ "G65_05", "" },
			{ "Maserati_01", "" },
			{ "Maserati_11", "" },
			{ "Maserati_10", "" },
			{ "Maserati_05", "" },
			{ "Escalade_01", "" },
			{ "Escalade_11", "" },
			{ "Escalade_07", "" },
			{ "LandRover_01", "" },
			{ "LandRover_06", "" },
			{ "LandRover_13", "" },
			{ "LandRover_08", "" },
			{ "LandRover_11", "" },
			{ "LandRover_10", "" },
			{ "LandRover_05", "" }
        };
    };
	
	class ido_suv {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
			{ "d3s_tahoe_ltz_08 ", "" },
			{ "d3s_tahoe_vortec_08", "" },
			{ "d3s_tahoe_08", "" },
			{ "d3s_tahoe_payday", "" },
			{ "d3s_durango_18_AWD", "" },
			{ "d3s_durango_18_se", "" },
			{ "d3s_durango_18_SRT", "" },
			{ "d3s_durango_18", "" },
			{ "d3s_nemises_explorer_LT_13", "" },
            { "d3s_nemises_explorer_sport_13", "" },
            { "d3s_nemises_explorer_13", "" },
            { "d3s_nemises_explorer_se_13", "" },
            { "d3s_nemises_explorer_13_EX", "" },
            { "d3s_fpace_17_p", "" },
            { "d3s_fpace_17_r", "" },
            { "d3s_fpace_17", "" },
            { "d3s_cherokee_18_SRT", "" },
            { "d3s_cherokee_18_LTD", "" },
            { "d3s_cherokee_18_TRCK", "" },
            { "d3s_cherokee_18", "" },
            { "d3s_nemises_lm002_90", "" },
            { "d3s_levante_Esteso_17", "" },
            { "d3s_levante_s_17", "" },
            { "d3s_levante_s_17_mat", "" },
            { "d3s_nemises_gls63amg_17", "" },
            { "d3s_nemises_gls63amg_17_LT", "" },
            { "d3s_gls63amg_12", "" },
            { "d3s_gls63amg_12_LT", "" },
            { "d3s_gls63amg_12_SE", "" },
            { "d3s_nemises_evoque_si4_16 ", "" }
    };
};

	class oscar_shop {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
			{ "d3s_nemises_savana_05_02", "" },
			{ "d3s_nemises_savana_05_03", "" },
			{ "d3s_vklasse_17", "" },
			{ "d3s_nemises_vklasse_250_17", "" },
			{ "d3s_nemises_vklasse_220_17", "" },
			{ "d3s_nemises_vklasse_17_SE", "" },
            { "d3s_nemises_kodiaq_act_17", "" }, 
            { "d3s_nemises_kodiaq_sl_17", "" },
            { "d3s_nemises_kodiaq_17", "" },
            { "d3s_nemises_kodiaq_se_17", "" },
            { "d3s_nemises_oks", "" },
            { "d3s_crown_98", "" },
            { "d3s_nemises_taurus_dur_10", "" },
            { "d3s_nemises_taurus_eco_10", "" },
            { "d3s_nemises_taurus_10", "" },
            { "d3s_nemises_q50_14", "" },
            { "d3s_nemises_q50_14_EX", "" },
            { "d3s_nemises_q50_14_SE", "" },
            { "d3s_nemises_q50_14_1", "" },
            { "d3s_amazing_a45_16", "" },
            { "d3s_amazing_a45_16_EX", "" },
            { "d3s_amazing_a45_16_AMG", "" }
    };
};

    class kart_shop {
        side = "civ";
        conditions = "license_civ_trucking";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "license_civ_trucking";
        vehicles[] = {
            { "d3s_zil_130_06", "" },
            { "d3s_zil_130_02 ", "" },
            { "d3s_zil_130", "" },
            { "d3s_kamaz_4350_ten2", "" },
            { "d3s_nemises_next_tent", "" },
            { "d3s_nemises_next", "" },//*
            { "d3s_kamaz_5350_tent", "" },//*
            { "d3s_nemises_zil_131", "" },//*
            { "d3s_nemises_zil_131_3", "" },//*
            { "d3s_kamaz_6350", "" },//*
            { "d3s_nemises_kraz_6315 ", "" }
        };
    };

    

    class civ_air {
        side = "civ";
        conditions = "license_civ_pilot";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "IVORY_BELL412", "" },
			{ "B_Heli_Transport_03_unarmed_F", "" },
			{ "I_Heli_Transport_02_F", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "license_civ_boat";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "C_Scooter_Transport_01_F", "" } //Apex DLC
        };
    };

    class reb_car {
        side = "civ";
        conditions = "license_civ_rebel";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "O_T_LSV_02_unarmed_F", "" } //Apex DLC
        };
    };
	
	class pmc {
        side = "civ";
        conditions = "license_civ_pmc";
        vehicles[] = {
            { "2013Tahoe_01", "" }
        };
    };

    class med_shop {
        side = "med";
        conditions = "call life_mediclevel >= 1";
        vehicles[] = {
            { "Fox_Silverado", "call life_mediclevel >= 1" },
            { "Fox_Stretcher_Ambulance", "call life_mediclevel >= 1" },
			{ "d3s_tahoe_EMS", "call life_mediclevel >= 2" },
			{ "d3s_nemises_explorer_EMS_13", "call life_mediclevel >= 4" },
            { "d3s_nemises_vklasse_17_EMS", "call life_mediclevel >= 1" },
			{ "d3s_nemises_savana_EMS", "call life_mediclevel >= 2" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_hh60j_unarmed_F", "" },
            { "ivory_b206_rescue", "" },
			{ "IVORY_BELL512_RESCUE", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "call life_coplevel > 1";
        vehicles[] = { 
            /*{ "M_CVPI", "call life_coplevel >= 1" },    
            { "M_Silverado", "call life_coplevel >= 5" }, 
            { "M_FPIS_slick", "call life_coplevel >= 3" },  
            { "M_Charger12_NEW", "call life_coplevel >= 4" }, 
			{ "M_Silverado_cab", "call life_coplevel >= 6" },
			{ "X5UC_01", "call life_coplevel >= 1" },
			{ "X5UC_05", "call life_coplevel >= 1" },
            { "X5UC_09", "call life_coplevel >= 1" },
			{ "GMCUC_01", "call life_coplevel >= 1" },
			{ "GMCUC_05", "call life_coplevel >= 1" },
			{ "GMCUC_10", "call life_coplevel >= 1" },
            { "2013TahoeUC_01", "call life_coplevel >= 1" },
            { "2013TahoeUC_05", "call life_coplevel >= 1" },
            { "2013TahoeUC_10", "call life_coplevel >= 1" },
            { "BMWM4UC_01", "call life_coplevel >= 1" },
            { "BMWM4UC_05", "call life_coplevel >= 1" },
            { "BMWM4UC_10", "call life_coplevel >= 1" }*/
            { "d3s_nemises_vklasse_17_COP", "call life_coplevel >= 2" },
            { "d3s_nemises_taurus_FPI_10", "call life_coplevel >= 2" },
			{ "d3s_charger_15_CPP", "call life_coplevel >= 3" },
            { "d3s_tahoe_PPV_2", "call life_coplevel >= 3" },
            { "d3s_cherokke_18_JPPV", "call life_coplevel >= 4" },
            { "d3s_nemises_FPIU_13", "call life_coplevel >= 5" },
            { "d3s_nemises_explorer_UNM_13", "call life_coplevel >= 4" },
			{ "d3s_tahoe_UNM", "call life_coplevel >= 4" },
            { "d3s_charger_15_CPST", "call life_coplevel >= 4" },
			{ "d3s_srthellcat_15_CPST", "call life_coplevel >= 4" },
			{ "d3s_charger_15_CPU", "call life_coplevel >= 4" }
            
        };
    };
	
	class cop_swat {
        side = "cop";
        conditions = "call life_coplevel >= 6 && license_cop_swat";
        vehicles[] = {
            { "HummerSERT_01", "call life_coplevel >= 6 && license_cop_swat" },
			{ "Abruzzi_LencoPD_01", "call life_coplevel >= 6 && license_cop_swat" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "license_cop_cAir";
        vehicles[] = {
            { "B_Heli_Light_01_F", "license_cop_cAir" },
            { "B_Heli_Transport_01_F", "license_cop_cAir" },
			{ "MELB_MH6M", "license_cop_cAir" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 100;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };
	
	class MustangPDUC_01 {
        vItemSpace = 35;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
	
	class FPIUUC_01 {
        vItemSpace = 35;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
	
	class red_charger_12_p_darkblue {
        vItemSpace = 35;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
	
	class C_hh60j_unarmed_F {
        vItemSpace = 75;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class ivory_b206_rescue {
        vItemSpace = 75;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 700;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 1000000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 1100000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 1100000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 1100000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 1100000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 150000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
	//modded
	
	//START OF POLICE VEHICLES
	
	class M_Silverado_cab { 
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
    };
	
	class M_Silverado {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

    class M_Charger12_NEW {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

    class M_FPIS_slick {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

    class M_CVPI {
        vItemSpace = 50;
        conditions = "";
        price = 2000;
        textures[] = {};
    };

    class X5UC_01 {
        vItemSpace = 50;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class X5UC_05 : X5UC_01 {};
    class X5UC_09 : X5UC_01 {};
    
    class GMCUC_01 {
        vItemSpace = 50;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class GMCUC_05 : GMCUC_01 {};
    class GMCUC_10 : GMCUC_01 {};

    class 2013TahoeUC_01 {
        vItemSpace = 50;
        conditions = "";
        price = 15000;
        textures[] = {};
    }; 

    class 2013TahoeUC_05 : 2013TahoeUC_01 {};
    class 2013TahoeUC_10 : 2013TahoeUC_01 {};

    class BMWM4UC_01 {
        vItemSpace = 50;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class BMWM4UC_05 : BMWM4UC_01 {};
    class BMWM4UC_10 : BMWM4UC_01 {};

    class Abruzzi_LencoPD_01 {
        vItemSpace = 50;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class d3s_nemises_vklasse_17_COP {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_nemises_taurus_FPI_10 {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_charger_15_CPP {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_srthellcat_15_CPST {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_charger_15_CPU {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_charger_15_CPST {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_tahoe_UNM {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_nemises_explorer_UNM_13 {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_nemises_FPIU_13 {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_cherokke_18_JPPV {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_durango_18_DDPI {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_tahoe_PPV_2 {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    //END OF POLICE VEHICLES
	
	//START OF MEDIC VEHICLES
	class A3L_Stretcher_F {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_tahoe_EMS {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_nemises_explorer_EMS_13 {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_nemises_savana_EMS {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class d3s_nemises_vklasse_17_EMS {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };
    //END OF EMS VEHICLES
	
	//START OF CIV VEHICLES
	class EvoX_05 {
        vItemSpace = 35;
        conditions = "";
        price = 100000;
        textures[] = {};
    };
	class EvoX_10 : EvoX_05 {};
    class EvoX_03 : EvoX_05 {};
    class EvoX_11 : EvoX_05 {};
    class EvoX_01 : EvoX_05 {};

	class FordMustang_10 {
        vItemSpace = 35;
        conditions = "";
        price = 70000;
        textures[] = {};
    };

	class FordMustang_03 : FordMustang_10 {};
    class FordMustang_05 : FordMustang_10 {};
    class FordMustang_11 : FordMustang_10 {};
    class FordMustang_07 : FordMustang_10 {};
    class FordMustang_06 : FordMustang_10 {};
    class FordMustang_13 : FordMustang_10 {};
    class FordMustang_01 : FordMustang_10 {};
	
	class 2013Tahoe_01 {
        vItemSpace = 35;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Subaru_03 {
        vItemSpace = 35;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Subaru_05 : Subaru_03 {};
    class Subaru_10 : Subaru_03 {};
    class Subaru_11 : Subaru_03 {};
    class Subaru_06 : Subaru_03 {};
    class Subaru_01 : Subaru_03 {};
	
	class GTR_01 {
        vItemSpace = 35;
        conditions = "";
        price = 235000;
        textures[] = {};
    };

    class GTR_05 : GTR_01 {};
    class GTR_10 : GTR_01 {};
    class GTR_03 : GTR_01 {};
	
	class Veyron_05 {
        vItemSpace = 35;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Veyron_06 {
        vItemSpace = 35;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Veyron_02 {
        vItemSpace = 35;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Veyron_03 {
        vItemSpace = 35;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Veyron_10 {
        vItemSpace = 35;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Ferrari_01 {
        vItemSpace = 35;
        conditions = "";
        price = 700000;
        textures[] = {};
    };
	
	class Ferrari_06 {
        vItemSpace = 35;
        conditions = "";
        price = 700000;
        textures[] = {};
    };
	
	class Ferrari_03 {
        vItemSpace = 35;
        conditions = "";
        price = 700000;
        textures[] = {};
    };
	
	class Ferrari_10 {
        vItemSpace = 35;
        conditions = "";
        price = 700000;
        textures[] = {};
    };
	
	class Ferrari_05 {
        vItemSpace = 35;
        conditions = "";
        price = 700000;
        textures[] = {};
    };
	
	class Lambo_05 {
        vItemSpace = 35;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
	class Lambo_10 : Lambo_05 {};
    class Lambo_03 : Lambo_05 {};
    class Lambo_07 : Lambo_05 {};
    class Lambo_06 : Lambo_05 {};
    class Lambo_01 : Lambo_05 {};
	
	class Bentley_01 {
        vItemSpace = 35;
        conditions = "";
        price = 2000000;
        textures[] = {};
    };

	class Bentley_11 : Bentley_01 {};
    class Bentley_05 : Bentley_01 {};
    class Bentley_10 : Bentley_01 {};
	
	class G65_01 {
        vItemSpace = 70;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
    class G65_11 : G65_01 {};
    class G65_10 : G65_01 {};
    class G65_03 : G65_01 {};
    class G65_05 : G65_01 {};
	
	class RS5_05 {
        vItemSpace = 35;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class RS5_10 : RS5_05 {};
    class RS5_11 : RS5_05 {};
    class RS5_01 : RS5_05 {};
	
	class Maserati_01 {
        vItemSpace = 35;
        conditions = "";
        price = 700000;
        textures[] = {};
    };

    class Maserati_11 : Maserati_01 {};
    class Maserati_10 : Maserati_01 {};
    class Maserati_05 : Maserati_01 {};
	
	class Escalade_01 {
        vItemSpace = 70;
        conditions = "";
        price = 325000;
        textures[] = {};
    };

    class Escalade_11 : Escalade_01 {};
    class Escalade_07 : Escalade_01 {};
	
	class LandRover_01 {
        vItemSpace = 70;
        conditions = "";
        price = 300000;
        textures[] = {};
    };

    class LandRover_06 : LandRover_01 {};
    class LandRover_13 : LandRover_01 {};
    class LandRover_08 : LandRover_01 {};
    class LandRover_11 : LandRover_01 {};
    class LandRover_10 : LandRover_01 {};
    class LandRover_05 : LandRover_01 {};
	
	class d3s_tahoe_ltz_08 {
        vItemSpace = 75;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
	
    class d3s_tahoe_vortec_08 : d3s_tahoe_ltz_08 {};
    class d3s_tahoe_08 : d3s_tahoe_ltz_08 {};
    class d3s_tahoe_payday : d3s_tahoe_ltz_08 {};

	class d3s_durango_18_AWD  {
        vItemSpace = 50;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class d3s_durango_18_se : d3s_durango_18_AWD  {};
    class d3s_durango_18_SRT : d3s_durango_18_AWD  {};
    class d3s_durango_18 : d3s_durango_18_AWD  {};
	
	class d3s_nemises_explorer_LT_13 {
        vItemSpace = 150;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class d3s_nemises_explorer_sport_13 : d3s_nemises_explorer_LT_13 {};
    class d3s_nemises_explorer_13 : d3s_nemises_explorer_LT_13 {};
    class d3s_nemises_explorer_se_13 : d3s_nemises_explorer_LT_13 {};
    class d3s_nemises_explorer_13_EX : d3s_nemises_explorer_LT_13 {};

    class d3s_fpace_17_p {
        vItemSpace = 35;
        conditions = "";
        price = 300000;
        textures[] = {};
    };

    class d3s_fpace_17_r : d3s_fpace_17_p {};
    class d3s_fpace_17 : d3s_fpace_17_p {};

    class d3s_cherokee_18_SRT {
        vItemSpace = 35;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class d3s_cherokee_18_LTD : d3s_cherokee_18_SRT {};
    class d3s_cherokee_18_TRCK : d3s_cherokee_18_SRT {};
    class d3s_cherokee_18 : d3s_cherokee_18_SRT {};

    class d3s_nemises_lm002_90 {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_levante_Esteso_17 {
        vItemSpace = 35;
        conditions = "";
        price = 375000;
        textures[] = {};
    };

    class d3s_levante_s_17 : d3s_levante_Esteso_17 {};
    class d3s_levante_s_17_mat : d3s_levante_Esteso_17 {};
    class d3s_levante_17 : d3s_levante_Esteso_17 {};

    class d3s_nemises_gls63amg_17 {
        vItemSpace = 35;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    class d3s_nemises_gls63amg_17_LT : d3s_nemises_gls63amg_17 {};
    class d3s_nemises_gls63amg_17_SE : d3s_nemises_gls63amg_17 {};

    class d3s_gls63amg_12 {
        vItemSpace = 35;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    class d3s_gls63amg_12_LT : d3s_gls63amg_12 {};
    class d3s_gls63amg_12_SE : d3s_gls63amg_12 {};

    class d3s_nemises_evoque_si4_16  {
        vItemSpace = 35;
        conditions = "";
        price = 375000;
        textures[] = {};
    };

    class d3s_nemises_16_se : d3s_nemises_evoque_si4_16 {};

    class d3s_nemises_kodiaq_act_17 {
        vItemSpace = 35;
        conditions = "";
        price = 300000;
        textures[] = {};
    };

    class d3s_nemises_kodiaq_sl_17 : d3s_nemises_kodiaq_act_17 {};
    class d3s_nemises_kodiaq_17 : d3s_nemises_kodiaq_act_17 {};
    class d3s_nemises_kodiaq_se_17 : d3s_nemises_kodiaq_act_17 {};

    class d3s_nemises_kodiaq_amb_17 {
        vItemSpace = 35;
        conditions = "";
        price = 300000;
        textures[] = {};
    };

    class d3s_nemises_kodiaq_sport_17 {
        vItemSpace = 35;
        conditions = "";
        price = 300000;
        textures[] = {};
    };

    class d3s_nemises_savana_05_02 {
        vItemSpace = 150;
        conditions = "";
        price = 285000;
        textures[] = {};
    };

    class d3s_nemises_savana_05_03 : d3s_nemises_savana_05_02 {};

    class d3s_nemises_vklasse_250_17 {
        vItemSpace = 160;
        conditions = "";
        price = 315000;
        textures[] = {};
    };

    class d3s_nemises_vklasse_220_17 : d3s_nemises_vklasse_250_17 {};
    class d3s_nemises_vklasse_17_SE : d3s_nemises_vklasse_250_17 {};
    class d3s_vklasse_17 : d3s_nemises_vklasse_250_17 {};

    class AlessioTouareg {
        vItemSpace = 35;
        conditions = "";
        price = 325000;
        textures[] = {};
    };

    class d3s_nemises_oks {
        vItemSpace = 35;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class d3s_crown_98 {
        vItemSpace = 35;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class d3s_nemises_taurus_dur_10 {
        vItemSpace = 35;
        conditions = "";
        price = 10000;
        textures[] = {};
    };

    class d3s_nemises_taurus_eco_10 : d3s_nemises_taurus_dur_10 {};
    class d3s_nemises_taurus_10 : d3s_nemises_taurus_dur_10 {};

    class d3s_nemises_q50_14 {
        vItemSpace = 35;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class d3s_nemises_q50_14_EX : d3s_nemises_q50_14 {};
    class d3s_nemises_q50_14_SE : d3s_nemises_q50_14 {};
    class d3s_nemises_q50_14_1 : d3s_nemises_q50_14 {};

    class d3s_amazing_a45_16 {
        vItemSpace = 35;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class d3s_amazing_a45_16_EX : d3s_amazing_a45_16 {};
    class d3s_amazing_a45_16_AMG : d3s_amazing_a45_16 {};

    class d3s_nemises_f90_18_EX {
        vItemSpace = 35;
        conditions = "";
        price = 475000;
        textures[] = {};
    };

    class d3s_srthellcat_15 {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_srthellcat_15_392 : d3s_srthellcat_15 {};
    class d3s_srthellcat_15_HELL : d3s_srthellcat_15 {};

    class d3s_boss_15_payback {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_boss_15 : d3s_boss_15_payback {};

    class d3s_giulia_16_SE {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_giulia_quad_16 : d3s_giulia_16_SE {};
    class d3s_giulia_ti_16 : d3s_giulia_16_SE {};
    class d3s_giulia_q4_16 : d3s_giulia_16_SE {};

    class d3s_nemises_f87_17 {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_nemises_f87_17_sport : d3s_nemises_f87_17 {};
    class d3s_nemises_f87_17_m : d3s_nemises_f87_17 {};

    class d3s_nemises_f80_14_EX {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_nemises_f80_14 : d3s_nemises_f80_14_EX {};
    class d3s_nemises_f80_14_GTS : d3s_nemises_f80_14_EX {};

    class Sud3s_nemises_f80_14baru_05 {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_nemises_f82_14_CE {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_nemises_f82_14_EX : d3s_nemises_f82_14_CE {};

    class d3s_amazing_f82_14_gts {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_amazing_f82_16_IND {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_amazing_f82_16_EX : d3s_amazing_f82_16_IND {};
    class d3s_amazing_f82_16 : d3s_amazing_f82_16_IND {};

    class d3s_amazing_f10_12 {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_amazing_f90_18_FE {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_amazing_f90_18_m : d3s_amazing_f90_18_FE {};

    class d3s_amazing_f10_12_EX {
        vItemSpace = 35;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class d3s_amazing_f10_12_IND : d3s_amazing_f10_12_EX {};

    class d3s_charger_15_SXT {
        vItemSpace = 35;
        conditions = "";
        price = 345000;
        textures[] = {};
    };

    class d3s_charger_15_RT : d3s_charger_15_SXT {};
    class d3s_charger_15_FnF7 : d3s_charger_15_SXT {};
    class d3s_charger_15 : d3s_charger_15_SXT {};
 
    class d3s_nemises_wrx_sti_17 {
        vItemSpace = 35;
        conditions = "";
        price = 475000;
        textures[] = {};
    };

    class d3s_amazing_ACS8_17_IND {
        vItemSpace = 35;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class d3s_amazing_ACS8_17 : d3s_amazing_ACS8_17_IND {};

    class d3s_ctsv_16 {
        vItemSpace = 35;
        conditions = "";
        price = 712000;
        textures[] = {};
    };

    class d3s_ctsv_16_1 : d3s_ctsv_16 {};
    class d3s_ctsv_16_SE : d3s_ctsv_16 {};

    class d3s_nemises_xe_15 {
        vItemSpace = 35;
        conditions = "";
        price = 735000;
        textures[] = {};
    };

    class d3s_nemises_xer_15 : d3s_nemises_xe_15 {};
    class d3s_nemises_xes_15 : d3s_nemises_xe_15 {};
    class d3s_nemises_xes_15_SE : d3s_nemises_xe_15 {};

    class d3s_nemises_is_16 {
        vItemSpace = 35;
        conditions = "";
        price = 765000;
        textures[] = {};
    };

    class d3s_nemises_is_16_SE : d3s_nemises_is_16 {};
    class d3s_nemises_is_f_16 : d3s_nemises_is_16 {};
    class d3s_nemises_is_16_1 : d3s_nemises_is_16 {};

    class d3s_ghibli_14_30 {
        vItemSpace = 35;
        conditions = "";
        price = 780000;
        textures[] = {};
    };

    class d3s_ghibli_esteso_1  : d3s_ghibli_14_30 {};
    class d3s_ghibli_14_sq4 : d3s_ghibli_14_30 {};
    class d3s_ghibli_14_s : d3s_ghibli_14_30 {};
    class d3s_ghibli_14 : d3s_ghibli_14_30 {};

    class d3s_nemises_ghibli_14_nerissimo {
        vItemSpace = 35;
        conditions = "";
        price = 780000;
        textures[] = {};
    };

    class d3s_nemises_ghinli_14_q4 : d3s_nemises_ghibli_14_nerissimo {};

    class d3s_nemises_C43_16 {
        vItemSpace = 35;
        conditions = "";
        price = 800000;
        textures[] = {};
    };

    class d3s_nemises_C63_14  : d3s_nemises_C43_16 {};
    class d3s_nemises_C63S_14_SE : d3s_nemises_C43_16 {};
    class d3s_nemises_C63S_14 : d3s_nemises_C43_16 {};

    class IVORY_PRIUS {
        vItemSpace = 35;
        conditions = "";
        price = 10000;
        textures[] = {};
    };

    class ivory_gti {
        vItemSpace = 35;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
	//END OF CIV VEHICLES
	//START OF CIV TRUCKS
	
	class d3s_zil_130_06 {
        vItemSpace = 220;
        conditions = "";
        price = 460000;
        textures[] = {};
    };
	
	class d3s_zil_130_02  {
        vItemSpace = 400;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class d3s_zil_130 {
        vItemSpace = 425;
        conditions = "";
        price = 750000;
        textures[] = {};
    };

    class d3s_kamaz_4350_ten2 {
        vItemSpace = 500;
        conditions = "";
        price = 1050000;
        textures[] = {};
    };

    class d3s_nemises_next_tent {
        vItemSpace = 525;
        conditions = "";
        price = 1150000;
        textures[] = {};
    };

    class d3s_nemises_next {
        vItemSpace = 525;
        conditions = "";
        price = 1150000;
        textures[] = {};
    };

    class d3s_kamaz_5350_tent {
        vItemSpace = 525;
        conditions = "";
        price = 1150000;
        textures[] = {};
    };

    class d3s_nemises_zil_131 {
        vItemSpace = 525;
        conditions = "";
        price = 1150000;
        textures[] = {};
    };

    class d3s_nemises_zil_131_3 {
        vItemSpace = 525;
        conditions = "";
        price = 1150000;
        textures[] = {};
    };

    class d3s_kamaz_6350 {
        vItemSpace = 525;
        conditions = "";
        price = 1150000;
        textures[] = {};
    };

    class d3s_nemises_kraz_6315 {
        vItemSpace = 550;
        conditions = "";
        price = 1250000;
        textures[] = {};
    };
    
	
	class IVORY_BELL412 {
        vItemSpace = 60;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
	};
	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 450;
        conditions = "";
        price = 8000000;
        textures[] = {};
	};
	
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 200;
        conditions = "";
        price = 2250000;
        textures[] = {};
    };

    class Fox_Silverado {
        vItemSpace = 75;
        conditions = "";
        price = 45;
        textures[] = {};
    };

    class Fox_Stretcher_Ambulance {
        vItemSpace = 0;
        conditions = "";
        price = 100;
        textures[] = {};
    };

    class BMWM4_EMS {
        vItemSpace = 0;
        conditions = "";
        price = 100;
        textures[] = {};
    };

    class EvoX_EMS {
        vItemSpace = 0;
        conditions = "";
        price = 100;
        textures[] = {};
    };

    class Escalade_EMS {
        vItemSpace = 75;
        conditions = "";
        price = 200;
        textures[] = {};
    };

    class RS5_EMS {
        vItemSpace = 75;
        conditions = "";
        price = 200;
        textures[] = {};
    };

    class LandRover_EMS {
        vItemSpace = 75;
        conditions = "";
        price = 200;
        textures[] = {};
    };

    class F150_EMS {
        vItemSpace = 75;
        conditions = "";
        price = 200;
        textures[] = {};
    };

    class FPIUEMS_01 {
        vItemSpace = 75;
        conditions = "";
        price = 200;
        textures[] = {};
    };
};
