class CfgPatches {
	class Hephaestus_Armor {
		units[] = 
        {
            "",
			""
        };
		weapons[] = 
        {
            "53rd_Hephaestus_BDU_Slim",
            ""
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
	class VES_CH252D;
	class OPTRE_UNSC_M52A_Armor_Base;
	class Hands;
	class Pelvis;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_WDL_Heavy;
	class VES_BDU_Evolved_Slim;

//Base

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

class 53rd_Armor_JTAC: 53rd_Armor_Rifleman
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

class 53rd_Sealed_Base : VES_CH252_MAR_Vacuum
    {
        scope = 1;
        displayName = "[53rd] Hephaestus Helmet (Rifleman)";
        author = "53rd AUX TEAM";
        model="\OPTRE_UNSC_Units\Army\helmet";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "H_Collar",
            "H_Ghillie"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_Armor_Rework\tex\53rd_Helmet",
            "53rd_Armor_Rework\tex\Helmet_Visor_co"
        };
		class ItemInfo: HeadgearItem
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
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
                "53rd_Armor_Rework\tex\53rd_Helmet",
                "53rd_Armor_Rework\tex\Helmet_Visor_co"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"
			};
        };
    };
	
	class 53rd_Sealed_Base_dp : 53rd_Sealed_Base
    {
        scope = 0;
        scopeArsenal = 0;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
        displayName = "[53rd] Hephaestus Helmet (Rifleman) dp";
        model="\OPTRE_UNSC_Units\Army\helmet";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "H_Collar",
            "H_Ghillie"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_Armor_Rework\tex\53rd_Helmet",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
		class ItemInfo: HeadgearItem
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
                    hitPointName="HitHead";
                    armor=40;
                    passThrough=0.1;
                };
            };
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
                "53rd_Armor_Rework\tex\53rd_Helmet",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				""
			};
        };
    };

class 53rd_Unsealed_Base: VES_CH252_WDL_Heavy
	{
        scope = 1;
        scopeArsenal = 1;
		author="Body";
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.5;
		displayName="[53rd] Hephaestus MKI Base";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Neck",
			"H_UNSCVacLower",
			"H_Collar",
			"H_UNSCVacVisor",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\army_helmet_DES";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Neck",
				"H_UNSCVacLower",
				"H_Collar",
				"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO"
			};
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
		};
	};

	class 53rd_Unsealed_Base_dp: 53rd_Unsealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
		author="Body";
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.5;
		displayName="[53rd] Hephaestus MKI Base";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Neck",
			"H_UNSCVacLower",
			"H_Collar",
			"H_UNSCVacVisor",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\army_helmet_DES";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Neck",
				"H_UNSCVacLower",
				"H_Collar",
				"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO"
			};
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
		};
	};

class 53rd_Hephaestus_BDU_Slim: VES_BDU_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_V_Slim";
		};
	};


//Urban

class 53rd_Armor_Rifleman_Urban: 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Rifleman / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_Specialist_Urban: 53rd_Armor_Specialist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Specialist / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Specialist_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Armor_TL_Urban: 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Team Leader / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_TL_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Armor_SL_Urban: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Squad Leader / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_Medic_Urban: 53rd_Armor_Medic
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Medic / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Medic_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_JTAC_Urban: 53rd_Armor_JTAC
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (JTAC / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_JTAC_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Helmet_Vac_Sealed_Rifleman_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_Rifleman_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	
class 53rd_Helmet_Vac_Sealed_SPC_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_SPC_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };

class 53rd_Helmet_Normal_Urban : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Helmet (Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };

class 53rd_Helmet_Vac_Sealed_Rifleman_Urban_Medical : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Urban_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_Rifleman_Urban_Medical_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Urban_Medical.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	
class 53rd_Helmet_Vac_Sealed_SPC_Urban_Medical : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Urban_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_SPC_Urban_Medical_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Urban_Medical.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };

class 53rd_Helmet_Normal_Urban_Medical : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Helmet (Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Urban_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };


