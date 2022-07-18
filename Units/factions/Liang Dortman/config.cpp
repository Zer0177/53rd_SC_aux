class cfgPatches
{
  class 53rd_Liang_Dortman
  {
    units[]={"53rd_Crewman","53rd_Breacher","53rd_Marksman","53rd_Grenadier","53rd_Rifleman","53rd_M12_LRV_MG","53rd_M12_APC","53rd_M808B_Scorpion_MBT","53rd_M12_FAV","53rd_D77H_TCI_Pelican"};
    weapons[]={"53rd_OPTRE_M7","53rd_OPTRE_M45","53rd_OPTRE_M393_DMR","53rd_OPTRE_M319n","53rd_53rd_MA37"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","OPTRE_Weapons_Items","OPTRE_Weapons_MG","OPTRE_UNSC_Units_ONI","LM_OPCAN_UNSCMC","OPTRE_Weapons_Shotgun","OPTRE_Weapons_DMR","OPTRE_Weapons_GL","black_body"};
  };
};

class cfgFactionClasses
{
  class 53rd_Liang_Dortman
  {
    icon="";
    displayName="Liang Dortman";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class OPTRE_M7;
  class OPTRE_M45;
  class OPTRE_M393_DMR;
  class OPTRE_M319n;
  class 53rd_MA37;

  class 53rd_OPTRE_M7: OPTRE_M7
  {
    displayName="M7/Caseless SMG";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_OPTRE_M45: OPTRE_M45
  {
    displayName="M45 Tactical Shotgun";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_OPTRE_M393_DMR: OPTRE_M393_DMR
  {
    displayName="M393 DMR";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_OPTRE_M319n: OPTRE_M319n
  {
    displayName="M319N Individual Grenade Launcher";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_53rd_MA37: 53rd_MA37
  {
    displayName="[53rd] MA37A";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class LM_OPCAN_UNSCMC_AutoRifleman_INF;
  class B_CombinationUnitRespirator_01_F;
  class LM_OPCAN_UNSCMC_Assaultman_INF;
  class LM_OPCAN_UNSCMC_Breacher_INF;
  class LM_OPCAN_UNSCMC_RTO_INF;
  class LM_OPCAN_UNSCMC_SL_INF;
  class OPTRE_M12_LRV;
  class OPTRE_M12_FAV_APC;
  class OPTRE_M808B_UNSC;
  class OPTRE_M12_FAV;
  class OPTRE_Pelican_unarmed;

  class 53rd_Crewman: LM_OPCAN_UNSCMC_AutoRifleman_INF
  {
    faction="53rd_Liang_Dortman";
    side=2;
    displayName="Crewman";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_Smartfinder","53rd_OPTRE_M7","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","53rd_OPTRE_M7","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_NVG","OPTRE_Smartfinder","OPTRE_ONI_Researcher_Headgear","LM_OPCAN_M52A_MC_Light_CEA_U","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_NVG","OPTRE_Smartfinder","OPTRE_ONI_Researcher_Headgear","LM_OPCAN_M52A_MC_Light_CEA_U","OPTRE_NVG"};
    backpack="53rd_Crewman_pack";
  };

  class 53rd_Breacher: LM_OPCAN_UNSCMC_Assaultman_INF
  {
    faction="53rd_Liang_Dortman";
    side=2;
    displayName="Breacher";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_Smartfinder","53rd_OPTRE_M45","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","53rd_OPTRE_M45","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_6Rnd_8Gauge_HEDP","OPTRE_6Rnd_8Gauge_HEDP","OPTRE_6Rnd_8Gauge_HEDP","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets"};
    respawnMagazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_6Rnd_8Gauge_HEDP","OPTRE_6Rnd_8Gauge_HEDP","OPTRE_6Rnd_8Gauge_HEDP","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_NVG","OPTRE_Smartfinder","OPTRE_ONI_Researcher_Headgear","LM_OPCAN_M52A_MC_Light_CEA_U","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_NVG","OPTRE_Smartfinder","OPTRE_ONI_Researcher_Headgear","LM_OPCAN_M52A_MC_Light_CEA_U","OPTRE_NVG"};
    backpack="53rd_Breacher_pack";
  };

  class 53rd_Marksman: LM_OPCAN_UNSCMC_Breacher_INF
  {
    faction="53rd_Liang_Dortman";
    side=2;
    displayName="Marksman";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_Smartfinder","53rd_OPTRE_M393_DMR","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","53rd_OPTRE_M393_DMR","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_NVG","OPTRE_Smartfinder","OPTRE_ONI_Researcher_Headgear","LM_OPCAN_M52A_MC_Light_CEA_U","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_NVG","OPTRE_Smartfinder","OPTRE_ONI_Researcher_Headgear","LM_OPCAN_M52A_MC_Light_CEA_U","OPTRE_NVG"};
    backpack="53rd_Marksman_pack";
  };

  class 53rd_Grenadier: LM_OPCAN_UNSCMC_RTO_INF
  {
    faction="53rd_Liang_Dortman";
    side=2;
    displayName="Grenadier";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_Smartfinder","53rd_OPTRE_M319n","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","53rd_OPTRE_M319n","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag","M319_HEDP_Grenade_Shell","M319_HEDP_Grenade_Shell","M319_HEDP_Grenade_Shell","M319_HEDP_Grenade_Shell","M319_HE_Grenade_Shell","M319_HE_Grenade_Shell","M319_HE_Grenade_Shell","M319_HE_Grenade_Shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell"};
    respawnMagazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag","M319_HEDP_Grenade_Shell","M319_HEDP_Grenade_Shell","M319_HEDP_Grenade_Shell","M319_HEDP_Grenade_Shell","M319_HE_Grenade_Shell","M319_HE_Grenade_Shell","M319_HE_Grenade_Shell","M319_HE_Grenade_Shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_NVG","OPTRE_Smartfinder","OPTRE_ONI_Researcher_Headgear","LM_OPCAN_M52A_MC_Light_CEA_U","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_NVG","OPTRE_Smartfinder","OPTRE_ONI_Researcher_Headgear","LM_OPCAN_M52A_MC_Light_CEA_U","OPTRE_NVG"};
    backpack="53rd_Grenadier_pack";
  };

  class 53rd_Rifleman: LM_OPCAN_UNSCMC_SL_INF
  {
    faction="53rd_Liang_Dortman";
    side=2;
    displayName="Rifleman";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_Smartfinder","53rd_53rd_MA37","Put","Throw"};
    respawnWeapons[]={"OPTRE_Smartfinder","53rd_53rd_MA37","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    respawnMagazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_NVG","OPTRE_Smartfinder","OPTRE_ONI_Researcher_Headgear","LM_OPCAN_M52A_MC_Light_CEA_U","OPTRE_NVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_NVG","OPTRE_Smartfinder","OPTRE_ONI_Researcher_Headgear","LM_OPCAN_M52A_MC_Light_CEA_U","OPTRE_NVG"};
    backpack="53rd_Rifleman_pack";
  };

  class 53rd_M12_LRV_MG: OPTRE_M12_LRV
  {
    faction="53rd_Liang_Dortman";
    side=2;
    displayName="M12 LRV MG";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\m12hogmaav_extupper_co.paa","optre_vehicles\warthog\data\m12hogmaav_extunder_co.paa","optre_vehicles\warthog\data\turrets\m12_turret_co.paa"};
    crew="53rd_Rifleman";
    typicalCargo[]={"53rd_Rifleman"};
  };

  class 53rd_M12_APC: OPTRE_M12_FAV_APC
  {
    faction="53rd_Liang_Dortman";
    side=2;
    displayName="M12 APC";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\m12hogmaav_extupper_co.paa","optre_vehicles\warthog\data\m12hogmaav_extunder_co.paa","optre_vehicles\warthog\data\transp_lopo_co.paa","optre_vehicles\warthog\data\apc_lopo_co.paa"};
    crew="53rd_Rifleman";
    typicalCargo[]={"53rd_Rifleman"};
  };

  class 53rd_M808B_Scorpion_MBT: OPTRE_M808B_UNSC
  {
    faction="53rd_Liang_Dortman";
    side=2;
    displayName="M808B Scorpion MBT";
    hiddenSelectionsTextures[]={"optre_vehicles\scorpion\data\texture\scorp_lopo_co.paa","optre_vehicles\scorpion\data\texture\scorp_tur_wood_co.paa","optre_vehicles\scorpion\data\texture\det_3_co.paa","optre_vehicles\scorpion\data\texture\scorp_decals_ca.paa","optre_vehicles\scorpion\data\texture\scorp_net_wood_ca.paa","optre_vehicles\scorpion\data\texture\scorp_net_wood_ca.paa","optre_vehicles\scorpion\data\texture\mine_roller_co.paa"};
    crew="53rd_Breacher";
    typicalCargo[]={"53rd_Breacher"};
  };

  class 53rd_M12_FAV: OPTRE_M12_FAV
  {
    faction="53rd_Liang_Dortman";
    side=2;
    displayName="M12 FAV";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\m12hogmaav_extupper_co.paa","optre_vehicles\warthog\data\m12hogmaav_extunder_co.paa"};
    crew="53rd_Rifleman";
    typicalCargo[]={"53rd_Rifleman"};
  };

  class 53rd_D77H_TCI_Pelican: OPTRE_Pelican_unarmed
  {
    faction="53rd_Liang_Dortman";
    side=2;
    displayName="D77H TCI Pelican";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\pelicanexterior_standard_co.paa","","","","",""};
    crew="53rd_Crewman";
    typicalCargo[]={"53rd_Crewman"};
  };


  class 53rd_Crewman_pack: B_CombinationUnitRespirator_01_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Breacher_pack: B_CombinationUnitRespirator_01_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Marksman_pack: B_CombinationUnitRespirator_01_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Grenadier_pack: B_CombinationUnitRespirator_01_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Rifleman_pack: B_CombinationUnitRespirator_01_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
