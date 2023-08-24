class CfgPatches {
	class Hephaestus_VacSeal {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
	class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class VES_CH252D;
	class Hands;
	class Pelvis;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_WDL_Heavy;
    
    class 53rd_Sealed_Base : VES_CH252_MAR_Vacuum
    {
        scope = 1;
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
				"H_Collar",
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
            "H_Collar",
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
				"H_Collar",
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
    class 53rd_Helmet_Vac_Sealed_Urban : 53rd_Sealed_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Urban)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Vac Seal\Urban\53rd_Hepaestus_VacSeal_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus Armor\Vac Seal\53rd_Hephaestus_Visor_Silver.paa"
		};
    };
        class 53rd_Helmet_Vac_Sealed_Urban_dp : 53rd_Sealed_Base_dp
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[53rd] Vac Sealed Helmet (Urban / dp)";
        author = "53rd AUX TEAM";
        hiddenSelectionsTextures[] = 
        {
			"53rd_SC_aux\Armor\Hephaestus Armor\Vac Seal\Urban\53rd_Hepaestus_VacSeal_Urban.paa",
		};
    };
};
