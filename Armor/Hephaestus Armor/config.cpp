class CfgPatches {
	class 53rd_Hephaestus_Main {
		units[] = 
        {

        };
		weapons[] = 
        {
		"53rd_haloinfmar_U_AWDL_uniform",
		"53rd_Hephaestus_CH252_No_Vizor",
		"53rd_Hephaestus_CH252_NV",
		"53rd_HaloInf_Marine_WDL_UNSC_NV_headgear",
		"53rd_Hephaestus_CH252_MD",
		"53rd_Hephaestus_Infantry_Veh",
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
	
	
///Apollo Urban
class 53rd_Apollo_uniform_MSR_Rifleman_Urban: Uniform_Base
	{
		author="Body&Scarecrow";
		scope=2;
		scopeCurator=2;
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Urban_AS_co.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Urban_AS_co.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Apollo_Infantry_Veh_Rifleman_Urban";
			containerClass="Supply100";
			mass=80;
		};
	};
	class 53rd_Apollo_uniform_MSR_Rifleman_Winter: Uniform_Base
	{
		author="Body&Scarecrow";
		scope=2;
		scopeCurator=2;
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Winterized_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Winterized_AS_co.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Winterized_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Winterized_AS_co.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Apollo_Infantry_Veh_Rifleman_Winter";
			containerClass="Supply100";
			mass=80;
		};
	};
//Rifleman 
	class 53rd_Hephaestus_uniform_MSR_Rifleman_Urban: Uniform_Base
	{
		author="Body&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Rifleman Armor (Urban)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Hephaestus_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Rework_RFM_Armor_Urban.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Hephaestus_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Rework_RFM_Armor_Urban.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_Rifleman_Urban";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Desert
	class 53rd_Hephaestus_uniform_MSR_Rifleman_Des: Uniform_Base
	{
		author="Body&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Rifleman Armor (Desert)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Top_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Armor_Desert.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Top_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Armor_Desert.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_Rifleman_Des";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Woodland
	class 53rd_Hephaestus_uniform_MSR_Rifleman_WDL: Uniform_Base
	{
		author="Body&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Rifleman Armor (Woodland)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Top_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Armor_Woodland.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Top_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Armor_Woodland.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_Rifleman_WDL";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Winter
	class 53rd_Hephaestus_uniform_MSR_Rifleman_WTR: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Rifleman Armor (Winter)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Armor_Winter.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Armor_Winter.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_Rifleman_WTR";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Specalist
	//Urban
		class 53rd_Hephaestus_uniform_MSR_SPC_Urban: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Specalist Armor (Urban)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Hephaestus_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Urban\53rd_Rework_SPC_Armor_Urban.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Hephaestus_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Urban\53rd_Rework_SPC_Armor_Urban.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_SPC_Urban";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Woodland
		class 53rd_Hephaestus_uniform_MSR_SPC_WDL: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Specalist Armor (Woodland)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Top_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Woodland\53rd_Rework_SPC_Armor_Woodland.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Top_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Woodland\53rd_Rework_SPC_Armor_Woodland.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_SPC_WDL";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Desert
	class 53rd_Hephaestus_uniform_MSR_SPC_DES: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Specalist Armor (Desert)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Top_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Desert\53rd_Rework_SPC_Armor_Desert.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Top_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Desert\53rd_Rework_SPC_Armor_Desert.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_SPC_DES";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Winter
	class 53rd_Hephaestus_uniform_MSR_SPC_WTR: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Specalist Armor (Winter)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Winter\53rd_Rework_SPC_Armor_Winter.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Winter\53rd_Rework_SPC_Armor_Winter.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_SPC_WTR";
			containerClass="Supply100";
			mass=80;
		};
	};
	//JTAC
	/*class 53rd_Hephaestus_uniform_MSR_JTAC_Urban: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
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
		scopeCurator=2;
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
		scopeCurator=2;
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
		scopeCurator=2;
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
	*/
	//NCO
	//Urban
	class 53rd_Hephaestus_uniform_MSR_SL_Urban: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus NCO Armor (Urban)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\TL\53rd_Hephaestus_Army_NCO_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Urban\53rd_Rework_SL_Armor_Urban.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\TL\53rd_Hephaestus_Army_NCO_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Urban\53rd_Rework_SL_Armor_Urban.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_SL_Urban";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Woodland
	class 53rd_Hephaestus_uniform_MSR_SL_Woodland: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus NCO Armor (Woodland)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Armor_Woodland.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Armor_Woodland.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_SL_Woodland";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Desert
	class 53rd_Hephaestus_uniform_MSR_SL_Desert: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus NCO Armor (Desert)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Armor_Desert.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Armor_Desert.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_SL_Desert";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Winter
		class 53rd_Hephaestus_uniform_MSR_SL_Winter: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus NCO Armor (Winter)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Armor_Winter.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Armor_Winter.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_SL_Winter";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Medic
	class 53rd_Hephaestus_uniform_MSR_Medic_Urban: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Medic Armor (Urban)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Hephaestus_Army_top_AS_co.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Urban\53rd_Rework_Medic_Armor_Urban.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Hephaestus_Army_top_AS_co.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Urban\53rd_Rework_Medic_Armor_Urban.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_Medic_Urban";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Woodland
		class 53rd_Hephaestus_uniform_MSR_Medic_Woodland: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Medic Armor (Woodland)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Woodland\53rd_Rework_Medic_Armor_Woodland.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Woodland\53rd_Rework_Medic_Armor_Woodland.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_Medic_Woodland";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Desert
		class 53rd_Hephaestus_uniform_MSR_Medic_Desert: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Medic Armor (Desert)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Desert\53rd_Rework_Medic_Armor_Desert.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Top_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Desert\53rd_Rework_Medic_Armor_Desert.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_Medic_Desert";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Winter
		class 53rd_Hephaestus_uniform_MSR_Medic_Winter: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Medic Armor (Winter)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Winter\53rd_Rework_Medic_Armor_Winter.paa",
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
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Winter\53rd_Rework_Medic_Armor_Winter.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_Medic_Winter";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Helmets
	//Rifleman
	//Urban
	class 53rd_Hephaestus_Rifleman_CH252_Urban_No_Visor: HaloInf_Marine_WDL_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Helmets\53rd_Rework_Rifleman_Helmet_Urban.paa"
		};
	};
	class 53rd_Hephaestus_CH252_Visor: HaloInf_Marine_WDL_headgear
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Helmets\53rd_Rework_Rifleman_Helmet_Urban.paa"
		};
	};
	//Woodland
	class 53rd_Hephaestus_Rifleman_CH252_Woodland_No_Visor: HaloInf_Marine_WDL_NV_headgear //works
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
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
		scopeCurator=2;
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
		scopeCurator=2;
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
		scopeCurator=2;
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
		scopeCurator=2;
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
		scopeCurator=2;
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
		scopeCurator=2;
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
		scopeCurator=2;
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

