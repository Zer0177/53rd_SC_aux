class CfgPatches {
	class 53rd_Atlas_Rifleman_Main
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
#include "..\..\xtdGear.hpp"
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

	
//Atlas Uniform/Vest
	class 53rd_Atlas_Y_uniform: Uniform_Base
	{
		author="Tsuki";
		scope=2;
		scopeCurator=0;
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_top_Urban_AS_co.paa",
			"53rd_SC_aux\Armor\Atlas Armor\53rd_Atlas_pants_Urban_two_co.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_Armor_Urban_AS_co.paa"
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_top_Urban_AS_co.paa",
			"53rd_SC_aux\Armor\Atlas Armor\53rd_Atlas_pants_Urban_two_co.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_Armor_Urban_AS_co.paa"
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Atlas_Yellow_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Gold_uniform_SN: Uniform_Base
	{
		author="Tsuki";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Atlas- Uniform (Gold / Snow)";
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_SN.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_SN.paa"
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_SN.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_SN.paa"
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Atlas_Yellow_V_SN";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Gold_uniform_DS: Uniform_Base
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd]  Atlas - Uniform (Gold / Desert)";
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_DS.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Desert_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_DS.paa"  
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_DS.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Desert_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_DS.paa"   
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Atlas_Yellow_DS_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Gold_uniform_WD: Uniform_Base
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd]  Atlas - Uniform (Gold / Woodland)";
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_WD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Woodland_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_WD.paa"  
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_WD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Woodland_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_WD.paa"   
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Atlas_Yellow_WD_V";
			containerClass="Supply150";
			mass=80;
		};
	};
	class 53rd_Atlas_Gold_uniform_AD: Uniform_Base
	{
		author="Tsuki";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd]  Atlas - Uniform (Gold / Arid)";
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_AD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Arid_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_AD.paa"  
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_AD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Arid_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_AD.paa"   
			};
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="53rd_Atlas_Yellow_AD_V";
			containerClass="Supply150";
			mass=80;
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_Scout_Gold_Helmet_SN.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Visor_CO.paa"
		};
	};
	class Ranger_Scout_DS: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Desert)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Helmet_DS.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Visor_CO.paa"
		};
	};
	class Ranger_Scout_WD: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Woodland)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Helmet_WD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Visor_CO.paa"
		};
	};
	class Ranger_Scout_AD: TCF_Reach_Scout_Helmet
	{
		dlc="53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="Tsuki";
		displayName="[53rd] Atlas Scout (Gold / Arid)";
		model="TCF_Equipment\Helmets\Scout\Reach_Scout_Helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Helmet_AD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Visor_CO.paa"
		};
	};
};

//Rifleman 2
class cfgvehicles
{
	class haloinf_Marine_Soldier_base_F;
	class 53rd_Atlas_Yellow_V: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=0;
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_top_Urban_AS_co.paa",
			"53rd_SC_aux\Armor\Atlas Armor\53rd_Atlas_pants_Urban_two_co.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\53rd_Atlas_Armor_Urban_AS_co.paa"
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
		class 53rd_Atlas_Yellow_V_SN: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Ranger - Yellow V SN";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_SN.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Snow_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_SN.paa"
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Atlas_Gold_uniform_SN";
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
	class 53rd_Atlas_Yellow_DS_V: haloinf_Marine_Soldier_base_F
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_DS.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Desert_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_DS.paa" 
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
	class 53rd_Atlas_Yellow_WD_V: haloinf_Marine_Soldier_base_F
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_WD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Woodland_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_WD.paa" 
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
	class 53rd_Atlas_Yellow_AD_V: haloinf_Marine_Soldier_base_F
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
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Top_AD.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas_Arid_Pants.paa",
			"53rd_SC_aux\Armor\Atlas Armor\Atlas Rifleman\Atlas_Gold_Armor_AD.paa" 
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