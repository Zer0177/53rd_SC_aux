#include "Functions\CfgFunctions.hpp"
class CfgPatches {
	class black_body {
		units[] = 
        {
            "BDU_V_Volare_Black",
            "53rd_BDU_V_Slim"
        };
		weapons[] = 
        {
			"53rd_MA37",
			"53rd_MA37GL",
			"53rd_MA32",
			"53rd_MA32GL",
			"H_HelmetCrew_B",
			"53rd_HelmetCrew_B",
            "Volare_BDU_Bl",
			"53rd_VX19_Black_Helmet",
			"53rd_VX19_Blue_Helmet", 
			"53rd_BDU_Slim"
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
class cfgWeapons {
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


//Base

    class 53rd_Recon_Helmet_Base: OPTRE_UNSC_CH252D_Helmet_Base
	{
		dlc="OPTRE";
		scope=2;
		author="Article 2 Studios";
		displayName="R/B5 Helmet";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		model="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\recon_co.paa",
			"optre_unsc_units\army\data\recon_visor_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_unsc_units\army\data\recon_co.paa",
				"optre_unsc_units\army\data\recon_visor_co.paa"
			};
			class HitpointsProtectionInfo
            {
                
				class Head
                {
                    hitPointName="HitHead";
                    armor=40;
                    passThrough=0.1;
                };
            };
		};
	};
	
	class 53rd_Armor_Rifleman: OPTRE_UNSC_M52A_Armor_Base
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				//"AS_MediumLeft",
				//"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
		};
	};

	class 53rd_Armor_Specialist: OPTRE_UNSC_M52A_Armor_Base
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				//"AS_MediumLeft",
				//"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				//"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				//"AP_AR",
				"AP_Pack",
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
		};
	};
	
    class 53rd_Armor_Medic: OPTRE_UNSC_M52A_Armor_Base
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				//"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				//"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				//"AP_AR",
				"AP_BR",
				//"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				//"AP_AR",
				"AP_Pack",
				//"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
		};
	};

    class 53rd_Armor_TL: OPTRE_UNSC_M52A_Armor_Base
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				//"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				//"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				//"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				//"AP_Knife",
				"AP_MGThigh",
				//"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				//"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
		};
	};
	
    class 53rd_Armor_SL: OPTRE_UNSC_M52A_Armor_Base
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				//"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				//"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				//"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				//"AP_Knife",
				//"AP_MGThigh",
				//"AP_AR",
				//"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				//"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
		};
	};
	
    class 53rd_Armor_Medic_NCO: OPTRE_UNSC_M52A_Armor_Base
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				//"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				//"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				//"AP_AR",
				"AP_BR",
				//"AP_Canteen",
				"AP_GL",
				//"AP_Knife",
				//"AP_MGThigh",
				//"AP_AR",
				//"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				//"AP_Thigh",
				//"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
		};
	};
	
    class 53rd_Raider_Armor_Base: OPTRE_UNSC_M52A_Armor_Base
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				"AS_LargeLeft",
				//"AS_LargeRight",
				//"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				//"AP_Pistol",
				//"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				//"AP_Sniper",
				//"AP_Thigh",
				"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
		};
	};
	
    class 53rd_Raider_Armor_NCO_Base: OPTRE_UNSC_M52A_Armor_Base
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_co.paa",
			"optre_unsc_units\army\data\armor_co.paa",
			"optre_unsc_units\army\data\legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				"AS_LargeLeft",
				//"AS_LargeRight",
				//"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				//"AP_Knife",
				//"AP_MGThigh",
				"AP_AR",
				//"AP_Pack",
				"AP_Pistol",
				//"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				//"AP_Sniper",
				//"AP_Thigh",
				//"AP_Frag",
				//"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\vest_co.paa",
				"optre_unsc_units\army\data\armor_co.paa",
				"optre_unsc_units\army\data\legs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\odst_armor_co.paa"
			};
		};
	};
//End Base
    
