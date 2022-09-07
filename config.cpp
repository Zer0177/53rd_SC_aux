/// https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide ///
/// Equipment list macros definition ///

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

#include "Functions\CfgFunctions.hpp"
class CfgPatches {
	class black_body {
		units[] = 
        {
            "BDU_V_Volare_Black",
            "53rd_BDU_V_Slim",
            "53rd_Bulldog_RV",
            "53rd_M1015_RV_mule",
			"53rd_Bulldog_Panzer"
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
			"53rd_VX19_Red_Helmet",			
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


//Base

    class 53rd_Recon_Helmet_Base: OPTRE_UNSC_CH252D_Helmet_Base
	{
		dlc="OPTRE";
		scope=2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
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
        scope=1
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
			vestType = "Rebreather";
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

	class 53rd_Armor_Specialist: 53rd_Armor_Rifleman
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
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
		};
	};
	
    class 53rd_Armor_Medic: 53rd_Armor_Rifleman
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
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
		};
	};

    class 53rd_Armor_TL: 53rd_Armor_Rifleman
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
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
		};
	};
	
    class 53rd_Armor_SL: 53rd_Armor_Rifleman
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
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
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				//"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				//"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				//"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL", //40mm belt on front
				//"AP_Knife", //Chest knife
				//"AP_MGThigh", //Right thigh ammo pouch
				//"AP_AR", //Front AR packs, Need both to work <<
				//"AP_Pack", //Center Chest Pouch
				"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				//"AP_Frag", //Right hip
				//"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
		};
	};
	
    class 53rd_Armor_Medic_NCO: 53rd_Armor_Rifleman
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
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
		};
	};
	
    class 53rd_Raider_Armor_Base: 53rd_Armor_Rifleman
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
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
		};
	};
	
    class 53rd_Raider_Armor_NCO_Base: 53rd_Armor_Rifleman
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
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
		};
	};

	class 53rd_Armor_RTO: 53rd_Armor_Rifleman
	{
		author="Article 2 Studios";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName="M52A Body Armor (Heavy) [Woodland]";
		class ItemInfo: ItemInfo
		{
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
				"AS_MediumRight",
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
	class 53rd_VX19_Red_Helmet : 53rd_VX19_Black_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] VX19 Flight Helmet (Red V)";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_red_CO.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
    };
    class 53rd_VX19_Red_Helmet_dp : 53rd_VX19_Black_Helmet
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] VX19 Flight Helmet (Red V) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_red_CO.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo","camo2"};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_red_CO.paa",
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
	 class 53rd_V_Pilot_Armor_Red_NCO:OPTRE_FC_M52B_Armor_Teamleader
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Vest (NCO\Red)";
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_vest_nco_red_co.paa"};
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
    class 53rd_Beret_Hephaestus_med: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Medical)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\Hephaestus_Medical_Beret_V1.paa"
		};
	};
    class 53rd_Beret_Hephaestus_med_led: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Medical Leader)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\Hephaestus_Medical_Beret_Leader_V1.paa"
		};
	};
    class 53rd_Beret_Athena: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Athena)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Athena.paa"
		};
	};
    class 53rd_Beret_Tart: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Tartarus)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_Beret_Tartarus.paa"
		};
	};	
    class 53rd_Beret_Volare: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Volare)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Volare.paa"
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
{ //Bulldog
	class DMNS_Bulldog_FAV;
	class DMNS_Bulldog_LRV_AGL;
	class 53rd_Bulldog_RV: DMNS_Bulldog_FAV
	{
		dlc = "53rd";
		displayName="[53rd] RV Bulldog";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\gey-bulldog.paa"
        };
        ace_repair_canRepair = 1;
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_Grey: DMNS_Bulldog_FAV
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (Grey)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\grey-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_Heph: DMNS_Bulldog_LRV_AGL
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (Heph)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\heph-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_1_3: DMNS_Bulldog_FAV
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (1-3)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\1-3-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_Panzer: DMNS_Bulldog_LRV_AGL
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (Panzer)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\moron-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_MedicLR_53rd,2);
		};
		class TransportItems
		{
            item_xx(ACE_PlasmaIV,20);
            item_xx(ACE_plasmaIV_500,20);
            item_xx(53rd_Copium,40);
            item_xx(ACE_Tourniquet,20);
            item_xx(ACE_splint,20);
            item_xx(53rd_r_biofoam,3);
            item_xx(53rd_r_medigel,3);
            item_xx(ACE_packingBandage,50);
            item_xx(ACE_elasticBandage,50);
            item_xx(ACE_epinephrine,10);
            item_xx(ACE_adenosine,10);
            item_xx(ACE_surgicalKit,2);
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		ace_medical_isMedicalVehicle=1;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
    };
	class OPTRE_M1015_mule_repair_ins;
	class 53rd_M1015_RV_mule: OPTRE_M1015_mule_repair_ins
	{
		dlc = "53rd";
		displayName="[53rd] M1015 RV Mule";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
        side=1;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Truck_02_kab_CO.paa",
            "53rd_SC_aux\tex\Truck_02_repair_CO.paa",
            "53rd_SC_aux\tex\Truck_02_int_CO.paa",
            "53rd_SC_aux\tex\Truck_02_chassis_CO.paa"
        };
        ace_repair_canRepair = 1;
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};     
        ace_cargo_space = 16;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };   
	};
    
    
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
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Jgl_CO.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Jgl_CO.paa"
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
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Grn_CO.paa",
			"53rd_SC_aux\tex\Uniforms\53rd_BDU_Grn_CO.paa"
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
  
    //BackPacks
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ANPRC_521_Green;
    class OPTRE_ANPRC_515;
	class OPTRE_UNSC_Rucksack_Medic;
	class OPTRE_UNSC_Rucksack_Heavy;
	class OPTRE_ONI_Researcher_Suitcase;
	class OPTRE_ILCS_Rucksack_Black;
	class OPTRE_ILCS_Rucksack_Medical;
	class OPTRE_ILCS_Rucksack_Heavy;
	class B_Parachute;
	
	
   class OPTRE_UNSC_Rucksack_53rd: OPTRE_UNSC_Rucksack
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Basic)";
        maximumLoad=300;
        mass=1;
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
        maximumLoad=300;
    };
    class OPTRE_UNSC_Rucksack_53rd_Athena_LR: OPTRE_UNSC_Rucksack
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (NCO)";
        maximumLoad=300;
        mass=1;
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
   /* class OPTRE_UNSC_Rucksack_53rd_Athena_LRPARA: OPTRE_UNSC_Rucksack
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (NCO+Chute)";
        maximumLoad=300;
        mass=1;
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
		backpackSimulation="ParachuteSteerable";
		ParachuteClass="Steerable_Parachute_F";
        ace_reserveParachute = "OPTRE_UNSC_Rucksack_53rd_Athena_LRPARA";
        ace_hasReserveParachute = 1;
    }; 
	*/
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
        maximumLoad=300;
    };
    class OPTRE_UNSC_Rucksack_Heavy_53rd: OPTRE_UNSC_Rucksack_Heavy
    {
		author="53rd AUX Team";
        dlc="53rd AUX";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Heavy)";
        maximumLoad=450;
        mass=1;
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
        mass=1;
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
    class OPTRE_UNSC_Rucksack_MedicLR_53rd: OPTRE_UNSC_Rucksack_Medic
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Medical LR)";
        maximumLoad=400;
        mass=1;
        tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        hiddenSelections[]=
        {
            "camo",
            "B_Addons",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd_Basic_With_LR.paa"
        };
    }; 

    class 53rd_Hardcase_Medic_NCO: OPTRE_ONI_Researcher_Suitcase
    {
		author="53rd AUX Team";
        dlc="53rd AUX";
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
		mass=1;
    };
	class 53rd_Rucksack_Black: OPTRE_ILCS_Rucksack_Black
	{
		author="53rd AUX Team";
        dlc="53rd AUX";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		isbackpack=1;
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
		displayName="[53rd] ILCS Rucksack [Black]";
		model="\OPTRE_weapons\backpacks\ODST_ruck.p3d";
		vehicleClass="OPTRE_UNSC_Backpack_class";
		allowedSlots[]={901};
		maximumLoad=300;
		mass=1;
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy",
			"biofoam"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"
		};
		transportMaxWeapons=10;
		transportMaxMagazines=100;
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class 53rd_ILCS_Rucksack_Medical: OPTRE_ILCS_Rucksack_Medical
	{
		author="53rd AUX Team";
        dlc="53rd AUX";
		maximumLoad=400;
		mass=1;
		displayName="[53rd] ILCS Backpack [Medic]";
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy"
		};
	};
	class 53rd_ILCS_Rucksack_Medical_LR: OPTRE_ILCS_Rucksack_Medical
	{
		author="53rd AUX Team";
        dlc="53rd AUX";
		displayName="[53rd] ILCS Backpack [Medic LR]";
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy"
		};
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
		maximumLoad=400;
		mass=1;
	};
	class 53rd_ILCS_Rucksack_Heavy: OPTRE_ILCS_Rucksack_Heavy
	{
		author="53rd AUX Team";
        dlc="53rd AUX";
		maximumLoad=450;
		mass=1;
		displayName="[53rd] ILCS Rucksack [Heavy]";
		hiddenSelections[]=
		{
			"camo1",
			"biofoam"
		};
	};
	class 53rd_ANPRC_ODST_515: OPTRE_ANPRC_515
	{
		author="53rd AUX Team";
        dlc="53rd AUX";
		picture="\OPTRE_weapons\backpacks\icons\como_pack.paa";
		displayName="[53rd] AN/PRC-515 (Black)";
		descriptionShort="AN/PRC-515<br>ODST Long Range Radio<br>25km Effective Range";
		model="\OPTRE_weapons\backpacks\como_ruck.p3d";
		maximumLoad=300;
		mass=1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Equipment\como_pack_ODST_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class 53rd_ANPRC_Body_515: OPTRE_ANPRC_515
	{
		author="53rd AUX Team";
        dlc="53rd AUX";
		picture="\OPTRE_weapons\backpacks\icons\como_pack.paa";
		displayName="[53rd] AN/PRC-515 (Body)";
		descriptionShort="AN/PRC-515<br>ODST Long Range Radio<br>25km Effective Range";
		model="\OPTRE_weapons\backpacks\como_ruck.p3d";
		maximumLoad=300;
		mass=1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Equipment\como_pack_Body_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class 53rd_LR_Parachute: B_Parachute
	{
		author="53rd Aux";
		scope=2;
		displayName="[53rd] Parachute (LR)";
		maximumLoad=0;
		mass=1;
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
		backpackSimulation="ParachuteSteerable";
		ParachuteClass="Steerable_Parachute_F";
        ace_reserveParachute = "53rd_LR_Parachute";
        ace_hasReserveParachute = 1;
	};

};
class CfgGlasses
{
};