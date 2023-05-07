class CfgPatches {
	class Hephaestus_Customs {
		units[] = 
        {
            ""
        };
		weapons[] = 
        {
			"53rd_AA_Cherry_WN",
			"53rd_AA_Cherry_UB",
			"53rd_AA_Cherry_DS",
            "53rd_AA_Cherry_WD"
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
	class 53rd_Armor_Rifleman;
	class 53rd_Armor_Specialist;
	class 53rd_Armor_TL;
	class 53rd_Armor_SL;
	class 53rd_Armor_Medic;
	class 53rd_Armor_JTAC;
	class 53rd_Sealed_Base;
	class 53rd_Sealed_Base_dp;
	class 53rd_Unsealed_Base;
	class 53rd_Unsealed_Base_dp;
	class 53rd_Hephaestus_BDU_Slim;
	class MA_H4_Scout_Helmet;
	class MA_AA_Helmet;
	class MA_EOD_Helmet;
	class 53rd_AA_Helmet_Gold;
	class MA_M56A_Helmet;

//Customs

//Fixer

    class 53rd_Custom_Fixer_Woodland : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Custom Armor (Fixer / Woodland)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_WD.paa"
        };
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
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
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				"AS_LargeLeft", //Tall plate
				//"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", //Standard ODST
				"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				//"AP_Canteen", //Left Hip
				//"AP_GL", //40mm belt on front
				"AP_Knife", //Chest knife
				//"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				//"AP_Pack", //Center Chest Pouch
				//"AP_Pistol", //Right Hip, ammo pouch
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
				//"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				//"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
		};
    };
    class 53rd_Custom_Armor_Fixer_Desert : 53rd_Custom_Fixer_Woodland
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Fixer / Desert)";
		hiddenSelectionsTextures[]=
		{
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_DE.paa"
		};
	};
    class 53rd_Custom_Armor_Fixer_Snow : 53rd_Custom_Fixer_Woodland
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Fixer / Snow)";
		hiddenSelectionsTextures[]=
		{
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_SN.paa"
		};
	};
    class 53rd_Custom_Armor_Fixer_Urban : 53rd_Custom_Fixer_Woodland
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Fixer / Urban)";
		hiddenSelectionsTextures[]=
		{
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
            "53rd_SC_aux\tex\ODST Armor\53rd_ODST_UB.paa"
		};
	};
    
    class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Fixer / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Fixer_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Fixer / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Fixer_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
    class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Snow : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Fixer / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Fixer_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Snow_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Fixer / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Fixer_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
    class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Fixer / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Fixer_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Fixer / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Fixer_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
    class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Fixer / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Fixer_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Fixer / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Fixer_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };

//Body
	class 53rd_Custom_Helmet_Body_Woodland : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Body / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Body_Woodland.paa"
        };
    };
	class 53rd_Custom_Helmet_Body_Urban : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Body / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Body_Urban.paa"
        };
    };
	class 53rd_Custom_Helmet_Body_Snow : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Body / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Body_Snow.paa"
        };
    };
	class 53rd_Custom_Helmet_Body_Desert : 53rd_Unsealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Body / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Body_Desert.paa"
        };
    };

class 53rd_Custom_Armor_Body_Desert : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Body / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Body_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Body_Snow : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Body / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Body_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 53rd_Custom_Armor_Body_Urban : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Body / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Body_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 53rd_Custom_Armor_Body_Woodland : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Body / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Body_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
//Panzer

class 53rd_Custom_Base_Armor_Panzer: 53rd_Armor_Rifleman
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
class 53rd_Custom_Armor_Panzer_Desert : 53rd_Custom_Base_Armor_Panzer
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Panzer / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Panzer_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Panzer_Snow : 53rd_Custom_Base_Armor_Panzer
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Panzer / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Panzer_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Panzer_Urban : 53rd_Custom_Base_Armor_Panzer
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Panzer / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Panzer_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Panzer_Woodland : 53rd_Custom_Base_Armor_Panzer
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Panzer / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Panzer_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Panzer / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Panzer_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Panzer / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Panzer_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Snow : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Panzer / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Panzer_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Snow_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Panzer / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Panzer_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Panzer / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Panzer_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Panzer / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Panzer_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Panzer / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Panzer_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Panzer / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Panzer_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };

