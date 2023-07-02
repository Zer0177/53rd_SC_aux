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
		requiredAddons[] = {"black_body"};
	};
};
#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class VestItem;
	class HeadgearItem;
	class VES_CH252D;
	class OPTRE_UNSC_M52A_Armor_Base;
	class 53rd_Armor_Rifleman;
	class 53rd_Armor_Specialist;
	class 53rd_Armor_Medic;
	class 53rd_Armor_TL;
	class 53rd_Armor_SL;
	class 53rd_Armor_Medic_NCO;
	class 53rd_Armor_RTO;
	class VES_BDU_Evolved_Slim;
	class UniformItem;

//Athena uniform

    class 53rd_Athena_BDU_Slim: VES_BDU_Evolved_Slim
    {
        dlc="53rd";
		scope=1;
		author="Ithias";
		displayName="[53rd] Athena Combat Uniform";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Athena_BDU_V_Slim";
		};
	};


//Base

    class 53rd_Athena_Helmet: VES_CH252D
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
        ace_hearing_lowerVolume = 0.40;
        author="Vespade";
        displayName="[53rd] CH252A Helmet";
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
        };
    };	
    class 53rd_Athena_Helmet_dp: 53rd_Athena_Helmet
    {
        ace_hearing_protection = 5.0;
        ace_hearing_lowerVolume = 0.40;
        author="Vespade";
        displayName="[53rd] CH252A Helmet dp";
        model="\OPTRE_UNSC_Units\Army\aa_helmet_dp";
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
            ""
        };
        class ItemInfo: HeadgearItem
        {
            mass=1;
            uniformModel="\OPTRE_UNSC_Units\Army\aa_helmet_dp";
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
                ""
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
                    hitPointName="HitHead";
                    armor=40;
                    passThrough=0.1;
                };
            };
        };
    };
    class 53rd_Armor_Specialist2: 53rd_Armor_Specialist
    {
        scope = 1;
        scopeArsenal = 1;
        author="Article 2 Studios";
        picture="\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
        displayName="M52A Body Armor (Heavy) [Woodland]";
        hiddenSelectionsTextures[]=
        {
            "OPTRE_UNSC_Units\Army\data\vest_co.paa",
            "optre_unsc_units\army\data\armor_co.paa",
            "optre_unsc_units\army\data\legs_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\odst_armor_co.paa"
        };
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

//Athena Armor

//Urban

class 53rd_Athena_Armor_Rifleman: 53rd_Armor_Rifleman
	{
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
	
class 53rd_Athena_Armor_RTO: 53rd_Armor_RTO
	{
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (RTO)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_RTO.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};


//Woodland

class 53rd_Athena_Armor_Rifleman_Woodland: 53rd_Armor_Rifleman
	{
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
	
class 53rd_Athena_Armor_RTO_Woodland: 53rd_Armor_RTO
	{
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (RTO / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_RTO_Woodland.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};


//Desert

class 53rd_Athena_Armor_Rifleman_Desert: 53rd_Armor_Rifleman
	{
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
	
class 53rd_Athena_Armor_RTO_Desert: 53rd_Armor_RTO
	{
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (RTO / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_RTO_Desert.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};


//Snow

class 53rd_Athena_Armor_Rifleman_Snow: 53rd_Armor_Rifleman
	{
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
	
class 53rd_Athena_Armor_RTO_Snow: 53rd_Armor_RTO
	{
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (RTO / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_RTO_Snow.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Rifleman_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};


//Custom
	
 /*   class 53rd_Athena_Armor_Ithias: 53rd_Armor_SL
	{
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
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
	class 53rd_Athena_Armor_Tsuki: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Tsuki)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Tsuki.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_SL_Tsuki.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_NCO_Tsuki.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    
    class 53rd_Athena_Armor_Kuzyk: 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "Ithias/53rd AUX Team";
		displayName="[53rd] Athena Armor (Kuzyk)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Vest_Kuzyk.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Armor_Kuzyk.paa",
			"53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Legs_Kuzyk.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
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
				"AP_AR", //Front AR packs, Need both to work <<
				//"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL", //40mm belt on front
				//"AP_Knife", //Chest knife
				"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_Pack", //Center Chest Pouch
				"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				"AP_Thigh", //Left Thigh ammo pouch
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

	*/
//Athena Helmets

//Urban

class 53rd_Athena_Helmet_Rifleman : 53rd_Athena_Helmet
    {
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Rifleman)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_Rifleman_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (NCO)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_GLD_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_NCO_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Medic)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Red.paa"
        };
    };
    class 53rd_Athena_Helmet_Medic_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Rifleman / Woodland)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Woodland.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_Rifleman_Woodland_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (NCO / Woodland)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Woodland.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_GLD_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_NCO_Woodland_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Medic / Woodland)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Woodland.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Red.paa"
        };
    };
    class 53rd_Athena_Helmet_Medic_Woodland_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Woodland.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

//Desert

class 53rd_Athena_Helmet_Rifleman_Desert : 53rd_Athena_Helmet
    {
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Rifleman / Desert)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Desert.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_Rifleman_Desert_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (NCO / Desert)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Desert.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_GLD_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_NCO_Desert_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Medic / Desert)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Desert.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Red.paa"
        };
    };
    class 53rd_Athena_Helmet_Medic_Desert_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Rifleman / Snow)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Snow.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_Rifleman_Snow_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (NCO / Snow)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Snow.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_GLD_V_CO.paa"
        };
    };
    class 53rd_Athena_Helmet_NCO_Snow_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
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
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Medic / Snow)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Snow.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Red.paa"
        };
    };
    class 53rd_Athena_Helmet_Medic_Snow_dp : 53rd_Athena_Helmet_dp
    {
		scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[Body] Para CH252A (Yellow)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Rifleman_Snow.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
/*
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
    class 53rd_Athena_Helmet_Ithias_dp : 53rd_Athena_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Ithias)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Ithias.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
class 53rd_Athena_Helmet_Tsuki : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Tsuki)";
        author = "Tsuki/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Tsuki.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Tsuki_V2.paa"
        };
    };
class 53rd_Athena_Helmet_Tsuki_dp : 53rd_Athena_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Tsuki)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_NCO_Tsuki.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	
class 53rd_Athena_Helmet_Kuzyk : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Kuzyk)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Kuzyk.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Kuzyk.paa"
        };
    };
    class 53rd_Athena_Helmet_Kuzyk_dp : 53rd_Athena_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Kuzyk)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Kuzyk.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };

class 53rd_Athena_Helmet_Dublin : 53rd_Athena_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Athena Helmet (Dublin)";
        author = "Ithias/53rd AUX Team";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Dublin.paa",
            "53rd_SC_aux\Athena_Armor\Tex\V_CH252A_SLV_V_CO_Dublin.paa"
        };
    };
    class 53rd_Athena_Helmet_Dublin_dp : 53rd_Athena_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Athena Helmet (Dublin)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\Athena_Armor\Tex\53rd_Athena_Helmet_Dublin.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };*/
};


class CfgVehicles
{
	class VES_BDU_V_Urban;
	
	class 53rd_Athena_BDU_V_Slim: VES_BDU_V_Urban
	{
		scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
        uniformclass="53rd_Athena_BDU_Slim";
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

class CfgGlasses
{
};