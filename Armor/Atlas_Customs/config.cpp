class CfgPatches {
	class 53rd_Atlas_Main {
		units[] = 
        {
        };
		weapons[] = 
        {
			"53rd_haloinfodst_U_uniform",
			"53rd_Ranger_CH252_NML",
			"53rd_Ranger_CH252_NV",
			"53rd_Ranger_CH252_MD",
			"53rd_Ranger_CH252_MD_NV",
			"Ranger_Scout",
			"Ranger_Scout_PL",
			"53rd_Atlas_T_uniform",
			"53rd_Atlas_Y_uniform",
			"53rd_Atlas_B_uniform",
			"53rd_Atlas_PL_uniform",
			"53rd_Atlas_T_uniform",
			"53rd_Atlas_Platoon_V",
			"53rd_Atlas_Yellow_V",
			"53rd_Atlas_LoneWulf_Armor",
			"53rd_Atlas_LoneWulf_Armor_SN",
			"53rd_Atlas_Serpent_Armor",
			"53rd_Atlas_Serpent_Armor_SN",
			"53rd_Atlas_Tsuki_Armor",
			"53rd_Atlas_Tsuki_Armor_SN",
			"53rd_Atlas_Texas_Armor",
			"53rd_Atlas_Texas_Armor_SN",
            "53rd_Atlas_Gold_uniform_SN",
            "53rd_Atlas_PL_uniform_SN"
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
	
//Ranger Uniform/Vest
	class 53rd_Atlas_Y_uniform: Uniform_Base
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas- Uniform (Gold / Urban)";
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
			uniformClass="53rd_Atlas_Yellow_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
	class 53rd_Atlas_PL_uniform: 53rd_Atlas_Y_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd]  Atlas - Uniform (Command / Urban)";
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
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_top_Platoon_AS_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Halo_marine_02_armor_Platoon_AS_co.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_top_Platoon_AS_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Halo_marine_02_armor_Platoon_AS_co.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Atlas_Platoon_V";
			containerClass="Supply150";
			mass=80;
		};
	};
    
    class 53rd_Atlas_Gold_uniform_SN: 53rd_Atlas_Y_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd]  Atlas - Uniform (Gold / Snow)";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Gold_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Gold_Armor_SN.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Gold_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Gold_Armor_SN.paa"  
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Atlas_Yellow_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};
    
    class 53rd_Atlas_PL_uniform_SN: 53rd_Atlas_Y_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd]  Atlas - Uniform (Command / Snow)";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas_PL_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_PL_Armor_SN.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas_PL_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_PL_Armor_SN.paa"
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Atlas_Platoon_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
	class 53rd_Atlas_LoneWulf_Armor: 53rd_Atlas_PL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (LoneWulf / Urban)";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Urban\LoneWulf_Custom_Top.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Urban\LoneWulf_Custom_Armor.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Urban\LoneWulf_Custom_Top.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Urban\LoneWulf_Custom_Armor.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_LoneWulf_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
	class 53rd_Atlas_LoneWulf_Armor_SN: 53rd_Atlas_PL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (LoneWulf / Snow)";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Snow\LoneWulf_Custom_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Snow\LoneWulf_Custom_Armor_SN.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Snow\LoneWulf_Custom_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Snow\LoneWulf_Custom_Armor_SN.paa"  
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_LoneWulf_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
		class 53rd_Atlas_Serpent_Armor: 53rd_Atlas_PL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Serpent / Urban)";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Urban\Serpent_Custom_Top.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Urban\Serpent_Custom_Armor.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Urban\Serpent_Custom_Top.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Urban\Serpent_Custom_Armor.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Serpent_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
	class 53rd_Atlas_Serpent_Armor_SN: 53rd_Atlas_PL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Serpent / Snow)";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Snow\Serpent_Custom_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Snow\Serpent_Custom_Armor_SN.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Snow\Serpent_Custom_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Snow\Serpent_Custom_Armor_SN.paa"   
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Serpent_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};
		
	class 53rd_Atlas_Tsuki_Armor: 53rd_Atlas_PL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Tsuki / Urban)";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Top.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Armor.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Top.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Armor.paa" 
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Tsuki_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
	class 53rd_Atlas_Tsuki_Armor_SN: 53rd_Atlas_PL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Tsuki / Snow)";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Armor_SN.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Armor_SN.paa"   
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Tsuki_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
	class 53rd_Atlas_Texas_Armor: 53rd_Atlas_PL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Texas / Urban)";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Texas\Urban\Texas_Custom_Armor.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Texas\Urban\Texas_Custom_Armor.paa"
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Texas_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	
	class 53rd_Atlas_Texas_Armor_SN: 53rd_Atlas_PL_uniform
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Custom Armors (Texas / Snow)";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Gold_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Texas\Snow\Texas_Custom_Armor_SN.paa" 
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Gold_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Texas\Snow\Texas_Custom_Armor_SN.paa"    
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Texas_SN_V";
			containerClass="Supply150";
			mass=80;
		};
	};


