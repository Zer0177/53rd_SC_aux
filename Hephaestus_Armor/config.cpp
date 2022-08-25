class CfgPatches {
	class Hephaestus_Armor {
		units[] = 
        {
            "WIP"
        };
		weapons[] = 
        {
            "53rd_CH252_GREY_HEV_Sealed_100_Pro",
            "53rd_CH252_GREY_HEV_Sealed_85_Pro",
            "53rd_CH252_GREY_HEV_Sealed_80_Pro",
            "53rd_CH252_GREY_HEV_Sealed_75_Pro",
            "53rd_CH252_GREY_HEV_Sealed_70_Pro",
            "53rd_CH252_GREY_HEV_Sealed_65_Pro",
            "53rd_CH252_GREY_HEV_Sealed_60_Pro",
            "53rd_CH252_GREY_HEV_Sealed_55_Pro",
            "53rd_CH252_GREY_HEV_Sealed_50_Pro",
            "53rd_CH252_GREY_HEV_Sealed_45_Pro",
            "53rd_CH252_GREY_HEV_Sealed_40_Pro"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {"ace_volume","black_body"};
	};
};
#include "xtdGear.hpp"
class cfgWeapons {
    class ItemInfo;
	class VestItem;
	class HeadgearItem;
	class UniformItem;
    
	class 53rd_Armor_Rifleman;
	class 53rd_Armor_Specialist;
	class 53rd_Armor_Medic;
	class 53rd_Armor_TL;
	class 53rd_Armor_SL;
	class 53rd_Armor_Medic_NCO;


//Base
    
//Hephaestus Uniform
    class VES_BDU_Evolved_Slim;
    class 53rd_BDU_Slim: VES_BDU_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Body";
		displayName="[53rd] Combat Uniform";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_BDU_V_Slim";
		};
	};
    class 53rd_BDU_Wdl_Slim: 53rd_BDU_Slim
	{
		displayName="[53rd] Combat Uniform Woodland";
		class ItemInfo: ItemInfo
		{
			uniformClass="53rd_BDU_V_Wdl_Slim";
		};
	};
    class 53rd_BDU_Des_Slim: 53rd_BDU_Slim
	{
		displayName="[53rd] Combat Uniform Desert";
		class ItemInfo: ItemInfo
		{
			uniformClass="53rd_BDU_V_Des_Slim";
		};
	};
    class 53rd_BDU_Snw_Slim: 53rd_BDU_Slim
	{
		displayName="[53rd] Combat Uniform Snow";
		class ItemInfo: ItemInfo
		{
			uniformClass="53rd_BDU_V_Snw_Slim";
		};
	};
    class 53rd_BDU_Jgl_Slim: 53rd_BDU_Slim
	{
		displayName="[53rd] Combat Uniform Jungle";
		class ItemInfo: ItemInfo
		{
			uniformClass="53rd_BDU_V_Jgl_Slim";
		};
	};

