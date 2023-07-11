class CfgPatches {
    class 53rd_ODST {
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
class cfgWeapons
{
	class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	
	
//Base Vests
	class OPTRE_UNSC_M52A_Armor_Base;
    class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;

	class 53rd_ODST_Armor_Rifleman: OPTRE_UNSC_M52A_Armor_Base
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
			mass=1;
			vestType = "Rebreather";
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 50;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 50;
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
		};
	};

// ODST ARMOR
   
	class 53rd_ODST_NRM_DE : 53rd_ODST_Armor_Rifleman
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Armor";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
        };
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=1;
			vestType = "Rebreather";
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 50;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 50;
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
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				//"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", //Standard ODST
				//"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL", //50mm belt on front
				"AP_Knife", //Chest knife
				//"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_Pack", //Center Chest Pouch
				//"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				//"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				//"AP_Frag", //Right hip
				"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				//"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
            hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
            };
		};		
    };
	class 53rd_ODST_SL_DE : 53rd_ODST_NRM_DE
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Armor (Squad Leader)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
        };
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=1;
			vestType = "Rebreather";
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 50;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 50;
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
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				//"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", //Standard ODST
				//"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL",
				//"AP_Knife", //Chest knife
				"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_Pack", //Center Chest Pouch
				//"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				//"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				"AP_Frag", //Right hip
				//"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
            hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
            };
		};		
    };
	class 53rd_ODST_TL_DE : 53rd_ODST_NRM_DE
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Armor (Team Leader)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
        };
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=1;
			vestType = "Rebreather";
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 50;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 50;
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
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				//"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				"AS_MediumRight", 
				//"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				//"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL",
				//"AP_Knife", //Chest knife
				"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_Pack", //Center Chest Pouch
				//"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				//"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				"AP_Frag", //Right hip
				//"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
            hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
            };
		};		
    };
	class 53rd_ODST_Breacher_DE : 53rd_ODST_Armor_Rifleman
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Armor (Breacher)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
        };
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=1;
			vestType = "Rebreather";
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 50;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 50;
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
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				//"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				"AS_MediumRight", 
				//"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				//"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				//"AP_GL", //50mm belt on front
				"AP_Knife", //Chest knife
				//"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_Pack", //Center Chest Pouch
				"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				"AP_Frag", //Right hip
				//"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
            hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
            };
		};		
    };
	class 53rd_ODST_Marksmen_DE : 53rd_ODST_Armor_Rifleman
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Armor (Marksmen)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
        };
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=1;
			vestType = "Rebreather";
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 50;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 50;
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
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				//"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				//"AS_ODSTRight",
				//"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL",
				//"AP_Knife", //Chest knife
				"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_Pack", //Center Chest Pouch
				"AP_Pistol", //Right Hip, ammo pouch
				//"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				"AP_Frag", //Right hip
				//"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				//"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
            hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
            };
		};		
    };
	class 53rd_ODST_Light_DE : 53rd_ODST_Armor_Rifleman
     {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Armor";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
        };
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=1;
			vestType = "Rebreather";
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 50;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 50;
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
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				//"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				//"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				//"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL",
				"AP_Knife", //Chest knife
				//"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_Pack", //Center Chest Pouch
				"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				"AP_Frag", //Right hip
				"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				//"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
            hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
            };
		};		
    };
	class 53rd_ODST_Heavy_DE : 53rd_ODST_NRM_DE
     {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Armor (Heavy)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
        };
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass="Supply100";
			mass=1;
			vestType = "Rebreather";
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 50;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 50;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 50;
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
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				//"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				//"AS_ODSTRight",
				//"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL",
				"AP_Knife", //Chest knife
				"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_Pack", //Center Chest Pouch
				//"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				//"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				"AP_Frag", //Right hip
				//"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
            hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
            };
		};
	 };
	class 53rd_ODST_Medic_DE : 53rd_ODST_NRM_DE
		{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		dlc = "53rd AUX TEAM";
		author = "53rd AUX TEAM & 37th Aux Team";
		displayName = "[53rd] CH252D Armor (Medic)";
			hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
		};
	};
	//WOODLAND