//Woodland

class 53rd_Armor_Rifleman_Woodland: 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Rifleman / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_Specialist_Woodland: 53rd_Armor_Specialist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Specialist / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Specialist_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Armor_TL_Woodland: 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Team Leader / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_TL_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Armor_SL_Woodland: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Squad Leader / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_Medic_Woodland: 53rd_Armor_Medic
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Medic / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Medic_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_JTAC_Woodland: 53rd_Armor_JTAC
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (JTAC / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_JTAC_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	
class 53rd_Helmet_Vac_Sealed_SPC_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };	
class 53rd_Helmet_Vac_Sealed_SPC_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };

class 53rd_Helmet_Normal_Woodland : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Helmet (Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };

class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland_Medical : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Woodland_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland_Medical_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Woodland_Medical.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	
class 53rd_Helmet_Vac_Sealed_SPC_Woodland_Medical : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Woodland_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };	
class 53rd_Helmet_Vac_Sealed_SPC_Woodland_Medical_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Woodland_Medical.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };

class 53rd_Helmet_Normal_Woodland_Medical : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Helmet (Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Woodland_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };


//Desert

class 53rd_Armor_Rifleman_Desert: 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Rifleman / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_Specialist_Desert: 53rd_Armor_Specialist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Specialist / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Specialist_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Armor_TL_Desert: 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Team Leader / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_TL_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Armor_SL_Desert: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Squad Leader / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_Medic_Desert: 53rd_Armor_Medic
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Medic / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Medic_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_JTAC_Desert: 53rd_Armor_JTAC
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (JTAC / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_JTAC_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Helmet_Vac_Sealed_Rifleman_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_Rifleman_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	
class 53rd_Helmet_Vac_Sealed_SPC_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_SPC_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };

class 53rd_Helmet_Normal_Desert : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Helmet (Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };

class 53rd_Helmet_Vac_Sealed_Rifleman_Desert_Medical : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Desert_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_Rifleman_Desert_Medical_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Desert_Medical.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	
class 53rd_Helmet_Vac_Sealed_SPC_Desert_Medical : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Desert_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_SPC_Desert_Medical_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Desert_Medical.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };

class 53rd_Helmet_Normal_Desert_Medical : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Helmet (Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Desert_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };

//Snow

class 53rd_Armor_Rifleman_Snow: 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Rifleman / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Rifleman_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_Specialist_Snow: 53rd_Armor_Specialist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Specialist / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Specialist_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Armor_TL_Snow: 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Team Leader / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_TL_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Armor_SL_Snow: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Squad Leader / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_Medic_Snow: 53rd_Armor_Medic
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (Medic / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_Medic_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
class 53rd_Armor_JTAC_Snow: 53rd_Armor_JTAC
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Hephaestus Armor (JTAC / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_JTAC_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Helmet_Vac_Sealed_Rifleman_Snow : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_Rifleman_Snow_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	
class 53rd_Helmet_Vac_Sealed_SPC_Snow : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_SPC_Snow_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };

class 53rd_Helmet_Normal_Snow : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Helmet (Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };

class 53rd_Helmet_Vac_Sealed_Rifleman_Snow_Medical : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Snow_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
class 53rd_Helmet_Vac_Sealed_Rifleman_Snow_Medical_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Snow_Medical.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	
class 53rd_Helmet_Vac_Sealed_SPC_Snow_Medical : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Snow_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };	
class 53rd_Helmet_Vac_Sealed_SPC_Snow_Medical_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (SPC+ / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Snow_Medical.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };

class 53rd_Helmet_Normal_Snow_Medical : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Helmet (Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Helmet_Snow_Medical.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
};

class CfgVehicles
{
class VES_BDU_V_Urban;
	
class 53rd_Hephaestus_BDU_V_Slim: VES_BDU_V_Urban
	{
		scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
        uniformclass="53rd_Hephaestus_BDU_Slim";
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
			"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO",
			"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO"
		};
	};

};