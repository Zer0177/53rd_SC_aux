class cfgPatches
{
  class CIVR_Civilan_Revolt
  {
    units[]={"CIVR_Rifleman","CIVR_Rifleman_AR","CIVR_Riflemen_AT","CIVR_Combat_Life_Saver","CIVR_Team_Leader","CIVR_Riflemen_2","CIVR_Helo_Pilot","CIVR_Marksmen","CIVR_Sniper","CIVR_Grenider","CIVR_Engineer","CIVR_Quad_Bike","CIVR_Truck_MG","CIVR_Truck_AT","CIVR_Little_Bird","CIVR_Hog","CIVR_Merlin","CIVR_Wildcat","CIVR_Jeep","CIVR_Truck_Coverd_Comms","CIVR_Truck_Coverd","CIVR_Van"};
    weapons[]={"CIVR_OPTRE_BR55_OPTRE_M45_FlashlightOPTRE_BR55HB_Scope","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","CIVR_OPTRE_M73_OPTRE_M45_FlashlightOPTRE_M73_SmartLink","CIVR_OPTRE_MA5A_OPTRE_M45_FlashlightOPTRE_BR45_Scope","CIVR_OPTRE_M48_PAW_optic_DMS","CIVR_LM_OPCAN_AR0M37_acc_flashlightoptic_MRCO","CIVR_LM_OPCAN_CTAR_acc_flashlightOPTRE_BR55HB_Scope","CIVR_OPTRE_M7_OPTRE_M45_Flashlight_redoptic_Aco","CIVR_OPTRE_M392_DMR_acc_flashlightOPTRE_BR55HB_Scope","CIVR_OPTRE_SRM77_S1_acc_pointer_IRoptic_KHS_blk","CIVR_LM_OPCAN_CTAR_GL_optic_MRCO","CIVR_OPTRE_M45TAC_acc_flashlightoptic_Aco"};
    requiredVersion=0.1;
    requiredAddons[]={"ace_captives","ace_hearing","ace_medical_treatment","ace_flashlights","ace_maptools","ace_explosives","A3_Weapons_F","ace_trenches","OPTRE_Weapons_BR","OPTRE_Weapons_Pistol","OPTRE_Ins_Units_ER","A3_Characters_F","A3_Characters_F_Enoch","OPTRE_Weapons_MG","A3_Characters_F_Exp","OPTRE_Weapons_AR","V_SO_Weapons","A3_Characters_F_Orange_Headgear","OPTRE_Weapons_Items","A3_Characters_F_Orange","OPTRE_Weapons_DMR","OPTRE_Weapons_SRM77","A3_Weapons_F_Items","OPTRE_Weapons_Shotgun"};
  };
};

class cfgFactionClasses
{
  class CIVR_Civilan_Revolt
  {
    icon="";
    displayName="Civilan Revolt";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class OPTRE_BR55;
  class OPTRE_M6G;
  class OPTRE_M73;
  class OPTRE_MA5A;
  class OPTRE_M48_PAW;
  class LM_OPCAN_AR0M37;
  class LM_OPCAN_CTAR;
  class OPTRE_M7;
  class OPTRE_M392_DMR;
  class OPTRE_SRM77_S1;
  class LM_OPCAN_CTAR_GL;
  class OPTRE_M45TAC;

