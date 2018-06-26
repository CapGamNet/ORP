/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "EF_HM_B1", "", 200, "" },
			{ "EF_HM_BL1", "", 200, "" },
			{ "EF_HM_OD1", "", 200, "" },
			{ "EF_HM_SG1", "", 200, "" },
			{ "EF_HM_PP1", "", 200, "" },
			{ "EF_HM_B2", "", 230, "" },
			{ "EF_HM_BL2", "", 230, "" },
			{ "EF_HM_OD2", "", 230, "" },
			{ "EF_HM_SG2", "", 230, "" },
			{ "EF_HM_PP2", "", 230, "" },
			{ "EF_HMARMY_1", "", 250, "" },
			{ "EF_HMARMY_2", "", 250, "" },
			{ "EF_MKJKT", "", 320, "" },
			{ "EF_MKJKT2", "", 320, "" },
			{ "EF_M_jkt2_2", "", 500, "" },
			{ "EF_M_jkt2_22", "", 500, "" },
			{ "EF_M_jkt1_2", "", 500, "" },
			{ "EF_M_jkt2_3", "", 500, "" },
			{ "EF_M_jkt2_32", "", 500, "" },
			{ "EF_M_jkt1_3", "", 500, "" },
			{ "EF_M_jkt32_2", "", 500, "" },
			{ "EF_M_jkt2_4", "", 500, "" },
			{ "EF_M_jkt4", "", 650, "" },
			{ "EF_M_jkt3", "", 500, "" },
			{ "EF_M_jkt42", "", 650, "" },
			{ "EF_M_jkt32", "", 500, "" },
			{ "EF_HM_LPBPS", "", 300, "" },
			{ "EF_HM_LPBP", "", 300, "" },
			{ "EF_HM_LPBR", "", 300, "" },
			{ "EF_HM_LPBW", "", 300, "" },
			{ "EF_HM_LPB", "", 300, "" },
			{ "EF_HM_LPBL", "", 300, "" },
			{ "EF_HM_LPBPS2", "", 300, "" },
			{ "EF_HM_LPBP2", "", 300, "" },
			{ "EF_HM_LPBR2", "", 300, "" },
			{ "EF_HM_LPBW2", "", 300, "" },
			{ "EF_HM_LPB2", "", 300, "" },
			{ "EF_HM_LPBL2", "", 300, "" },
			{ "EF_MX1", "", 280, "" },
			{ "A3L_Dude_Outfit", "", 430, "" },
			{ "A3L_Farmer_Outfit", "", 320, "" },
			{ "TRYK_U_B_PCUHsW", "Anti Radioactive", 50000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" },
			{ "KA_MCU", "Anti Radioactive", 20000, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "invisible_assaultpack", "", 2500, "" },
			{ "invisible_fieldpack", "", 4500, "" },
            { "invisible_carryall", "", 6000, "" },
            { "invisible_bergen", "", 9500, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
			//Misc
			{ "fto_uni", "F.T.O Uniform", 0, "call life_coplevel >= 4" },
			{ "U_B_HeliPilotCoveralls", "Pilot Coveralls", 0, "call life_coplevel >= 3" },
			//DOC
            { "jamie_corrections", "D.O.C Cadet Uniform", 0, "call life_coplevel >= 1" },
            { "A3L_EC_COFC", "D.O.C Officer Uniform", 0, "call life_coplevel >= 2" },
			{ "A3L_EC_CCPL", "D.O.C Corporal Uniform", 0, "call life_coplevel >= 3" },
			{ "A3L_EC_CSGT", "D.O.C Sergeant Uniform", 0, "call life_coplevel >= 4" },
			{ "A3L_EC_CLT", "D.O.C Asst. Warden Uniform", 0, "call life_coplevel >= 5" },
			{ "A3L_EC_CCPT", "D.O.C Warden Uniform", 0, "call life_coplevel >= 6" },
			//Patrol
            { "A3L_EC_SOOFC", "Patrol Officer Uniform", 0, "call life_coplevel >= 2" },
			{ "A3L_EC_SOCPL", "Patrol Corporal Uniform", 0, "call life_coplevel >= 3" },
			{ "A3L_EC_SOSGT", "Patrol Sergeant Uniform", 0, "call life_coplevel >= 4" },
			{ "A3L_EC_SOLT", "Patrol Lieutenant Uniform", 0, "call life_coplevel >= 5" },
			{ "A3L_EC_SOCPT", "Patrol Captain Uniform", 0, "call life_coplevel >= 6" },
			//State Police
			{ "A3L_EC_HPOFC", "State Police Officer Uniform", 0, "call life_coplevel >= 2" },
			{ "A3L_EC_HPCPL", "State Police Corporal Uniform", 0, "call life_coplevel >= 3" },
			{ "A3L_EC_HPSGT", "State Police Sergeant Uniform", 0, "call life_coplevel >= 4" },
			{ "A3L_EC_HPLT", "State Police Lieutenant Uniform", 0, "call life_coplevel >= 5" },
			{ "A3L_EC_HPCPT", "State Police Captain Uniform", 0, "call life_coplevel >= 6" },
			//IA
			{ "TRYK_SUITS_BR_F", "IA Agent Suit", 0, "call life_coplevel >= 3" },
			{ "TRYK_SUITS_BLK_F", "IA Command Suit", 0, "call life_coplevel >= 5" },
			//Command
			{ "A3L_EC_SODS", "Undersheriff Uniform", 0, "call life_coplevel >= 7" },
			{ "A3L_EC_SOSHERIFF", "Sheriff Uniform", 0, "call life_coplevel >= 8" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "jamie_pcapcorrections", "Cadet Cap", 0, "call life_coplevel >= 1" }, //Cadet
            { "TRYK_H_woolhat", "", 0, "call life_coplevel >= 2" },
            { "TRYK_R_CAP_BLK", "", 0, "call life_coplevel >= 2" }, 
            { "TRYK_r_cap_blk_Glasses", "", 0, "call life_coplevel >= 2" },
            { "TRYK_H_headsetcap_blk_Glasses", "", 0, "call life_coplevel >= 2" },
            { "jamie_pcapgreen2", "", 0, "call life_coplevel >= 2" },
            { "jamie_pcapgreen", "", 0, "call life_coplevel >= 2" },
			{ "jamie_pcapblack", "", 0, "call life_coplevel >= 2" },
			{ "jamie_pcapblue2", "", 0, "call life_coplevel >= 2" },
			{ "jamie_pcapblue", "", 0, "call life_coplevel >= 2" },
			{ "M_sheriffhat", "State Police Hat", 0, "call life_coplevel >= 2" },
			{ "H_CrewHelmetHeli_O", "Pilot Helmet", 0, "call life_coplevel >= 3" },
            { "H_Beret_Colonel", "State Command Beret", 0, "call life_coplevel >= 7" } //Undersheriff & Sheriff
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "call life_coplevel >= 1" },
            { "G_Aviator", "", 0, "call life_coplevel >= 1" },
            { "G_Spectacles", "", 0, "call life_coplevel >= 1" },
            { "G_Squares", "", 0, "call life_coplevel >= 1" },
            { "KA_MCU", "Gas Mask", 0, "call life_coplevel >= 1" },
            { "G_Bandanna_blk", "", 0, "call life_coplevel >= 1" },
			{ "G_Bandanna_aviator", "", 0, "call life_coplevel >= 1" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "call life_coplevel >= 1" },
			{ "vest_pilot_combat", "Pilot Vest", 0, "call life_coplevel >= 3" },
			//DOC
            { "jamie_reflective", "D.O.C Cadet Vest", 0, "call life_coplevel >= 1" },
			{ "jamie_corrections_vest", "D.O.C Vest", 0, "call life_coplevel >= 2" },
			{ "DOC_Vest_Threat_Fix", "D.O.C Code Red Vest", 0, "call life_coplevel >= 2" },	
			//Sheriff's Office
			{ "TRYK_V_tacv1_SHERIFF_BK", "Sheriff's Office Patrol Vest", 0, "call life_coplevel >= 2" },
			{ "highthreatvestblack_Fix", "Sheriff's Office Code Red Vest", 0, "call life_coplevel >= 2" },
			//IA
			{ "EF_SH_BK", "IA Shoulder Holster", 0, "call life_coplevel >= 3" },
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "call life_coplevel >= 1" },
            { "invisible_carryall", "Invisible Backpack", 0, "call life_coplevel >= 1" }
        };
    };

    class swat {
        title = "STR_Shops_swat";
        conditions = "license_cop_swat";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "Sheriff's Office Wetsuit", 0, "call life_coplevel >= 3" },
            { "herpSERT1", "S.W.A.T Non-Combat Uniform", 0, "call life_coplevel >= 3" },
			{ "herpSERT2", "S.W.A.T Non-Combat Lieutenant Uniform", 0, "call life_coplevel >= 5" },
			{ "herpSERT3", "S.W.A.T Non-Combat Captain Uniform", 0, "call life_coplevel >= 6" },
			{ "CG_SERT3", "S.W.A.T Black Combat Uniform", 0, "call life_coplevel >= 3" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "CG_sert_H3", "S.W.A.T Black Combat Helmet", 0, "call life_coplevel >= 3" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "TRYK_kio_balaclava_BLK", "", 0, "call life_coplevel >= 3" }, //S.W.A.T & D.E.A Only
            { "TRYK_kio_balaclavas", "", 0, "call life_coplevel >= 3" }, //S.W.A.T & D.E.A Only
            { "TRYK_kio_balaclava_BLK_ear", "", 0, "call life_coplevel >= 3" }, //S.W.A.T & D.E.A Only
            { "TRYK_kio_balaclava_ear", "", 0, "call life_coplevel >= 3" }, //S.W.A.T & D.E.A Only
            { "TRYK_kio_balaclava_ESS", "", 0, "call life_coplevel >= 3" }, //S.W.A.T & D.E.A Only
            { "DIVER_MASK", "", 0, "call life_coplevel >= 3" } //S.W.A.T & D.E.A Only
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "RECYCLEUR_FULL_TL", "Recycleur", 0, "call life_coplevel >= 3" },
			{ "TRYK_V_tacv1LP_BK", "S.W.A.T Patrol Vest", 0, "call life_coplevel >= 3" },
            { "SWATvest1", "S.W.A.T Black Combat Vest", 0, "call life_coplevel >= 3" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "invisible_bergen", "Large Invisible Backpack", 0, "call life_coplevel >= 3" },
            { "invisible_carryall", "Invisible Backpack", 0, "call life_coplevel >= 1" }
        };
    };

    class dea {
        title = "STR_Shops_dea";
        conditions = "license_cop_dea";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_B_Wetsuit", "Sheriff's Office Wetsuit", 0, "call life_coplevel >= 4" },
			{ "unif_Ghillie_Overall_dst", "Desert Ghillie", 0, "call life_coplevel >= 4" },
			{ "unif_Ghillie_Overall_Jung", "Woodland Ghillie", 0, "call life_coplevel >= 4" },
			{ "TRYK_U_B_BLK", "D.E.A Black Uniform", 0, "call life_coplevel >= 4" },
			{ "EF_suit_6", "D.E.A Agent Suit", 0, "call life_coplevel >= 4" },
			{ "TRYK_U_B_ARO2_CombatUniform", "D.E.A Woodland Uniform", 0, "call life_coplevel >= 4" },
			{ "TRYK_U_B_BLK", "D.E.A Black Uniform", 0, "call life_coplevel >= 4" },
			{ "TRYK_U_B_Woodland", "D.E.A Traine Uniform", 0, "call life_coplevel >= 4" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "TRYK_H_Booniehat_AOR2", "D.E.A Woodland Bonnie", 0, "call life_coplevel >= 4" }, //D.E.A Hat
			{ "TRYK_H_PASGT_BLK", "D.E.A Black Helmet", 0, "call life_coplevel >= 4" } //D.E.A Helmet
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "TRYK_kio_balaclava_BLK", "", 0, "call life_coplevel >= 3" }, //S.W.A.T & D.E.A Only
            { "TRYK_kio_balaclavas", "", 0, "call life_coplevel >= 3" }, //S.W.A.T & D.E.A Only
            { "TRYK_kio_balaclava_BLK_ear", "", 0, "call life_coplevel >= 3" }, //S.W.A.T & D.E.A Only
            { "TRYK_kio_balaclava_ear", "", 0, "call life_coplevel >= 3" }, //S.W.A.T & D.E.A Only
            { "TRYK_kio_balaclava_ESS", "", 0, "call life_coplevel >= 3" }, //S.W.A.T & D.E.A Only
            { "DIVER_MASK", "", 0, "call life_coplevel >= 3" } //S.W.A.T & D.E.A Only
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "TAC_PBDFG2CPDEA_RG_1", "D.E.A Woodland Light Vest", 0, "call life_coplevel >= 4" },
			{ "TRYK_V_tacv1LC_SRF_OD", "D.E.A Woodland Heavy Vest", 0, "call life_coplevel >= 4" },
			{ "RECYCLEUR_FULL_TL", "Recycleur", 0, "call life_coplevel >= 4" },
			{ "TRYK_V_tacv1LC_SRF_BK", "D.E.A Black Heavy Vest", 0, "call life_coplevel >= 4" },
			{ "TAC_PBDFG2CPDEA_B_1", "D.E.A Black Light Vest", 0, "call life_coplevel >= 4" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "invisible_bergen", "Large Invisible Backpack", 0, "call life_coplevel >= 4" },
			{ "COS_PARACHUTE", "Tec Parachute", 0, "call life_coplevel >= 4" },
            { "invisible_carryall", "Invisible Backpack", 0, "call life_coplevel >= 1" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 1000, "" },
			{ "U_O_Wetsuit", "", 1000, "" },
			{ "U_I_Wetsuit", "", 1000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_B_Diving", "", 400, "" },
			{ "G_O_Diving", "", 400, "" },
			{ "G_I_Diving", "", 400, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" },
			{ "V_RebreatherIR", "", 5000, "" },
			{ "V_RebreatherIA", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "ranger_uni", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "EF_M_jkt2", "", 1500, "" },
			{ "EF_M_jkt22", "", 1500, "" },
			{ "EF_M_jkt1", "", 1500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
	
	class doj {
        title = "STR_MAR_Lawyer_Store";
        conditions = "license_civ_doj || license_civ_chiefjustice";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "TRYK_SUITS_BR_F","Lawyer Suit", 0, "" },
			{ "TRYK_SUITS_BLK_F", "Judge Suit", 0, "" },
			{ "HITMAN_47_SUIT", "Chief Of Justice Suit", 0, "license_civ_chiefjustice" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
	
	class president {
        title = "STR_MAR_president_Store";
        conditions = "license_civ_president";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "TRYK_SUITS_BLK_F", "President Suit", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
	
    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			//Added in by J.Stanely EMS chief Added in ranks
			//Volunteer = 1
			{ "CG_EMS1","ECMS: Volunteer", 0, "call life_mediclevel >= 1" },
			//Academy Student = 2
			{ "CG_EMS2","ECMS: Academy Student", 0, "call life_mediclevel >= 2" },
			{ "EF_MKJKT_EMS","", 0, "call life_mediclevel >= 2" },
			//EMT = 3
			{ "CG_EMS3","ECMS: EMT", 0, "call life_mediclevel >= 3" },
			{ "EF_M_EMS_U","", 0, "call life_mediclevel >= 3" },
			{ "ALRP_EMS_SEARCH","ECMS S&R", 0, "call life_mediclevel >= 3" },
			{ "CG_EMS9","ECMS Wetsuit", 0, "call life_mediclevel >= 3" },
			{ "U_B_HeliPilotCoveralls","ECMS Pilot", 0, "call life_mediclevel >= 3" },
			{ "EF_MKJKT_EMS2","ECMS EMS Hoodie", 0, "call life_mediclevel >= 3" },
            { "ALRP_EMS_SEARCH","ECMS Search and Rescue", 0, "call life_mediclevel >= 3" },
            { "CG_EMS7","ECMS Search and Rescue", 0, "call life_mediclevel >= 3" },
            { "CG_EMS10","ECMS Rapid Response", 0, "call life_mediclevel >= 3" },
			//Paramedic = 4
			{ "ALRP_EMS_MAJOR","ECMS:Paramedic", 0, "call life_mediclevel >= 4" },
            { "CG_EMS5","ECMS:Paramedic uniform #2", 0, "call life_mediclevel >= 4" },
			//Lieutenant = 5 access to FTO
			{ "ALRP_FTO_Captains","ECMS Field Training EMT", 0, "call life_mediclevel >= 5" },
			//Captain = 6 Access to IA/HR
			{ "ALRP_IAUni_1","ECMS Internal Affairs Uniform", 0, "call life_mediclevel >= 6" },
			{ "ALRP_IA_Sweater","ECMS Internal Affairs Sweater", 0, "call life_mediclevel >= 6" },
            { "ALRP_HRCMDUNI_1","ECMS Human Resources", 0, "call life_mediclevel >= 6" },
			//Battalion Chief = 7
			{ "ALRP_EMSHCUni_2","High Command Uniform", 0, "call life_mediclevel >= 7" },
			{ "ALRP_EMS_HighCommandSweater","High Command Uniform Sweater", 0, "call life_mediclevel >= 7" }
			//ECMS Chief = 8
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "H_CrewHelmetHeli_O","ECMS Pilot Helmet", 0, "call life_mediclevel >= 2" },
            { "EF_Mcap_EMSB","ECMS Hat", 0, "call life_mediclevel >= 1" },
            { "PROTECH","ECMS Martial Law", 0, "call life_mediclevel >= 1" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Aviator","", 0, "call life_mediclevel >= 1" },
			{ "G_Bandanna_blk","", 0, "call life_mediclevel >= 1" },
			{ "KA_MCU","Code Red Gas Mask", 0, "call life_mediclevel >= 1" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_TacVestIR_blk","ECMS Pilot Vest", 0, "call life_mediclevel >= 2" },
			//FTO/HR/Highcommand Vests 5/8
			{ "ALRP_FTO_CAPTAIN","FTO Vest", 0, "call life_mediclevel >= 5" },
			{ "ALRP_EMSIA1_vest","Internal Affairs Vest", 0, "call life_mediclevel >= 5" },
            { "ALRP_EMSIA1ALRP_HRVest_vest","human Rescoures", 0, "call life_mediclevel >= 6" },
			{ "ALRP_EMSHC1_vest","High Command Vest", 0, "call life_mediclevel >= 7" },
            { "V_RebreatherB_S","Rebrether For S&R", 0, "call life_mediclevel >= 3" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "TRYK_B_Belt_BLK","", 0, "" },
			{ "TRYK_B_Medbag_BK","", 0, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_BG_Guerrilla_6_1", "", 6000, "" },
			{ "U_BG_Guerilla1_1", "", 6000, "" },
			{ "U_BG_Guerilla2_2", "", 6000, "" },
			{ "U_BG_Guerilla2_1", "", 6000, "" },
			{ "U_BG_Guerilla2_3", "", 6000, "" },
			{ "U_BG_Guerilla3_1", "", 6000, "" },
			{ "TRYK_U_B_PCUHsW3nh", "", 8000, "" },
			{ "TRYK_U_B_PCUHsW3", "", 8000, "" },
			{ "TRYK_U_B_BLKOCP_CombatUniform", "", 9000, "" },
			{ "TRYK_U_B_BLKOCP_R_CombatUniformTshirt", "", 9000, "" },
			{ "TRYK_U_B_BLKTAN_CombatUniform", "", 9000, "" },
			{ "TRYK_U_B_BLKTANR_CombatUniformTshirt", "", 9000, "" },
			{ "TRYK_U_B_ODTAN_CombatUniform", "", 9000, "" },
			{ "TRYK_U_B_ODTANR_CombatUniformTshirt", "", 9000, "" },
			{ "TRYK_B_USMC_R", "", 12000, "" },
			{ "TRYK_B_USMC_R_ROLL", "", 12000, "" },
			{ "TRYK_U_B_ODTAN", "", 12000, "" },
			{ "TRYK_U_B_ODTAN_Tshirt", "", 12000, "" },
			{ "TRYK_U_B_ARO1_CBR_CombatUniform", "", 12000, "" },
			{ "TRYK_U_B_ARO1_CBR_R_CombatUniform", "", 12000, "" },
			{ "U_I_FullGhillie_sard", "", 35000, "" },
			{ "U_I_FullGhillie_lsh", "", 35000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "H_Beret_02", "", 2500, "" },
            { "TRYK_H_Booniehat_3CD", "", 2000, "" },
            { "TRYK_H_Booniehat_AOR1", "", 2000, "" },
            { "TRYK_H_Booniehat_AOR2", "", 2000, "" },
            { "TRYK_H_Booniehat_CC", "", 2000, "" },
            { "TRYK_H_Booniehat_MARPAT_Desert", "", 2000, "" },
			{ "TRYK_H_Booniehat_MARPAT_WOOD", "", 2000, "" },
            { "TRYK_H_Booniehat_JSDF", "", 2000, "" },
            { "TRYK_H_Booniehat_WOOD", "", 2000, "" },
            { "TRYK_H_AOR1", "", 17000, "" },
            { "TRYK_H_AOR2", "", 17000, "" },
			{ "TRYK_H_GR", "", 17000, "" },
			{ "TRYK_H_Helmet_3C", "", 14000, "" },
			{ "TRYK_H_Helmet_CC", "", 14000, "" },
			{ "TRYK_H_Helmet_MARPAT_Desert", "", 14000, "" },
			{ "TRYK_H_Helmet_MARPAT_Desert2", "", 14000, "" },
			{ "TRYK_H_Helmet_MARPAT_Wood", "", 14000, "" },
			{ "TRYK_H_Helmet_WOOD", "", 14000, "" },
			{ "TRYK_H_Helmet_JSDF", "", 14000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Aviator", "", 300, "" },
			{ "G_Bandanna_aviator", "", 500, "" },
			{ "G_Bandanna_blk", "", 200, "" },
			{ "G_Bandanna_beast", "", 200, "" },
			{ "G_Bandanna_khk", "", 200, "" },
			{ "G_Bandanna_oli", "", 200, "" },
			{ "G_Bandanna_shades", "", 350, "" },
			{ "G_Bandanna_sport", "", 350, "" },
			{ "G_Bandanna_tan", "", 200, "" },
			{ "G_Spectacles", "", 250, "" },
			{ "shemaghface_od", "", 1500, "" },
			{ "shemaghface_tan", "", 1500, "" },
			{ "KA_MCU", "Gas Mask", 20000, "" },
			{ "TRYK_kio_balaclava_BLK", "", 2000, "" },
			{ "TRYK_kio_balaclava_BLK_ear", "", 2000, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "TRYK_V_Bulletproof_BL", "", 20000, "" },
			{ "TRYK_V_Bulletproof_BLK", "", 20000, "" },
			{ "TRYK_V_Bulletproof", "", 20000, "" },
			{ "TRYK_V_PlateCarrier_blk_L", "", 40000, "" },
			{ "TAC_V_tacv10_BK", "", 50000, "" },
			{ "TRYK_V_tacv10_BK", "", 35000, "" },
			{ "TRYK_V_tacv10_OD", "", 35000, "" },
			{ "TAC_V_tacv10_OD", "", 50000, "" },
			{ "TRYK_V_tacv10_TN", "", 35000, "" },
			{ "TAC_V_tacv10_TN", "", 50000, "" },
			{ "TRYK_V_tacSVD_BK", "", 34000, "" },
			{ "TRYK_V_tacSVD_OD", "", 34000, "" },
			{ "TRYK_V_tacv1M_BK", "", 35000, "" },
			{ "TRYK_V_tacv1_BK", "", 34000, "" },
			{ "TRYK_V_tacv1_CY", "", 34000, "" },
			{ "TRYK_V_tacv1", "", 34000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Parachute", "", 4500, "" },
			{ "TRYK_B_AssaultPack_MARPAT_Desert", "", 4000, "" },
			{ "TRYK_B_AssaultPack_MARPAT_Wood", "", 4000, "" },
			{ "TRYK_B_AssaultPack_Type2camo", "", 4000, "" },
			{ "TRYK_B_AssaultPack_UCP", "", 4000, "" },
			{ "TRYK_B_Coyotebackpack_BLK", "", 5000, "" },
			{ "TRYK_B_Coyotebackpack", "", 5000, "" },
			{ "TRYK_B_Coyotebackpack_OD", "", 5000, "" },
			{ "TRYK_B_Kitbag_Base_JSDF", "", 5200, "" },
			{ "TRYK_B_Carryall_JSDF", "", 6000, "" },
			{ "TRYK_B_Carryall_wood", "", 6000, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
	
	class donator1 {
        title = "STR_Shops_donator1";
        conditions = "license_civ_donator1";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
	
	class donator2 {
        title = "STR_Shops_donator2";
        conditions = "license_civ_donator2";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
	
	class donator3 {
        title = "STR_Shops_donator3";
        conditions = "license_civ_donator3";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
	
	class pmc {
        title = "STR_Shops_pmc";
        conditions = "license_civ_pmc";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "TRYK_shirts_DENIM_BK", "", 0, "" },
			{ "TRYK_shirts_DENIM_BWH", "", 0, "" },
			{ "TRYK_shirts_DENIM_od", "", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "TRYK_H_headsetcap_blk_Glasses", "", 0, "" },
			{ "TRYK_ESS_CAP_OD", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "shemagh_looseodBG", "", 0, "" },
			{ "shemagh_loosetan", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "TRYK_V_ArmorVest_Delta", "", 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
