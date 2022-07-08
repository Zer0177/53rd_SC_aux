class CfgPatches {
	class 53rd_Hogs {
		units[] = {"53rd_M12_FAV_APC","53rd_M813_TT","53rd_M12A1_LRV","53rd_M12G1_LRV","53rd_M12R_AA","53rd_M12_FAV_APC","53rd_M914_RV"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
	class OPTRE_M12_FAV_APC;
	class 53rd_M12_FAV_APC: OPTRE_M12_FAV_APC
	{
		displayName="[53rd] M12 APC Warthog";
		author="Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_A";
		side=1;
		faction="53rd_UNSC";
		crew="VES_Rifleman_MA5B_MAR";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};

		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\M12_MG_Grey.paa",
			"53rd_SC_aux\tex\Hogs\M12HogMaav_extunder_wood_co.paa",
			"53rd_SC_aux\tex\Hogs\transp_lopo_Grey_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa"
		};
	};
	class OPTRE_M813_TT;
	class 53rd_M813_TT: OPTRE_M813_TT
	{
		dlc = "53rd";
		displayName="[53rd] M813 Transport Warthog";
		author="Seven";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_A";
		side=1;
		faction="53rd_UNSC";
		crew="VES_Rifleman_MA5B_MAR";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\M12_MG_Grey.paa",
			"53rd_SC_aux\tex\Hogs\M12HogMaav_extunder_wood_co.paa",
			"53rd_SC_aux\tex\Hogs\transp_lopo_Grey_co.paa"
		};
	};
	class OPTRE_M12A1_LRV;
	class 53rd_M12A1_LRV: OPTRE_M12A1_LRV
	{
		dlc = "53rd";
		displayName="[53rd] M12A1 AT Warthog";
		author="Seven";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_A";
		side=1;
		faction="53rd_UNSC";
		crew="VES_Rifleman_MA5B_MAR";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\M12_MG_Grey.paa",
			"53rd_SC_aux\tex\Hogs\M12HogMaav_extunder_wood_co.paa",
			"53rd_SC_aux\tex\Hogs\m12_turret_grey_co.paa"
		};
	};
	class OPTRE_M12_FAV;
	class 53rd_M12_FAV: OPTRE_M12_FAV
	{
		dlc = "53rd";
		displayName="[53rd] M12 Recon Warthog";
		author="Seven";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_A";
		side=1;
		faction="53rd_UNSC";
		crew="VES_Rifleman_MA5B_MAR";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\M12_MG_Grey.paa",
			"53rd_SC_aux\tex\Hogs\M12HogMaav_extunder_wood_co.paa"
		};
	};
	class OPTRE_M12_LRV;
	class 53rd_M12_LRV: OPTRE_M12_LRV
	{
		dlc = "53rd";
		displayName="[53rd] M12 LAAG Warthog";
		author="Seven";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_A";
		side=1;
		faction="53rd_UNSC";
		crew="VES_Rifleman_MA5B_MAR";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\M12_MG_Grey.paa",
			"53rd_SC_aux\tex\Hogs\M12HogMaav_extunder_wood_co.paa",
			"53rd_SC_aux\tex\Hogs\m12_turret_grey_co.paa"
		};
	};
	class OPTRE_M12G1_LRV;
	class 53rd_M12G1_LRV: OPTRE_M12G1_LRV
	{
		dlc = "53rd";
		displayName="[53rd] M12G1 Gauss Warthog";
		author="Seven";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_A";
		side=1;
		faction="53rd_UNSC";
		crew="VES_Rifleman_MA5B_MAR";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\M12_MG_Grey.paa",
			"53rd_SC_aux\tex\Hogs\M12HogMaav_extunder_wood_co.paa",
			"53rd_SC_aux\tex\Hogs\m68_turret_Grey_co.paa",
			"53rd_SC_aux\tex\Hogs\m12_turret_grey_co.paa"
		};
	};
	class OPTRE_M12R_AA;
	class 53rd_M12R_AA: OPTRE_M12R_AA
	{
		dlc = "53rd";
		displayName="[53rd] M12 AA Warthog";
		author="Seven";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_A";
		side=1;
		faction="53rd_UNSC";
		crew="VES_Rifleman_MA5B_MAR";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\M12_MG_Grey.paa",
			"53rd_SC_aux\tex\Hogs\M12HogMaav_extunder_wood_co.paa",
			"53rd_SC_aux\tex\Hogs\m79_turret_Grey_co.paa"
		};
	};
	class OPTRE_M914_RV;
	class 53rd_M914_RV: OPTRE_M914_RV
	{
		dlc = "53rd";
		displayName="[53rd] M914 RV Warthog";
		author="Seven";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_A";
		side=1;
		faction="53rd_UNSC";
		crew="VES_Rifleman_MA5B_MAR";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Hogs\M12_MG_Grey.paa",
			"53rd_SC_aux\tex\Hogs\M12HogMaav_extunder_wood_co.paa"
		};
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;
	};
};