//Hephaestus Helmets
    class VES_CH252_MAR_Vacuum;
	class VES_CH252_WDL_Heavy;
	class 53rd_Army_Heavy: VES_CH252_WDL_Heavy
	{
        scope = 1;
        scopeArsenal = 1;
		author="Body";
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.5;
		displayName="[53rd] Hephaestus MKI Base";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Neck",
			"H_UNSCVacLower",
			"H_Collar",
			"H_UNSCVacVisor",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\army_helmet_DES";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Neck",
				"H_UNSCVacLower",
				"H_Collar",
				"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO"
			};
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
		};
	};
    class 53rd_CH252_GREY_HEV_Sealed_PFC_SLV : VES_CH252_MAR_Vacuum
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
        displayName = "[53rd] Hephaestus Helmet (Rifleman)";
        author = "53rd AUX TEAM";
        model="\OPTRE_UNSC_Units\Army\helmet";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "H_Collar",
            "H_Ghillie"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PFC.paa",
            "53rd_SC_aux\tex\visr_silver_CO.paa"
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
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
                "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PFC.paa",
                "53rd_SC_aux\tex\visr_silver_CO.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"
			};
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
        displayName = "[53rd] Hephaestus Helmet (Rifleman) dp";
        model="\OPTRE_UNSC_Units\Army\helmet";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "H_Collar",
            "H_Ghillie"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PFC.paa",
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
				"H_Collar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
                "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PFC.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				""
			};
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_SPC_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (Specialist)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
             "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_SPC.paa",
         	 "53rd_SC_aux\tex\visr_silver_CO.paa"
		};
    };
    class 53rd_CH252_GREY_HEV_Sealed_SPC_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (Specialist)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_SPC.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_TL_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (Team Leader)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_TL.paa",
            "53rd_SC_aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_TL_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (Team Leader)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_TL.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_SL_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (Squad Leader)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_SL.paa",
            "53rd_SC_aux\tex\visr_gold_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_SL_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (Squad Leader)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_SL.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	class 53rd_CH252_GREY_HEV_RYU_SL_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (Ryu)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_CH252_1-4_SL.paa",
            "53rd_SC_aux\tex\visr_gold_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_RYU_SL_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (Squad Leader)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_SL.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_PLS_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (Platoon Staff)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
             "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PLS.paa",
            "53rd_SC_Aux\tex\visr_black_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_PLS_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (Platoon Staff)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PLS.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    class 53rd_CH252_GREY_CORP_Sealed_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (Medic)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_CORP2.paa",
            "53rd_SC_aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_CORP_Sealed_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (Medic)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_CORP2.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    class 53rd_CH252_GREY_CORP_Sealed_GLD : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (Medic NCO)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_CORP2.paa",
            "53rd_SC_aux\tex\visr_gold_CO.paa"
        };
    };
    class 53rd_CH252_GREY_CORP_Sealed_GLD_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (Medic NCO)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_CORP2.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    class 53rd_CH252_GREY_CORP_Sealed_PLM : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (Platoon Medic)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_CH252_GREY_CORP_PLT.paa",
            "53rd_SC_aux\tex\visr_gold_CO.paa"
        };
    };
    class 53rd_CH252_GREY_CORP_Sealed_PLM_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (Platoon Medic)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_CH252_GREY_CORP_PLT.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_PLC_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (Body)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PLWC.paa",
            "53rd_SC_Aux\tex\visr_black_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_PLC_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (Body)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PLWC.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	 class 53rd_CH252_GREY_Sealed_Reserve : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (Reservist)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
             "53rd_SC_aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
         	 "53rd_SC_aux\tex\visr_silver_CO.paa"
		};
    };
    class 53rd_CH252_GREY_Sealed_Reserve_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (Reservist)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
//Hephaestus NON-VAC Helmets
	 class 53rd_CH252_GREY_NOTSEALED_Reserve : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI (Reservist)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
             "53rd_SC_aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa"
		};
    };
	 class 53rd_CH252_GREY_NOTSEALED_PFC : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI (Rifleman)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PFC.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_NOTSEALED_SPC : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI(Specialist)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
             "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_SPC.paa"
		};
    };
    class 53rd_CH252_GREY_HEV_NOTSEALED_TL : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI (Team Leader)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_TL.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_NOTSEALED_SL : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI (Squad Leader)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_SL.paa"
        };
    };
	class 53rd_CH252_GREY_NOTSEALED_RYU_SL : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI (Ryu)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_CH252_1-4_SL.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_NOTSEALED_PLS : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI (Platoon Staff)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
             "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PLS.paa"
        };
    };
    class 53rd_CH252_GREY_CORP_NOTSEALED : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI (Medic)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_CORP2.paa"
        };
    };
    class 53rd_CH252_GREY_CORP_NCO_NOTSEALED : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI (Medic NCO)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_CORP2.paa"
        };
    };
    class 53rd_CH252_GREY_CORP_NOTSEALED_PLM : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI (Platoon Medic)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\53rd_CH252_GREY_CORP_PLT.paa"
        };
    };
    class 53rd_CH252_GREY_NOTSEALED_PLC : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet MKI (Body)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_PLWC.paa"
        };
    };

//Hephaestus Camo Helmet
	class 53rd_CH252_Wood_HEV_NOTSealed_PFC : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet Camo MKI(Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_WoodlandCamo.paa"
        };
    };
	class 53rd_CH252_DES_HEV_NOTSealed_PFC : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet Camo MKI(Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_DesCamo.paa"
        };
    };
	class 53rd_CH252_WIN_HEV_NOTSealed_PFC : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet Camo MKI(Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_WinterCamo.paa"
        };
    };
	class 53rd_CH252_JUG_HEV_NOTSealed_PFC : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet Camo MKI (Jungle)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_JungleCamo.paa"
        };
    };
//Camo Open Helmets
	
//Hephaestus Armors
    class Armor_Hephaestus_Medic : 53rd_Armor_Medic
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Medic)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_A3.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_Platoon_Medic : 53rd_Armor_Medic_NCO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Platoon Medic)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_PL.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
	class Armor_Hephaestus_Reservist : 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Reservist)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53RD_Reservist_A4.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_Rifleman : 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Rifleman)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_GT.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_Specialist : 53rd_Armor_Specialist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Specialist)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_Specialist.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_Team_Leader : 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Team Leader)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_GT.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_Squad_Leader : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Squad Leader)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_GT.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    