//Volare Helmet
    class OPTRE_FC_VX19_Helmet;

    class 53rd_VX19_Black_Helmet : OPTRE_FC_VX19_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        author = "53rd AUX TEAM";
        weaponPoolAvailable = 1;
        model="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
		displayName = "[53rd] VX19 Flight Helmet (Black V)";
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.60;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Volare Armor\h3_pilothelmet_black_CO.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
        class ItemInfo: HeadgearItem
		{
            hiddenSelections[] = {"camo","camo2"};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_Aux\tex\Volare Armor\h3_pilothelmet_black_CO.paa",
                "53rd_SC_Aux\tex\visr_black_CO.paa"
            };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 20;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 40;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
    class 53rd_VX19_Black_Helmet_dp : 53rd_VX19_Black_Helmet
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] VX19 Flight Helmet (Black V) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_black_CO.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo","camo2"};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_Aux\tex\Volare Armor\h3_pilothelmet_black_CO.paa",
                ""
            };
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"OPTRE_FC_Units\Marines\data\h3_pilothelmet_Visor_trans.rvmat"
			};
        };
    };
    class 53rd_VX19_Blue_Helmet : 53rd_VX19_Black_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] VX19 Flight Helmet (Blue V)";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_blue_CO.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
    };
    class 53rd_VX19_Blue_Helmet_dp : 53rd_VX19_Black_Helmet
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] VX19 Flight Helmet (Blue V) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_blue_CO.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo","camo2"};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_blue_CO.paa",
                ""
            };
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"OPTRE_FC_Units\Marines\data\h3_pilothelmet_Visor_trans.rvmat"
			};
        };
    };

    /*class 53rd_VX19_Black_Helmet: OPTRE_FC_VX19_Helmet
	{
        scope = 2;
        scopeArsenal = 2;
		author = "53rd AUX TEAM";
		displayName = "[53rd] VX19 Flight Helmet (Black V)";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Volare Armor\h3_pilothelmet_black_CO.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
	};
    class 53rd_VX19_Black_Helmet_dp: OPTRE_FC_VX19_Helmet_dp
	{
        scope = 1;
        scopeArsenal = 1;
		author = "53rd AUX TEAM";
		displayName = "[53rd] VX19 Flight Helmet (Black V) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_black_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
	};
	class 53rd_VX19_Blue_Helmet: 53rd_VX19_Black_Helmet
	{
        scope = 2;
        scopeArsenal = 2;
		author = "Body";
		displayName = "[53rd] VX19 Flight Helmet (Blue V)";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_blue_CO.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
	};
	class 53rd_Peg_VX19_Blue_Helmet_dp: OPTRE_FC_VX19_Helmet_dp
	{
        scope = 1;
        scopeArsenal = 1;
		author = "Body";
		displayName = "[53rd] VX19 Flight Helmet (Black V) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_blue_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
	};*/
    
//Volare Armor
    class OPTRE_FC_M52B_Armor_Rifleman;
    class OPTRE_FC_M52B_Armor_Teamleader;
	class OPTRE_FC_Marines_Uniform;

    class 53rd_V_Pilot_Armor_Black:OPTRE_FC_M52B_Armor_Rifleman
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Vest (Black)";
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_vest_black_co.paa"};
    };
    class 53rd_V_Pilot_Armor_Black_NCO:OPTRE_FC_M52B_Armor_Teamleader
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Vest (NCO\Black)";
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_vest_nco_black_co.paa"};
    };
    class 53rd_V_Pilot_Armor_BU_NCO:OPTRE_FC_M52B_Armor_Teamleader
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Vest (NCO\Blue)";
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_vest_nco_black_blue_co.paa"};
    };
    class 53rd_M52A_Volare : 53rd_Armor_Specialist
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX";
        author = "Body";
        displayName = "[53rd] Volare Armor (Rifleman)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
            "53rd_SC_aux\tex\Volare Armor\53th_M52_GB_AM.paa",
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co",
        };
    };
    class 53rd_M52A_Volare_NCO : 53rd_Armor_SL
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX";
        author = "Body";
        displayName = "[53rd] Volare Armor (Squad Leader)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
            "53rd_SC_aux\tex\Volare Armor\53th_M52_GB_AM.paa",
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co",
        };
    };
    class Volare_BDU_Bl:OPTRE_FC_Marines_Uniform
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (Black)";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "BDU_V_Volare_Black";
            uniformType = "Neopren";
            containerClass = "Supply100";
            modelSides[] = {6};
        };
    };
    class Volare_BDU_Bl_NCO:OPTRE_FC_Marines_Uniform
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (NCO\Black)";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "BDU_V_Volare_Black_NCO";
            uniformType = "Neopren";
            containerClass = "Supply100";
            modelSides[] = {6};
        };

    };
	 class Volare_BDU_B2_NCO:OPTRE_FC_Marines_Uniform
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (NCO\Blue)";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "BDU_V_Volare_Blue_NCO";
            uniformType = "Neopren";
            containerClass = "Supply100";
            modelSides[] = {6};
        };

    };
//End Volare
    
