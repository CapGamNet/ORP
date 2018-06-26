class Lega_Plantables_Config
{
  HarvestDikCode = 219;
  //All the Seed Items, and All the ouput Items , need to be in the Virtual Items config.
  class weed
  {
    displayName = "Weed"; //display name.
    spoilChance = 0;// the chance ever 10 seconds after the plant is mature to spoil.
    nearestPlant = 2;//how far from other plants.
    startHeight = 0.187647; // z value when starts to grow
    topHeight = 1.33765; // z value when fully grown.
    timeToGrow = 4; // time in minutes to grow.
    model = "a3\Props_F_Orange\Items\Decorative\FlowerPot_01_flower_F.p3d";//Classname of the object to spawn. (I would have done simple objects with models... but arma )
    neededItems[] = {{"weedSeed",1}};// items needed for 1 of the plants to be planted/
    outputItems[] = {{"cannabis",75}};// the higher the numnber, the higher chance it will be to get this item.
    outputItemCount = 2; // how many items to give the player.
    plantingZones[] = {"weed_plant"}; // what areas do you want people to be able to plant this itme.
  };

  class corn
  {
    displayName = "Corn"; //display name.
    spoilChance = 0;// the chance ever 10 seconds after the plant is mature to spoil.
    nearestPlant = 2;//how far from other plants.
    startHeight = 0.130186; // z value when starts to grow
    topHeight = 1.63022; // z value when fully grown.
    timeToGrow = 2; // time in minutes to grow.
    model = "a3l_crops\corn.p3d";//Classname of the object to spawn. (I would have done simple objects with models... but arma )
    neededItems[] = {{"cornSeed",1}};// items needed for 1 of the plants to be planted/
    outputItems[] = {{"corn",75}};// the higher the numnber, the higher chance it will be to get this item.
    outputItemCount = 3; // how many items to give the player.
    plantingZones[] = {"corn_plant"}; // what areas do you want people to be able to plant this itme.
  };

  class wheat
  {
    displayName = "Wheat"; //display name.
    spoilChance = 0;// the chance ever 10 seconds after the plant is mature to spoil.
    nearestPlant = 2;//how far from other plants.
    startHeight = -0.00122643; // z value when starts to grow
    topHeight = 1.1788; // z value when fully grown.
    timeToGrow = 3; // time in minutes to grow.
    model = "a3l_crops\wheat.p3d";//Classname of the object to spawn. (I would have done simple objects with models... but arma )
    neededItems[] = {{"weatSeed",1}};// items needed for 1 of the plants to be planted/
    outputItems[] = {{"wheat",75}};// the higher the numnber, the higher chance it will be to get this item.
    outputItemCount = 3; // how many items to give the player.
    plantingZones[] = {"wheat_plant"}; // what areas do you want people to be able to plant this itme.
  };

  class sugarcane
  {
    displayName = "Sugarcane"; //display name.
    spoilChance = 0;// the chance ever 10 seconds after the plant is mature to spoil.
    nearestPlant = 2;//how far from other plants.
    startHeight = 0.0828161; // z value when starts to grow
    topHeight = 1.00284; // z value when fully grown.
    timeToGrow = 3; // time in minutes to grow.
    model = "b_Sugarcane_sapling_single_F";//Classname of the object to spawn. (I would have done simple objects with models... but arma )
    neededItems[] = {{"sugarcaneSeed",1}};// items needed for 1 of the plants to be planted/
    outputItems[] = {{"sugarcane",75}};// the higher the numnber, the higher chance it will be to get this item.
    outputItemCount = 2; // how many items to give the player.
    plantingZones[] = {"sugarcane_plant"}; // what areas do you want people to be able to plant this itme.
  };
  
};//A3L_Corn, A3L_Wheat, b_Sugarcane_sapling_single_F