//Ryuu

class 53rd_Custom_Base_Armor_Ryuu: 53rd_Armor_Rifleman
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
				"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				//"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				//"AS_SmallLeft", //Small Oval shaped
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

class 53rd_Custom_Armor_Ryuu_Desert : 53rd_Custom_Base_Armor_Ryuu
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Ryuu / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Ryuu_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Ryuu_Snow : 53rd_Custom_Base_Armor_Ryuu
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Ryuu / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Ryuu_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Ryuu_Urban : 53rd_Custom_Base_Armor_Ryuu
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Ryuu / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Ryuu_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Ryuu_Woodland : 53rd_Custom_Base_Armor_Ryuu
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Ryuu / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Ryuu_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ryuu / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ryuu_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ryuu / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ryuu_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Snow : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ryuu / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ryuu_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Snow_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ryuu / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ryuu_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ryuu / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ryuu_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ryuu / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ryuu_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ryuu / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ryuu_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ryuu / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ryuu_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
//Ithias

class 53rd_Custom_Base_Armor_Ithias: 53rd_Armor_Rifleman
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
				//"AP_Knife",
				"AP_MGThigh",
				//"AP_AR",
				//"AP_Pack",
				"AP_Pistol",
				//"AP_Rounds"
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
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
class 53rd_Custom_Armor_Ithias_Desert : 53rd_Custom_Base_Armor_Ithias
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Ithias / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Ithias_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Ithias_Snow : 53rd_Custom_Base_Armor_Ithias
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Ithias / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Ithias_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Ithias_Urban : 53rd_Custom_Base_Armor_Ithias
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Ithias / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Ithias_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Ithias_Woodland : 53rd_Custom_Base_Armor_Ithias
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Ithias / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Ithias_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ithias / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ithias_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ithias / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ithias_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Snow : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ithias / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ithias_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Snow_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ithias / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ithias_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ithias / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ithias_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ithias / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ithias_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ithias / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ithias_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Ithias / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Ithias_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
    //Lonewulf
    class 53rd_Custom_Armor_Lonewulf_Woodland : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Custom Armor (Lonewulf / Woodland)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
            "53rd_SC_aux\tex\Customs\53rd_ODST_LW_WD.paa"
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
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				//"AS_MediumLeft", //Mid sized plate 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				//"AS_ODSTSniperRight",
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
				//"AP_Rounds", //Sniper rounds On Left Sholder
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
    class 53rd_Custom_Armor_Lonewulf_Desert : 53rd_Custom_Armor_Lonewulf_Woodland
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Lonewulf / Desert)";
		hiddenSelectionsTextures[]=
		{
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
            "53rd_SC_aux\tex\Customs\53rd_ODST_LW_DE.paa"
		};
	};
    class 53rd_Custom_Armor_Lonewulf_Snow : 53rd_Custom_Armor_Lonewulf_Woodland
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Lonewulf / Snow)";
		hiddenSelectionsTextures[]=
		{
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
            "53rd_SC_aux\tex\Customs\53rd_ODST_LW_SN.paa"
		};
	};
    class 53rd_Custom_Armor_Lonewulf_Urban : 53rd_Custom_Armor_Lonewulf_Woodland
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Lonewulf / Urban)";
		hiddenSelectionsTextures[]=
		{
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_SL_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
            "53rd_SC_aux\tex\Customs\53rd_ODST_LW_UB.paa"
		};
	};
class OPTRE_UNSC_CH252D_Helmet;
class OPTRE_UNSC_CH252D_Helmet_dp;
    