class 53rd_ODST_Heavy_WD : 53rd_ODST_Heavy_DE
	{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Woodland(Heavy)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Woodland.paa",
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_WD.paa"
            };
};
class 53rd_ODST_Breacher_WD:53rd_ODST_Breacher_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Woodland(Breacher)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Woodland.paa",
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_WD.paa"
            };
};
class 53rd_ODST_Light_WD:53rd_ODST_Light_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Woodland(Light)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Woodland.paa",
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_WD.paa"
            };
};
class 53rd_ODST_Marksmen_WD:53rd_ODST_Marksmen_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Woodland(Marksmen)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Woodland.paa",
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_WD.paa"
            };
};
class 53rd_ODST_Medic_WD:53rd_ODST_Medic_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Woodland(Medic)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Woodland.paa",
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_WD.paa"
            };
};
class 53rd_ODST_NRM_WD: 53rd_ODST_NRM_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Woodland(NRM)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Woodland.paa",
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_WD.paa"
            };
};
class 53rd_ODST_TL_WD:53rd_ODST_TL_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Woodland(TL)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Woodland.paa",
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_WD.paa"
            };
};
class 53rd_ODST_SL_WD:53rd_ODST_SL_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Woodland(SL)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Woodland.paa",
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_WD.paa"
            };
};
	//SNOW
class 53rd_ODST_Heavy_SN:53rd_ODST_Heavy_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Woodland(Heavy)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_SN.paa"
            };
};	
class 53rd_ODST_Breacher_SN:53rd_ODST_Breacher_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Snow(Breacher)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_SN.paa"
            };
};
class 53rd_ODST_Light_SN:53rd_ODST_Light_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Snow(Light)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_SN.paa"
            };
};
class 53rd_ODST_Marksmen_SN:53rd_ODST_Marksmen_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Snow(Marksmen)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_SN.paa"
            };
};
class 53rd_ODST_Medic_SN:53rd_ODST_Medic_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Snow(Medic)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_SN.paa"
            };
};
class 53rd_ODST_NRM_SN:53rd_ODST_NRM_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Snow(NRM)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_SN.paa"
            };
};
class 53rd_ODST_TL_SN:53rd_ODST_TL_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Snow(TL)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_SN.paa"
            };
};
class 53rd_ODST_SL_SN:53rd_ODST_SL_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Snow(SL)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_SN.paa"
            };
};
	//URBAN
