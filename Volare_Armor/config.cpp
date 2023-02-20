class CfgPatches {
	class Volare_Armor {
		units[] = 
        {
            "BDU_V_Volare_Black",
			""
        };
		weapons[] = 
        {
            "Volare_BDU_Bl",
			"53rd_VX19_Black_Helmet",
			"53rd_VX19_Blue_Helmet",
			"53rd_VX19_Red_Helmet",			
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
	class Hands;
	class Pelvis;
	class 53rd_Armor_Specialist;
	class 53rd_Armor_SL;

//Volare Helmets
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
	class 53rd_VX19_Snow_Helmet : 53rd_VX19_Black_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] VX19 Flight Helmet (Snow)";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_White_CO.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
    };
    class 53rd_VX19_Snow_Helmet_dp : 53rd_VX19_Black_Helmet
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] VX19 Flight Helmet (Snow) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_White_CO.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo","camo2"};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_aux\tex\Volare Armor\h3_pilothelmet_White_CO.paa",
                ""
            };
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"OPTRE_FC_Units\Marines\data\h3_pilothelmet_Visor_trans.rvmat"
			};
        };
    };
    
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
	class 53rd_V_Pilot_Armor_White:OPTRE_FC_M52B_Armor_Teamleader
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Vest (Snow)";
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_vest_White_co.paa"};
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
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
            "53rd_SC_aux\tex\Volare Armor\53th_M52_GB_AM.paa",
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
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
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_Hephaestus_Vest_Urban.paa",
            "53rd_SC_aux\tex\Volare Armor\53th_M52_GB_AM.paa",
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_Hephaestus_Leg_Urban.paa",
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
	class Volare_BDU_B3_Snow:OPTRE_FC_Marines_Uniform
    {
        scope = 2;
        scopeArsenal = 2;
        scopeEditor = 2;
        dlc = "53rd AUX";
        author = "53rd AUX TEAM";
        displayName = "[53rd] Volare Flight Suit (Snow)";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "BDU_V_Volare_White";
            uniformType = "Neopren";
            containerClass = "Supply100";
            modelSides[] = {6};
        };
    };
};

class CfgVehicles
{
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
	class BDU_V_Volare_White : OPTRE_UNSC_Army_Soldier_WDL 
    { 
        model = "\OPTRE_FC_Units\Marines\h3_uniform.p3d"; 
        uniformClass = "Volare_BDU_B3_Snow"; 
        hiddenSelections[] = {"camo1","camo2"}; 
        hiddenSelectionsTextures[] = {"53rd_SC_aux\tex\Volare Armor\h3_uniform_White_co.paa","LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"}; 
    };
};