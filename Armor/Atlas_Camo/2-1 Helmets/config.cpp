/*class CfgPatches {
	class Hephaestus_1_1_Helmets {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
//WINTER///////////////////////////////////////////////////
            "53rd_1_1_Rifleman_Helmet_Winter_NVisor",
			"53rd_1_1_Rifleman_Helmet_Winter_Visor",
            "53rd_1_1_Medic_Helmet_Winter_NVisor",
			"53rd_1_1_Medic_Helmet_Winter_Visor",
			"53rd_1_1_JTAC_Helmet_Winter_NVisor",
			"53rd_1_1_JTAC_Helmet_Winter_Visor",
            "53rd_1_1_Grenaider_Helmet_Winter_NVisor",
			"53rd_1_1_Grenaider_Helmet_Winter_Visor",
		    "53rd_1_1_Autorifleman_Helmet_Winter_NVisor",
			"53rd_1_1_Autorifleman_Helmet_Winter_Visor",
            "53rd_1_1_AT_Helmet_Winter_NVisor",
			"53rd_1_1_AT_Helmet_Winter_Visor",
//DESERT//////////////////////////////////////////////////
            "53rd_1_1_Rifleman_Helmet_Desert_NVisor",
			"53rd_1_1_Rifleman_Helmet_Desert_Visor",
            "53rd_1_1_Medic_Helmet_Desert_NVisor",
			"53rd_1_1_Medic_Helmet_Desert_Visor",
			"53rd_1_1_JTAC_Helmet_Desert_NVisor",
			"53rd_1_1_JTAC_Helmet_Desert_Visor",
            "53rd_1_1_Grenaider_Helmet_Desert_NVisor",
			"53rd_1_1_Grenaider_Helmet_Desert_Visor",
		    "53rd_1_1_Autorifleman_Helmet_Desert_NVisor",
			"53rd_1_1_Autorifleman_Helmet_Desert_Visor",
            "53rd_1_1_AT_Helmet_Desert_NVisor",
			"53rd_1_1_AT_Helmet_Desert_Visor",
//URBAN//////////////////////////////////////////////////
            "53rd_1_1_Rifleman_Helmet_Urban_NVisor",
			"53rd_1_1_Rifleman_Helmet_Urban_Visor",
            "53rd_1_1_Medic_Helmet_Urban_NVisor",
			"53rd_1_1_Medic_Helmet_Urban_Visor",
			"53rd_1_1_JTAC_Helmet_Urban_NVisor",
			"53rd_1_1_JTAC_Helmet_Urban_Visor",
            "53rd_1_1_Grenaider_Helmet_Urban_NVisor",
			"53rd_1_1_Grenaider_Helmet_Urban_Visor",
		    "53rd_1_1_Autorifleman_Helmet_Urban_NVisor",
			"53rd_1_1_Autorifleman_Helmet_Urban_Visor",
            "53rd_1_1_AT_Helmet_Urban_NVisor",
			"53rd_1_1_AT_Helmet_Urban_Visor",
//WOODLAND//////////////////////////////////////////////////
            "53rd_1_1_Rifleman_Helmet_Woodland_NVisor",
			"53rd_1_1_Rifleman_Helmet_Woodland_Visor",
            "53rd_1_1_Medic_Helmet_Woodland_NVisor",
			"53rd_1_1_Medic_Helmet_Woodland_Visor",
			"53rd_1_1_JTAC_Helmet_Woodland_NVisor",
			"53rd_1_1_JTAC_Helmet_Woodland_Visor",
            "53rd_1_1_Grenaider_Helmet_Woodland_NVisor",
			"53rd_1_1_Grenaider_Helmet_Woodland_Visor",
		    "53rd_1_1_Autorifleman_Helmet_Woodland_NVisor",
			"53rd_1_1_Autorifleman_Helmet_Woodland_Visor",
            "53rd_1_1_AT_Helmet_Woodland_NVisor",
			"53rd_1_1_AT_Helmet_Woodland_Visor",
//////////////////////////////////////////////////////////

			
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "..\xtdGear.hpp"
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
	class HaloInf_Marine_WDL_headgear;
	class HaloInf_Marine_WDL_NV_headgear;
	class VES_BDU_Evolved_Slim;
////////////////////////////////////////////////////////////////////////////////
//////// HELMETS //////////////////////////////////////////////////////////////
	class 53rd_Rifleman_Helmet_Base_NVisor: HaloInf_Marine_WDL_NV_headgear
	{
		author="Cherryy&Scarecrow";
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] (Base No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Helmet_Winter.paa"
		};
	};
	class 53rd_Rifleman_Helmet_Base_Visor: HaloInf_Marine_WDL_headgear
	{
		author="Cherri&Scarecrow";
		scope=1;
		scopeArsenal=1;
		side=1;
		displayName="[53rd] (Base Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Rifleman\53rd_Rifleman_Helmet_Winter.paa"
		};
	}
	//WINTER
	//Rifleman
	class 53rd_1_1_Rifleman_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Rifleman (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Rifleman_Helmet_Winter.paa"
		};
	};
	class 53rd_1_1_Rifleman_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Rifleman (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Medic_Helmet_Winter.paa"
		};
	};
	//MEDIC
	class 53rd_1_1_Medic_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Medic (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Medic_Helmet_Winter.paa"
		};
	};
	class 53rd_1_1_Medic_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Medic (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Medic_Helmet_Winter.paa"
		};
	};
	//JTAC
	class 53rd_1_1_JTAC_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 JTAC (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_JTAC_Helmet_Winter.paa"
		};
	};
	class 53rd_1_1_JTAC_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 JTAC (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_JTAC_Helmet_Winter.paa"
		};
	};
	//Grenaider
	class 53rd_1_1_Grenaider_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Grenaider (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Grenadier_Helmet_Winter.paa"
		};
	};
	class 53rd_1_1_Grenaider_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Grenaider (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Grenadier_Helmet_Winter.paa"
		};
	};
	//Autorifleman
	class 53rd_1_1_Autorifleman_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Autorifleman (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AutoRifleman_Helmet_Winter.paa"
		};
	};
	class 53rd_1_1_Autorifleman_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Autorifleman (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AutoRifleman_Helmet_Winter.paa"
		};
	};
	//AT
	class 53rd_1_1_AT_Helmet_Winter_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Anti-Tank (Winter / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AT_Helmet_Winter.paa"
		};
	};
	class 53rd_1_1_AT_Helmet_Winter_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Anti-Tank (Winter / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AT_Helmet_Winter.paa"
		};
	};
	
	//Desert
	//Rifleman
	class 53rd_1_1_Rifleman_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Rifleman (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Rifleman_Helmet_Desert.paa"
		};
	};
	class 53rd_1_1_Rifleman_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Rifleman (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Rifleman_Helmet_Desert.paa"
		};
	};
	//MEDIC
	class 53rd_1_1_Medic_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Medic (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Medic_Helmet_Desert.paa"
		};
	};
	class 53rd_1_1_Medic_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Medic (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Medic_Helmet_Desert.paa"
		};
	};
	//JTAC
	class 53rd_1_1_JTAC_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 JTAC (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_JTAC_Helmet_Desert.paa"
		};
	};
	class 53rd_1_1_JTAC_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 JTAC (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_JTAC_Helmet_Desert.paa"
		};
	};
	//Grenaider
	class 53rd_1_1_Grenaider_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Grenaider (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Grenadier_Helmet_Desert.paa"
		};
	};
	class 53rd_1_1_Grenaider_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Grenaider (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Grenadier_Helmet_Desert.paa"
		};
	};
	//Autorifleman
	class 53rd_1_1_Autorifleman_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Autorifleman (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AutoRifleman_Helmet_Desert.paa"
		};
	};
	class 53rd_1_1_Autorifleman_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Autorifleman (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AutoRifleman_Helmet_Desert.paa"
		};
	};
	//AT
	class 53rd_1_1_AT_Helmet_Desert_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Anti-Tank (Desert / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AT_Helmet_Desert.paa"
		};
	};
	class 53rd_1_1_AT_Helmet_Desert_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Anti-Tank (Desert / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AT_Helmet_Desert.paa"
		};
	};
	
	//Urban
	//Rifleman
	class 53rd_1_1_Rifleman_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Rifleman (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Rifleman_Helmet_Urban.paa"
		};
	};
	class 53rd_1_1_Rifleman_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Rifleman (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Rifleman_Helmet_Urban.paa"
		};
	};
	//MEDIC
	class 53rd_1_1_Medic_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Medic (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Medic_Helmet_Urban.paa"
		};
	};
	class 53rd_1_1_Medic_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Medic (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Medic_Helmet_Urban.paa"
		};
	};
	//JTAC
	class 53rd_1_1_JTAC_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 JTAC (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_JTAC_Helmet_Urban.paa"
		};
	};
	class 53rd_1_1_JTAC_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 JTAC (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_JTAC_Helmet_Urban.paa"
		};
	};
	//Grenaider
	class 53rd_1_1_Grenaider_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Grenaider (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Grenadier_Helmet_Urban.paa"
		};
	};
	class 53rd_1_1_Grenaider_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Grenaider (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Grenadier_Helmet_Urban.paa"
		};
	};
	//Autorifleman
	class 53rd_1_1_Autorifleman_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Autorifleman (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AutoRifleman_Helmet_Urban.paa"
		};
	};
	class 53rd_1_1_Autorifleman_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Autorifleman (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AutoRifleman_Helmet_Urban.paa"
		};
	};
	//AT
	class 53rd_1_1_AT_Helmet_Urban_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Anti-Tank (Urban / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AT_Helmet_Urban.paa"
		};
	};
	class 53rd_1_1_AT_Helmet_Urban_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Anti-Tank (Urban / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AT_Helmet_Urban.paa"
		};
	};
	
	//Woodland
	//Rifleman
	class 53rd_1_1_Rifleman_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Rifleman (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Rifleman_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_1_Rifleman_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Rifleman (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Rifleman_Helmet_Woodland.paa"
		};
	};
	//MEDIC
	class 53rd_1_1_Medic_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Medic (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Medic_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_1_Medic_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Medic (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Medic_Helmet_Woodland.paa"
		};
	};
	//JTAC
	class 53rd_1_1_JTAC_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 JTAC (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_JTAC_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_1_JTAC_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 JTAC (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_JTAC_Helmet_Woodland.paa"
		};
	};
	//Grenaider
	class 53rd_1_1_Grenaider_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Grenaider (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Grenadier_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_1_Grenaider_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Grenaider (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_Grenadier_Helmet_Woodland.paa"
		};
	};
	//Autorifleman
	class 53rd_1_1_Autorifleman_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Autorifleman (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AutoRifleman_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_1_Autorifleman_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Autorifleman (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AutoRifleman_Helmet_Woodland.paa"
		};
	};
	//AT
	class 53rd_1_1_AT_Helmet_Woodland_NVisor: 53rd_Rifleman_Helmet_Base_NVisor
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Anti-Tank (Woodland / No Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AT_Helmet_Woodland.paa"
		};
	};
	class 53rd_1_1_AT_Helmet_Woodland_Visor: 53rd_Rifleman_Helmet_Base_Visor
	{
		author="Cherri&Scarecrow";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="[53rd] Helmet 1-1 Anti-Tank (Woodland / Visor)";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\1-1 Helmets\53rd_1-1_AT_Helmet_Woodland.paa"
		};
	};
	
	
	
	//VACSEALED
	class 53rd_Sealed_Base : VES_CH252_MAR_Vacuum
    {
        scope = 1;
        displayName = "[53rd] Hephaestus Helmet (Urban)";
        author = "53rd AUX TEAM";
        model="\OPTRE_UNSC_Units\Army\helmet";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            //"H_Collar",
            "H_Ghillie"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_Armor_Rework\tex\53rd_Helmet",
            "53rd_Armor_Rework\tex\Helmet_Visor_co"
        };
		class ItemInfo: HeadgearItem
		{
            mass=1;
            class HitpointsProtectionInfo
			{
				class Face
				{
					armor=20;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=40;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=15;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				//"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
                "53rd_Armor_Rework\tex\53rd_Helmet",
                "53rd_Armor_Rework\tex\Helmet_Visor_co"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"
			};
        };
    };
	class 53rd_Sealed_Base_dp : 53rd_Sealed_Base
    {
        scope = 0;
        scopeArsenal = 0;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
        displayName = "[53rd] Hephaestus Helmet (Rifleman) dp";
        model="\OPTRE_UNSC_Units\Army\helmet";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            //"H_Collar",
            "H_Ghillie"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_Armor_Rework\tex\53rd_Helmet",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
		class ItemInfo: HeadgearItem
		{
            mass=1;
            class HitpointsProtectionInfo
            {
				class Face
				{
					armor=20;
					hitpointName="HitFace";
					passThrough=0.1;
				};
                class Head
                {
                    hitPointName="HitHead";
                    armor=40;
                    passThrough=0.1;
                };
            };
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				//"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
                "53rd_Armor_Rework\tex\53rd_Helmet",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				""
			};
        };
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Urban.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Urban.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Desert.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Desert.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Woodland.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Woodland.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Winter : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Snow.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Rifleman_Winter_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Rifleman / Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Snow.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
    //Medic
    	class 53rd_Helmet_Vac_Sealed_Medic_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Urban_Medic.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Urban_Medic.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Desert : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Desert_Medic.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Desert_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Desert_Medic.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Woodland : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Woodland_Medic.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Woodland_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Woodland_Medic.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Winter : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Snow_Medic.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Helmet_Vac_Sealed_Medic_Winter_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Vac Sealed Helmet (Medic / Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Sealed Helmets\53rd_Gen2_CH252_Snow_Medic.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
	class 53rd_Camo_Sealed_Rifleman_Winter : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Camo Sealed Helmet (Rifleman / Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Sealed_CH252_Winter.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
	class 53rd_Camo_Sealed_Rifleman_Winter_dp : 53rd_Sealed_Base_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Camo Sealed Helmet (Rifleman / Winter) DP";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus_Camo\Sealed Helmets\53rd_Sealed_CH252_Winter.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
    };
};