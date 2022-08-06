class cfgPatches
{
  class 53rd_Ackersons_Rebellion
  {
    units[]={"53rd_MEDIC","53rd_AA_RIFLEMAN","53rd_AT_RIFLEMAN","53rd_Sniper","53rd_RIFLEMAN","53rd_OFFICER","53rd_AUTO_RIFLEMAN","53rd_Squad_Leader","53rd_Special_Warfare_Operator","53rd_Special_Weapons_Operator","53rd_Special_Warfare_Commander","53rd_Pilot","53rd_AT_GUN","53rd_UH_144A_FALCON","53rd_D77H_TCI_Pelican","53rd_ZAMAK_MRL","53rd_Tusk","53rd_KATATEL_HMG","53rd_Karatel"};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={"OPTRE_Weapons_Items","A3_Weapons_F","A3_Weapons_F_Enoch_Rifles_MSBS","OPTRE_FC_Units_Marines","A3_Characters_F_Enoch","A3_Weapons_F_Enoch_Launchers_Titan","OPTRE_Weapons_Rockets","OPTRE_Weapons_SRM77","A3_Weapons_F_Mod_SMGs_SMG_03","OPTRE_Weapons_Pistol","A3_Characters_F","OPTRE_Weapons_MG","A3_Weapons_F_Exp_Rifles_AK12","OPTRE_UNSC_Units_Army","OPTRE_Weapons_GL","A3_Weapons_F_Enoch_Machineguns_M200"};
  };
};

class cfgFactionClasses
{
  class 53rd_Ackersons_Rebellion
  {
    icon="";
    displayName="Ackerson's Rebellion";
    side=2;
    priority=1;
  };
};


class cfgVehicles
{
  class I_E_Survivor_F;
  class OPTRE_UNSC_Rucksack_Medic;
  class OPTRE_UNSC_Rucksack_Heavy;
  class OPTRE_Static_FG75;
  class VES_UH144_A_URF;
  class OPTRE_Pelican_unarmed_ins;
  class I_E_Truck_02_MRL_F;
  class I_MBT_03_cannon_F;
  class O_T_MRAP_02_hmg_ghex_F;
  class O_T_MRAP_02_ghex_F;

