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
    class 53rd_ODST_BASE : VES_M52D_Rifleman
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
