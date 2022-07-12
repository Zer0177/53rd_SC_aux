class CfgPatches {
	class 53rd_Air_Hornet {
		units[] = {"53rd_UNSC_Hornet"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class cfgVehicles {
    class Components;
	
	class OPTRE_UNSC_hornet;
	class 53rd_UNSC_Hornet: OPTRE_UNSC_hornet
	{
		dlc="53rd";
		author="Skywalker";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		displayName="[53rd] Hornet (CAP)";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		crew="VES_Rifleman_MA5B_ODST";
		mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_URB.paa"
        };
		weapons[]=
		{
			"CMFlareLauncher",
			"OPTRE_GUA23A",
			"OPTRE_missiles_C2GMLS",
            "missiles_ASRAAM",
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_8Rnd_C2GMLS_missiles",
            "4Rnd_AAA_missiles",
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DES.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_WDL.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_JNG.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_URB.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_BLK.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_FRS.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_TND.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DUN.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_CLS.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_OD3.paa"
				};
			};
		};
		textureList[]=
		{
			"ves_desert",
			1,
			"ves_woodland",
			1,
			"ves_jungle",
			1,
			"ves_urban",
			1,
			"ves_black",
			1,
			"ves_frost",
			1,
			"ves_tundra",
			1,
			"ves_dunes",
			1,
			"ves_classic",
			1,
			"ves_olive",
			1
		};
	};
};