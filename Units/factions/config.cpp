class CfgPatches
{
	class 53rd_unit_compositions
	{
		author="53rd Aux Team";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]=
		{
			"VES_Rifleman_MA5B_CPD",
			"VES_Rifleman_BR55_CPD",
			"VES_Rifleman_M392_CPD",
			"VES_Rifleman_M73_CPD",
			"VES_Rifleman_Radio_CPD",
			"VES_Rifleman_Crew_CPD",
			"VES_Rifleman_Officer_CPD",
			"VES_Rifleman_SquadLeader_CPD",
			"VES_Rifleman_TeamLeader_CPD",
			"VES_Rifleman_MA5B_SWAT",
			"VES_Rifleman_BR55_SWAT",
			"VES_Rifleman_M392_SWAT",
			"VES_Rifleman_M73_SWAT",
			"VES_Rifleman_Radio_SWAT",
			"VES_Rifleman_Crew_SWAT",
			"VES_Rifleman_Officer_SWAT",
			"VES_Rifleman_SquadLeader_SWAT",
			"VES_Rifleman_TeamLeader_SWAT",
			"OPCAN_CGA_WDL_Base",
			"OPCAN_CGA_WDL_2_Base",
			"OPCAN_CGA_DES_Base",
			"OPCAN_CGA_DES_2_Base",
			"OPCAN_CGA_SNO_Base",
			"OPCAN_CGA_SNO_2_Base",
			"OPCAN_CGA_DIS_Base",
			"OPCAN_CGA_DIS_2_Base",
			"OPCAN_URA_WDL_Base",
			"MEU_SU_TK2_Base"
		};
		weapons[]={};
	};
};
class cfgVehicles
{
	class I_E_CBRN_Man_Oversuit_01_EAF_F;
	class I_Soldier_F;
	class O_Soldier_F;
	class VES_Rifleman_MA5B_MAR;
	class VES_Rifleman_MA5B_CPD: VES_Rifleman_MA5B_MAR
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_BR55_CPD: VES_Rifleman_MA5B_CPD
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_M392_CPD: VES_Rifleman_MA5B_CPD
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_M73_CPD: VES_Rifleman_MA5B_CPD
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_Radio_CPD: VES_Rifleman_BR55_CPD
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_Crew_CPD: VES_Rifleman_MA5B_CPD
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_Officer_CPD: VES_Rifleman_MA5B_CPD
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_SquadLeader_CPD: VES_Rifleman_MA5B_CPD
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_TeamLeader_CPD: VES_Rifleman_MA5B_CPD
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_MA5B_SWAT: VES_Rifleman_MA5B_CPD
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_BR55_SWAT: VES_Rifleman_MA5B_SWAT
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_M392_SWAT: VES_Rifleman_MA5B_SWAT
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_M73_SWAT: VES_Rifleman_MA5B_SWAT
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_Radio_SWAT: VES_Rifleman_BR55_SWAT
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_Crew_SWAT: VES_Rifleman_MA5B_SWAT
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_Officer_SWAT: VES_Rifleman_MA5B_SWAT
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_SquadLeader_SWAT: VES_Rifleman_MA5B_SWAT
	{
		scope=1;
		scopeCurator=1;
	};
	class VES_Rifleman_TeamLeader_SWAT: VES_Rifleman_MA5B_SWAT
	{
		scope=1;
		scopeCurator=1;
	};
	class OPCAN_CGA_WDL_Base: I_Soldier_F
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		faceType="Man_A3";
		displayName="UNI test";
		model="\a3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\first_meu_aux\data\OPFOR\Uni_wdl.paa"
		};
		uniformclass="OPCAN_CGA_U_W";
	};
	class OPCAN_CGA_WDL_2_Base: I_Soldier_F
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		faceType="Man_A3";
		displayName="UNI test";
		model="\a3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\first_meu_aux\data\OPFOR\Uni_wdl.paa"
		};
		uniformclass="OPCAN_CGA_U_W2";
	};
	class OPCAN_CGA_DES_Base: I_Soldier_F
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		faceType="Man_A3";
		displayName="UNI test";
		model="\a3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\first_meu_aux\data\OPFOR\Uni_des.paa"
		};
		uniformclass="OPCAN_CGA_U_D";
	};
	class OPCAN_CGA_DES_2_Base: I_Soldier_F
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		faceType="Man_A3";
		displayName="UNI test";
		model="\a3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\first_meu_aux\data\OPFOR\Uni_des.paa"
		};
		uniformclass="OPCAN_CGA_U_D2";
	};
	class OPCAN_CGA_SNO_Base: I_Soldier_F
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		faceType="Man_A3";
		displayName="UNI test";
		model="\a3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\first_meu_aux\data\OPFOR\Uni_sno.paa"
		};
		uniformclass="OPCAN_CGA_U_S";
	};
	class OPCAN_CGA_SNO_2_Base: I_Soldier_F
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		faceType="Man_A3";
		displayName="UNI test";
		model="\a3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\first_meu_aux\data\OPFOR\Uni_sno.paa"
		};
		uniformclass="OPCAN_CGA_U_S2";
	};
	class OPCAN_CGA_DIS_Base: I_Soldier_F
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		faceType="Man_A3";
		displayName="UNI test";
		model="\a3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\first_meu_aux\data\OPFOR\Uni_blk.paa"
		};
		uniformclass="OPCAN_CGA_dis_B";
	};
	class OPCAN_CGA_DIS_2_Base: I_Soldier_F
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		faceType="Man_A3";
		displayName="UNI test";
		model="\a3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\first_meu_aux\data\OPFOR\Uni_blk.paa"
		};
		uniformclass="OPCAN_CGA_dis_B2";
	};
	class OPCAN_URA_WDL_Base: O_Soldier_F
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		faceType="Man_A3";
		displayName="UNI test";
		model="\a3\characters_f\OPFOR\o_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\first_meu_aux\data\OPFOR\UNI_W.paa"
		};
		uniformclass="OPCAN_URA_U_W";
	};
	class MEU_SU_TK2_Base: I_E_CBRN_Man_Oversuit_01_EAF_F
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		scopeArsenal=1;
		scopeCurator=1;
		_generalMacro="I_E_CBRN_Man_Oversuit_01_EAF_F";
		uniformClass="MEU_SU_Uniform_CBRN";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures="[""first_meu_aux\data\opfor\MEU_SU_TK2_CO.paa""]";
	};
};