//ATLAS HELMETS

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
			"53rd_SC_aux\Armor\Atlas_Customs\53rd_Atlas_Rework_RFM_Helmet.paa"
		};
	};
	class 53rd_Ranger_CH252_NML_dp: HaloInf_Marine_WDL_NV_headgear
	{
		author="Body&Scarecrow";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Ranger Helmet dp (NV)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\53rd_Atlas_Rework_RFM_Helmet.paa"
		};
	};
	class 53rd_Ranger_CH252_NV: HaloInf_Marine_WDL_headgear
	{
		author="Body&Scarecrow";
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
			"53rd_SC_aux\Armor\Atlas_Customs\53rd_Atlas_Rework_RFM_Helmet.paa"
		};
	};
	class 53rd_Ranger_CH252_NV_dp: HaloInf_Marine_WDL_headgear
	{
		author="Body&Scarecrow";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Ranger Helmet dp";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas_Customs\53rd_Atlas_Rework_RFM_Helmet.paa"
		};
	};
	//ranger scout
	class 53rd_Atlas_LoneWulf_Custom_Helmet: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Urban)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Urban\LoneWulf_Custom_Helmet.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Urban) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Urban\LoneWulf_Custom_Helmet.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_SN: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Snow)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Snow\LoneWulf_Custom_Helmet_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_LoneWulf_Custom_Helmet_SN_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (LoneWulf / Snow) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Snow\LoneWulf_Custom_Helmet_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Urban)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Urban\Serpent_Custom_Helmet.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Urban) dp";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Urban\Serpent_Custom_Helmet.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_SN: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Snow)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Snow\Serpent_Custom_Helmet_SN.paa"
		};
	};
	class 53rd_Atlas_Serpent_Custom_Helmet_SN_dp: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] Custom Helmet (Serpent / Snow) dp";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Snow\Serpent_Custom_Helmet_SN.paa"
		};
	};
	class 53rd_Atlas_Tsuki_Custom_Helmet: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Tsuki / Urban)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Helmet.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_Tsuki_Custom_Helmet_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Tsuki / Urban) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Helmet.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_Tsuki_Custom_Helmet_SN: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Tsuki / Snow)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Helmet_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_Tsuki_Custom_Helmet_SN_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Tsuki / Snow) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Helmet_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Atlas_Custom_PL_Visor.paa"
		};
	};
	class 53rd_Atlas_Texas_Custom_Helmet: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Texas / Urban)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Texas\Urban\Texas_Custom_Helmet.paa",
			"53rd_SC_aux\tex\Atlas Armor\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Texas_Custom_Helmet_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Texas / Urban) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Texas\Urban\Texas_Custom_Helmet.paa",
			"53rd_SC_aux\tex\Atlas Armor\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Texas_Custom_Helmet_SN: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Texas / Snow)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Texas\Snow\Texas_Custom_Helmet_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Visor_CO.paa"
		};
	};
	class 53rd_Atlas_Texas_Custom_Helmet_SN_dp: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		author="Tsuki";
		displayName="[53rd] Custom Helmet (Texas / Snow) (Dp)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Texas\Snow\Texas_Custom_Helmet_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Visor_CO.paa"
		};
	};
    class Ranger_Scout: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Urban)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Ranger_Scout_Urban.paa",
			"53rd_SC_aux\tex\Atlas Armor\Visor_CO.paa"
		};
	};
    class Ranger_Scout_SN: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Snow)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Gold_Helmet_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Visor_CO.paa"
		};
	};
    class Ranger_PL_Scout: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Command / Urban)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Ranger_Scout_PL.paa",
			"53rd_SC_aux\tex\Atlas Armor\Visor_CO.paa"
		};
	};
    class Ranger_PL_Scout_SN: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Command / Snow)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Atlas Armor\Atlas_PL_Helmet_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Visor_CO.paa"
		};
	};
	
	class 53rd_HaloInf_Marine_WDL_UNSC_NV_headgear: HaloInf_Marine_WDL_NV_headgear
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
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
			"53rd_SC_aux\tex\Atlas Armor\53rd_Atlas_Rework__Medic_Helmet.paa"
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
			"53rd_SC_aux\tex\Atlas Armor\53rd_Atlas_Rework__Medic_Helmet.paa"
		};
	};
	class 53rd_Ranger_CH252_MD: HaloInf_Marine_WDL_headgear
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
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
			"53rd_SC_aux\tex\Atlas Armor\53rd_Atlas_Rework__Medic_Helmet.paa"
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
			"53rd_SC_aux\tex\Atlas Armor\53rd_Atlas_Rework__Medic_Helmet.paa"
		};
	};
};

