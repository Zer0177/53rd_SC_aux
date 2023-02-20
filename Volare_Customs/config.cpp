class CfgPatches {
	class Volare_Customs {
		units[] = 
        {
            "",
			""
        };
		weapons[] = 
        {
            "",
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

//Customs


//Ben
class 53rd_VX19_Black_Helmet;
class 53rd_VX19_Black_Helmet_dp;
class 53rd_Custom_Helmet_BigBen : 53rd_VX19_Black_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] VX19 Flight Helmet (Hawaiian)";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_BigBen.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
    };
	class 53rd_Custom_Helmet_BigBen_dp : 53rd_VX19_Black_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] VX19 Flight Helmet (Hawaiian) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_BigBen.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo","camo2"};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_BigBen.paa",
                ""
            };
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"OPTRE_FC_Units\Marines\data\h3_pilothelmet_Visor_trans.rvmat"
			};
        };
    };
    //Lonewulf
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
};

class CfgVehicles
{

};