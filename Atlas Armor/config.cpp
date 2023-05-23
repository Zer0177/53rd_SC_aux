class CfgPatches {
	class 53rd_Atlas_Main {
		units[] = 
        {
			"53rd_haloinfmar_U_AWDL_uniform",
			"53rd_HaloInf_Marine_TSS_F",
			"Ranger_Scout",
			"53rd_Ranger_CH252_NV",
			"53rd_Ranger_CH252_MD",
			"53rd_Ranger_CH252_MD_NV",
			"53rd_HaloInf_Marine_AWDL_F",
        };
		weapons[] = 
        {
			"53rd_haloinfodst_U_uniform",
			"53rd_haloinfmar_U_AWDL_uniform",
			"53rd_Ranger_CH252_NML",
			"53rd_Ranger_CH252_NV",
			"53rd_Ranger_CH252_MD",
			"53rd_Ranger_CH252_MD_NV",
			"53rd_HaloInf_Marine_AWDL_F",
			"Ranger_Scout",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
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
	class OPTRE_CPD_Cap;
	class haloinfodst_U_uniform;
	class Uniform_Base;
	class HaloInf_Marine_WDL_NV_headgear;
	class HaloInf_Marine_WDL_headgear;
	class TCF_Reach_Scout_Helmet;
	
//Ranger Uniform/Vest
	class 53rd_haloinfmar_U_AWDL_uniform: Uniform_Base
	{
		author="Body&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas Univest";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_top_woodland_AS_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_armor_green_AS_co.paa"
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_top_woodland_AS_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_armor_green_AS_co.paa"
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_HaloInf_Marine_AWDL_F";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Ranger_CH252_NML: HaloInf_Marine_WDL_NV_headgear
	{
		author="Body&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ranger Helmet (NV)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Halo_Ranger_Woodland_N_MC"
		};
	};
	class 53rd_Ranger_CH252_NV: HaloInf_Marine_WDL_headgear
	{
		author="Nody&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ranger Helmet";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Halo_Ranger_Woodland_N_MC.paa"
		};
	};
	//ranger scout
		class Ranger_Scout: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Cherryy";
		displayName="[53rd] Ranger Scout (Urban)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Ranger_Scout_Urban.paa",
			"53rd_SC_aux\tex\Atlas Armor\Visor_CO.paa"
		};
	};
	class 53rd_HaloInf_Marine_WDL_UNSC_NV_headgear: HaloInf_Marine_WDL_NV_headgear
	{
		author="Body&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ranger Medic (NV)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Halo_Ranger_Woodland_Medic.paa"
		};
	};
	class 53rd_Ranger_CH252_MD: HaloInf_Marine_WDL_headgear
	{
		author="Body&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Ranger Medic";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Halo_Ranger_Woodland_Medic.paa"
		};
	};
};

class cfgvehicles
{
	class haloinf_Marine_Soldier_base_F;
	class 53rd_HaloInf_Marine_AWDL_F: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger Woodland";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_top_woodland_AS_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_armor_green_AS_co.paa"
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_haloinfmar_U_AWDL_uniform";
			uniformType = "Neopren";
			linkedItems[]=
			{
				"HaloInf_Marine_WDL_UNSC_headgear",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"
			};
	};
};