class 53rd_Custom_Helmet_Lonewulf_Urban : OPTRE_UNSC_CH252D_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Lonewulf / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Lonewulf_Urban.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_Lonewulf_Urban_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Lonewulf / Urban) dp";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Lonewulf_Urban.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Lonewulf_Woodland : OPTRE_UNSC_CH252D_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Lonewulf / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Lonewulf_Woodland.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_Lonewulf_Woodland_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Lonewulf / Woodland) dp";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Lonewulf_Woodland.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Lonewulf_Desert : OPTRE_UNSC_CH252D_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Lonewulf / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Lonewulf_Desert.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_Lonewulf_Desert_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Lonewulf / Desert) dp";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Lonewulf_Desert.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Lonewulf_Snow : OPTRE_UNSC_CH252D_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Lonewulf / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Lonewulf_Snow.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_Lonewulf_Snow_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Lonewulf / Snow) dp";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Lonewulf_Snow.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
	
//Joker
class 53rd_Custom_Armor_Joker_Desert : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Joker / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Joker_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Joker_Snow : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Joker / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Joker_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Joker_Urban : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Joker / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Joker_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
class 53rd_Custom_Armor_Joker_Woodland : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Joker / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Joker_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    //Hazard
    class 53rd_Custom_Armor_Hazard_Desert : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Hazard / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Hazard_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    class 53rd_Custom_Armor_Hazard_Snow : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Hazard / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Hazard_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    class 53rd_Custom_Armor_Hazard_Urban : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Hazard / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Hazard_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    class 53rd_Custom_Armor_Hazard_Woodland : 53rd_Armor_SL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Hazard / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Armor_Hazard_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    
    class 53rd_Custom_Helmet_Hazard_Urban : OPTRE_UNSC_CH252D_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Hazard / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Hephaestus_Helmet_Hazard_Urban.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_Hazard_Urban_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Hazard / Urban) dp";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Hephaestus_Helmet_Hazard_Urban.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
    class 53rd_Custom_Helmet_Hazard_Woodland : OPTRE_UNSC_CH252D_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Hazard / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Hephaestus_Helmet_Hazard_Woodland.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_Hazard_Woodland_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Hazard / Woodland) dp";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Hephaestus_Helmet_Hazard_Woodland.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
    class 53rd_Custom_Helmet_Hazard_Desert : OPTRE_UNSC_CH252D_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Hazard / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Hephaestus_Helmet_Hazard_Desert.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_Hazard_Desert_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Hazard / Desert) dp";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Hephaestus_Helmet_Hazard_Desert.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
    class 53rd_Custom_Helmet_Hazard_Snow : OPTRE_UNSC_CH252D_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Hazard / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Hephaestus_Helmet_Hazard_Snow.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_co.paa"
		};
    };
	class 53rd_Custom_Helmet_Hazard_Snow_dp : OPTRE_UNSC_CH252D_Helmet_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Helmet (Hazard / Snow) dp";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Hephaestus_Helmet_Hazard_Snow.paa",
			"OPTRE_UNSC_Units\Army\data\ODST_Helmet_Visor_ca.paa"
		};
    };
    //Cherry 
class 53rd_AA_Cherry_UB:MA_M56A_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Urban)";
			model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Cherryy_Urban.paa",
				"53rd_SC_aux\Trooper helmets\AA\Visor\[53rd] AA Helmet(Visor).paa"
				};
		};
class 53rd_AA_Cherry_DS:MA_M56A_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Desert)";
			model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Cherryy_Desert.paa",
				"53rd_SC_aux\Trooper helmets\AA\Visor\[53rd] AA Helmet(Visor).paa"
				};
		};
class 53rd_AA_Cherry_WN:MA_M56A_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Snow)";
			model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Cherryy_Snow.paa",
				"53rd_SC_aux\Trooper helmets\AA\Visor\[53rd] AA Helmet(Visor).paa"
				};
		};