  class CIVR_OPTRE_BR55_OPTRE_M45_FlashlightOPTRE_BR55HB_Scope: OPTRE_BR55
  {
    displayName="BR55X Battle Rifle";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_BR55HB_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M45_Flashlight";
      };
    };
  };

  class CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope: OPTRE_M6G
  {
    displayName="M6GX Magnum";
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

  class CIVR_OPTRE_M73_OPTRE_M45_FlashlightOPTRE_M73_SmartLink: OPTRE_M73
  {
    displayName="M73X Light Machine Gun";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M73_SmartLink";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M45_Flashlight";
      };
    };
  };

  class CIVR_OPTRE_MA5A_OPTRE_M45_FlashlightOPTRE_BR45_Scope: OPTRE_MA5A
  {
    displayName="MA3AX ICWS Assault Rifle";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_BR45_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="OPTRE_M45_Flashlight";
      };
    };
  };

  class CIVR_OPTRE_M48_PAW_optic_DMS: OPTRE_M48_PAW
  {
    displayName="M48B 'Cricket' PAW";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_DMS";
      };
    };
  };

  class CIVR_LM_OPCAN_AR0M37_acc_flashlightoptic_MRCO: LM_OPCAN_AR0M37
  {
    displayName="AR-0M37 6.5mm";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_MRCO";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class CIVR_LM_OPCAN_CTAR_acc_flashlightOPTRE_BR55HB_Scope: LM_OPCAN_CTAR
  {
    displayName="CT-ARX";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_BR55HB_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class CIVR_OPTRE_M7_OPTRE_M45_Flashlight_redoptic_Aco: OPTRE_M7
  {
    displayName="M7X Caseless SMG";
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
        item="OPTRE_M45_Flashlight_red";
      };
    };
  };

  class CIVR_OPTRE_M392_DMR_acc_flashlightOPTRE_BR55HB_Scope: OPTRE_M392_DMR
  {
    displayName="M392X DMR";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_BR55HB_Scope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class CIVR_OPTRE_SRM77_S1_acc_pointer_IRoptic_KHS_blk: OPTRE_SRM77_S1
  {
    displayName="SRM77 S1";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_KHS_blk";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class CIVR_LM_OPCAN_CTAR_GL_optic_MRCO: LM_OPCAN_CTAR_GL
  {
    displayName="CT-ARX GL";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_MRCO";
      };
    };
  };

  class CIVR_OPTRE_M45TAC_acc_flashlightoptic_Aco: OPTRE_M45TAC
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
        item="acc_flashlight";
      };
    };
  };

};

class cfgVehicles
{
  class I_E_Soldier_F;
  class B_AssaultPack_blk;
  class I_Soldier_AR_F;
  class I_Soldier_LAT_F;
  class B_Carryall_green_F;
  class I_medic_F;
  class OPTRE_UNSC_Rucksack_Medic;
  class I_Soldier_TL_F;
  class I_helipilot_F;
  class I_Soldier_GL_F;
  class I_engineer_F;
  class I_Quadbike_01_F;
  class I_G_Offroad_01_armed_F;
  class I_G_Offroad_01_AT_F;
  class B_Heli_Light_01_F;
  class OPTRE_M12_CIV;
  class I_Heli_Transport_02_F;
  class I_Heli_light_03_unarmed_F;
  class C_Offroad_02_unarmed_F;
  class C_Offroad_01_comms_F;
  class C_Offroad_01_covered_F;
  class C_Van_02_service_F;

