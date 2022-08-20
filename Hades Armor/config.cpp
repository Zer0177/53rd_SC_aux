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
	class 53rd_CH252D_RED_REACH: LM_OPCAN_CH252D_REACH
	{
		author="Body";
		scope=2;
		displayName="[53rd] CH252D Helmet";
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
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
			"53rd_SC_aux\tex\Hades Armor\53rd_RED_ODST_OD.paa",
			"LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_HR.paa"
		};
	};
	class 53rd_CH252D_RED_REACH_dp: LM_OPCAN_CH252D_REACH
	{
		Scope=1;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[]=
		{
			"LM_OPCAN3.0\BLU\UNSC\H\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"LM_OPCAN3.0\BLU\UNSC\H\ODST_HR.paa",
			""
		};
	};
//  ODST ARMOR
    class 53rd_ODST_BASE : 53rd_ODST_Armor_Rifleman
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Armor";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "53rd_SC_aux\tex\Hades Armor\53rd_legs_OD.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\Hades Armor\53rd_ODST_OD.paa"
        };
    };
	class 53rd_ODST_DEMO : VES_M52D_Demolitions
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "53rd AUX TEAM";
        author = "53rd AUX TEAM & 37th Aux Team";
        displayName = "[53rd] ODST Demo Armor";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "53rd_SC_aux\tex\Hades Armor\53rd_legs_OD.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "53rd_SC_aux\tex\Hades Armor\53rd_ODST_OD.paa"
        };
    };
}