class cfgvehicles
{
	class haloinf_Marine_Soldier_base_F;
	class 53rd_Atlas_Yellow_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Yellow V";
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
			uniformClass="53rd_Atlas_Y_uniform";
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
    class 53rd_Atlas_Platoon_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_top_Platoon_AS_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Halo_marine_02_armor_Platoon_AS_co.paa" 
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_Y_uniform";
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
	class 53rd_LoneWulf_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Urban\LoneWulf_Custom_Top.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Urban\LoneWulf_Custom_Armor.paa"  
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
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
	class 53rd_LoneWulf_SN_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Snow\LoneWulf_Custom_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\LoneWulf\Snow\LoneWulf_Custom_Armor_SN.paa" 
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
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
	class 53rd_Serpent_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Urban\Serpent_Custom_Top.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Urban\Serpent_Custom_Armor.paa"  
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
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
	class 53rd_Serpent_SN_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Snow\Serpent_Custom_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Serpent\Snow\Serpent_Custom_Armor_SN.paa" 
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
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
	class 53rd_Tsuki_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Top.paa",
			"53rd_SC_aux\tex\Atlas Armor\53rd_Ranger_02_pants_woodland_two_co.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Urban\Tsuki_Custom_Armor.paa"  
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
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
	class 53rd_Tsuki_SN_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Tsuki\Snow\Tsuki_Custom_Armor_SN.paa" 
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
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
	class 53rd_Texas_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
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
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Texas\Urban\Texas_Custom_Armor.paa"  
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
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
	class 53rd_Texas_SN_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Gold_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas Customs\Texas\Snow\Texas_Custom_Armor_SN.paa" 
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
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
    class 53rd_Atlas_Yellow_SN_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Gold_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Gold_Armor_SN.paa" 
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
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
    class 53rd_Atlas_Platoon_SN_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Platoon V";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Atlas Armor\Atlas_PL_Top_SN.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\tex\Atlas Armor\Atlas_PL_Armor_SN.paa" 
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_PL_uniform";
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
};