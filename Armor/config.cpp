class CfgPatches {
	class 53rd_Atlas_Helmets
	{
		units[] = 
        {
        };
		weapons[] = 
        {
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
	class MA_M56R_Vest;
	class OPTRE_CPD_Cap;
	class haloinfodst_U_uniform;
	class Uniform_Base;
	class HaloInf_Marine_WDL_NV_headgear;
	class HaloInf_Marine_WDL_headgear;
	class TCF_Reach_Scout_Helmet;
	
//ATLAS HELMETS

	class 53rd_Atlas_CH252: HaloInf_Marine_WDL_NV_headgear
	{
		author="Body&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Helmet (NV)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor",
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_Rework_RFM_Helmet.paa"
		};
	};
	class 53rd_Atlas_CH252_dp: HaloInf_Marine_WDL_NV_headgear
	{
		author="Body&Scarecrow";
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Helmet dp (NV)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor",
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_Rework_RFM_Helmet.paa"
		};
	};
	class 53rd_Atlas_CH252_NV: HaloInf_Marine_WDL_headgear
	{
		author="Body&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Helmet";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_Rework_RFM_Helmet.paa"
		};
	};
	class 53rd_Atlas_CH252_NV_dp: HaloInf_Marine_WDL_headgear
	{
		author="Body&Scarecrow";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Helmet dp";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_Rework_RFM_Helmet.paa"
		};
	};
	class Ranger_Scout_SN: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Snow)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_Scout_Gold_Helmet_SN.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Visor_CO.paa"
		};
	};
    class Ranger_Scout: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Urban)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Ranger_Scout_Urban.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Visor_CO.paa"
		};
	};
	class 53rd_HaloInf_Marine_WDL_UNSC_NV_headgear: HaloInf_Marine_WDL_NV_headgear
	{
		author="Tsuki";
		scope=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Medic (NV)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Medic\53rd_Atlas_Rework__Medic_Helmet.paa"
		};
	};
	class 53rd_HaloInf_Marine_WDL_UNSC_NV_headgear_dp: HaloInf_Marine_WDL_NV_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Medic dp (NV)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Medic\53rd_Atlas_Rework__Medic_Helmet.paa"
		};
	};
	class 53rd_Ranger_CH252_MD: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Atlas Medic";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Medic\53rd_Atlas_Rework__Medic_Helmet.paa"
		};
	};
	class 53rd_Ranger_CH252_MD_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Atlas Medic dp";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Medic\53rd_Atlas_Rework__Medic_Helmet.paa"
		};
	};
}; 
class cfgvehicles
{	
};