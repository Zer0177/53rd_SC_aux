class CfgPatches {
	class LD_Gear {
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

	class LM_OPCAN_Battlejumper_Uni;
	class 53rd_Dortman_Uni: LM_OPCAN_Battlejumper_Uni
	{
		author="Sgt. Body";
		scope=2;
	displayName="[53rd] Liang Dortman Uniform";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass="53rd_LD_Base";
			containerClass="Supply40";
			mass=40;
			
		};
	};

	class LM_OPCAN_M52A_MC_Light_CEA_U;
	class LD_M52A_Light: LM_OPCAN_M52A_MC_Light_CEA_U
	{
		author="Sgt. Body";
		scope=2;
		displayName="[53rd] Liang Dortman M52A";
		hiddenSelectionsTextures[]=
		{
			"LM_OPCAN3.0\BLU\UNSC\V\M52A_CEA_2_U.paa",
			"53rd_SC_aux\tex\Factions\M52A_LD_U.paa",
			"53rd_SC_aux\tex\Factions\M52A_LD_3_U.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"53rd_SC_aux\tex\Factions\M52A_LD_U.paa"
		};
	};
	class OPTRE_ONI_Researcher_Headgear; 
	class LD_Headgear: OPTRE_ONI_Researcher_Headgear 
	{ 
		dlc="OPTRE"; 
		scope=2; 
		author="Article 2 Studios"; 
		displayName="[53rd] Liang Dortman Rebreather"; 
		hiddenSelections[]= 
		{ 
			"camo" 
		}; 
		hiddenSelectionsTextures[]= 
		{ 
			"53rd_SC_aux\tex\Factions\research_helmet_CO.paa" 
		}; 
	}; 

};
class CfgVehicles
{
	class LM_OPCAN_URA_Base_D;
	class 53rd_LD_Base: LM_OPCAN_URA_Base_D
	{
		author="Body";
		displayName="[53rd] Liang Dortman Uniform";
		scope=1;
		model="\LM_OPCAN3.0\OPF\URA\U\URA_Uni.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Factions\Dortman_U.paa"
		};
		class UniformItem;
		class ItemInfo: UniformItem
		{
			uniformModel="\LM_OPCAN3.0\OPF\URA\U\URA_Uni.p3d";
			uniformClass="53rd_Dortman_Uni";
			containerClass="Supply40";
			mass=40;
		};
	};
};