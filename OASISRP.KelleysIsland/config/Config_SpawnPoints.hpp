/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {

    class Altis {
        class Civilian {
            class Kavala {
                displayName = "Kavala";
                spawnMarker = "civ_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "!license_civ_rebel";
            };

            class Athira {
                displayName = "Athira";
                spawnMarker = "civ_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = "Pyrgos";
                spawnMarker = "civ_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Sofia {
                displayName = "Sofia";
                spawnMarker = "civ_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class RebelN {
                displayName = $STR_SP_Reb_N;
                spawnMarker = "Rebelop";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };

            class RebelS {
                displayName = $STR_SP_Reb_S;
                spawnMarker = "Rebelop_1";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };

            class RebelE {
                displayName = $STR_SP_Reb_E;
                spawnMarker = "Rebelop_2";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };
        };

        class Cop {
            class Kavala {
                displayName = "Kavala HQ";
                spawnMarker = "cop_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Athira {
                displayName = "Athira HQ";
                spawnMarker = "cop_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = "Pyrgos HQ";
                spawnMarker = "cop_spawn_2";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };

            class Air {
                displayName = $STR_MAR_Police_Air_HQ;
                spawnMarker = "cop_spawn_4";
                icon = "\a3\ui_f\data\map\Markers\NATO\b_air.paa";
                conditions = "call life_coplevel >= 2 && {license_cop_cAir}";
            };

            class HW {
                displayName = $STR_MAR_Highway_Patrol;
                spawnMarker = "cop_spawn_5";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "call life_coplevel >= 3";
            };
        };

        class Medic {
            class Kavala {
                displayName = $STR_SP_EMS_Kav;
                spawnMarker = "medic_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class Athira {
                displayName = $STR_SP_EMS_Ath;
                spawnMarker = "medic_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = $STR_SP_EMS_Pyr;
                spawnMarker = "medic_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
        };
    };

    class Tanoa {

        class Civilian {
            class Georgetown {
                displayName = "Georgetown";
                spawnMarker = "civ_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Balavu {
                displayName = "Balavu";
                spawnMarker = "civ_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Lijnhaven {
                displayName = "Lijnhaven";
                spawnMarker = "civ_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class LaRochelle {
                displayName = "LaRochelle";
                spawnMarker = "civ_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Tanouka {
                displayName = "Tanouka";
                spawnMarker = "civ_spawn_5";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Oumere {
                displayName = "Ouméré";
                spawnMarker = "civ_spawn_5";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
        };

        class Cop {
            class GeorgetownHQ {
                displayName = "Georgetown Station";
                spawnMarker = "cop_spawn_1";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };

            class LaRochelleHQ {
                displayName = "LaRochelle Station";
                spawnMarker = "cop_spawn_2";
                icon = "\a3\ui_f\data\map\Markers\NATO\b_air.paa";
                conditions = "";
            };

            class LijnhavenHQ {
                displayName = "Lijnhaven Station";
                spawnMarker = "cop_spawn_3";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };

            class AirHQ {
                displayName = "Air HQ";
                spawnMarker = "cop_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
        };

        class Medic {

            class SEHospital {
                displayName = $STR_SP_EMS_SE;
                spawnMarker = "medic_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class TanoukaHospital {
                displayName = $STR_SP_EMS_Tan;
                spawnMarker = "medic_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class NEAirportHospital {
                displayName = $STR_SP_EMS_NEair;
                spawnMarker = "medic_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

        };

    };
	
	class kelleysisland {

        class Civilian {
            class kumuh {
                displayName = "Union City";
                spawnMarker = "civ_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
		
			class tepiciv {
                displayName = "Gatewood";
                spawnMarker = "civ_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class perrytonia {
                displayName = "Perrytonia";
                spawnMarker = "civ_spawn_5";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
		
			class president {
                displayName = "President House";
                spawnMarker = "president_spawn";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "license_civ_president";
            };
			
			class doj {
                displayName = "Department Of Justice";
                spawnMarker = "spawn_doj";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "license_civ_doj";
            };
			
			class pmc {
                displayName = "PMC";
                spawnMarker = "pmc_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "license_civ_pmc";
            };
        };

        class Cop {	
			class unioncop {
					displayName = "Union City Station";
					spawnMarker = "cop_spawn_1";
					icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
					conditions = "";
				};

                class lakesidecop {
					displayName = "Lakeside Station";
					spawnMarker = "cop_spawn_2";
					icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
					conditions = "";
				};
		};

        class Medic {
			class unionmed {
                displayName = "Union City Hospital";
                spawnMarker = "medic_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
        };	
	  };
	};
 };