//Raider Gear
    class 53rd_Helmet_Lmao: 53rd_Recon_Helmet_Base
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc="53rd AUX";
		author="Ithias";
		displayName="[53rd] Raider Helmet (WIP)";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		model="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Helmet.paa",
			"53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Visor.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Helmet.paa",
				"53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Visor.paa"
			};
		};
	};
    class 53rd_Helmet_Lmao_dp : 53rd_Helmet_Lmao 
    {
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Helmet.paa",
			""
		};
        
    };
    class 53rd_Raider_Armor : 53rd_Raider_Armor_Base
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias";
		displayName = "[53rd] Raider Armor (Base WIP)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Vest.paa",
			"53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Armor.paa",
			"53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
        };
	};
    class 53rd_Raider_Armor_NCO : 53rd_Raider_Armor_NCO_Base
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias";
		displayName = "[53rd] Raider Armor (NCO WIP)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Vest.paa",
			"53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Armor.paa",
			"53rd_SC_Aux\tex\Raider Armor\53rd_Raider_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
        };
	};
//End Raider
		
//Stetson
    class ItemCore;
    class InventoryItem_Base_F;

	class DAR_Stetson_53rd: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "[53rd] Stetson";
		author = "Richards.D/Ithias";
		picture = "\DAR_Stetson\UI\icon_h_stetson_ca.paa";
		model = "\DAR_Stetson\DAR_Stetson";
		hiddenSelectionsTextures[] = {"\53rd_SC_Aux\tex\Soft caps\Stetson_co_53rd.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\DAR_Stetson\DAR_Stetson";
			modelSides[] = {3,1};
			armor = 40;
			passThrough = 0.1;
			hiddenSelectionsTextures[] = {"\53rd_SC_Aux\tex\Soft caps\Stetson_co_53rd.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	

//Berets
    class H_HelmetB;

    class 53rd_Beret_Hephaestus: H_HelmetB
	{
		author="Bohemia Interactive";
		scope=2;
		scopeArsenal = 2;
		displayName="[53rd] Beret (Hephaestus)";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca";
		model="a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Hephaestus.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="a3\characters_f_epb\BLUFOR\headgear_beret02";
			hiddenSelections[]=
			{
				"Camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=40;
					passThrough=0.5;
				};
			};
		};
	};
	
    class 53rd_Beret_Athena: H_HelmetB
	{
		author="Bohemia Interactive";
		scope=2;
		scopeArsenal = 2;
		displayName="[53rd] Beret (Athena)";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca";
		model="a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Athena.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="a3\characters_f_epb\BLUFOR\headgear_beret02";
			hiddenSelections[]=
			{
				"Camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=40;
					passThrough=0.5;
				};
			};
		};
	};
	
    class 53rd_Beret_Volare: H_HelmetB
	{
		author="Bohemia Interactive";
		scope=2;
		scopeArsenal = 2;
		displayName="[53rd] Beret (Volare)";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca";
		model="a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Volare.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="a3\characters_f_epb\BLUFOR\headgear_beret02";
			hiddenSelections[]=
			{
				"Camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=40;
					passThrough=0.5;
				};
			};
		};
	};	
    
    //Weapons
	class OPTRE_MA37
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_MA32
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_MA37GL
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_MA32GL
	{
		class WeaponSlotsInfo;
	};
    
    
	class 53rd_MA37: OPTRE_MA37
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA37A";
		baseWeapon="53rd_MA37";
		cursor="OPTRE_MA37";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_762x51_Mag_AP",
			"OPTRE_60Rnd_762x51_Mag_APT",
			"OPTRE_60Rnd_762x51_Mag_JHP",
			"OPTRE_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST"
		};
    };
	class 53rd_MA37GL: OPTRE_MA37GL
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA37A + GL";
		baseWeapon="53rd_MA37GL";
		cursor="OPTRE_MA37";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_762x51_Mag_AP",
			"OPTRE_60Rnd_762x51_Mag_APT",
			"OPTRE_60Rnd_762x51_Mag_JHP",
			"OPTRE_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST"
		};
    };
	class 53rd_MA32: OPTRE_MA32
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA32A";
		baseWeapon="53rd_MA32";
		cursor="OPTRE_MA32";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_762x51_Mag_AP",
			"OPTRE_60Rnd_762x51_Mag_APT",
			"OPTRE_60Rnd_762x51_Mag_JHP",
			"OPTRE_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST"
		};
    };
	class 53rd_MA32GL: OPTRE_MA32GL
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA32A + GL";
		baseWeapon="53rd_MA32GL";
		cursor="OPTRE_MA37";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_762x51_Mag_AP",
			"OPTRE_60Rnd_762x51_Mag_APT",
			"OPTRE_60Rnd_762x51_Mag_JHP",
			"OPTRE_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST"
		};
    };
};

