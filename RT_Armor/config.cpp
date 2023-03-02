class CfgPatches
{
	class 53rd_Spartan_RT_Armor
	{
		units[]=
		{
		};
		weapons[]=
		{
		"53rd_FC_MJOLNIR_MKV_Helmet_RT",
		"53rd_FC_MJOLNIR_MKV_Helmet_AL",
		"53rd_FC_MJOLNIR_MKV_Helmet_MS",
		"53rd_FC_MJOLNIR_MKV_Helmet_J",
		"53rd_MJOLNIR_MKV_Armor_RT",
		"53rd_MJOLNIR_MKV_Armor_AL",
		"53rd_MJOLNIR_MKV_Armor_MS",
		"53rd_MJOLNIR_MKV_Armor_J"
		};
		requiredVersion=0.0099999998;
		requiredAddons[]=
		{
		};
	};
};
class Body;
class Pelvis;	
class Abdomen;	
class Diaphragm;
class Chest;
class Hands;
class Arms;
class Legs;
class Neck;
class Head;
class Face;
class VestItem;
class ItemInfo;
class HeadgearItem;
class HitpointsProtectionInfo;
class OPTRE_FC_MJOLNIR_MKV_Armor;
class OPTRE_FC_MJOLNIR_MKV_Helmet;
class cfgweapons
{
	//Base Class
	class OPTRE_FC_MJOLNIR_MKV_Armor;
	class 53rd_MJOLNIR_MkVArmor: OPTRE_FC_MJOLNIR_MKV_Armor
	{
		dlc="OPTRE";
		scope=2;
		author="Vince5754 & Article 2 Studios";
	displayName="[53rd] MJOLNIR Mark V Armor";
		model="\OPTRE_FC_Units\Spartan\MKV_Armor_vince.p3d";
		picture="\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_Knife1",
			"AP_SMG",
			"AP_Smoke",
			"AP_Sniper"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\spartan\data\mkv_armor_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_FC_Units\Spartan\MKV_Armor_vince.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_Knife1",
				"AP_SMG",
				"AP_Smoke",
				"AP_Sniper"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\spartan\data\mkv_armor_co.paa"
			};
			containerClass="Supply160";
			mass=65;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.0099999998;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.0099999998;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.0099999998;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.0099999998;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.0099999998;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.0099999998;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.0099999998;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=45;
					passThrough=0.0099999998;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.0099999998;
				};
			};
		};
	};
//Helmet Base
class 53rd_FC_MJOLNIR_MKV_Helmet: OPTRE_FC_MJOLNIR_MKV_Helmet
	{
		dlc="OPTRE";
		scope=2;
		author="Vince5754 & Article 2 Studios";
		displayName="[53rd] MJOLNIR Mark V Helmet";
		picture="\OPTRE_FC_Units\Marines\data\h3_helmet_i_ca.paa";
		model="\OPTRE_FC_Units\Spartan\MKV_Helmet_vince.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\spartan\data\mkv_armor_co.paa",
			"optre_fc_units\spartan\data\mkv_armor_co.paa"
		};
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_FC_Units\Spartan\MKV_Helmet_vince.p3d";
			mass=30;
			modelSides[]={6};
			passThrough=0.015;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\spartan\data\mkv_armor_co.paa",
				"optre_fc_units\spartan\data\mkv_armor_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=100;
					passThrough=0.0099999998;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=100;
					passThrough=0.0099999998;
				};
			};
		};
		subItems[]=
		{
			"Integrated_NVG_TI_1_F"
		};
	};
	class 53rd_FC_MJOLNIR_MKV_Helmet_dp: OPTRE_FC_MJOLNIR_MKV_Helmet
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
		};
	};
	
