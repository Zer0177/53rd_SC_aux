class CfgPatches
{
	class 53rd_units
	{
		author="53rd Aux Team";
		addonRootClass="53rd_aux";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]=
		{
			"53rd_autorifleman_Hephaestus_unit",
			"53rd_rifleman_Hephaestus_unit",
			"53rd_rifleman_aa_Hephaestus_unit",
			"53rd_rifleman_at_Hephaestus_unit",
			"53rd_gl_Hephaestus_unit",
			"53rd_marksman_Hephaestus_unit",
			"53rd_rto_Hephaestus_unit",
			"53rd_shotgun_Hephaestus_unit",
			"53rd_sl_Hephaestus_unit",
			"53rd_smg_Hephaestus_unit",
			"53rd_sniper_Hephaestus_unit",
			"53rd_recon_Hephaestus_unit",
			"53rd_autorifleman_Athena_unit",
			"53rd_rifleman_Athena_unit",
			"53rd_rifleman_aa_Athena_unit",
			"53rd_rifleman_at_Athena_unit",
			"53rd_gl_Athena_unit",
			"53rd_marksman_Athena_unit",
			"53rd_rto_Athena_unit",
			"53rd_shotgun_Athena_unit",
			"53rd_sl_Athena_unit",
			"53rd_smg_Athena_unit",
			"53rd_sniper_Athena_unit",
			"53rd_recon_Athena_unit",
		};
		weapons[]=
		{
		};
	};
};
class cfgVehicles
{
    /*
	class OPTRE_UNSC_Marine_Soldier: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc="OPTRE";
		faction="OPTRE_UNSC";
		editorSubcategory="OPTRE_EditorSubcategory_MenMAR";
		author="Article 2 Studios";
		vehicleClass="OPTRE_UNSC_Man_Marines_class";
		uniformClass="OPTRE_UNSC_Marine_Uniform";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\uniform_a_marine_co.paa",
			"OPTRE_UNSC_Units\Army\data\uniform_b_marine_co.paa"
		};
	};
    */
	class OPTRE_UNSC_Marine_Soldier_Rifleman_AR;
	class 53rd_rifleman_Hephaestus_unit: OPTRE_UNSC_Marine_Soldier_Rifleman_AR
	{
		scope=2;
		scopeCurator=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Men_Hephaestus";
		displayName="(Hephaestus) Rifleman";
		uniformClass="53rd_BDU_Slim";
		linkedItems[]=
		{
			"Armor_Hephaestus_Rifleman",
			"53rd_CH252_GREY_HEV_Sealed_PFC_SLV",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_Biofoam",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"Armor_Hephaestus_Rifleman",
			"53rd_CH252_GREY_HEV_Sealed_PFC_SLV",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_Biofoam",
			"OPTRE_NVG"
		};
		weapons[]=
		{
			"OPTRE_MA5C_AC",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_MA5C_AC",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
	};
	class 53rd_rifleman_aa_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Rifleman AA";
		backpack="OPTRE_UNSC_Rucksack_M41";
		weapons[]=
		{
			"OPTRE_MA5C_AC",
			"launch_B_Titan_tna_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_MA5C_AC",
			"launch_B_Titan_tna_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"Titan_AA",
			"Titan_AA",
			"Titan_AA",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"Titan_AA",
			"Titan_AA",
			"Titan_AA",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		icon="iconManAT";
	};
	class 53rd_rifleman_at_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Rifleman AT";
		backpack="OPTRE_UNSC_Rucksack_M41";
		weapons[]=
		{
			"OPTRE_MA5C_AC",
			"OPTRE_M41_SSR",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_MA5C_AC",
			"OPTRE_M41_SSR",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_M41_Twin_HEAT",
			"OPTRE_M41_Twin_HEAT",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_M41_Twin_HEAT",
			"OPTRE_M41_Twin_HEAT",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		icon="iconManAT";
	};
	class 53rd_autorifleman_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Autorifleman";
		weapons[]=
		{
			"OPTRE_M73_AC",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M73_AC",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		icon="iconManMG";
	};
	class 53rd_corpman_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Medic";
		linkedItems[]=
		{
			"Armor_Hephaestus_Medic",
			"53rd_CH252_GREY_CORP_Sealed_SLV",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_Biofoam",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"Armor_Hephaestus_Medic",
			"53rd_CH252_GREY_CORP_Sealed_SLV",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_Biofoam",
			"OPTRE_NVG"
		};
		weapons[]=
		{
			"OPTRE_M7S",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M7S",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		icon="iconManMedic";
		backpack="OPTRE_UNSC_Rucksack_Medic_53rd";
	};
	class 53rd_recon_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Recon";
		weapons[]=
		{
			"OPTRE_M58S",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M58S",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		icon="iconManRecon";
		camouflage=0.5;
		sensitivity=8;
		threat[]={1.2,0.1,0.1};
		backpack="OPTRE_ANPRC_515";
	};
	class 53rd_sniper_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Sniper";
		weapons[]=
		{
			"OPTRE_SRS99C_SC_LS",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_SRS99C_SC_LS",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		icon="iconManRecon";
		camouflage=0.40000001;
		sensitivity=4;
		threat[]={1.5,0.1,0.1};
	};
	class 53rd_smg_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) SMG";
		weapons[]=
		{
			"OPTRE_M7S",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M7S",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_60Rnd_5x23mm_Mag_tracer",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
	};
	class 53rd_sl_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Squad Leader";
		linkedItems[]=
		{
			"Armor_Hephaestus_Squad_leader",
			"53rd_CH252_GREY_HEV_Sealed_SL_SLV",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"Armor_Hephaestus_Squad_leader",
			"53rd_CH252_GREY_HEV_Sealed_SL_SLV",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		backpack="OPTRE_ANPRC_515";
	};
	class 53rd_shotgun_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Shotgun";
		weapons[]=
		{
			"OPTRE_M45TAC",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M45TAC",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Pellets",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_12Rnd_8Gauge_Slugs",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
	};
	class 53rd_rto_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) RTO";
		weapons[]=
		{
			"OPTRE_MA5C_AC",
			"OPTRE_M319s",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_MA5C_AC",
			"OPTRE_M319s",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		backpack="53rd_ANPRC_515";
	};
	class 53rd_gl_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Grenadier";
		weapons[]=
		{
			"OPTRE_MA5CGL",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_MA5CGL",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_1Rnd_Smoke_Grenade_shell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		icon="iconManExplosive";
	};
	class 53rd_marksman_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Marksman";
		weapons[]=
		{
			"OPTRE_Commando_Black",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_Commando_Black",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"Command_20Rnd_65_TracerR_Mag",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		icon="iconManRecon";
	};
	class 53rd_officer_Hephaestus_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Hephaestus) Officer";
		linkedItems[]=
		{
			"Armor_Hephaestus_Squad_Leader",
			"53rd_Beret_Hephaestus",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"Armor_Hephaestus_Squad_Leader",
			"53rd_Beret_Hephaestus",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		weapons[]=
		{
			"OPTRE_M6G",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M6G",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		icon="iconManLeader";
	};
    
    //Volare
	class 53rd_Volare_airmen_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Volare) Airmen";
		uniformClass="Volare_BDU_Bl";
		linkedItems[]=
		{
			"53rd_V_Pilot_Armor_Black",
			"53rd_VX19_Black_Helmet",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_V_Pilot_Armor_Black",
			"53rd_VX19_Black_Helmet",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		weapons[]=
		{
			"OPTRE_M7",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M7",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		backpack="B_Parachute";
	};
	class 53rd_Volare_SA_unit: 53rd_Volare_airmen_unit
	{
		displayName="(Volare) Airman NCO";
		uniformClass="Volare_BDU_Bl_NCO";
		linkedItems[]=
		{
			"53rd_V_Pilot_Armor_Black_NCO",
			"53rd_VX19_Black_Helmet",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_V_Pilot_Armor_Black_NCO",
			"53rd_VX19_Black_Helmet",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
	};
    
    //Athena
	class 53rd_rifleman_Athena_unit: 53rd_rifleman_Hephaestus_unit
	{
		displayName="(Athena) Rifleman";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_rifleman_aa_Athena_unit: 53rd_rifleman_aa_Hephaestus_unit
	{
		displayName="(Athena) Rifleman AA";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_rifleman_at_Athena_unit: 53rd_rifleman_at_Hephaestus_unit
	{
		displayName="(Athena) Rifleman AT";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_autorifleman_Athena_unit: 53rd_autorifleman_Hephaestus_unit
	{
		displayName="(Athena) Autorifleman";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_corpsman_Athena_unit: 53rd_corpman_Hephaestus_unit
	{
		displayName="(Athena) Corpsman";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Medic",
			"53rd_Athena_Helmet_Medic",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Medic",
			"53rd_Athena_Helmet_Medic",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_recon_Athena_unit: 53rd_recon_Hephaestus_unit
	{
		displayName="(Athena) Recon";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_sniper_Athena_unit: 53rd_sniper_Hephaestus_unit
	{
		displayName="(Athena) Sniper";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_smg_Athena_unit: 53rd_smg_Hephaestus_unit
	{
		displayName="(Athena) SMG";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_sl_Athena_unit: 53rd_sl_Hephaestus_unit
	{
		displayName="(Athena) Squad Leader";
		linkedItems[]=
		{
			"53rd_Athena_Armor_SL",
			"53rd_Athena_Helmet_NCO",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_SL",
			"53rd_Athena_Helmet_NCO",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_shotgun_Athena_unit: 53rd_shotgun_Hephaestus_unit
	{
		displayName="(Athena) Shotgun";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};	
	class 53rd_rto_Athena_unit: 53rd_rto_Hephaestus_unit
	{
		displayName="(Athena) RTO";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	
	class 53rd_gl_Athena_unit: 53rd_gl_Hephaestus_unit
	{
		displayName="(Athena) Grenadier";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"Hephaestus_GL_Armor",
			"53rd_CH252_GREY_HEV_Sealed_SPC_SLV",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_marksman_Athena_unit: 53rd_marksman_Hephaestus_unit
	{
		displayName="(Athena) Marksman";
		linkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_Rifleman",
			"53rd_Athena_Helmet_Rifleman",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
	class 53rd_officer_Athena_unit: 53rd_officer_Hephaestus_unit
	{
		displayName="(Athena) Officer";
		linkedItems[]=
		{
			"53rd_Athena_Armor_SL",
			"53rd_Beret_Athena",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		respawnLinkedItems[]=
		{
			"53rd_Athena_Armor_SL",
			"53rd_Beret_Athena",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		editorSubcategory="53rd_Men_Athena";
	};
};