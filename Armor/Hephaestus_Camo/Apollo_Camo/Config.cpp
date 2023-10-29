class CfgPatches 
{
	class 53rd_Apollo_Gear
	{
			units[] = 
			{};
			weapons[] = 
			{};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};
#include "..\xtdGear.hpp"	
class cfgWeapons
{
	class ItemInfo;
	class Uniform_Base;
	class haloinfmar_U_WDL_uniform;
	class HaloInf_Marine_WDL_NV_headgear;
	class HaloInf_Marine_WDL_headgear;
	
	/////HELMETS/////
	class 53rd_Apollo_Helmet_Urban_No_Visor: HaloInf_Marine_WDL_NV_headgear 
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Urban.paa"
		};
	};
		class 53rd_Apollo_Helmet_Urban_Visor: HaloInf_Marine_WDL_headgear 
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Urban.paa"
		};
	};
	//Woodland
		class 53rd_Apollo_Helmet_Woodland_No_Visor: HaloInf_Marine_WDL_NV_headgear 
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Woodland.paa"
		};
	};
		class 53rd_Apollo_Helmet_Woodland_Visor: HaloInf_Marine_WDL_headgear 
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Woodland.paa"
		};
	};
	//Desert
		class 53rd_Apollo_Helmet_Desert_No_Visor: HaloInf_Marine_WDL_NV_headgear 
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Desert.paa"
		};
	};
		class 53rd_Apollo_Helmet_Desert_Visor: HaloInf_Marine_WDL_headgear 
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Desert.paa"
		};
	};
	//Winter
		class 53rd_Apollo_Helmet_Winter_No_Visor: HaloInf_Marine_WDL_NV_headgear 
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Winter.paa"
		};
	};
		class 53rd_Apollo_Helmet_Winter_Visor: HaloInf_Marine_WDL_headgear 
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Apollo Helmet (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Helmet_Winter.paa"
		};
	};
	//ARMOR
		class 53rd_U_Base_uniform: haloinfmar_U_WDL_uniform
	{
		author="Cherryy";
		scope=1;
		allowedSlots[]={901};
		displayName="[53rd] Rifleman Base ";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_top_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Armor_Winter_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			uniformType = "Neopren";
			uniformModel="-";
			uniformClass="HaloInf_Marine_WDL_F";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Winter
	class 53rd_Apollo_SN: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Winter";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Winter.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Winter.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Snow";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Apollo_UB: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Urban";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Urban.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Urban.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Urban";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Apollo_WD: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Woodland";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Woodland.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Woodland";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 53rd_Apollo_DS: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Desert";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Desert.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Desert.paa"
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Desert";
			containerClass="Supply90";
			mass=80;
		};
	};
	//No Shoulders
		class 53rd_Apollo_UB_NS: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Urban (No Shoulders)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Urban_NS";
			containerClass="Supply90";
			mass=80;
		};
	};
		class 53rd_Apollo_WD_NS: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Woodland (No Shoulders)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Woodland_NS";
			containerClass="Supply90";
			mass=80;
		};
	};
		class 53rd_Apollo_DS_NS: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Desert (No Shoulders)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa",
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Desert_NS";
			containerClass="Supply90";
			mass=80;
		};
	};
		class 53rd_Apollo_WT_NS: 53rd_U_Base_uniform
	{
		author="Cherryy";
		scope=2;
		allowedSlots[]={901};
		displayName="[53rd] Apollo Winter (No Shoulders)";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
			};
			uniformModel="-";
			uniformClass="53rd_Apollo_Winter_NS";
			containerClass="Supply90";
			mass=80;
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class 53rd_base_F: B_Soldier_base_F
	{
		class HitPoints
		{
			class HitFace
			{
				armor=35;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=35;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=35;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor=35;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=35;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=35;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=35;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor=35;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=35;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=35;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=35;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=35;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
			class ACE_HDBracket
			{
				armor=35;
				material=-1;
				name="head";
				passThrough=0;
				radius=1;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="HitHead";
			};
		};
		armor=35;
		armorStructural=0.40000001;
		explosionShielding=0.039999999;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Winter.paa"
		};
	};
	//Urban
	class 53rd_Apollo_Urban: 53rd_base_F
	{
		scope=2;
		displayName="[53rd] Apollo Urban";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Urban.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_UB";
	};
	class 53rd_Apollo_Woodland: 53rd_base_F
	{
		scope=2;
		displayName="[53rd] Apollo Woodland";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Woodland.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_WD";
	};
	class 53rd_Apollo_Desert: 53rd_base_F
	{
		scope=2;
		displayName="[53rd] Apollo Desert";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Armor_Desert.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_DS";
	};
	//No Shoulders
		class 53rd_Apollo_Urban_NS: 53rd_base_F
	{
		scope=2;
		displayName="[53rd] Apollo Urban (No Shoulders)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Urban.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Urban_co.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_UB_NS";
	};
		class 53rd_Apollo_Desert_NS: 53rd_base_F
	{
		scope=2;
		displayName="[53rd] Apollo Desert (No Shoulders)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Desert.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Desert_co.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_DS_NS";
	};
		class 53rd_Apollo_Woodland_NS: 53rd_base_F
	{
		scope=2;
		displayName="[53rd] Apollo Woodland (No Shoulders)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Woodland.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Woodland_co.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_WD_NS";
	};
		class 53rd_Apollo_Winter_NS: 53rd_base_F
	{
		scope=2;
		displayName="[53rd] Apollo Winter (No Shoulders)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Apollo_Top_Winter.paa",
			"53rd_SC_aux\Armor\Apollo_Camo\53rd_Camo_Pants_Winter_co.paa",
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="53rd_Apollo_WT_NS";
	};
};