//Custom Armors
	class Armor_Hephaestus_PL : 53rd_Armor_SL 
	{ 
		scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		dlc = "53rd AUX"; 
		author = "Body"; 
		displayName = "[53rd] Hephaestus Armor (Body)"; 
		hiddenSelectionsTextures[] =  
		{ 
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa", 
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_M52_Body.paa", 
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa", 
			"optre_unsc_units\army\data\ghillie_woodland_co", 
			"optre_unsc_units\army\data\odst_armor_co", 
        }; 
	};
    class Armor_Hephaestus_Panzer : 53rd_Armor_Medic_NCO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Platoon Medic)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_PL.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_Ryu : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Ryu)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_M52_1-4_Vulc_A4.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				//"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				//"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				//"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				//"AP_GL", //40mm belt on front
				//"AP_Knife", //Chest knife
				"AP_MGThigh", //Right thigh ammo pouch
				/"AP_AR", //Front AR packs, Need both to work <<
				//"AP_Pack", //Center Chest Pouch
				"AP_Pistol", //Right Hip, ammo pouch
				//"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				//"AP_Frag", //Right hip
				//"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				//"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch"
			};
		};
	};
	class Armor_Hephaestus_Joker : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Joker)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_V2.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_M52_1-1_Vulc_A4.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				//"AS_LargeLeft", //Tall plate
				"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				//"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				"AS_ODSTLeft", //Standard ODST
				"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				//"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				"AP_Canteen", //Left Hip
				"AP_GL", //40mm belt on front
				//"AP_Knife", //Chest knife
				//"AP_MGThigh", //Right thigh ammo pouch
				//"AP_AR", //Front AR packs, Need both to work <<
				//"AP_Pack", //Center Chest Pouch
				"AP_Pistol", //Right Hip, ammo pouch
				//"AP_Rounds", //Sniper rounds On Left Sholder
				//"AP_SG", //Shotgun Shells on right of chestplate
				"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				//"AP_Frag", //Right hip
				//"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				"CustomKit_Scorch"
			};
		};
	};
    
    
//Hephaestus Woodland Armors
    class Armor_Hephaestus_WDL_Medic : 53rd_Armor_Medic
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Medic)(Woodland)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_V.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_A3.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_WDL_Platoon_Medic : 53rd_Armor_Medic_NCO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Platoon Medic)(Woodland)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_PL.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_WDL_Rifleman : 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Rifleman)(Woodland)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_WDL_Specialist : 53rd_Armor_Specialist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Specialist)(Woodland)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_WDL_Team_Leader : 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Team Leader)(Woodland)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_WDL_Squad_Leader : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Squad Leader)(Woodland)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WDL_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    
//Hephaestus Desert Armors
    class Armor_Hephaestus_DES_Medic : 53rd_Armor_Medic
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Medic)(Desert)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_V.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_A3.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_DES_Platoon_Medic : 53rd_Armor_Medic_NCO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Platoon Medic)(Desert)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_PL.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_DES_Rifleman : 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Rifleman)(Desert)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_DES_Specialist : 53rd_Armor_Specialist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Specialist)(Desert)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_DES_Team_Leader : 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Team Leader)(Desert)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_DES_Squad_Leader : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Squad Leader)(Desert)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_DES_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    
//Hephaestus Winter Armors
    class Armor_Hephaestus_WIN_Medic : 53rd_Armor_Medic
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Medic)(Winter)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_V.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_A3.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_WIN_Platoon_Medic : 53rd_Armor_Medic_NCO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Platoon Medic)(Winter)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_PL.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_WIN_Rifleman : 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Rifleman)(Winter)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_WIN_Specialist : 53rd_Armor_Specialist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Specialist)(Winter)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_WIN_Team_Leader : 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Team Leader)(Winter)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_WIN_Squad_Leader : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Squad Leader)(Winter)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_WIN_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    
//Hephaestus Jungle Armors
    class Armor_Hephaestus_JUG_Medic : 53rd_Armor_Medic
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Medic)(Jungle)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_V.paa",
			"53rd_SC_Aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_A3.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_JUG_Platoon_Medic : 53rd_Armor_Medic_NCO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Platoon Medic)(Jungle)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\53rd_M52_GREY_CORP_PL.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
    class Armor_Hephaestus_JUG_Rifleman : 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Rifleman)(Jungle)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_JUG_Specialist : 53rd_Armor_Specialist
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Specialist)(Jungle)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_JUG_Team_Leader : 53rd_Armor_TL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Team Leader)(Jungle)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
    class Armor_Hephaestus_JUG_Squad_Leader : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Hephaestus Armor (Squad Leader)(Jungle)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_V.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_A4.paa",
			"53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_M52_JUG_L2.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
        };
	};
