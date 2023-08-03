class CfgPatches 
{
	class 53rd_Hephaestus_JTAC_MSR
	{
		units[] = 
        {

        };
		weapons[] = 
        {
		"53rd_Hephaestus_uniform_MSR_JTAC_Urban",
		"53rd_Hephaestus_uniform_MSR_JTAC_Woodland",
		"53rd_Hephaestus_uniform_MSR_JTAC_Desert",
		"53rd_Hephaestus_uniform_MSR_JTAC_Winter",
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
/*
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
	
	//JTAC
	class 53rd_Hephaestus_uniform_MSR_JTAC_Urban: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus JTAC Armor (Urban)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Urban\53rd_Rework_JTAC_Armor_Urban.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Urban\53rd_Rework_JTAC_Armor_Urban.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_JTAC_Urban";
			containerClass="Supply100";
			mass=80;
		};
	};
	class 53rd_Hephaestus_uniform_MSR_JTAC_Woodland: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus JTAC Armor (Woodland)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Woodland\53rd_Rework_JTAC_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Woodland\53rd_Rework_JTAC_Armor_Woodland.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Woodland\53rd_Rework_JTAC_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Woodland\53rd_Rework_JTAC_Armor_Woodland.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_JTAC_Woodland";
			containerClass="Supply100";
			mass=80;
		};
	};
	class 53rd_Hephaestus_uniform_MSR_JTAC_Desert: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus JTAC Armor (Desert)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Desert\53rd_Rework_JTAC_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Desert\53rd_Rework_JTAC_Armor_Desert.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Desert\53rd_Rework_JTAC_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Desert\53rd_Rework_JTAC_Armor_Desert.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_JTAC_Desert";
			containerClass="Supply100";
			mass=80;
		};
	};
	class 53rd_Hephaestus_uniform_MSR_JTAC_Winter: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus JTAC Armor (Winter)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Winter\53rd_Rework_JTAC_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Winter\53rd_Rework_JTAC_Armor_Winter.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Winter\53rd_Rework_JTAC_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Winter\53rd_Rework_JTAC_Armor_Winter.paa",

			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_JTAC_Winter";
			containerClass="Supply100";
			mass=80;
		};
	};
};

//Rifleman 2
class cfgvehicles
{
	class haloinf_Marine_Soldier_base_F;
	//JTAC 2
		/*class 53rd_Hephaestus_Infantry_Veh_JTAC_Urban: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus JTAC Armor (Urban)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Top_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Urban\53rd_Rework_JTAC_Armor_Urban.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_JTAC_Urban";
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
	class 53rd_Hephaestus_Infantry_Veh_JTAC_Woodland: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus JTAC Armor (Woodland)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Woodland\53rd_Rework_JTAC_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Woodland\53rd_Rework_JTAC_Armor_Woodland.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_JTAC_Woodland";
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
	class 53rd_Hephaestus_Infantry_Veh_JTAC_Desert: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus JTAC Armor (Desert)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Desert\53rd_Rework_JTAC_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Desert\53rd_Rework_JTAC_Armor_Desert.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_JTAC_Desert";
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
	class 53rd_Hephaestus_Infantry_Veh_JTAC_Winter: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus JTAC Armor (Winter)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Winter\53rd_Rework_JTAC_Top_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\JTAC\JTAC_Winter\53rd_Rework_JTAC_Armor_Winter.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_JTAC_Winter";
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