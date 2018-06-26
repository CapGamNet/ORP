/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw", "bandages", "corn", "wheat", "sugarcane" };
    };
	
	 class drug_1 {
        name = "STR_Item_drug1";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "meth1" };
		};
	
	class drug_2 {
        name = "STR_Item_drug2";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "meth2" };
    };
	
	class drug_3 {
        name = "STR_Item_drug3";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "meth3" };
    };
	
	class uranium {
        name = "STR_Shops_Uranium";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "uranium_refined" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator", "bandages", "morphine" };
    };

    class farmingmarket {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "weedSeed", "cornSeed", "wheatSeed", "sugarcaneSeed" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge", "bandages", "cprKit", "gpstracker", "gag", "blindfold", "ziptie", "portableCam" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge", "bandages", "cprKit", "gpstracker", "gag", "blindfold", "ziptie", "portableCam" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull" , "bandages" };
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana", "meth_processed", "cannabis" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator", "panic", "gpstrackerr", "bandages", "keycard", "portableCam" };
    };
	
	class pmc {
        name = "STR_Shops_VPMC";
        side = "civ";
        conditions = "license_civ_pmc";
        items[] = { "donuts", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "gpstracker", "bandages" };
    };
	
	class moonshine_dealer {
        name = "STR_Shops_Moonshine";
        side = "civ";
        conditions = "";
        items[] = { "alcohol_cider" };
    };
	
	class alcohol {
        name = "STR_Shops_Alcohol";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "alcohol" };
    };

    class jailjunk {
        name = "STR_Shops_jailjunk";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "junk", "metal" };
    };
	
	//THIS IS NOT A SHOP, IT IS JUST THE LIST OF ITEMS THE MARKET PULLS - IT IS IN ALPHABETICAL ORDER
	class ymarket {
		name = "STR_Shops_yMarket";
		conditions = "";
		items[] = {"apple", "blastingcharge", "boltcutter", "cannabis", "cocaine_processed", "cocaine_unprocessed", "meth_processed", "meth1", "meth2", "meth3", "coffee", "copper_refined", "copper_unrefined", "defibrillator", "defusekit", "uranium_refined", "uranium_unrefined", "diamond_cut", "diamond_uncut", "donuts", "fuelEmpty", "fuelFull", "goldbar", "heroin_processed", "heroin_unprocessed", "lockpick", "marijuana", "oil_processed", "oil_unprocessed", "peach", "pickaxe", "redgull", "salema", "spikeStrip", "storagebig", "storagesmall", "toolkit", "tbacon", "waterBottle"};
	};
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 250;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
	
	class morphine {
        variable = "morphine";
        displayName = "STR_Item_Morphine";
        weight = 2;
        buyPrice = 20;
        sellPrice = 10;
        illegal = true;
        edible = -1;
        icon = "icons\Morphine.paa";
    };

    class cprKit {
        variable = "cprKit";
        displayName = "STR_Item_CPRMediKit";
        weight = 5;
        buyPrice = 20000;
        sellPrice = 7500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defib.paa";
    };  
	
	class morphinee {
        variable = "morphinee";
        displayName = "STR_Item_Morphinee";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\Morphine.paa";
	};
	
	class keycard {
        variable = "keycard";
        displayName = "STR_Item_keycard";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = true;
        edible = -1;
        icon = "icons\ico_keycard.paa";
    };
	
	class gpstracker {
        variable = "gpstracker";
        displayName = "STR_Item_GpsTracker";
        weight = 1;
        buyPrice = 10000;
        sellPrice = 2500;
        illegal = true;
        edible = -1;
        icon = "icons\ico_gpstracker.paa";
    };

    class gpstrackerr {
        variable = "gpstrackerr";
        displayName = "STR_Item_GpsTracker";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_gpstracker.paa";
    };
	
    class ziptie {
        variable = "ziptie";
        displayName = "STR_Ziptie";
        weight = 6;
        buyPrice = 5000;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\ziptie.paa";
    };

    class gag {
        variable = "gag";
        displayName = "STR_gag";
        weight = 7;
        buyPrice = 3000;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\gag.paa";
    };

    class blindfold {
        variable = "blindfold";
        displayName = "STR_blindfold";
        weight = 7;
        buyPrice = 3500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\blindfold.paa";
    };     

    class bandages {
        variable = "bandages";
        displayName = "STR_Item_Bandages";
        weight = 2;
        buyPrice = 25;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        icon = "icons\ico_bandages.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 500;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 250;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 0;
        sellPrice = 0;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 2000;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 75000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 100000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 25000;
        sellPrice = 1100;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 50000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 75000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 5;
        buyPrice = -1;
        sellPrice = 700;
        illegal = true;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };
	
	class uranium_unrefined {
        variable = "uraniumUnrefined";
        displayName = "STR_Item_UraniumOre";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_uranium_unrefined.paa";
    };

    class uranium_refined {
        variable = "uraniumRefined";
        displayName = "STR_Item_Uranium";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_uranium_refined.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 2;
        buyPrice = -1;
        sellPrice = 375;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 375;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = 600;
        sellPrice = 450;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class weedseed {
        variable = "weedSeed";
        displayName = "STR_Item_weedseed";
        weight = 1;
        buyPrice = 70;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_weedSeed.paa";
    };

    class cornseed {
        variable = "cornSeed";
        displayName = "STR_Item_cornseed";
        weight = 1;
        buyPrice = 20;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cornSeed.paa";
    };
    class wheatseed {
        variable = "wheatSeed";
        displayName = "STR_Item_wheatseed";
        weight = 1;
        buyPrice = 25;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wheatSeed.paa";
    };
    class sugarcaneseed {
        variable = "sugarcaneSeed";
        displayName = "STR_Item_sugarcaneseed";
        weight = 1;
        buyPrice = 25;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sugarcaneSeed.paa";
    };
    class corn {
        variable = "corn";
        displayName = "STR_Item_corn";
        weight = 1;
        buyPrice = -1;
        sellPrice = 75;
        illegal = false;
        edible = -1;
        icon = "icons\ico_corn.paa";
    };
    class wheat {
        variable = "wheat";
        displayName = "STR_Item_wheat";
        weight = 1;
        buyPrice = -1;
        sellPrice = 80;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wheat.paa";
    };
    class sugarcane {
        variable = "sugarcane";
        displayName = "STR_Item_sugarcane";
        weight = 1;
        buyPrice = -1;
        sellPrice = 85;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sugarcane.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 2;
        buyPrice = -1;
        sellPrice = 200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class banana {
        variable = "banana";
        displayName = "STR_Item_Banana";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_banana.paa";
    };

    class redberry {
        variable = "redberry";
        displayName = "STR_Item_redberry";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_redberry.paa";
    };

    class yellowberry {
        variable = "yellowberry";
        displayName = "STR_Item_yellowberry";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_yellowberry.paa";
    };

    class junk {
        variable = "junk";
        displayName = "STR_Item_junk";
        weight = 2;
        buyPrice = -1;
        sellPrice = 16;
        illegal = false;
        edible = -1;
        icon = "icons\ico_junk.paa";
    };

    class metal {
        variable = "metal";
        displayName = "STR_Item_metal";
        weight = 3;
        buyPrice = -1;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironore.paa";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 1;
        buyPrice = 400;
        sellPrice = 375;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 500;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };
	
	class meth_processed {
        variable = "meth_processed";
        displayName = "STR_Item_CocaineP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = true;
        edible = -1;
        icon = "icons\ico_methP.paa";
    };
	
	class meth1 {
        variable = "meth1";
        displayName = "STR_Item_Meth1";
        weight = 1;
        buyPrice = 250;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_meth1.paa";
    };

    class meth2 {
        variable = "meth2";
        displayName = "STR_Item_Meth2";
        weight = 1;
        buyPrice = 250;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_meth2.paa";
    };

    class meth3 {
        variable = "meth3";
        displayName = "STR_Item_Meth3";
        weight = 1;
        buyPrice = 250;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_meth3.paa";
    };
	
	class alcohol {
        variable = "alcohol";
        displayName = "STR_Item_Alcohol";
        weight = 1;
        buyPrice = 50;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\alcohol.paa";
    };
	
	class alcohol_cider {
        variable = "alcohol_cider";
        displayName = "STR_Item_Cider_Alcohol";
        weight = 1;
        buyPrice = -1;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        icon = "icons\applecider.paa";
    };

    class portableCam {
        variable = "portableCam";
        displayName = "STR_Item_Portcamera";
        weight = 5;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_portableCamera.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 150;
        sellPrice = 20;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };
	
	class waterfree {
        variable = "waterfree";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 9;
        sellPrice = 8;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 70;
        sellPrice = 65;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 25;
        sellPrice = 10;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 45;
        sellPrice = 30;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 30;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 50;
        sellPrice = 35;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 35;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 55;
        sellPrice = 40;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 85;
        sellPrice = 75;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 35;
        sellPrice = 30;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 60;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 80;
        sellPrice = 65;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 300;
        sellPrice = 250;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };
	
	//New Scripts
	 class panic {
        variable = "panic";
        displayName = "STR_Item_Panic";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_panic.paa";
    };
};
