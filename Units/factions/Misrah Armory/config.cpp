class cfgPatches
{
  class 53rd_Misriah_Armory
  {
    units[]={"53rd_Crewmen","53rd_Pilot","53rd_Auto_Riflemen","53rd_Riflemen","53rd_Medic","53rd_Sniper","53rd_Rifleman_AT","53rd_Executive_Officer","53rd_Breacher","53rd_Grenadier","53rd_Team_Leader","53rd_Marksmen","53rd_Company_worker","53rd_Viper_IFV","53rd_Fennek_50cal","53rd_Fennek_40MM","53rd_UH80_Ghost","53rd_Hog_LAAG","53rd_UH144GL_Falcon","53rd_Stallion","53rd_Puma_Unarmed","53rd_Puma_Armed","53rd_Hog_TT","53rd_Stallion_Coverd","53rd_HEMETT_FLat","53rd_RAH94_Raven","53rd_D77HTCI_Pelican","53rd_Bushmaster_IFV"};
    weapons[]={"53rd_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","53rd_OPTRE_M6G_OPTRE_M6G_Flashlight","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","53rd_OPTRE_M73_optic_Aco","53rd_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg","53rd_OPTRE_SRM77_S1_acc_pointer_IROPTRE_SRM_Sightbipod_01_F_blk","53rd_OPTRE_Commando_acc_flashlightoptic_Aco","53rd_OPTRE_M41_SSR","53rd_OPTRE_M45TAC_OPTRE_M45_Flashlightoptic_Aco","53rd_OPTRE_MA5CGL","53rd_OPTRE_M295_BMR_Woodland_OPTRE_BR55HB_Scope"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","ace_medical_treatment","A3_Weapons_F","OPTRE_Weapons_MG","OPTRE_Weapons_Pistol","OPTRE_UNSC_Units_Army","OPTRE_FC_Units_Marines","A3_Characters_F_Exp_Headgear","A3_Characters_F","ace_hearing","A3_Weapons_F_Acc","A3_Weapons_F_Mark_Acc","OPTRE_Weapons_Items","Commando","OPTRE_Weapons_SRM77","OPTRE_Weapons_Rockets","A3_Characters_F_AoW","A3_Characters_F_Orange_Headgear","OPTRE_Weapons_Shotgun","OPTRE_Weapons_AR","OPTRE_Weapons_DMR","ace_fortify","A3_Characters_F_Orange","A3_Characters_F_Orange_Vests"};
  };
};

class cfgFactionClasses
{
  class 53rd_Misriah_Armory
  {
    icon="";
    displayName="Misriah Armory";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class OPTRE_M7;
  class OPTRE_M6G;
  class OPTRE_M73;
  class OPTRE_Commando;
  class OPTRE_SRM77_S1;
  class OPTRE_M41_SSR;
  class OPTRE_M45TAC;
  class OPTRE_MA5CGL;
  class OPTRE_M295_BMR_Woodland;

  class 53rd_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco: OPTRE_M7
  {
    displayName="M7/Caseless SMG";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_M7_silencer";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M7_Flashlight";
      };
    };
  };

  class 53rd_OPTRE_M6G_OPTRE_M6G_Flashlight: OPTRE_M6G
  {
    displayName="M6G Magnum";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M6G_Flashlight";
      };
    };
  };

  class 53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope: OPTRE_M6G
  {
    displayName="M6G Magnum";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M6G_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M6G_Flashlight";
      };
    };
  };

  class 53rd_OPTRE_M73_optic_Aco: OPTRE_M73
  {
    displayName="M73 Light Machine Gun";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco";
      };
    };
  };

  class 53rd_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg: OPTRE_Commando
  {
    displayName="VK78 Commando";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_ACO_grn_smg";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class 53rd_OPTRE_SRM77_S1_acc_pointer_IROPTRE_SRM_Sightbipod_01_F_blk: OPTRE_SRM77_S1
  {
    displayName="SRM77 S1";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_SRM_Sight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };

    };
  };

  class 53rd_OPTRE_Commando_acc_flashlightoptic_Aco: OPTRE_Commando
  {
    displayName="VK78 Commando";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class 53rd_OPTRE_M41_SSR: OPTRE_M41_SSR
  {
    displayName="M41 SSR MAV/AW";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_OPTRE_M45TAC_OPTRE_M45_Flashlightoptic_Aco: OPTRE_M45TAC
  {
    displayName="M45 Combat Shotgun (Tactical)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M45_Flashlight";
      };
    };
  };

  class 53rd_OPTRE_MA5CGL: OPTRE_MA5CGL
  {
    displayName="MA5C + M301 GL Assault Rifle";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 53rd_OPTRE_M295_BMR_Woodland_OPTRE_BR55HB_Scope: OPTRE_M295_BMR_Woodland
  {
    displayName="M295 BMR (Woodland)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_BR55HB_Scope";
      };
    };
  };

};