  class CIVR_Rifleman: I_E_Soldier_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Rifleman";
    uniformClass="OPTRE_Ins_ER_rolled_surplus_black";
    weapons[]={"OPTRE_Binoculars","CIVR_OPTRE_BR55_OPTRE_M45_FlashlightOPTRE_BR55HB_Scope","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_OPTRE_BR55_OPTRE_M45_FlashlightOPTRE_BR55HB_Scope","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    magazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow"};
    respawnMagazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Cap_headphones","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Cap_headphones","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    backpack="CIVR_Rifleman_pack";
  };

  class CIVR_Rifleman_AR: I_Soldier_AR_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Rifleman AR";
    uniformClass="U_I_C_Soldier_Para_5_F";
    weapons[]={"OPTRE_Binoculars","CIVR_OPTRE_M73_OPTRE_M45_FlashlightOPTRE_M73_SmartLink","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_OPTRE_M73_OPTRE_M45_FlashlightOPTRE_M73_SmartLink","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    magazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_200Rnd_95x40_Box_Tracer"};
    respawnMagazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_200Rnd_95x40_Box_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Cap_marshal","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Cap_marshal","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    backpack="CIVR_Rifleman_AR_pack";
  };

  class CIVR_Riflemen_AT: I_Soldier_LAT_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Riflemen AT";
    uniformClass="U_I_L_Uniform_01_tshirt_skull_F";
    weapons[]={"OPTRE_Binoculars","CIVR_OPTRE_MA5A_OPTRE_M45_FlashlightOPTRE_BR45_Scope","CIVR_OPTRE_M48_PAW_optic_DMS","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_OPTRE_MA5A_OPTRE_M45_FlashlightOPTRE_BR45_Scope","CIVR_OPTRE_M48_PAW_optic_DMS","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    magazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT"};
    respawnMagazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT","OPTRE_1Rnd_50x137_HEAT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_EarProtectors_black_F","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_EarProtectors_black_F","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    backpack="CIVR_Riflemen_AT_pack";
  };

  class CIVR_Combat_Life_Saver: I_medic_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Combat Life Saver";
    uniformClass="U_C_IDAP_Man_cargo_F";
    weapons[]={"OPTRE_Binoculars","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_EntrenchingTool","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_surgicalKit","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_EntrenchingTool","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","ACE_surgicalKit","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_PASGT_basic_white_F","V_BandollierB_blk","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_PASGT_basic_white_F","V_BandollierB_blk","OPTRE_HUD_w_Glasses"};
    backpack="CIVR_Combat_Life_Saver_pack";
  };

  class CIVR_Team_Leader: I_Soldier_TL_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Team Leader";
    uniformClass="U_I_C_Soldier_Bandit_2_F";
    weapons[]={"OPTRE_Binoculars","CIVR_LM_OPCAN_AR0M37_acc_flashlightoptic_MRCO","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_LM_OPCAN_AR0M37_acc_flashlightoptic_MRCO","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    magazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer"};
    respawnMagazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Cap_blk_CMMG","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Cap_blk_CMMG","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    backpack="CIVR_Team_Leader_pack";
  };

  class CIVR_Riflemen_2: I_E_Soldier_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Riflemen 2";
    uniformClass="OPTRE_Ins_ER_rolled_surplus_crimson";
    weapons[]={"OPTRE_Binoculars","CIVR_LM_OPCAN_CTAR_acc_flashlightOPTRE_BR55HB_Scope","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_LM_OPCAN_CTAR_acc_flashlightOPTRE_BR55HB_Scope","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    magazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F"};
    respawnMagazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Hat_camo","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Hat_camo","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    backpack="CIVR_Riflemen_2_pack";
  };

  class CIVR_Helo_Pilot: I_helipilot_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Helo Pilot";
    uniformClass="U_I_G_Story_Protagonist_F";
    weapons[]={"OPTRE_Binoculars","CIVR_OPTRE_M7_OPTRE_M45_Flashlight_redoptic_Aco","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_OPTRE_M7_OPTRE_M45_Flashlight_redoptic_Aco","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine"};
    magazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow"};
    respawnMagazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow","OPTRE_60Rnd_5x23mm_Mag_tracer_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_PilotHelmetHeli_B","V_HarnessO_gry","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_PilotHelmetHeli_B","V_HarnessO_gry","OPTRE_HUD_w_Glasses"};
    backpack="";
  };

  class CIVR_Marksmen: I_E_Soldier_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Marksmen";
    uniformClass="U_C_E_LooterJacket_01_F";
    weapons[]={"OPTRE_Binoculars","CIVR_OPTRE_M392_DMR_acc_flashlightOPTRE_BR55HB_Scope","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_OPTRE_M392_DMR_acc_flashlightOPTRE_BR55HB_Scope","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    magazines[]={"HandGrenade","HandGrenade","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"HandGrenade","HandGrenade","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer","OPTRE_15Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Watchcap_blk","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Watchcap_blk","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    backpack="CIVR_Marksmen_pack";
  };

  class CIVR_Sniper: I_E_Soldier_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Sniper";
    uniformClass="U_C_E_LooterJacket_01_F";
    weapons[]={"OPTRE_Binoculars","CIVR_OPTRE_SRM77_S1_acc_pointer_IRoptic_KHS_blk","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_OPTRE_SRM77_S1_acc_pointer_IRoptic_KHS_blk","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    magazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    respawnMagazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Watchcap_blk","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Watchcap_blk","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    backpack="CIVR_Sniper_pack";
  };

  class CIVR_Grenider: I_Soldier_GL_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Grenider";
    uniformClass="U_C_Uniform_Farmer_01_F";
    weapons[]={"OPTRE_Binoculars","CIVR_LM_OPCAN_CTAR_GL_optic_MRCO","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_LM_OPCAN_CTAR_GL_optic_MRCO","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool"};
    magazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL"};
    respawnMagazines[]={"HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL","OPAEX_M_D20_GL"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Cap_headphones","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Cap_headphones","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    backpack="CIVR_Grenider_pack";
  };

  class CIVR_Engineer: I_engineer_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Engineer";
    uniformClass="U_I_L_Uniform_01_tshirt_sport_F";
    weapons[]={"OPTRE_Binoculars","CIVR_OPTRE_M45TAC_acc_flashlightoptic_Aco","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    respawnWeapons[]={"OPTRE_Binoculars","CIVR_OPTRE_M45TAC_acc_flashlightoptic_Aco","CIVR_OPTRE_M6G_OPTRE_M6G_FlashlightOPTRE_M6G_Scope","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool","ToolKit"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_Flashlight_XL50","ACE_MapTools","ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_adenosine","ACE_adenosine","ACE_adenosine","MineDetector","ACE_EntrenchingTool","ToolKit"};
    magazines[]={"OPTRE_12Rnd_8Gauge_Pellets","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_8Gauge_Pellets","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_12Rnd_8Gauge_Pellets"};
    respawnMagazines[]={"OPTRE_12Rnd_8Gauge_Pellets","HandGrenade","HandGrenade","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_8Gauge_Pellets","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_12Rnd_8Gauge_Pellets"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Cap_marshal","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Binoculars","H_Cap_marshal","V_PlateCarrier1_blk","OPTRE_HUD_w_Glasses"};
    backpack="CIVR_Engineer_pack";
  };

  class CIVR_Quad_Bike: I_Quadbike_01_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Quad Bike";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\quadbike_01\data\quadbike_01_indp_co.paa","a3\soft_f_beta\quadbike_01\data\quadbike_01_wheel_indp_co.paa"};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };

  class CIVR_Truck_MG: I_G_Offroad_01_armed_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Truck MG";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa","a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa"};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };

  class CIVR_Truck_AT: I_G_Offroad_01_AT_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Truck AT";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa","a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa"};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };

  class CIVR_Little_Bird: B_Heli_Light_01_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Little Bird";
    hiddenSelectionsTextures[]={"a3\air_f\heli_light_01\data\heli_light_01_ext_blufor_co.paa",""};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };

  class CIVR_Hog: OPTRE_M12_CIV
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Hog";
    hiddenSelectionsTextures[]={"optre_vehicles\warthog\data\gen_warthog_up_ylwblk_civ_co.paa","optre_vehicles\warthog\data\m12hogmaav_extunder_co.paa"};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };

  class CIVR_Merlin: I_Heli_Transport_02_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Merlin";
    hiddenSelectionsTextures[]={"a3\air_f_beta\heli_transport_02\data\heli_transport_02_1_indp_co.paa","a3\air_f_beta\heli_transport_02\data\heli_transport_02_2_indp_co.paa","a3\air_f_beta\heli_transport_02\data\heli_transport_02_3_indp_co.paa","a3\air_f_beta\heli_transport_02\data\heli_transport_02_int_02_co.paa"};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };

  class CIVR_Wildcat: I_Heli_light_03_unarmed_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Wildcat";
    hiddenSelectionsTextures[]={"a3\air_f_epb\heli_light_03\data\heli_light_03_base_co.paa"};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };

  class CIVR_Jeep: C_Offroad_02_unarmed_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Jeep";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa"};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };

  class CIVR_Truck_Coverd_Comms: C_Offroad_01_comms_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Truck Coverd Comms";
    hiddenSelectionsTextures[]={"a3\soft_f_enoch\offroad_01\data\offroad_01_ext_blk_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_ext_blk_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_cover_blk_co.paa"};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };

  class CIVR_Truck_Coverd: C_Offroad_01_covered_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Truck Coverd";
    hiddenSelectionsTextures[]={"a3\soft_f_enoch\offroad_01\data\offroad_01_ext_blk_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_ext_blk_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_cover_blk_co.paa"};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };

  class CIVR_Van: C_Van_02_service_F
  {
    faction="CIVR_Civilan_Revolt";
    side=2;
    displayName="Van";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_civservice_co.paa","a3\soft_f_orange\van_02\data\van_wheel_dirty_co.paa","a3\soft_f_orange\van_02\data\van_glass_civservice_ca.paa","a3\soft_f_orange\van_02\data\van_body_civservice_co.paa"};
    crew="CIVR_Rifleman";
    typicalCargo[]={"CIVR_Rifleman"};
  };


  class CIVR_Rifleman_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_8Rnd_127x40_Mag {count=4;magazine="OPTRE_8Rnd_127x40_Mag";};
     class _xx_OPTRE_36Rnd_95x40_Mag_Tracer_Yellow {count=6;magazine="OPTRE_36Rnd_95x40_Mag_Tracer_Yellow";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
    };
    class TransportWeapons{};
  };


  class CIVR_Rifleman_AR_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_8Rnd_127x40_Mag {count=3;magazine="OPTRE_8Rnd_127x40_Mag";};
     class _xx_OPTRE_200Rnd_95x40_Box_Tracer {count=1;magazine="OPTRE_200Rnd_95x40_Box_Tracer";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
    };
    class TransportWeapons{};
  };


  class CIVR_Riflemen_AT_pack: B_Carryall_green_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_8Rnd_127x40_Mag {count=4;magazine="OPTRE_8Rnd_127x40_Mag";};
     class _xx_OPTRE_60Rnd_762x51_Mag_Tracer_Yellow {count=3;magazine="OPTRE_60Rnd_762x51_Mag_Tracer_Yellow";};
     class _xx_OPTRE_1Rnd_50x137_HEAT {count=5;magazine="OPTRE_1Rnd_50x137_HEAT";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
    };
    class TransportWeapons{};
  };


  class CIVR_Combat_Life_Saver_pack: OPTRE_UNSC_Rucksack_Medic
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
     class _xx_ACE_bloodIV {count=10;name="ACE_bloodIV";};
     class _xx_ACE_bloodIV_500 {count=5;name="ACE_bloodIV_500";};
     class _xx_OPTRE_Biofoam {count=20;name="OPTRE_Biofoam";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_ACE_splint {count=10;name="ACE_splint";};
     class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
     class _xx_ACE_morphine {count=10;name="ACE_morphine";};
     class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
     class _xx_ACE_adenosine {count=10;name="ACE_adenosine";};
     class _xx_ACE_elasticBandage {count=10;name="ACE_elasticBandage";};
     class _xx_ACE_packingBandage {count=10;name="ACE_packingBandage";};
    };
    class TransportWeapons{};
  };


  class CIVR_Team_Leader_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_8Rnd_127x40_Mag {count=4;magazine="OPTRE_8Rnd_127x40_Mag";};
     class _xx_30Rnd_65x39_caseless_msbs_mag_Tracer {count=9;magazine="30Rnd_65x39_caseless_msbs_mag_Tracer";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
    };
    class TransportWeapons{};
  };


  class CIVR_Riflemen_2_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_8Rnd_127x40_Mag {count=4;magazine="OPTRE_8Rnd_127x40_Mag";};
     class _xx_30Rnd_580x42_Mag_Tracer_F {count=5;magazine="30Rnd_580x42_Mag_Tracer_F";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
    };
    class TransportWeapons{};
  };


  class CIVR_Marksmen_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_15Rnd_762x51_Mag_Tracer {count=5;magazine="OPTRE_15Rnd_762x51_Mag_Tracer";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
    };
    class TransportWeapons{};
  };


  class CIVR_Sniper_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_8Rnd_127x40_Mag {count=4;magazine="OPTRE_8Rnd_127x40_Mag";};
     class _xx_OPTRE_10Rnd_127x99 {count=6;magazine="OPTRE_10Rnd_127x99";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
    };
    class TransportWeapons{};
  };


  class CIVR_Grenider_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_8Rnd_127x40_Mag {count=4;magazine="OPTRE_8Rnd_127x40_Mag";};
     class _xx_30Rnd_580x42_Mag_Tracer_F {count=5;magazine="30Rnd_580x42_Mag_Tracer_F";};
     class _xx_OPAEX_M_D20_GL {count=14;magazine="OPAEX_M_D20_GL";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
    };
    class TransportWeapons{};
  };


  class CIVR_Engineer_pack: B_AssaultPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_8Rnd_127x40_Mag {count=4;magazine="OPTRE_8Rnd_127x40_Mag";};
     class _xx_OPTRE_12Rnd_8Gauge_Pellets {count=1;magazine="OPTRE_12Rnd_8Gauge_Pellets";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
