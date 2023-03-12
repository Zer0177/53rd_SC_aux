class CfgPatches {
	class 53rd_Land_Scorpion {
		units[] = {"53rd_Scorpion","53rd_ONI_Scorpion","53rd_CORP_Scorpion","53rd_M875_SPH"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[]={"OPTRE_Core"};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
class OPTRE_M808BM_UNSC;
class OPTRE_M875_SPH;
	class 53rd_Scorpion: OPTRE_M808BM_UNSC
	{
		displayName="[53rd] M808BM";
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Tank";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		weapons[]=
		{

		};
		magazines[]=
		{
		};
		class EventHandlers
		{
        Init = "(_this select 0) addWeaponTurret ['cannon_125mm_advancedcannon_125mm_advanced',[8]];(_this select 0) addMagazineTurret ['OPTRE_100Rnd_50mm_APFSDS',[8]];";
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
			"53rd_SC_aux\tex\Scorpion\Scorp_base_53rd_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorp_tur_53rd_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorpion_mg_grey_co.paa"
		};
		class TextureSources
        {
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_lopo_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_tur_wood_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorpion_mg_co.paa"
				};
			};
			class colorwhite
			{
				displayName="White Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_tundra_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_tundra_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_tundra_co.paa"
				};
			};
			class colortan
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_desert_co.paa"
				};
			};
			class colorjung
			{
				displayName="Green Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_jungle_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_jungle_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_jungle_co.paa"
				};
			};
			class colorblk
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_black_co.paa"
				};
			};
			class colorgry
			{
				displayName="Grey";
				author="Sgt. Body";
				textures[]=
				{
					"53rd_SC_aux\tex\Scorpion\Scorp_base_53rd_co.paa",
					"53rd_SC_aux\tex\Scorpion\Scorp_tur_53rd_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
					"53rd_SC_aux\tex\Scorpion\Scorpion_mg_grey_co.paa"
				};
			};
			
        };
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class ACE_track
                {
                    type = "ACE_track";
                    amount = 1;
                };
            };
        };
    };
	class 53rd_ONI_Scorpion: OPTRE_M808BM_UNSC
	{
		displayName="[ONI] M808BM";
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_ONI";
		editorCategory = "53rd_ONI_cat_faction";
		editorSubCategory = "53rd_Tank";
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
			"53rd_SC_aux\tex\Scorpion\ONI_Tank_CO.paa",
			"53rd_SC_aux\tex\Scorpion\ONI_tank_Turret.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorpion_mg_ONI_co.paa"
		};
	};
	class 53rd_CORP_Scorpion: OPTRE_M808BM_UNSC
	{
		displayName="[CORP] M808BM";
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Dortman";
		editorCategory = "53rd_Dortman_cat_faction";
		editorSubCategory = "53rd_Tank";
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
			"53rd_SC_aux\tex\Scorpion\Corp\Scorp_base_Corp_co.paa",
			"53rd_SC_aux\tex\Scorpion\Corp\Scorp_tur_Corp_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
			"53rd_SC_aux\tex\Scorpion\Corp\Scorpion_mg_Corp_co.paa"
		};
	};
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
			"53rd_SC_aux\tex\Scorpion\Scorp_base_53rd_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorp_53rd_art_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"53rd_SC_aux\tex\Scorpion\Scorpion_mg_grey_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_1_lopo_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa"
		};
	};
};