class cfgVehicles
{
  class I_crew_F;
  class I_pilot_F;
  class ACE_NonSteerableParachute;
  class I_Soldier_AAR_F;
  class OPTRE_UNSC_Rucksack_Heavy;
  class I_support_AMG_F;
  class B_AssaultPack_eaf_F;
  class I_medic_F;
  class OPTRE_UNSC_Rucksack_Medic;
  class I_Soldier_M_F;
  class B_AssaultPack_dgtl;
  class I_Soldier_AT_F;
  class I_officer_F;
  class I_soldier_F;
  class I_Soldier_GL_F;
  class I_Soldier_SL_F;
  class B_RadioBag_01_tropic_F;
  class I_engineer_F;
  class B_AssaultPack_blk;
  class I_APC_Wheeled_03_cannon_F;
  class I_MRAP_03_hmg_F;
  class I_MRAP_03_gmg_F;
  class B_Heli_Transport_01_F;
  class OPTRE_M12_LRV;
  class OPTRE_Falconagl_01;
  class OPTRE_m1087_stallion_unsc;
  class OPTRE_unarmed_puma_01;
  class OPTRE_armed_puma_01;
  class OPTRE_M813_TT;
  class OPTRE_m1087_stallion_cover_unsc;
  class B_T_Truck_01_flatbed_F;
  class B_Heli_Attack_01_dynamicLoadout_F;
  class OPTRE_Pelican_unarmed;
  class I_APC_tracked_03_cannon_F;

  class 53rd_Crewmen: I_crew_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Crewmen";
    uniformClass="OPTRE_UNSC_Army_Uniform_R_OLIWDL";
    weapons[]={"53rd_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","53rd_OPTRE_M6G_OPTRE_M6G_Flashlight","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","53rd_OPTRE_M6G_OPTRE_M6G_Flashlight","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"SmokeShell","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","HandGrenade","HandGrenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow"};
    respawnMagazines[]={"SmokeShell","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","HandGrenade","HandGrenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_HelmetCrew_O_ghex_F","OPTRE_FC_M52B_Armor_Light"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_HelmetCrew_O_ghex_F","OPTRE_FC_M52B_Armor_Light"};
    backpack="";
  };

  class 53rd_Pilot: I_pilot_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Pilot";
    uniformClass="U_I_pilotCoveralls";
    weapons[]={"53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"SmokeShell","SmokeShellGreen","Chemlight_green","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"SmokeShell","SmokeShellGreen","Chemlight_green","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetHeli_I","G_Shades_Blue"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetHeli_I","G_Shades_Blue"};
    backpack="53rd_Pilot_pack";
  };

  class 53rd_Auto_Riflemen: I_Soldier_AAR_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Auto Riflemen";
    uniformClass="OPTRE_UNSC_Army_Uniform_R_OLIWDL";
    weapons[]={"Rangefinder","53rd_OPTRE_M73_optic_Aco","53rd_OPTRE_M6G_OPTRE_M6G_Flashlight","Put","Throw"};
    respawnWeapons[]={"Rangefinder","53rd_OPTRE_M73_optic_Aco","53rd_OPTRE_M6G_OPTRE_M6G_Flashlight","Put","Throw"};
    items[]={"FirstAidKit","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","optic_tws_mg","bipod_03_F_blk","muzzle_snds_H"};
    respawnItems[]={"FirstAidKit","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","optic_tws_mg","bipod_03_F_blk","muzzle_snds_H"};
    magazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","OPTRE_200Rnd_95x40_Box_Tracer_Yellow","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer_Yellow","OPTRE_200Rnd_95x40_Box_Tracer_Yellow"};
    respawnMagazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","OPTRE_200Rnd_95x40_Box_Tracer_Yellow","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer_Yellow","OPTRE_200Rnd_95x40_Box_Tracer_Yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Rangefinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Rifleman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Rangefinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Rifleman"};
    backpack="53rd_Auto_Riflemen_pack";
  };

