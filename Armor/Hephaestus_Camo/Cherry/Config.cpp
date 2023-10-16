class CfgPatches {
	class Hephaestus_Customs {
		units[] = 
        {
            ""
        };
		weapons[] = 
        {
			"53rd_OP_Cherry_WN",
			"53rd_OP_Cherry_UB",
			"53rd_OP_Cherry_DS",
            "53rd_OP_Cherry_WD",
			"53rd_Ranger_Shin_Armor",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
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
	class VES_BDU_Evolved_Slim;
	class 53rd_Armor_Rifleman;
	class 53rd_Armor_Specialist;
	class 53rd_Armor_TL;
	class 53rd_Armor_SL;
	class 53rd_Armor_Medic;
	class 53rd_Armor_JTAC;
	class 53rd_Sealed_Base;
	class 53rd_Sealed_Base_dp;
	class 53rd_Unsealed_Base;
	class 53rd_Unsealed_Base_dp;
	class 53rd_Hephaestus_BDU_Slim;
	class MA_H4_Scout_Helmet;
	class MA_AA_Helmet;
	class MA_EOD_Helmet;
	class 53rd_AA_Helmet_Gold;
	class MA_M56A_Helmet;
	class OPTRE_UNSC_Operator_Helmet;
	class OPTRE_UNSC_Security_Helmet;
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_HRPilot_Helmet;
	class OPTRE_UNSC_CQC_Helmet;

	//Customs
    //Cherry 
	class 53rd_OP_Cherry_UB: OPTRE_UNSC_Operator_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Urban)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Helmet_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Visor.paa"
			};
		};
	class 53rd_OP_Cherry_DS: OPTRE_UNSC_Operator_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Desert)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Helmet_Desert.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Visor.paa"
			};
		};
	class 53rd_OP_Cherry_WN: OPTRE_UNSC_Operator_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Winter)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Helmet_Winter.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Visor.paa"
			};
		};
	class 53rd_OP_Cherry_WD: OPTRE_UNSC_Operator_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Woodland)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Helmet_Woodland.paa",
				"53rd_SC_aux\Armor\Hephaestus_Customs\Helmets\Cherry\53rd_Cherry_Visor.paa"
			};
		};
};
class CfgVehicles
{
};