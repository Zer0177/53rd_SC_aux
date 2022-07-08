#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class Athena_Armor {
		units[] = 
        {
            "WIP"
        };
		weapons[] = 
        {
            "WIP"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
class cfgWeapons {
    class ItemInfo;
	class VestItem;
	class HeadgearItem;
	class VES_CH252D;
    class VES_CH252A_dp;
	class OPTRE_UNSC_M52A_Armor_Base;
	class 53rd_Armor_Rifleman;
	class 53rd_Armor_Specialist;
	class 53rd_Armor_Medic;
	class 53rd_Armor_TL;
	class 53rd_Armor_SL;
	class 53rd_Armor_Medic_NCO;


//Base

class 53rd_Athena_Helmet: VES_CH252D
	{
		author="Vespade";
		displayName="[FZ] CH252A Helmet";
		model="\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO",
			"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_V_CO"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"
		};
		class ItemInfo: HeadgearItem
			{
				mass=1;
				uniformModel="\OPTRE_UNSC_Units\Army\aa_helmet";
				hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO",
				"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_V_CO"
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
    class 53rd_Armor_Specialist2: 53rd_Armor_Specialist
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

//Athena Armor

//Urban

class 53rd_Athena_Armor_Rifleman: 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Rifleman.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_Specialist: 53rd_Armor_Specialist2
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Specialist)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Specialist.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_Medic: 53rd_Armor_Medic
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Medic)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Medic.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_TL: 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Team Leader)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_TL.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_NCO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_SL: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Squad Leader)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_SL.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_NCO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

//Woodland

class 53rd_Athena_Armor_Rifleman_Woodland: 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Rifleman / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Rifleman_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_Specialist_Woodland: 53rd_Armor_Specialist2
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Specialist / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Specialist_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_Medic_Woodland: 53rd_Armor_Medic
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Medic / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Medic_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_TL_Woodland: 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Team Leader / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_TL_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_NCO_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_SL_Woodland: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Squad Leader / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_SL_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_NCO_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

//Desert

class 53rd_Athena_Armor_Rifleman_Desert: 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Rifleman / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Rifleman_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_Specialist_Desert: 53rd_Armor_Specialist2
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Specialist / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Specialist_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_Medic_Desert: 53rd_Armor_Medic
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Medic / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Medic_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_TL_Desert: 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Team Leader / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_TL_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_NCO_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_SL_Desert: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Squad Leader / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_SL_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_NCO_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

//Snow

class 53rd_Athena_Armor_Rifleman_Snow: 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Rifleman / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Rifleman_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_Specialist_Snow: 53rd_Armor_Specialist2
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Specialist / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Specialist_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_Medic_Snow: 53rd_Armor_Medic
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Medic / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Medic_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_TL_Snow: 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Team Leader / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_TL_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_NCO_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

class 53rd_Athena_Armor_SL_Snow: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Squad Leader / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_SL_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_NCO_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};

//Custom
	
class 53rd_Athena_Armor_Ithias: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Ithias)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Ithias.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_NCO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 53rd_Athena_Armor_IMP : 53rd_Armor_SL 
	{ 
		scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		dlc = "53rd AUX"; 
		author = "Ithias/53rd AUX TEAM"; 
		displayName = "[53rd]Horny Armor (simpai)"; 
		hiddenSelectionsTextures[] =  
		{ 
            "53rd_SC_Aux\tex\Athena Armor\53rd_Athena_Vest.paa", 
			"53rd_SC_aux\tex\Hephaestus Armor\MEU_M52_GREY_Vulc_test1.paa", 
			"53rd_SC_Aux\tex\Athena Armor\53rd_Athena_NCO_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_woodland_co.paa", 
			"optre_unsc_units\army\data\odst_armor_co.paa" 
        }; 
	}; 
    
	
//Athena Helmets

//Urban

class 53rd_Athena_Helmet_Rifleman : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Rifleman)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_Rifleman_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Rifleman)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

class 53rd_Athena_Helmet_NCO : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (NCO)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_GLD_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_NCO_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

class 53rd_Athena_Helmet_Medic : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Medic)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Red.paa"
        };
    };
    class 53rd_Athena_Helmet_Medic_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

//Woodland

class 53rd_Athena_Helmet_Rifleman_Woodland : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Rifleman / Woodland)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Woodland.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_Rifleman_Woodland_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Woodland.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

class 53rd_Athena_Helmet_NCO_Woodland : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (NCO / Woodland)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Woodland.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_GLD_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_NCO_Woodland_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Woodland.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	
class 53rd_Athena_Helmet_Medic_Woodland : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Medic / Woodland)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Woodland.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Red.paa"
        };
    };
    class 53rd_Athena_Helmet_Medic_Woodland_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

//Desert

class 53rd_Athena_Helmet_Rifleman_Desert : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Rifleman / Desert)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Desert.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_Rifleman_Desert_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Desert.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

class 53rd_Athena_Helmet_NCO_Desert : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (NCO / Desert)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Desert.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_GLD_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_NCO_Desert_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Desert.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

class 53rd_Athena_Helmet_Medic_Desert : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Medic / Desert)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Desert.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Red.paa"
        };
    };
    class 53rd_Athena_Helmet_Medic_Desert_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Desert.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

//Snow

class 53rd_Athena_Helmet_Rifleman_Snow : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Rifleman / Snow)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Snow.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_Rifleman_Snow_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Snow.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

class 53rd_Athena_Helmet_NCO_Snow : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (NCO / Snow)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Snow.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_GLD_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_NCO_Snow_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Snow.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

class 53rd_Athena_Helmet_Medic_Snow : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Medic / Snow)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Snow.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Red.paa"
        };
    };
    class 53rd_Athena_Helmet_Medic_Snow_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Snow.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

//Custom

class 53rd_Athena_Helmet_Ithias : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Ithias)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Ithias.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Ithias.paa"
        };
    };
    class 53rd_Athena_Helmet_Ithias_dp : VES_CH252A_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Ithias.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
};

class CfgVehicles
{
};

class CfgGlasses
{
};