  class 53rd_Riflemen: I_support_AMG_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Riflemen";
    uniformClass="OPTRE_UNSC_Army_Uniform_R_OLIWDL";
    weapons[]={"53rd_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    backpack="53rd_Riflemen_pack";
  };

  class 53rd_Medic: I_medic_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Medic";
    uniformClass="OPTRE_UNSC_Army_Uniform_R_OLIWDL";
    weapons[]={"53rd_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_M7_OPTRE_M7_silencerOPTRE_M7_Flashlightoptic_Aco","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","Medikit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_surgicalKit","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV"};
    respawnItems[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","Medikit","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_surgicalKit","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV"};
    magazines[]={"SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Medic","OPTRE_FC_M52B_Armor_Light","G_Bandanna_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Medic","OPTRE_FC_M52B_Armor_Light","G_Bandanna_khk"};
    backpack="53rd_Medic_pack";
  };

  class 53rd_Sniper: I_Soldier_M_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Sniper";
    uniformClass="OPTRE_UNSC_Army_Uniform_S_OLIWDL_SlimLeg";
    weapons[]={"53rd_OPTRE_SRM77_S1_acc_pointer_IROPTRE_SRM_Sightbipod_01_F_blk","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_SRM77_S1_acc_pointer_IROPTRE_SRM_Sightbipod_01_F_blk","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    respawnMagazines[]={"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Sniper","G_Lowprofile"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Sniper","G_Lowprofile"};
    backpack="53rd_Sniper_pack";
  };

  class 53rd_Rifleman_AT: I_Soldier_AT_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Rifleman AT";
    uniformClass="OPTRE_UNSC_Army_Uniform_R_OLIWDL_SlimLeg";
    weapons[]={"53rd_OPTRE_Commando_acc_flashlightoptic_Aco","53rd_OPTRE_M41_SSR","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_Commando_acc_flashlightoptic_Aco","53rd_OPTRE_M41_SSR","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT"};
    respawnMagazines[]={"SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Rifleman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Rifleman"};
    backpack="53rd_Rifleman_AT_pack";
  };

  class 53rd_Executive_Officer: I_officer_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Executive Officer";
    uniformClass="U_C_FormalSuit_01_black_F";
    weapons[]={"53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_WirelessEarpiece_F","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_WirelessEarpiece_F","G_Aviator"};
    backpack="";
  };

  class 53rd_Breacher: I_soldier_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Breacher";
    uniformClass="OPTRE_UNSC_Army_Uniform_R_OLIWDL";
    weapons[]={"53rd_OPTRE_M45TAC_OPTRE_M45_Flashlightoptic_Aco","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_M45TAC_OPTRE_M45_Flashlightoptic_Aco","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Breacher"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Breacher"};
    backpack="53rd_Breacher_pack";
  };

  class 53rd_Grenadier: I_Soldier_GL_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Grenadier";
    uniformClass="OPTRE_UNSC_Army_Uniform_R_OLIWDL";
    weapons[]={"53rd_OPTRE_MA5CGL","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_MA5CGL","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell"};
    respawnMagazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell","3Rnd_Smoke_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    backpack="53rd_Grenadier_pack";
  };

  class 53rd_Team_Leader: I_Soldier_SL_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Team Leader";
    uniformClass="OPTRE_UNSC_Army_Uniform_R_OLIWDL";
    weapons[]={"53rd_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_Commando_acc_flashlightoptic_ACO_grn_smg","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag"};
    respawnMagazines[]={"SmokeShell","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","Commando_20Rnd_65_ReloadY_Mag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Rifleman"};
    backpack="53rd_Team_Leader_pack";
  };

  class 53rd_Marksmen: I_Soldier_M_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Marksmen";
    uniformClass="OPTRE_UNSC_Army_Uniform_R_OLIWDL";
    weapons[]={"53rd_OPTRE_M295_BMR_Woodland_OPTRE_BR55HB_Scope","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"53rd_OPTRE_M295_BMR_Woodland_OPTRE_BR55HB_Scope","53rd_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","OPTRE_Medigel","OPTRE_Medigel","OPTRE_Medigel","ACE_EarPlugs"};
    magazines[]={"SmokeShell","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[]={"SmokeShell","I_IR_Grenade","I_IR_Grenade","SmokeShellGreen","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_25Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Marksman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Marksman"};
    backpack="53rd_Marksmen_pack";
  };

  class 53rd_Company_worker: I_engineer_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Company worker";
    uniformClass="U_C_ConstructionCoverall_Black_F";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ToolKit","ACE_Fortify"};
    respawnItems[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ToolKit","ACE_Fortify"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_white_F","V_Safety_yellow_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_headset_white_F","V_Safety_yellow_F"};
    backpack="53rd_Company_worker_pack";
  };

  class 53rd_Viper_IFV: I_APC_Wheeled_03_cannon_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Viper IFV";
    hiddenSelectionsTextures[]={"a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext_indp_co.paa","a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext2_indp_co.paa","a3\armor_f_gamma\apc_wheeled_03\data\rcws30_indp_co.paa","a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext_alpha_indp_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_aaf_co.paa"};
    crew="53rd_Riflemen";
    typicalCargo[]={"53rd_Riflemen"};
  };

  class 53rd_Fennek_50cal: I_MRAP_03_hmg_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Fennek 50cal";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa","a3\data_f\vehicles\turret_indp_co.paa"};
    crew="53rd_Riflemen";
    typicalCargo[]={"53rd_Riflemen"};
  };

  class 53rd_Fennek_40MM: I_MRAP_03_gmg_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Fennek 40MM";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa","a3\data_f\vehicles\turret_indp_co.paa"};
    crew="53rd_Riflemen";
    typicalCargo[]={"53rd_Riflemen"};
  };

  class 53rd_UH80_Ghost: B_Heli_Transport_01_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="UH80 Ghost";
    hiddenSelectionsTextures[]={"a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_blufor_co.paa","a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext02_blufor_co.paa"};
    crew="53rd_Pilot";
    typicalCargo[]={"53rd_Pilot"};
  };

  class 53rd_Hog_LAAG: OPTRE_M12_LRV
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Hog LAAG";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\woodland\m12hogmaav_extupper_wood_co.paa","optre_vehicles\warthog\data\woodland\m12hogmaav_extunder_wood_co.paa","optre_vehicles\warthog\data\woodland\m12_turret_woodland_co.paa"};
    crew="53rd_Riflemen";
    typicalCargo[]={"53rd_Riflemen"};
  };

  class 53rd_UH144GL_Falcon: OPTRE_Falconagl_01
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="UH144GL Falcon";
    hiddenSelectionsTextures[]={"optre_vehicles\falcon\data\falcon_hull_co.paa","optre_vehicles\falcon\data\falcon_hullextra_co.paa","optre_vehicles\falcon\data\falcon_wingtips_co.paa","optre_vehicles\falcon\data\falcon_skid_co.paa","","",""};
    crew="53rd_Pilot";
    typicalCargo[]={"53rd_Pilot"};
  };

  class 53rd_Stallion: OPTRE_m1087_stallion_unsc
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Stallion";
    hiddenSelectionsTextures[]={"optre_vehicles\misc\data\truck_ext01_standard_co.paa","optre_vehicles\misc\data\truck_ext02_standard_co.paa","optre_vehicles\misc\data\truck_cargo_standard_co.paa"};
    crew="53rd_Riflemen";
    typicalCargo[]={"53rd_Riflemen"};
  };

  class 53rd_Puma_Unarmed: OPTRE_unarmed_puma_01
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Puma Unarmed";
    hiddenSelectionsTextures[]={"optre_plus\data\puma\puma_01.paa","optre_plus\data\puma\csat_lsv_02_ghex_co.paa"};
    crew="53rd_Riflemen";
    typicalCargo[]={"53rd_Riflemen"};
  };

  class 53rd_Puma_Armed: OPTRE_armed_puma_01
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Puma Armed";
    hiddenSelectionsTextures[]={"optre_plus\data\puma\puma_01.paa","optre_plus\data\puma\csat_lsv_02_ghex_co.paa"};
    crew="53rd_Riflemen";
    typicalCargo[]={"53rd_Riflemen"};
  };

  class 53rd_Hog_TT: OPTRE_M813_TT
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Hog TT";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\woodland\m12hogmaav_extupper_wood_co.paa","optre_vehicles\warthog\data\woodland\m12hogmaav_extunder_wood_co.paa","optre_vehicles\warthog\data\woodland\transp_lopo_wood_co.paa"};
    crew="53rd_Riflemen";
    typicalCargo[]={"53rd_Riflemen"};
  };

  class 53rd_Stallion_Coverd: OPTRE_m1087_stallion_cover_unsc
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Stallion Coverd";
    hiddenSelectionsTextures[]={"optre_vehicles\misc\data\truck_ext01_standard_co.paa","optre_vehicles\misc\data\truck_ext02_standard_co.paa","optre_vehicles\misc\data\truck_cargo_standard_co.paa","optre_vehicles\misc\data\truck_cover_standard_co.paa"};
    crew="53rd_Riflemen";
    typicalCargo[]={"53rd_Riflemen"};
  };

  class 53rd_HEMETT_FLat: B_T_Truck_01_flatbed_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="HEMETT FLat";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa","a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa","a3\soft_f_enoch\truck_01\data\truck_01_ammo_pacific_co.paa","a3\soft_f_enoch\truck_01\data\truck_01_cargo_pacific_co.paa"};
    crew="53rd_Riflemen";
    typicalCargo[]={"53rd_Riflemen"};
  };

  class 53rd_RAH94_Raven: B_Heli_Attack_01_dynamicLoadout_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="RAH94 Raven";
    hiddenSelectionsTextures[]={"a3\air_f_beta\heli_attack_01\data\heli_attack_01_co.paa"};
    crew="53rd_Pilot";
    typicalCargo[]={"53rd_Pilot"};
  };

  class 53rd_D77HTCI_Pelican: OPTRE_Pelican_unarmed
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="D77HTCI Pelican";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\pelicanexterior_green_co.paa","","","","",""};
    crew="53rd_Pilot";
    typicalCargo[]={"53rd_Pilot"};
  };

  class 53rd_Bushmaster_IFV: I_APC_tracked_03_cannon_F
  {
    faction="53rd_Misriah_Armory";
    side=2;
    displayName="Bushmaster IFV";
    hiddenSelectionsTextures[]={"a3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa","a3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_aaf_co.paa"};
    crew="53rd_Crewmen";
    typicalCargo[]={"53rd_Crewmen"};
  };


  class 53rd_Pilot_pack: ACE_NonSteerableParachute
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Auto_Riflemen_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_200Rnd_65x39_cased_Box {count=3;magazine="200Rnd_65x39_cased_Box";};
     class _xx_200Rnd_65x39_cased_Box_Tracer {count=1;magazine="200Rnd_65x39_cased_Box_Tracer";};
     class _xx_OPTRE_200Rnd_95x40_Box_Tracer_Yellow {count=2;magazine="OPTRE_200Rnd_95x40_Box_Tracer_Yellow";};
    };
    class TransportItems
    {
     class _xx_optic_tws_mg {count=1;name="optic_tws_mg";};
     class _xx_bipod_03_F_blk {count=1;name="bipod_03_F_blk";};
     class _xx_muzzle_snds_H {count=1;name="muzzle_snds_H";};
    };
    class TransportWeapons{};
  };


  class 53rd_Riflemen_pack: B_AssaultPack_eaf_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Commando_20Rnd_65_ReloadY_Mag {count=8;magazine="Commando_20Rnd_65_ReloadY_Mag";};
     class _xx_OPTRE_M9_Frag {count=3;magazine="OPTRE_M9_Frag";};
     class _xx_OPTRE_8Rnd_127x40_Mag_Tracer {count=5;magazine="OPTRE_8Rnd_127x40_Mag_Tracer";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Medic_pack: OPTRE_UNSC_Rucksack_Medic
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_OPTRE_Biofoam {count=20;name="OPTRE_Biofoam";};
     class _xx_ACE_splint {count=10;name="ACE_splint";};
     class _xx_ACE_tourniquet {count=10;name="ACE_tourniquet";};
     class _xx_ACE_surgicalKit {count=2;name="ACE_surgicalKit";};
     class _xx_ACE_elasticBandage {count=20;name="ACE_elasticBandage";};
     class _xx_ACE_packingBandage {count=20;name="ACE_packingBandage";};
     class _xx_ACE_bloodIV {count=6;name="ACE_bloodIV";};
    };
    class TransportWeapons{};
  };


  class 53rd_Sniper_pack: B_AssaultPack_dgtl
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_10Rnd_127x99 {count=10;magazine="OPTRE_10Rnd_127x99";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Rifleman_AT_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M41_Twin_HEAT {count=5;magazine="OPTRE_M41_Twin_HEAT";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Breacher_pack: B_AssaultPack_eaf_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M9_Frag {count=3;magazine="OPTRE_M9_Frag";};
     class _xx_OPTRE_6Rnd_8Gauge_Pellets {count=10;magazine="OPTRE_6Rnd_8Gauge_Pellets";};
     class _xx_OPTRE_8Rnd_127x40_Mag_Tracer {count=3;magazine="OPTRE_8Rnd_127x40_Mag_Tracer";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Grenadier_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M9_Frag {count=3;magazine="OPTRE_M9_Frag";};
     class _xx_3Rnd_HE_Grenade_shell {count=20;magazine="3Rnd_HE_Grenade_shell";};
     class _xx_3Rnd_Smoke_Grenade_shell {count=10;magazine="3Rnd_Smoke_Grenade_shell";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Team_Leader_pack: B_RadioBag_01_tropic_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Commando_20Rnd_65_ReloadY_Mag {count=6;magazine="Commando_20Rnd_65_ReloadY_Mag";};
     class _xx_OPTRE_M9_Frag {count=1;magazine="OPTRE_M9_Frag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Marksmen_pack: B_AssaultPack_eaf_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M9_Frag {count=3;magazine="OPTRE_M9_Frag";};
     class _xx_OPTRE_25Rnd_762x51_Mag_Tracer_Yellow {count=8;magazine="OPTRE_25Rnd_762x51_Mag_Tracer_Yellow";};
     class _xx_OPTRE_8Rnd_127x40_Mag_Tracer {count=4;magazine="OPTRE_8Rnd_127x40_Mag_Tracer";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_Company_worker_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_ACE_Fortify {count=1;name="ACE_Fortify";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
