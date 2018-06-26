/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/
class Licenses {
    //Civilian Licenses
	
	class donator1 {
        variable = "donator1";
        displayName = "STR_License_donator1";
        price = 25000;
        illegal = false;
        side = "civ";
    };
	
	class donator2 {
        variable = "donator2";
        displayName = "STR_License_donator2";
        price = 25000;
        illegal = false;
        side = "civ";
    };
	
	class donator3 {
        variable = "donator3";
        displayName = "STR_License_donator3";
        price = 25000;
        illegal = false;
        side = "civ";
    };
	
	class pmc {
        variable = "pmc";
        displayName = "STR_License_pmc";
        price = 500;
        illegal = false;
        side = "civ";
    };
	
	class president {
        variable = "president";
        displayName = "STR_License_president";
        price = 25000;
        illegal = false;
        side = "civ";
    };
	
	class doj {
        variable = "doj";
        displayName = "STR_License_doj";
        price = 25000;
        illegal = false;
        side = "civ";
    };
	
	class macdonald {
        variable = "macdonald";
        displayName = "STR_License_macdonalds";
        price = 25000;
        illegal = false;
        side = "civ";
    };
	
	class chiefjustice {
        variable = "chiefjustice";
        displayName = "STR_License_chiefjustice";
        price = 25000;
        illegal = false;
        side = "civ";
    };
	
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 3300;
        illegal = false;
        side = "civ";
    };
	
	class moonshine {
        variable = "moonshine";
        displayName = "STR_License_Moonshine";
        price = 8000;
        illegal = true;
        side = "civ";
    };	

    class boat {
        variable = "boat";
        displayName = "STR_License_Boat";
        price = 5500;
        illegal = false;
        side = "civ";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_License_Pilot";
        price = 45000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 7000;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "STR_License_Firearm";
        price = 35000;
        illegal = false;
        side = "civ";
    };
	
	class meth {
        variable = "meth";
        displayName = "STR_License_meth";
        price = 100000;
        illegal = true;
        side = "civ";
    };

    class dive {
        variable = "dive";
        displayName = "STR_License_Diving";
        price = 2000;
        illegal = false;
        side = "civ";
    };

    class home {
        variable = "home";
        displayName = "STR_License_Home";
        price = 75000;
        illegal = false;
        side = "civ";
    };

    //Processing Licenses
    class oil {
        variable = "oil";
        displayName = "STR_License_Oil";
        price = 70000;
        illegal = true;
        side = "civ";
    };

    class diamond {
        variable = "diamond";
        displayName = "STR_License_Diamond";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    class salt {
        variable = "salt";
        displayName = "STR_License_Salt";
        price = 12000;
        illegal = false;
        side = "civ";
    };

    class sand {
        variable = "sand";
        displayName = "STR_License_Sand";
        price = 14500;
        illegal = false;
        side = "civ";
    };

    class iron {
        variable = "iron";
        displayName = "STR_License_Iron";
        price = 9500;
        illegal = false;
        side = "civ";
    };

    class copper {
        variable = "copper";
        displayName = "STR_License_Copper";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    class cement {
        variable = "cement";
        displayName = "STR_License_Cement";
        price = 6500;
        illegal = false;
        side = "civ";
    };

    class medmarijuana {
        variable = "medmarijuana";
        displayName = "STR_License_Medmarijuana";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    //Illegal Licenses
    class cocaine {
        variable = "cocaine";
        displayName = "STR_License_Cocaine";
        price = 50000;
        illegal = true;
        side = "civ";
    };

    class heroin {
        variable = "heroin";
        displayName = "STR_License_Heroin";
        price = 55000;
        illegal = true;
        side = "civ";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_License_Marijuana";
        price = 50000;
        illegal = true;
        side = "civ";
    };

    class rebel {
        variable = "rebel";
        displayName = "STR_License_Rebel";
        price = 2500000;
        illegal = true;
        side = "civ";
    };
	
	class uranium {
        variable = "uranium";
        displayName = "STR_License_Uranium";
        price = 75000;
        illegal = true;
        side = "civ";
    };

    //Cop Licenses
    class cAir {
        variable = "cAir";
        displayName = "STR_License_Pilot";
        price = 0;
        illegal = false;
        side = "cop";
    };

    class cg {
        variable = "cg";
        displayName = "STR_License_CG";
        price = 0;
        illegal = false;
        side = "cop";
    };
	
	class swat {
        variable = "swat";
        displayName = "STR_License_swat";
        price = 0;
        illegal = false;
        side = "cop";
    };

    class dea {
        variable = "dea";
        displayName = "STR_License_dea";
        price = 0;
        illegal = false;
        side = "cop";
    };

    //Medic Licenses
    class mAir {
        variable = "mAir";
        displayName = "STR_License_Pilot";
        price = 0;
        illegal = false;
        side = "med";
    };
};

	class LicensesShops {
	class DMV {
		name = "STR_Shops_DMV";
		side = "civ";
        conditions = "";
        items[] = { "driver", "trucking", "boat", "dive", "pilot", "home"};
		};
	};
