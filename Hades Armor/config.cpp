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

class cfgWeapons
{
	class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
    class VES_M52D_Rifleman;
	class VES_M52D_Demolitions;
	class LM_OPCAN_CH252D_REACH;
	
	
//Base Vests
	class OPTRE_UNSC_M52A_Armor_Base;
 
    class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class OPTRE_UNSC_CH252D_Helmet;

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
			mass=80;
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
				"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft",
				//"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				//"A_ODST",
				//"A_ShinArmorLeft",
				//"A_ShinArmorRight",
				"A_TacPad",
				//"A_ThighArmorLeft",
				//"A_ThighArmorRight",
				//"AS_BaseLeft",
				//"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				//"AS_ODSTLeft",
				//"AS_ODSTRight",
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


//ODST HELMETS
	class 53rd_CHC252D_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		scope=2;
		author = "53rd AUX TEAM & 37th Aux Team";
		displayName="CH252D Helmet [Basic]";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hades Armor\53rd_RED_ODST_OD.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Hades Armor\53rd_RED_ODST_OD.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
			};
		};
	};
	class 53rd_CH252D_Helmet_dp: OPTRE_UNSC_CH252D_Helmet
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author = "53rd AUX TEAM & 37th Aux Team";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hades Armor\53rd_RED_ODST_OD.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Hades Armor\53rd_RED_ODST_OD.paa"
			};
		};
	};
	class 53rd_CH252D_RED_REACH: OPTRE_UNSC_CH252D_Helmet
	{
		author = "53rd AUX TEAM & 37th Aux Team";
		scope=2;
		displayName="[53rd] CH252D Helmet";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"LM_OPCAN3.0\BLU\UNSC\H\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hades Armor\ODST_Red_HR.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
		};
	};
	class 53rd_CH252D_RED_REACH_dp: OPTRE_UNSC_CH252D_Helmet
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author = "53rd AUX TEAM & 37th Aux Team";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hades Armor\ODST_Red_HR.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Hades Armor\ODST_Red_HR.paa"
			};
		};
	};
	class 53rd_CH252D_REACH: OPTRE_UNSC_CH252D_Helmet
	{
		author = "53rd AUX TEAM & 37th Aux Team";
		scope=2;
		displayName="[53rd] CH252D Helmet";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"LM_OPCAN3.0\BLU\UNSC\H\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hades Armor\ODST_HR.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
		};
	};
	class 53rd_CH252D_REACH_dp: OPTRE_UNSC_CH252D_Helmet
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author = "53rd AUX TEAM & 37th Aux Team";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hades Armor\ODST_HR.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Hades Armor\ODST_HR.paa"
			};
		};
	};
//  ODST ARMOR
    class 53rd_ODST_BASE : 53rd_ODST_Armor_Rifleman
    class 53rd_ODST_Green : OPTRE_UNSC_M52D_Armor_Demolitions
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Armor (OD)";
        hiddenSelectionsTextures[]=
        {
            "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
            "53rd_SC_aux\tex\Hades Armor\53rd_legs_OD.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\Hades Armor\53rd_ODST_OD.paa"
        };
    };
	class 53rd_ODST_HR : OPTRE_UNSC_M52D_Armor_Demolitions
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Demo Armor (RED)";
        hiddenSelectionsTextures[]=
        {
            "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
            "53rd_SC_aux\tex\Hades Armor\53rd_legs_OD.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\Hades Armor\53rd_ODST_OD.paa"
        };
    };
	class 53rd_ODST_RED : OPTRE_UNSC_M52D_Armor
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Reach Armor (RED)";
        hiddenSelectionsTextures[]=
        {
            "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
            "53rd_SC_aux\tex\Hades Armor\Legs_odst_Red_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\Hades Armor\ODST_HR_Red_Body.paa"
        };
    };
};