class CfgVehicles
{
	class OPTRE_UNSC_Army_Soldier_WDL;
	class BDU_V_Volare_Black : OPTRE_UNSC_Army_Soldier_WDL 
    { 
        model = "\OPTRE_FC_Units\Marines\h3_uniform.p3d"; 
        uniformClass = "Volare_BDU_Bl"; 
        hiddenSelections[] = {"camo1","camo2"}; 
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_uniform_black_co.paa","LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"}; 
    }; 
	class BDU_V_Volare_Black_NCO : OPTRE_UNSC_Army_Soldier_WDL 
    { 
        model = "\OPTRE_FC_Units\Marines\h3_uniform.p3d"; 
        uniformClass = "Volare_BDU_B1_NCO"; 
        hiddenSelections[] = {"camo1","camo2"}; 
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_uniform_nco_black_co.paa","LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"}; 
    };
	class BDU_V_Volare_Blue_NCO : OPTRE_UNSC_Army_Soldier_WDL 
    { 
        model = "\OPTRE_FC_Units\Marines\h3_uniform.p3d"; 
        uniformClass = "Volare_BDU_B2_NCO"; 
        hiddenSelections[] = {"camo1","camo2"}; 
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_uniform_nco_blue_co.paa","LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"}; 
    };
    
    //Infantry Uniforms
	class VES_BDU_V_Urban;	
	class 53rd_BDU_V_Slim: VES_BDU_V_Urban
	{
		scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
        uniformclass="53rd_BDU_Slim";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Uniforms\V_BDU_Urban_CO",
			"V_FZ_Armor\Data\Uniforms\V_BDU_Urban_CO"
		};
	};
	class 53rd_BDU_V_Wdl_Slim: 53rd_BDU_V_Slim
	{
		scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
        uniformclass="53rd_BDU_Wdl_Slim";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Grn_CO.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Grn_CO.paa"
		};
	};
	class 53rd_BDU_V_Des_Slim: 53rd_BDU_V_Slim
	{
		scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
        uniformclass="53rd_BDU_Des_Slim";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Des_CO.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Des_CO.paa"
		};
	};
	class 53rd_BDU_V_Snw_Slim: 53rd_BDU_V_Slim
	{
		scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
        uniformclass="53rd_BDU_Snw_Slim";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Snw_CO.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Snw_CO.paa"
		};
	};
	class 53rd_BDU_V_Jgl_Slim: 53rd_BDU_V_Slim
	{
		scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
        uniformclass="53rd_BDU_Jgl_Slim";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Jgl_CO.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Jgl_CO.paa"
		};
	};
  
    //BackPacks
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ANPRC_521_Green;
    class OPTRE_ANPRC_515;
	class OPTRE_UNSC_Rucksack_Medic;
	class OPTRE_UNSC_Rucksack_Heavy;
	class OPTRE_ONI_Researcher_Suitcase;
	
   class OPTRE_UNSC_Rucksack_53rd: OPTRE_UNSC_Rucksack
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Basic)";
        maximumLoad=350;
        mass=40;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "B_Addons",
            "B_Medic",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa"
        };
    }; 

    
	class 53rd_ANPRC_515: OPTRE_ANPRC_515
    {
        displayName = "[53rd] AN/PRC-515 (LR)";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad=350;
    };
    class OPTRE_UNSC_Rucksack_53rd_Athena_LR: OPTRE_UNSC_Rucksack
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (NCO)";
        maximumLoad=350;
        mass=40;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "B_Addons",
            "B_Medic",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd_Basic_With_LR.paa"
        };
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
    }; 
	
    class OPTRE_ANPRC_521_Green_53rd: OPTRE_ANPRC_521_Green
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] AN/PRC-521 (LR)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa",
			"53rd_SC_Aux\tex\Backpacks\CommoPack_CO_53rd.paa"
        };
        descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        maximumLoad=350;
    };

    class OPTRE_UNSC_Rucksack_Heavy_53rd: OPTRE_UNSC_Rucksack_Heavy
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Heavy)";
        maximumLoad=450;
        mass=50;
        hiddenSelections[]=
        {
            "camo",
            "B_Medic",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa"
        };
    }; 

    class OPTRE_UNSC_Rucksack_Medic_53rd: OPTRE_UNSC_Rucksack_Medic
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Medical)";
        maximumLoad=400;
        mass=50;
        hiddenSelections[]=
        {
            "camo",
            "B_Addons",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa"
        };
    }; 

    class OPTRE_Hardcase_Medic_NCO: OPTRE_ONI_Researcher_Suitcase
    {
        scope=2;
        scopeArsenal=2;
        displayName="[53rd] Satchel (Medical NCO)";
        tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\research_bag_CO_Medical.paa"
        };
        maximumLoad=400;
    };

};
class CfgGlasses
{
};