class 53rd_AA_Cherry_WD:MA_M56A_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Woodland)";
			model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Cherryy_Woodland.paa",
				"53rd_SC_aux\Trooper helmets\AA\Visor\[53rd] AA Helmet(Visor).paa"
				};
		};
    /*Hellfire
    class 53rd_Custom_Armor_Hellfire_Desert : 53rd_Armor_TL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Hellfire / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_TL_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    class 53rd_Custom_Armor_Hellfire_Snow : 53rd_Custom_Armor_Hellfire_Desert
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Hellfire / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_TL_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    class 53rd_Custom_Armor_Hellfire_Urban : 53rd_Custom_Armor_Hellfire_Desert
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Hellfire / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_TL_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    class 53rd_Custom_Armor_Hellfire_Woodland : 53rd_Custom_Armor_Hellfire_Desert
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Hellfire / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_TL_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	}; */
    
class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Hellfire / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Hellfire_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Hellfire / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Hellfire_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Snow : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Hellfire / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Hellfire_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Snow_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Hellfire / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Hellfire_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Hellfire / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Hellfire_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Hellfire / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Hellfire_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Hellfire / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Hellfire_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Hellfire / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Hellfire_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };    
    
    //Patches
    class 53rd_Custom_Armor_Patches_Desert : 53rd_Armor_TL
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Patches / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_JTAC_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Desert.paa",
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
				//"A_TacPad", //Small screen on left wrist
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
				"AP_BR", //Front 3 BR pouches
				//"AP_Canteen", //Left Hip
				"AP_GL", //40mm belt on front
				"AP_Knife", //Chest knife
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
				"AP_Smoke", //Left Hip
				//"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				//"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
		};
	};
    class 53rd_Custom_Armor_Patches_Snow : 53rd_Custom_Armor_Patches_Desert
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Patches / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_JTAC_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Snow.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    class 53rd_Custom_Armor_Patches_Urban : 53rd_Custom_Armor_Patches_Desert
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Patches / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_JTAC_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    class 53rd_Custom_Armor_Patches_Woodland : 53rd_Custom_Armor_Patches_Desert
	{ 
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX Team";
		displayName="[53rd] Custom Armor (Patches / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Armor_JTAC_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Woodland.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
    
class 53rd_Custom_Helmet_Vac_Sealed_Patches_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Patches / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Patches_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Patches_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Patches / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Patches_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Patches_Snow : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Patches / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Patches_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Patches_Snow_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Patches / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Patches_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Patches_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Patches / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Patches_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Patches_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Patches / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Patches_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Patches_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Patches / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Patches_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Patches_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Patches / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Patches_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    }; 
    //Dic Dic

class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Tikles / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Tikles_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Tikles / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Tikles_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Snow : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Tikles / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Tikles_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Snow_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Tikles / Snow)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Tikles_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Tikles / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Tikles_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Tikles / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Tikles_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Tikles / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Tikles_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Gold.paa"
		};
    };
	class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Custom Vac Sealed Helmet (Tikles / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Tikles_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
//Cherryy
class 53rd_Custom_Helmet_MA_Air_Assault_Cherryy_Desert:  53rd_AA_Helmet_Gold
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Custom Air Assault Helmet (Cherryy / Desert)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Cherryy_Desert.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Visor_Cherryy.paa",
		};
	};
class 53rd_Custom_Helmet_MA_Air_Assault_Cherryy_Snow:  53rd_Custom_Helmet_MA_Air_Assault_Cherryy_Desert
	{
		displayName="[53rd] Custom Air Assault Helmet (Cherryy / Snow)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Cherryy_Snow.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Visor_Cherryy.paa",
		};
	};
class 53rd_Custom_Helmet_MA_Air_Assault_Cherryy_Urban:  53rd_Custom_Helmet_MA_Air_Assault_Cherryy_Desert
	{
		displayName="[53rd] Custom Air Assault Helmet (Cherryy / Urban)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Cherryy_Urban.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Visor_Cherryy.paa",
		};
	};
class 53rd_Custom_Helmet_MA_Air_Assault_Cherryy_Woodland:  53rd_Custom_Helmet_MA_Air_Assault_Cherryy_Desert
	{
		displayName="[53rd] Custom Air Assault Helmet (Cherryy / Woodland)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_Cherryy_Woodland.paa",
			"53rd_SC_aux\tex\Customs\53rd_Custom_Visor_Cherryy.paa",
		};
	};
};

class CfgVehicles
{
};