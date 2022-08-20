class CfgPatches {
	class Hannible_Gear {
		units[] = 
        {
            "WIP"
        };
		weapons[] = 
        {
            "WIP"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class cfgWeapons {
    class ItemInfo;
	class VestItem;
	class HeadgearItem;
	class UniformItem;

	class OPTRE_UNSC_Soldier_Base;
	
	class 53rd_Hannible_Uniform: OPTRE_UNSC_Army_Uniform_OLI
	{
		author="Sgt. Body";
		scope=2;
		displayName="[53rd] Hannible Security Uniform";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass="53rd_Hannible_Base";
			containerClass="Supply200";
			mass=30;
			
		};
	};
	class 53rd_OPTRE_ONI_Researcher_Base: OPTRE_UNSC_Army_Uniform_OLI
	{
		displayName="[53rd] Hannible Researcher Uniform";
		scope=1;
		scopeCurator=0;
		author="Sgt. Body";
		uniformClass="OPTRE_ONI_Researcher_Uniform";
		model="\optre_unsc_units\oni\research.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Factions\research_uniform_CO.paa"
		};
	};
	//class V_BandollierB_blk;
	//class LD_M52A_Light: V_BandollierB_blk
	//{
	//	author="Sgt. Body";
	//	scope=2;
	//	displayName="[53rd] Hannible Strap Vest";
	//	hiddenSelectionsTextures[]=
	//	{
	//		//FIND THESE IN A3 DIRECTRORY
	//	};
	//};
	
	class OPTRE_CPD_Cap;
	class 53rd_Hannible_Cap: OPTRE_CPD_Cap
	{
		dlc="53rd Auc Mod";
		scope=2;
		author="Article 2 Studios";
		displayName="[53rd] Hannible Security Cap";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Factions\HAN_Cap_01_co.paa"
		};
	};
};
class CfgVehicles
{
	class UniformItem;
	class OPTRE_CPD_Uniform_Base;
	class OPTRE_ONI_Researcher_Uniform;
	class 53rd_Hannible_Base:OPTRE_CPD_Uniform_Base
	{
		author="Body";
		displayName="[53rd] Hannible Security Uniform";
		scope=1;
		uniformModel="\a3\characters_f\BLUFOR\b_soldier_01.p3d";
		 hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Factions\HAN_Uniform_03_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="\a3\characters_f\BLUFOR\b_soldier_01.p3d";
			uniformClass="53rd_Hannible_Uniform";
			containerClass="Supply80";
			mass=30;
		};
	};
	class 53rd_Researcher_Uniform: OPTRE_ONI_Researcher_Uniform
	{
		scope=2;
		author="53rd SC";
		displayName="Hannible Researcher Uniform";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="53rd_OPTRE_ONI_Researcher_Base";
			containerClass="Supply100";
			mass=40;
			modelSides[]={6};
		};
	};
};