/// Apollo
//URBAN MODELS
class 53rd_Apollo_CH252_Visor_MV_Urban: HaloInf_Marine_WDL_headgear
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Helmet_W_Visor_co.paa"
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Helmet_W_Visor_co.paa"
		};
	};
	class 53rd_Apollo_CH252_Visor_MNV_Urban: HaloInf_Marine_WDL_NV_headgear
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Helmet_W_Visor_co.paa"
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Helmet_W_Visor_co.paa"
		};
	};
/// WINTER MODELS
	class 53rd_Apollo_CH252_Visor_MV_Win: HaloInf_Marine_WDL_headgear
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Winterized_Helmet_W_Visor_co.paa"
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Winterized_Helmet_W_Visor_co.paa"
		};
	};
	class 53rd_Apollo_CH252_Visor_MNV_Win: HaloInf_Marine_WDL_NV_headgear
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Winterized_Helmet_W_Visor_co.paa"
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Winterized_Helmet_W_Visor_co.paa"
		};
	};
};

//Rifleman 2
class cfgvehicles
{
	class haloinf_Marine_Soldier_base_F;
	//Apollo
		class 53rd_Apollo_Infantry_Veh_Rifleman_Urban: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Urban_AS_co.paa",
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
		class 53rd_Apollo_Infantry_Veh_Rifleman_Winter: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Winterized_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Apollo\53rd_Apollo_Army_Winterized_AS_co.paa",
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
//Urban
	class 53rd_Hephaestus_Infantry_Veh_Rifleman_Urban: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Rifleman Armor (Urban)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Hephaestus_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Rework_RFM_Armor_Urban.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_Rifleman_Urban";
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
	//Desert
		class 53rd_Hephaestus_Infantry_Veh_Rifleman_Des: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Rifleman Armor (Desert)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Top_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Armor_Desert.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_Riflema_Des";
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
	//Woodland
	class 53rd_Hephaestus_Infantry_Veh_Rifleman_WDL: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Rifleman Armor (Woodland)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Top_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Armor_Woodland.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_Rifleman_WDL";
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
	//Winter
		class 53rd_Hephaestus_Infantry_Veh_Rifleman_WTR: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Rifleman Armor (Woodland)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Armor_Winter.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_Rifleman_WTR";
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
	//SPC 2
		class 53rd_Hephaestus_Infantry_Veh_SPC_Urban: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Specalist Armor (Urban)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Hephaestus_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Urban\53rd_Rework_SPC_Armor_Urban.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_SPC_Urban";
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
	class 53rd_Hephaestus_Infantry_Veh_SPC_WDL: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Specalist Armor (Woodland)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Top_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Woodland\53rd_Rework_SPC_Armor_Woodland.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_SPC_WDL";
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
	class 53rd_Hephaestus_Infantry_Veh_SPC_DES: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Specalist Armor (Desert)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Top_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Desert\53rd_Rework_SPC_Armor_Desert.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_SPC_DES";
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
	class 53rd_Hephaestus_Infantry_Veh_SPC_WTR: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Specalist Armor (Winter)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SPC\SPC_Winter\53rd_Rework_SPC_Armor_Winter.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_SPC_WTR";
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
	//JTAC 2
		/*class 53rd_Hephaestus_Infantry_Veh_JTAC_Urban: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
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
			scopeCurator=2;
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
			scopeCurator=2;
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
			scopeCurator=2;
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
	*/
	//SL 2
	//Urban
		class 53rd_Hephaestus_Infantry_Veh_SL_Urban: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Squad Leader Armor (Urban)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\TL\53rd_Hephaestus_Army_NCO_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Urban\53rd_Rework_SL_Armor_Urban.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_SL_Urban";
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
	//Woodland
	class 53rd_Hephaestus_Infantry_Veh_SL_Woodland: haloinf_Marine_Soldier_base_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Squad Leader Armor (Woodland)";
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
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Armor_Woodland.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Hephaestus_uniform_MSR_SL_Woodland";
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
	//Desert
		class 53rd_Hephaestus_Infantry_Veh_SL_Desert: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Squad Leader Armor (Desert)";
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
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Armor_Desert.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_SL_Desert";
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
	//Winter
			class 53rd_Hephaestus_Infantry_Veh_SL_Winter: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Squad Leader Armor (Winter)";
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
            "53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Armor_Winter.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_SL_Winter";
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
	//Medic2
	//Urban
		class 53rd_Hephaestus_Infantry_Veh_Medic_Urban: haloinf_Marine_Soldier_base_F
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Medic Armor (Urban)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\53rd_Hephaestus_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Urban\53rd_Rework_Medic_Armor_Urban.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_uniform_MSR_Medic_Urban";
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
	//Woodland
	class 53rd_Hephaestus_Infantry_Veh_Medic_Woodland: haloinf_Marine_Soldier_base_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Medic Armor (Woodland)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
		"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Woodland\53rd_Rework_SL_Top_Woodland",
		"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Woodland\53rd_Rework_Rifleman_Pants_Woodland.paa",
		"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Woodland\53rd_Rework_Medic_Armor_Woodland.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Hephaestus_uniform_MSR_Medic_Woodland";
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
	//Desert
	class 53rd_Hephaestus_Infantry_Veh_Medic_Desert: haloinf_Marine_Soldier_base_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Medic Armor (Desert)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
		"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Desert\53rd_Rework_SL_Top_Desert.paa",
		"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Desert\53rd_Rework_Rifleman_Pants_Desert.paa",
		"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Desert\53rd_Rework_Medic_Armor_Desert.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Hephaestus_uniform_MSR_Medic_Desert";
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
	//Winter
	class 53rd_Hephaestus_Infantry_Veh_Medic_Winter: haloinf_Marine_Soldier_base_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Hephaestus Medic Armor (Winter)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
		"53rd_SC_aux\Armor\Hephaestus Armor\SL\SL_Winter\53rd_Rework_SL_Top_Winter.paa",
        "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Winter\53rd_Rework_Rifleman_Pants_Winter.paa",
		"53rd_SC_aux\Armor\Hephaestus Armor\Medic\Medic_Winter\53rd_Rework_Medic_Armor_Winter.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Hephaestus_uniform_MSR_Medic_Winter";
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