//End Hephaestus

//Tartarus Helmets 

	class 53rd_CH252_Tar_Haz2 : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Tartarus Helmet (Silver)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Tartartus Armor\53rd_CH252Hazard.paa",
            "53rd_SC_aux\tex\visr_silver_CO.paa"
        };
    };
	class 53rd_CH252_Tar_Haz2_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Tartarus Helmet (Silver)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Tartartus Armor\53rd_CH252Hazard.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	class 53rd_CH252_Tar_Haz3 : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Tartarus Helmet (Gold)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Tartartus Armor\53rd_CH252Hazard.paa",
            "53rd_SC_aux\tex\visr_gold_CO.paa"
        };
    };
	class 53rd_CH252_Tar_Haz3_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Tartarus Helmet (Gold)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Tartartus Armor\53rd_CH252Hazard.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	class 53rd_CH252_Tar_Fixer : 53rd_Army_Heavy
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Tartarus Helmet (Fixer)";
        author = "53rd AUX TEAM";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Tartartus Armor\53rd_CH252Hazard.paa"
        };
    };
	
// Tartarus Armor
    class 53rd_M52A_Haz : 53rd_Armor_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Tartarus Armor (Rifleman)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Tartartus Armor\53rd_M52_HAZ_V.paa",
			"53rd_SC_aux\tex\Tartartus Armor\53rd_M52_HAZ_A.paa",
			"53rd_SC_aux\tex\Tartartus Armor\53rd_M52_GREY_L3.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
    };
    class 53rd_M52A_Haz_NCO : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Tartarus Armor (Squad Leader)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Tartartus Armor\53rd_M52_HAZ_V.paa",
			"53rd_SC_aux\tex\Tartartus Armor\53rd_M52_HAZ_A.paa",
			"53rd_SC_aux\tex\Tartartus Armor\53rd_M52_GREY_L3.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
    };
//Custom Armor
	class 53rd_M52A_Rose_NCO : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Tartarus Armor (Roseiry)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Tartartus Armor\53rd_M52_HAZ_V.paa",
			"53rd_SC_aux\tex\Tartartus Armor\53rd_M52_Rose_A.paa",
			"53rd_SC_aux\tex\Tartartus Armor\53rd_M52_GREY_L3.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co",
        };
    };
	class 53rd_M52A_Fixer_NCO : 53rd_Armor_SL
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "53rd AUX";
		author = "53rd AUX TEAM";
		displayName = "[53rd] Tartarus Armor (Fixer)";
		hiddenSelectionsTextures[] = 
		{
            "53rd_SC_aux\tex\Tartartus Armor\53rd_M52_HAZ_V.paa",
			"53rd_SC_aux\tex\Tartartus Armor\53rd_M52_HAZ_A.paa",
			"53rd_SC_aux\tex\Tartartus Armor\53rd_M52_GREY_L3.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
            "53rd_SC_aux\tex\Hades Armor\53rd_ODST_OD.paa"
        };
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				//"A_Base",
				//"A_ChestArmor",
				"A_Ghillie",
				//"A_KneesLeft", //hard knees
				//"A_KneesRight",
				"A_KneesMarLeft", //soft knees
				"A_KneesMarRight",
				"A_ODST", 
				//"A_ShinArmorLeft", //Shin Plates
				//"A_ShinArmorRight",
				//"A_TacPad", //Small screen on left wrist
				//"A_ThighArmorLeft", //Thigh Plate
				//"A_ThighArmorRight",
				//"AS_BaseLeft", //Under pad that sits on the uniform
				//"AS_BaseRight",
				"AS_LargeLeft", //Tall plate
				//"AS_LargeRight",
				"AS_MediumLeft", //Mid sized plate 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", //V plate that points down
				"AS_ODSTCQBRight", 
				//"AS_ODSTLeft", //Standard ODST
				"AS_ODSTRight",
				"AS_ODSTSniperLeft", //Tall pauldron, short lower
				"AS_ODSTSniperRight",
				"AS_SmallLeft", //Small Oval shaped
				"AS_SmallRight",
				"AP_AR", //Front AR packs, Need both to work <<
				"AP_BR", //Front 3 BR pouches
				//"AP_Canteen", //Left Hip
				//"AP_GL", //40mm belt on front
				"AP_Knife", //Chest knife
				//"AP_MGThigh", //Right thigh ammo pouch
				"AP_AR", //Front AR packs, Need both to work <<
				//"AP_Pack", //Center Chest Pouch
				//"AP_Pistol", //Right Hip, ammo pouch
				"AP_Rounds", //Sniper rounds On Left Sholder
				"AP_SG", //Shotgun Shells on right of chestplate
				"AP_SMG", //Lower SMG ammo pouches
				"AP_Sniper", //2 large pouches on front
				//"AP_Thigh", //Left Thigh ammo pouch
				"AP_Frag", //Right hip
				"AP_Smoke", //Left Hip
				"APO_AR", //2 AR pouches, Spaced to work with ODST armor
				"APO_BR", //2 BR pouches, Spaced to work with ODST armor
				"APO_Knife", //Back Knife
				//"APO_SMG", // Upper SMG ammo pouches
				"APO_Sniper", //large pouches on front, Spaced to work with ODST armor
				//"CustomKit_Scorch" //Twin back knifes and 2 AR pouches
			};
		};
    };
    
