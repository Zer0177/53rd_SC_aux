class CfgPatches {
	class 53rd_Apollo_Main {
		units[] = 
        {

        };
		weapons[] = 
        {
		"53rd_Apollo_uniform_MSR_Rifleman_Woodland",
		"53rd_Apollo_uniform_MSR_Rifleman_Desert",
		"53rd_Apollo_uniform_MSR_Rifleman_Urban",
		"53rd_Apollo_uniform_MSR_Rifleman_Winter",
		"53rd_Apollo_CH252_Visor_MNV",
		"53rd_Apollo_CH252_Visor_MV",
		"53rd_Apollo_CH252_Visor_MNV_Urban",
		"53rd_Apollo_CH252_Visor_MNV_Win",
		"53rd_Apollo_CH252_Visor_MV_Urban",
		"53rd_Apollo_CH252_Visor_MV_Win",
		
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
	
///Apollo Urban
	class 53rd_Apollo_uniform_MSR_Rifleman_Urban: Uniform_Base
		{
			author="Body&Scarecrow";
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			allowedSlots[]={901};
			displayName="[53rd] Apollo Rifleman Armor (Urban)";
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
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Urban\53rd_Apollo_Army_top_AS_Urban_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Urban\53rd_Apollo_Army_Urban_AS_co.paa",
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
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Urban\53rd_Apollo_Army_top_AS_Urban_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Urban\53rd_Apollo_Army_Urban_AS_co.paa",
				};
				uniformType = "Neopren";
				uniformClass="53rd_Apollo_Infantry_Veh_Rifleman_Urban";
				containerClass="Supply100";
				mass=80;
			};
		};
		class 53rd_Apollo_uniform_MSR_Rifleman_Desert: Uniform_Base
		{
			author="Body&Scarecrow";
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			allowedSlots[]={901};
			displayName="[53rd] Apollo Rifleman Armor (Desert)";
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
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Desert\53rd_Apollo_Army_top_AS_Desert_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Desert\53rd_Apollo_Army_Desert_AS_co.paa",
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
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Desert\53rd_Apollo_Army_top_AS_Desert_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Desert\53rd_Apollo_Army_Desert_AS_co.paa",
				};
				uniformType = "Neopren";
				uniformClass="53rd_Apollo_Infantry_Veh_Rifleman_Desert";
				containerClass="Supply100";
				mass=80;
			};
		};
			class 53rd_Apollo_uniform_MSR_Rifleman_Woodland: Uniform_Base
		{
			author="Body&Scarecrow";
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			allowedSlots[]={901};
			displayName="[53rd] Apollo Rifleman Armor (Woodland)";
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
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Woodland\53rd_Apollo_Army_top_AS_Woodland_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Woodland\53rd_Apollo_Army_Woodland_AS_co.paa",
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
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Woodland\53rd_Apollo_Army_top_AS_Woodland_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Woodland\53rd_Apollo_Army_Woodland_AS_co.paa",
				};
				uniformType = "Neopren";
				uniformClass="53rd_Apollo_Infantry_Veh_Rifleman_Woodland";
				containerClass="Supply100";
				mass=80;
			};
		};
		class 53rd_Apollo_uniform_MSR_Rifleman_Winter: Uniform_Base
		{
			author="Body&Scarecrow";
			scope=2;
			scopeArsenal=2;
			side=1;
			allowedSlots[]={901};
			displayName="[53rd] Apollo Rifleman Armor (Winter)";
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
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Winter\53rd_Apollo_Army_top_AS_Winter_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Winter\53rd_Apollo_Army_Winter_AS_co.paa",
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
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Winter\53rd_Apollo_Army_top_AS_Winter_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Winter\53rd_Apollo_Army_Winter_AS_co.paa",
				};
				uniformType = "Neopren";
				uniformClass="53rd_Apollo_Infantry_Veh_Rifleman_Winter";
				containerClass="Supply100";
				mass=80;
			};
		};
		/// Apollo
	//URBAN MODELS
	class 53rd_Apollo_CH252_Visor_MV_Urban: HaloInf_Marine_WDL_headgear
		{
			author="Cherri&Scarecrow";
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Apollo Helmet Urban (Visor)";
			picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
			model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Helmets\53rd_Apollo_Army_Helmet_W_Visor_co.paa"
			};
		};
		class 53rd_Apollo_CH252_Visor_MV_Urban_DP: HaloInf_Marine_WDL_headgear
		{
			author="Cherri&Scarecrow";
			scope=1;
			scopeCurator=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Apollo Helmet Urban (Visor) DP";
			picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
			model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Helmets\53rd_Apollo_Army_Helmet_W_Visor_co.paa"
			};
		};
		class 53rd_Apollo_CH252_Visor_MNV_Urban: HaloInf_Marine_WDL_NV_headgear
		{
			author="Cherri&Scarecrow";
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Apollo Helmet Urban (No Visor)";
			picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
			model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Helmets\53rd_Apollo_Army_Helmet_W_Visor_co.paa"
			};
		};
		class 53rd_Apollo_CH252_Visor_MNV_Urban_DP: HaloInf_Marine_WDL_NV_headgear
		{
			author="Cherri&Scarecrow";
			scope=1;
			scopeCurator=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Apollo Helmet Urban (No Visor) DP";
			picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
			model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Helmets\53rd_Apollo_Army_Helmet_W_Visor_co.paa"
			};
		};
	/// WINTER MODELS
		class 53rd_Apollo_CH252_Visor_MV_Win: HaloInf_Marine_WDL_headgear
		{
			author="Cherri&Scarecrow";
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Apollo Helmet Winter (Visor)";
			picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
			model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Helmets\53rd_Apollo_Army_Winterized_Helmet_W_Visor_co.paa"
			};
		};
		class 53rd_Apollo_CH252_Visor_MV_Win_DP: HaloInf_Marine_WDL_headgear
		{
			author="Cherri&Scarecrow";
			scope=1;
			scopeCurator=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Apollo Helmet Winter (Visor) DP";
			picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
			model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Helmets\53rd_Apollo_Army_Winterized_Helmet_W_Visor_co.paa"
			};
		};
		class 53rd_Apollo_CH252_Visor_MNV_Win: HaloInf_Marine_WDL_NV_headgear
		{
			author="Cherri&Scarecrow";
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Apollo Helmet Winter  (No Visor)";
			picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
			model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Helmets\53rd_Apollo_Army_Winterized_Helmet_W_Visor_co.paa"
			};
		};
		class 53rd_Apollo_CH252_Visor_MNV_Win_DP: HaloInf_Marine_WDL_NV_headgear
		{
			author="Cherri&Scarecrow";
			scope=1;
			scopeCurator=1;
			scopeArsenal=1;
			side=1;
			displayName="[53rd] Apollo Helmet Winter  (No Visor) DP";
			picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
			model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Helmets\53rd_Apollo_Army_Winterized_Helmet_W_Visor_co.paa"
			};
		};
};
class cfgvehicles
{
	class haloinf_Marine_Soldier_base_F;
	//Apollo
	class 53rd_Apollo_Infantry_Veh_Rifleman_Urban: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Apollo Urban";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Urban\53rd_Apollo_Army_top_AS_Urban_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Urban\53rd_Apollo_Army_Urban_AS_co.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Apollo_uniform_MSR_Rifleman_Urban";
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
	class 53rd_Apollo_Infantry_Veh_Rifleman_Desert: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Apollo Desert";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Desert\53rd_Apollo_Army_top_AS_Desert_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Desert\53rd_Apollo_Army_Desert_AS_co.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Apollo_uniform_MSR_Rifleman_Desert";
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
	class 53rd_Apollo_Infantry_Veh_Rifleman_Woodland: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Apollo Woodland";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Woodland\53rd_Apollo_Army_top_AS_Woodland_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Woodland\53rd_Apollo_Army_Woodland_AS_co.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Apollo_uniform_MSR_Rifleman_Woodland";
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
	class 53rd_Apollo_Infantry_Veh_Rifleman_Winter: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Apollo Winter";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Winter\53rd_Apollo_Army_top_AS_Winter_co.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\Armor\Winter\53rd_Apollo_Army_Winter_AS_co.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Apollo_uniform_MSR_Rifleman_Winter";
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