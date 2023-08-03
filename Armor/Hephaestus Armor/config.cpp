class CfgPatches {
	class 53rd_Hephaestus_Main 
	{
		units[] = 
        {

        };
		weapons[] = 
        {
		"53rd_Hephaestus_Rifleman_CH252_Urban_No_Visor",
		"53rd_Hephaestus_Rifleman_CH252_Urban",
		"53rd_Hephaestus_CH252_Visor",
		"53rd_Hephaestus_CH252_Visor_dp",
		"53rd_Hephaestus_CH252_Visor_MV",
		"53rd_Hephaestus_CH252_Visor_MNV",
		"53rd_Hephaestus_Rifleman_CH252_Woodland_No_Visor",
		"53rd_Hephaestus_Rifleman_CH252_Woodland_Visor",
		"53rd_Hephaestus_Rifleman_CH252_Desert_No_Visor",
		"53rd_Hephaestus_Rifleman_CH252_Desert_Visor",
		"53rd_Hephaestus_Rifleman_CH252_Winter_No_Visor",
		"53rd_Hephaestus_Rifleman_CH252_Winter_Visor",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "..\xtdGear.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class VES_CH252D;
	class VES_CH252D_dp;
	class OPTRE_UNSC_M52A_Armor_Base;
	class Hands;
	class Pelvis;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
    class VES_CH252A_dp;
	class OPTRE_UNSC_CH252D_Helmet_Base;
	class H_Booniehat_khk;
	class OPTRE_UNSC_PatrolCap_Army;
	class MA_M56R_Vest;
	class OPTRE_CPD_Cap;
	class haloinfodst_U_uniform;
	class Uniform_Base;
	class HaloInf_Marine_WDL_NV_headgear;
	class HaloInf_Marine_WDL_headgear;
	class TCF_Reach_Scout_Helmet;
	class MA_TGE_InvisVest;
	
/////Base Class
	
class 53rd_InvisVest: MA_TGE_InvisVest
	{
		author="Scarecrow";
		scope=2;
		displayName="[53rd] Invisible Vest";
		picture="\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model="\Halo_marine_02\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Invis Vest\Vest\null_CA.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\Halo_marine_02\null.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	//Helmets
	//Rifleman
	//Urban
	class 53rd_Hephaestus_Rifleman_CH252_Urban_No_Visor: HaloInf_Marine_WDL_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Helmets\53rd_Rework_RFM_Helmet_Urban_Test.paa"
		};
	};
	class 53rd_Hephaestus_CH252_Visor: HaloInf_Marine_WDL_headgear
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Helmets\53rd_Rework_RFM_Helmet_Urban_Test.paa"
		};
	};
	//Woodland
	class 53rd_Hephaestus_Rifleman_CH252_Woodland_No_Visor: HaloInf_Marine_WDL_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Helmets\53rd_Rework_Rifleman_Helmet_Woodland.paa"
		};
	};
	class 53rd_Hephaestus_Rifleman_CH252_Woodland_Visor: HaloInf_Marine_WDL_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Helmets\53rd_Rework_Rifleman_Helmet_Woodland.paa"
		};
	};
	//Desert
		class 53rd_Hephaestus_Rifleman_CH252_Desert_No_Visor: HaloInf_Marine_WDL_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Helmets\53rd_Rework_Rifleman_Helmet_Desert.paa"
		};
	};
	class 53rd_Hephaestus_Rifleman_CH252_Desert_Visor: HaloInf_Marine_WDL_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Helmets\53rd_Rework_Rifleman_Helmet_Desert.paa"
		};
	};
	//Winter
	class 53rd_Hephaestus_Rifleman_CH252_Winter_No_Visor: HaloInf_Marine_WDL_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Helmets\53rd_Rework_Rifleman_Helmet_Winter.paa"
		};
	};
	class 53rd_Hephaestus_Rifleman_CH252_Winter_Visor: HaloInf_Marine_WDL_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Helmets\53rd_Rework_Rifleman_Helmet_Winter.paa"
		};
	};
	//Medic
	class 53rd_Hephaestus_CH252_Visor_MV: HaloInf_Marine_WDL_headgear
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet Medic (Yes Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\53rd_Rework_Medic_Helmet.paa"
		};
	};
	class 53rd_Hephaestus_CH252_Visor_MNV: HaloInf_Marine_WDL_NV_headgear
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Helmet Medic (No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\53rd_Rework_Medic_Helmet.paa"
		};
	};
};

//Rifleman 2
class cfgvehicles
{
};




