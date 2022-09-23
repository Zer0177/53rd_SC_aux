class CfgPatches {
	class 53rd_Land_Scorpion {
		units[] = {"53rd_M875_SPH"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
	class OPTRE_M875_SPH;
	class 53rd_M875_SPH: OPTRE_M875_SPH
	{
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Tank";
		displayName="[53rd] M875 SPH";
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Scorpion\Scorp_base_grey_co.paa",
			"53rd_SC_aux\Vehicles\Scorpion\Scorp_art_black_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"53rd_SC_aux\tex\Scorpion\Scorpion_mg_grey_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_1_lopo_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa"
		};
	};
};