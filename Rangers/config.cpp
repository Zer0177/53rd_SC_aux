class CfgPatches {
	class Ranger_Armor {
		units[] = 
        {
            "WIP"
        };
		weapons[] = 
        {
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons
{
	class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class OPTRE_UNSC_M52A_Armor_Base;
	class 53rd_Ranger_Heavy : OPTRE_UNSC_M52A_Armor_Base
     {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] Ranger Armor (Heavy)";
        hiddenSelectionsTextures[]=
        {
            "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"53rd_SC_aux\Rangers\53rd_M52_Vulc_A4.paa",
            "53rd_SC_aux\Rangers\Legs_odst_Blue_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\Rangers\ODST_Ranger_Armor_Body.paa"
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
				//"AS_MediumLeft", //Mid sized plate 
				//"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
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
                "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
				"optre_unsc_units\army\data\armor_odst_co.paa",
				"53rd_SC_aux\tex\Hades Armor\Legs_odst_Red_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"53rd_SC_aux\tex\Hades Armor\ODST_HR_Red_Body.paa"
            };
		};		
    };
};