class 53rd_ODST_Heavy_UB:53rd_ODST_Heavy_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Urban(Heavy)";
    author = "53rd AUX TEAM";
	
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_UB.paa"
            };
};
class 53rd_ODST_Breacher_UB:53rd_ODST_Breacher_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Urban(Breacher)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_WD.paa"
            };
};
class 53rd_ODST_Light_UB:53rd_ODST_Light_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Urban(Light)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_UB.paa"
            };
};
class 53rd_ODST_Marksmen_UB:53rd_ODST_Marksmen_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Urban(Marksmen)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_UB.paa"
            };
};
class 53rd_ODST_Medic_UB:53rd_ODST_Medic_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Urban(Medic)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_UB.paa"
            };
};
class 53rd_ODST_NRM_UB:53rd_ODST_NRM_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Urban(NRM)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_UB.paa"
            };
};
class 53rd_ODST_TL_UB:53rd_ODST_TL_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Urban(TL)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_UB.paa"
            };
};
class 53rd_ODST_SL_UB:53rd_ODST_SL_DE
{
	scope = 2;
    scopeArsenal = 2;
    displayName = "[53rd] ODST Urban(SL)";
    author = "53rd AUX TEAM";
	hiddenSelectionsTextures[] = 
            {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_UB.paa"
            };
};		
    //Helmets
	class 53rd_CH252D_Base : OPTRE_UNSC_CH252D_Helmet
	 {
        displayName = "[53rd & EOS] CH252D Helmet";
        model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[]= 
        {
			"53rd_SC_aux\tex\Hades Armor\ODST_Medic_Helmet.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
        };
        class ItemInfo: ItemInfo
        {
			mass=1;
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=20;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=40;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=15;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
			class ItemInfo: HeadgearItem
			{
				mass=40;
				modelSides[]={6};
				passThrough=0.1;
				hiddenSelections[]=
				{
					"camo",
					"camo2",
					//"H_Collar",
					"H_Ghillie"
				};
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\tex\Hades Armor\ODST_Medic_Helmet.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
				};
				uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			};
		};
	 };
	 class 53rd_CH252D_Base_dp : 53rd_CH252D_Base
	 {
        displayName = "[53rd & EOS] CH252D Helmet";
        model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[]= 
        {
			"53rd_SC_aux\tex\Hades Armor\ODST_Medic_Helmet.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
        };
        class ItemInfo: ItemInfo
        {
			mass=1;
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=20;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=40;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=15;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
			class ItemInfo: HeadgearItem
			{
				mass=40;
				modelSides[]={6};
				passThrough=0.1;
				hiddenSelections[]=
				{
					"camo",
					"camo2",
					//"H_Collar",
					"H_Ghillie"
				};
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\tex\Hades Armor\ODST_Medic_Helmet.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
				};
				uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			};
		};
	 };
	class 53rd_CH252D_Medic : 53rd_CH252D_Base
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] CH252D Helmet (Medic)";
        author = "53rd AUX TEAM";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie"
        };
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hades Armor\ODST_Medic_Helmet.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
		};
    };
    class 53rd_CH252D_Medic_dp : 53rd_CH252D_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] CH252D Helmet (Medic)";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hades Armor\ODST_Medic_Helmet.paa",
			"optre_unsc_units\army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
  class 53rd_Custom_Helmet_ODST_Urban : 53rd_CH252D_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] ODST Helmet (Urban)";
        author = "53rd AUX TEAM";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\ODST Armor\odst_helmet_urban_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_ODST_Urban_dp : 53rd_CH252D_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] ODST Helmet (Urban) dp";
        author = "53rd AUX TEAM";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\ODST Armor\odst_helmet_urban_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
    class 53rd_Custom_Helmet_ODST_Woodland : 53rd_CH252D_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] ODST Helmet (Woodland)";
        author = "53rd AUX TEAM";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\ODST Armor\odst_helmet_woodland_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_ODST_Woodland_dp : 53rd_CH252D_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] ODST Helmet (Woodland) dp";
        author = "53rd AUX TEAM";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\ODST Armor\odst_helmet_woodland_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
    class 53rd_Custom_Helmet_ODST_Desert : 53rd_CH252D_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] ODST Helmet (Desert)";
        author = "53rd AUX TEAM";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\ODST Armor\odst_helmet_desert_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_ODST_Desert_dp : 53rd_CH252D_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] ODST Helmet (Desert) dp";
        author = "53rd AUX TEAM";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\ODST Armor\odst_helmet_desert_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
    class 53rd_Custom_Helmet_ODST_Snow : 53rd_CH252D_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] ODST Helmet (Snow)";
        author = "53rd AUX TEAM";
	    hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\ODST Armor\odst_helmet_snow_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_ODST_Snow_dp : 53rd_CH252D_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] ODST Helmet (Snow) dp";
        author = "53rd AUX TEAM";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\ODST Armor\odst_helmet_snow_co.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
	class 53rd_CH252D_ODST_NEM: 53rd_CH252D_Base
	{
		dlc="OPTRE";
        scope = 2;
        scopeArsenal = 2;
		author="Article 2 Studios";
		displayName="[53rd] CH252D Helmet (NEM)";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hades Armor\ODST_Red_HR.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
		};
	};
    class 53rd_CH252D_ODST_NEM_dp : 53rd_CH252D_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] CH252D Helmet (NEM) dp";
        author = "53rd AUX TEAM";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"H_Collar",
            "H_Ghillie",
        };
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hades Armor\ODST_Red_HR.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };	
};
