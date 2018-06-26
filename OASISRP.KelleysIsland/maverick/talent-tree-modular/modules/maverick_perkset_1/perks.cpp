// -- Weapon related perks
class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Recoil Compensation";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-5% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Recoil Compensation 2";
	requiredPerkPoints = 6;
	requiredLevel = 8;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Level 8 Required, 6 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-10% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Recoil Compensation 3";
	requiredPerkPoints = 7;
	requiredLevel = 12;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Level 12 Required, 7 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-20% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Paycheck
class perk_paycheck_1 {
	displayName = "Paycheck";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+25% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_2 {
	displayName = "Paycheck 2";
	requiredPerkPoints = 3;
	requiredLevel = 5;
	requiredPerk = "perk_paycheck_1";
	subtitle = "Level 5 Required, 3 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+50% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_3 {
	displayName = "Paycheck 3";
	requiredPerkPoints = 6;
	requiredLevel = 10;
	requiredPerk = "perk_paycheck_2";
	subtitle = "Level 10 Required, 6 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+100% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Faster processing
class perk_processing_1 {
	displayName = "Processing Speed";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+10% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_2 {
	displayName = "Processing Speed 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_processing_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+15% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_3 {
	displayName = "Processing Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 13;
	requiredPerk = "perk_processing_2";
	subtitle = "Level 13 Required, 4 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+25% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- Faster lockpicking
class perk_locksmith_1 {
	displayName = "Locksmith";
	requiredPerkPoints = 5;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Required, 5 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+10% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_2 {
	displayName = "Locksmith 2";
	requiredPerkPoints = 6;
	requiredLevel = 10;
	requiredPerk = "perk_locksmith_1";
	subtitle = "Level 10 Required, 6 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+15% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_3 {
	displayName = "Locksmith 3";
	requiredPerkPoints = 4;
	requiredLevel = 12;
	requiredPerk = "perk_locksmith_2";
	subtitle = "Level 12 Required, 4 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+25% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- Faster Repair
class perk_repair_1 {
	displayName = "Mechanic";
	requiredPerkPoints = 5;
	requiredLevel = 1;
	requiredPerk = "";
	subtitle = "Level 1 Required, 5 Perk Points";
	description = "Learn to increase the speed You repair vehicles<br/><br/><t color='#10FF45'>+10% faster</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_repair_2 {
	displayName = "Mechanic 2";
	requiredPerkPoints = 6;
	requiredLevel = 3;
	requiredPerk = "perk_repair_1";
	subtitle = "Level 3 Required, 6 Perk Points";
	description = "Learn to increase the speed You repair vehicles<br/><br/><t color='#10FF45'>+30% faster</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_repair_3 {
	displayName = "Mechanic 3";
	requiredPerkPoints = 5;
	requiredLevel = 6;
	requiredPerk = "perk_repair_2";
	subtitle = "Level 6 Required, 5 Perk Points";
	description = "Learn to increase the speed You repair vehicles<br/><br/><t color='#10FF45'>+50% faster</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Faster Repair
class perk_revive_1 {
	displayName = "Revive Speed";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to increase the speed You repair vehicles<br/><br/><t color='#10FF45'>+10% faster</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_reviveSpeed_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_revive_2 {
	displayName = "Revive Speed 2";
	requiredPerkPoints = 6;
	requiredLevel = 7;
	requiredPerk = "perk_revive_1";
	subtitle = "Level 7 Required, 6 Perk Points";
	description = "Learn to increase the speed You repair vehicles<br/><br/><t color='#10FF45'>+30% faster</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_reviveSpeed_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_revive_3 {
	displayName = "Revive Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 10;
	requiredPerk = "perk_revive_2";
	subtitle = "Level 10 Required, 4 Perk Points";
	description = "Learn to increase the speed You Revive <br/><br/><t color='#10FF45'>+50% faster</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_reviveSpeed_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- mine 
class perk_mine_1 {
	displayName = "Miner";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to increase the amount of materials you mine<br/><br/><t color='#10FF45'>+1 Amount</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_mineSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_mine_2 {
	displayName = "Miner 2";
	requiredPerkPoints = 6;
	requiredLevel = 7;
	requiredPerk = "perk_mine_1";
	subtitle = "Level 7 Required, 6 Perk Points";
	description = "Learn to increase the amount of materials you mine<br/><br/><t color='#10FF45'>+2 Amount</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_mineSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_mine_3 {
	displayName = "Miner 3";
	requiredPerkPoints = 5;
	requiredLevel = 9;
	requiredPerk = "perk_mine_2";
	subtitle = "Level 9 Required, 5 Perk Points";
	description = "Learn to increase the amount of materials you mine<br/><br/><t color='#10FF45'>+3 Amount</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_mineSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- Faster Gather
class perk_gather_1 {
	displayName = "Farmer";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to increase the amount of materials you pick up<br/><br/><t color='#10FF45'>+2 Amount</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatherSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_gather_2 {
	displayName = "Farmer 2";
	requiredPerkPoints = 6;
	requiredLevel = 7;
	requiredPerk = "perk_gather_1";
	subtitle = "Level 7 Required, 6 Perk Points";
	description = "Learn to increase the amount of materials you pick up<br/><br/><t color='#10FF45'>+3 Amount</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatherSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_gather_3 {
	displayName = "Farmer 3";
	requiredPerkPoints = 5;
	requiredLevel = 10;
	requiredPerk = "perk_gather_2";
	subtitle = "Level 10 Required, 5 Perk Points";
	description = "Learn to increase the amount of materials you pick up<br/><br/><t color='#10FF45'>+4 Amount</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatherSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};