//End Tartarus
    //Def helms
    class 53rd_CH252_GREY_HEV_Sealed_40_Pro : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
        displayName = "[53rd] Hephaestus Helmet (40% Pro)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "53rd_SC_Aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_40_Pro_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
        displayName = "[53rd] Hephaestus Helmet (40% Pro)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
    class 53rd_CH252_GREY_HEV_Sealed_45_Pro : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.45;
        displayName = "[53rd] Hephaestus Helmet (45% Pro)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "53rd_SC_Aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_45_Pro_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.45;
        displayName = "[53rd] Hephaestus Helmet (45% Pro)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
    class 53rd_CH252_GREY_HEV_Sealed_50_Pro : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.50;
        displayName = "[53rd] Hephaestus Helmet (50% Pro)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "53rd_SC_Aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_50_Pro_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.50;
        displayName = "[53rd] Hephaestus Helmet (50% Pro)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
    class 53rd_CH252_GREY_HEV_Sealed_55_Pro : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.55;
        displayName = "[53rd] Hephaestus Helmet (55% Pro)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "53rd_SC_Aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_55_Pro_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.55;
        displayName = "[53rd] Hephaestus Helmet (55% Pro)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
    class 53rd_CH252_GREY_HEV_Sealed_60_Pro : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.60;
        displayName = "[53rd] Hephaestus Helmet (60% Pro)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "53rd_SC_Aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_60_Pro_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.60;
        displayName = "[53rd] Hephaestus Helmet (60% Pro)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
    class 53rd_CH252_GREY_HEV_Sealed_65_Pro : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.65;
        displayName = "[53rd] Hephaestus Helmet (65% Pro)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "53rd_SC_Aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_65_Pro_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.65;
        displayName = "[53rd] Hephaestus Helmet (65% Pro)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
    class 53rd_CH252_GREY_HEV_Sealed_70_Pro : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.70;
        displayName = "[53rd] Hephaestus Helmet (70% Pro)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "53rd_SC_Aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_70_Pro_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.70;
        displayName = "[53rd] Hephaestus Helmet (70% Pro)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
    class 53rd_CH252_GREY_HEV_Sealed_75_Pro : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.75;
        displayName = "[53rd] Hephaestus Helmet (75% Pro)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "53rd_SC_Aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_75_Pro_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.75;
        displayName = "[53rd] Hephaestus Helmet (75% Pro)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
    class 53rd_CH252_GREY_HEV_Sealed_80_Pro : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.80;
        displayName = "[53rd] Hephaestus Helmet (80% Pro)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "53rd_SC_Aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_80_Pro_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.80;
        displayName = "[53rd] Hephaestus Helmet (80% Pro)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
    class 53rd_CH252_GREY_HEV_Sealed_100_Pro : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 1;
        displayName = "[53rd] Hephaestus Helmet (100% Pro)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "53rd_SC_aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_100_Pro_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0;
        displayName = "[53rd] Hephaestus Helmet (100% Pro)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_Reservist_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
    
//Primal
    class 53rd_CH252_GREY_HEV_Sealed_Primal : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.50;
        displayName = "[53rd] Hephaestus Helmet (Primal)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_TL_Primal_CH252.paa",
            "53rd_SC_Aux\tex\peg_visr_teef_CO.paa"
        };
    };
    class 53rd_CH252_GREY_HEV_Sealed_Primal_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.80;
        displayName = "[53rd] Hephaestus Helmet (Primal)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53RD_TL_Primal_CH252.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
};

class CfgVehicles
{
};

class CfgGlasses
{
};