  class 53rd_MEDIC: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="MEDIC";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"arifle_MSBS65_UBS_F","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"arifle_MSBS65_UBS_F","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};
    respawnMagazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor_Medic","OPTRE_FC_M52B_Armor_Rifleman","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor_Medic","OPTRE_FC_M52B_Armor_Rifleman","LM_OPCAN_COMM"};
    backpack="53rd_MEDIC_pack";
  };

  class 53rd_AA_RIFLEMAN: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="AA RIFLEMAN";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"launch_B_Titan_olive_F","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"launch_B_Titan_olive_F","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"Titan_AA","Titan_AA","Titan_AA"};
    respawnMagazines[]={"Titan_AA","Titan_AA","Titan_AA"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Light","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Light","LM_OPCAN_COMM"};
    backpack="53rd_AA_RIFLEMAN_pack";
  };

  class 53rd_AT_RIFLEMAN: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="AT RIFLEMAN";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_M41_SSR","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_M41_SSR","OPTRE_Smartfinder","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G"};
    respawnMagazines[]={"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Light","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Light","LM_OPCAN_COMM"};
    backpack="53rd_AT_RIFLEMAN_pack";
  };

  class 53rd_Sniper: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="Sniper";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_SRM77_S1","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_SRM77_S1","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[]={"OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_10Rnd_127x99","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Sniper","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Sniper","LM_OPCAN_COMM"};
    backpack="";
  };

  class 53rd_RIFLEMAN: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="RIFLEMAN";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"SMG_03_black","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"SMG_03_black","OPTRE_Smartfinder","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
    respawnMagazines[]={"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_FLACAMUA","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Light","LM_OPCAN_FLACAMUA"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_FLACAMUA","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet","OPTRE_FC_M52B_Armor_Light","LM_OPCAN_FLACAMUA"};
    backpack="";
  };

  class 53rd_OFFICER: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="OFFICER";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_M6C","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_M6C","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
    respawnMagazines[]={"OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_CAM","OPTRE_Smartfinder","H_Watchcap_khk","OPTRE_FC_M52B_Armor_Teamleader","LM_OPCAN_CAM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_CAM","OPTRE_Smartfinder","H_Watchcap_khk","OPTRE_FC_M52B_Armor_Teamleader","LM_OPCAN_CAM"};
    backpack="";
  };

  class 53rd_AUTO_RIFLEMAN: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="AUTO RIFLEMAN";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_M73","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_M73","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box"};
    respawnMagazines[]={"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Light","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Light","LM_OPCAN_COMM"};
    backpack="";
  };

  class 53rd_Squad_Leader: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="Squad Leader";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"arifle_AK12_F","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"arifle_AK12_F","OPTRE_Smartfinder","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Light","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Light","LM_OPCAN_COMM"};
    backpack="";
  };

  class 53rd_Special_Warfare_Operator: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="Special Warfare Operator";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"arifle_MSBS65_camo_F","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"arifle_MSBS65_camo_F","OPTRE_Smartfinder","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","OPTRE_UNSC_CH252A_Helmet","OPTRE_FC_M52B_Armor_Marksman"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","OPTRE_UNSC_CH252A_Helmet","OPTRE_FC_M52B_Armor_Marksman"};
    backpack="";
  };

  class 53rd_Special_Weapons_Operator: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="Special Weapons Operator";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"OPTRE_M319","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"OPTRE_M319","OPTRE_Smartfinder","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Marksman","LM_OPCAN_COMM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","LM_OPCAN_COMM","OPTRE_Smartfinder","OPTRE_FC_CH255_Helmet_Visor","OPTRE_FC_M52B_Armor_Marksman","LM_OPCAN_COMM"};
    backpack="";
  };

  class 53rd_Special_Warfare_Commander: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="Special Warfare Commander";
    uniformClass="LM_OPCAN_Battlejumper_Uni";
    weapons[]={"LMG_Mk200_black_F","OPTRE_Smartfinder","Put","Throw"};
    respawnWeapons[]={"LMG_Mk200_black_F","OPTRE_Smartfinder","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
    respawnMagazines[]={"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","VES_Beret_MP","OPTRE_FC_M52B_Armor_Vest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","OPTRE_Smartfinder","VES_Beret_MP","OPTRE_FC_M52B_Armor_Vest"};
    backpack="";
  };

  class 53rd_Pilot: I_E_Survivor_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="Pilot";
    uniformClass="U_B_CombatUniform_tshirt_mcam_wdL_f";
    weapons[]={"OPTRE_M6C","Put","Throw"};
    respawnWeapons[]={"OPTRE_M6C","Put","Throw"};
    items[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    respawnItems[]={"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"};
    magazines[]={"OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
    respawnMagazines[]={"OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
    linkedItems[]={,"OPTRE_UNSC_VX16_HelmetV_oli_med","LM_OPCAN_ACTV_CGC_VEST"};
    respawnLinkedItems[]={,"OPTRE_UNSC_VX16_HelmetV_oli_med","LM_OPCAN_ACTV_CGC_VEST"};
    backpack="";
  };

  class 53rd_AT_GUN: OPTRE_Static_FG75
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="AT GUN";
    hiddenSelectionsTextures[]={};
    crew="53rd_MEDIC";
    typicalCargo[]={"53rd_MEDIC"};
  };

  class 53rd_UH_144A_FALCON: VES_UH144_A_URF
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="UH 144A FALCON";
    hiddenSelectionsTextures[]={"v_fz_vehicles\data\falcon\v_uh144_urf_co.paa","v_fz_vehicles\data\falcon\v_uh144_urf_a_co.paa","v_fz_vehicles\data\falcon\v_uh144_urf_t_co.paa","v_fz_vehicles\data\falcon\v_uh144_urf_s_co.paa","","",""};
    crew="53rd_MEDIC";
    typicalCargo[]={"53rd_MEDIC"};
  };

  class 53rd_D77H_TCI_Pelican: OPTRE_Pelican_unarmed_ins
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="D77H TCI Pelican";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\pelicanexterior_innie_co.paa","","","","",""};
    crew="53rd_MEDIC";
    typicalCargo[]={"53rd_MEDIC"};
  };

  class 53rd_ZAMAK_MRL: I_E_Truck_02_MRL_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="ZAMAK MRL";
    hiddenSelectionsTextures[]={"a3\soft_f_enoch\truck_02\data\truck_02_kab_eaf_co.paa","a3\soft_f_enoch\truck_02\data\truck_02_int_eaf_co.paa","a3\soft_f_enoch\truck_02\data\truck_02_mrl_eaf_co.paa","a3\soft_f_enoch\truck_02\data\truck_02_chassis_eaf_co.paa"};
    crew="53rd_MEDIC";
    typicalCargo[]={"53rd_MEDIC"};
  };

  class 53rd_Tusk: I_MBT_03_cannon_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="Tusk";
    hiddenSelectionsTextures[]={"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa","a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa","a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa"};
    crew="53rd_MEDIC";
    typicalCargo[]={"53rd_MEDIC"};
  };

  class 53rd_KATATEL_HMG: O_T_MRAP_02_hmg_ghex_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="KATATEL HMG";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\mrap_02\data\mrap_02_ext_01_ghex_co.paa","a3\soft_f_exp\mrap_02\data\mrap_02_ext_02_ghex_co.paa","a3\data_f_exp\vehicles\turret_ghex_co.paa"};
    crew="53rd_MEDIC";
    typicalCargo[]={"53rd_MEDIC"};
  };

  class 53rd_Karatel: O_T_MRAP_02_ghex_F
  {
    faction="53rd_Ackersons_Rebellion";
    side=2;
    displayName="Karatel";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\mrap_02\data\mrap_02_ext_01_ghex_co.paa","a3\soft_f_exp\mrap_02\data\mrap_02_ext_02_ghex_co.paa","a3\data_f_exp\vehicles\turret_ghex_co.paa"};
    crew="53rd_MEDIC";
    typicalCargo[]={"53rd_MEDIC"};
  };


  class 53rd_MEDIC_pack: OPTRE_UNSC_Rucksack_Medic
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_OPTRE_Biofoam {count=10;name="OPTRE_Biofoam";};
    };
    class TransportWeapons{};
  };


  class 53rd_AA_RIFLEMAN_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Titan_AA {count=3;magazine="Titan_AA";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 53rd_AT_RIFLEMAN_pack: OPTRE_UNSC_Rucksack_Heavy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_OPTRE_M41_Twin_HEAT_G {count=4;magazine="OPTRE_M41_Twin_HEAT_G";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
