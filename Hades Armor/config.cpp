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
    class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class OPTRE_UNSC_CH252D_Helmet;

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
