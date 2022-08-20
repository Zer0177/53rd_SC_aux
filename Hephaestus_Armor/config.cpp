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
			uniformType="Neopren";
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
    class LMAO : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet (WeGotBeefCuh)";
        author = "Chef Boyardee";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_Beefaroni.paa",
            "53rd_SC_aux\tex\visr_gold_CO.paa"
        };
    };
    class LMAO_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet (WeGotBeefCuh)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_Aux\tex\Hephaestus Armor\53rd_CH252_GREY_Beefaroni.paa",
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

//Hephaestus Camo Helmet
	class 53rd_CH252_Wood_HEV_Sealed_PFC_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet Camo(Woodland)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_WoodlandCamo.paa",
            "53rd_SC_aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_Wood_HEV_Sealed_PFC_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet Camo(Woodland)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_WoodlandCamo.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	class 53rd_CH252_DES_HEV_Sealed_PFC_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet Camo(Desert)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_DesCamo.paa",
            "53rd_SC_aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_DES_HEV_Sealed_PFC_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet Camo(Desert)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_DesCamo.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	class 53rd_CH252_WIN_HEV_Sealed_PFC_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet Camo (Winter)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_WinterCamo.paa",
            "53rd_SC_aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_WIN_HEV_Sealed_PFC_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet Camo (Winter)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_WinterCamo.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	class 53rd_CH252_JUG_HEV_Sealed_PFC_SLV : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Hephaestus Helmet Camo (Jungle)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_JungleCamo.paa",
            "53rd_SC_aux\tex\visr_silver_CO.paa"
        };
    };
    class 53rd_CH252_JUG_HEV_Sealed_PFC_SLV_dp : 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[53rd] Hephaestus Helmet Camo (Jungle)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Hephaestus Armor\Camos\53rd_CH52_JungleCamo.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	
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
			"optre_unsc_units\army\data\odst_armor_co",
        };
	};
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
        displayName = "[53rd] Tartarus Helmet (Silver)";
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Tartartus Armor\53rd_CH252Hazard.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
    };
	
// Tartarus Armor /////////////////////////////////
//	class H_HelmetCrew_B;
//	class 53rd_HelmetCrew_B: H_HelmetCrew_B
//	{
//		author="$STR_A3_Bohemia_Interactive";
//		_generalMacro="H_HelmetCrew_I";
//		displayName="$STR_A3_H_HelmetCrewIA0";
//		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_crew_ca.paa";
//		model="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
//	hiddenSelectionsTextures[]=
//		{
//			"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"
//		};
//		class ItemInfo: ItemInfo
//	{
//			modelSides[]={2,3};
//			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
//		};
//	};
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