//ARMOR

	class 53rd_MJOLNIR_MKV_Armor_RT: 53rd_MJOLNIR_MkVArmor
	{
		dlc="OPTRE";
		scope=2;
		scopeArsenal=2;
		author="Body,Vince5754 & Article 2 Studios";
		displayName="[53rd] MJOLNIR Mark V Armor [RT]";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_RT_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_RT_co.paa"
			};
		};
	};
	class 53rd_MJOLNIR_MKV_Armor_AL: 53rd_MJOLNIR_MkVArmor
	{
		dlc="OPTRE";
		scope=2;
		scopeArsenal=2;
		author="Body,Vince5754 & Article 2 Studios";
		displayName="[53rd] MJOLNIR Mark V Armor [130]";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Alice_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Alice_co.paa"
			};
		};
	};
	class 53rd_MJOLNIR_MKV_Armor_MS: 53rd_MJOLNIR_MkVArmor
	{
		dlc="OPTRE";
		scope=2;
		scopeArsenal=2;
		author="Body,Vince5754 & Article 2 Studios";
	displayName="[53rd] MJOLNIR Mark V Armor [096]";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Musa_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Musa_co.paa"
			};
		};
	};
	class 53rd_MJOLNIR_MKV_Armor_J: 53rd_MJOLNIR_MkVArmor
	{
		dlc="OPTRE";
		scope=2;
		scopeArsenal=2;
		author="Body,Vince5754 & Article 2 Studios";
		displayName="[53rd] MJOLNIR Mark V Armor [092]";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Jerome_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Jerome_co.paa"
			};
		};
	};
	class 53rd_FC_MJOLNIR_MKV_Helmet_RT: 53rd_FC_MJOLNIR_MKV_Helmet
	{
		dlc="OPTRE";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Body,Vince5754 & Article 2 Studios";
		displayName="[53rd] MJOLNIR Mark V Helmet [RT]";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_RT_co.paa",
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_RT_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_RT_co.paa",
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_RT_co.paa"
			};
		};
	};
	class 53rd_FC_MJOLNIR_MKV_Helmet_RT_dp: 53rd_FC_MJOLNIR_MKV_Helmet_RT
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
		};
	};
		class 53rd_FC_MJOLNIR_MKV_Helmet_AL: 53rd_FC_MJOLNIR_MKV_Helmet_RT
	{
		dlc="OPTRE";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Body,Vince5754 & Article 2 Studios";
		displayName="[53rd] MJOLNIR Mark V Helmet [AL]";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Alice_co.paa",
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Alice_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Alice_co.paa",
				"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Alice_co.paa"
			};
		};
	};
	class 53rd_FC_MJOLNIR_MKV_Helmet_AL_dp: 53rd_FC_MJOLNIR_MKV_Helmet_RT
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
		};
	};
		class 53rd_FC_MJOLNIR_MKV_Helmet_MS: 53rd_FC_MJOLNIR_MKV_Helmet_RT
	{
		dlc="OPTRE";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Body,Vince5754 & Article 2 Studios";
		displayName="[53rd] MJOLNIR Mark V Helmet [MS]";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Musa_co.paa",
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Musa_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Musa_co.paa",
				"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Musa_co.paa"
			};
		};
	};
	class 53rd_FC_MJOLNIR_MKV_Helmet_MS_dp: 53rd_FC_MJOLNIR_MKV_Helmet_RT
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
		};
	};
		class 53rd_FC_MJOLNIR_MKV_Helmet_J: 53rd_FC_MJOLNIR_MKV_Helmet_RT
	{
		dlc="OPTRE";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Body,Vince5754 & Article 2 Studios";
		displayName="[53rd] MJOLNIR Mark V Helmet [J]";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Jerome_co.paa",
			"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Jerome_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Jerome_co.paa",
				"53rd_SC_aux\tex\RT Armor\53rd_spartan_armor_Jerome_co.paa"
			};
		};
	};
	class 53rd_FC_MJOLNIR_MKV_Helmet_J_dp: 53rd_FC_MJOLNIR_MKV_Helmet_RT
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
		};
	};
};