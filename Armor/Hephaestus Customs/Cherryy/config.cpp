class CfgPatches 
{
	class 53rd_Hephaestus_Customs 
	{
		units[] = 
        {

        };
		weapons[] = 
        {
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class VES_CH252D;
	class VES_CH252D_dp;
	class OPTRE_UNSC_M52A_Armor_Base;
	class Hands;
	class Pelvis;
	class MA_TGE_InvisVest;
	class OPTRE_UNSC_Operator_Helmet;
    class Uniform_Base;
    //Base
    class 53rd_Hephaestus_uniform_MSR_Rifleman_Urban: Uniform_Base
	{
		author="Body&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Rifleman Armor (Urban)";
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
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Hephaestus_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_RFM_Armor_Urban.paa",
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Hephaestus_Army_top_AS_co.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_Rifleman_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Armor\Rifleman\Rifleman_Urban\53rd_Rework_RFM_Armor_Urban.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Infantry_Veh_Rifleman_Urban";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Cherryy
	class 53rd_OP_Cherry_UB:OPTRE_UNSC_Operator_Helmet
    {
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Urban)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Helmet\53rd_Custom_Helmet_Cherry_Urban.paa",
				"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Helmet\53rd_Custom_Visor_Cherry.paa"
			};
		};
    };
	class 53rd_OP_Cherry_DS:OPTRE_UNSC_Operator_Helmet
	{
        {
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Desert)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Helmet\53rd_Custom_Helmet_Cherry_Desert.paa",
				"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Helmet\53rd_Custom_Visor_Cherry.paa"
			};
		};
    }:
	class 53rd_OP_Cherry_WN:OPTRE_UNSC_Operator_Helmet
	{
        {
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Snow)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Helmet\53rd_Custom_Helmet_Cherry_Snow.paa",
				"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Helmet\53rd_Custom_Visor_Cherry.paa"
			};
		};
    };
	class 53rd_OP_Cherry_WD:OPTRE_UNSC_Operator_Helmet
	{
        {
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Cherry / Woodland)";
			model="OPTRE_UNSC_Units\Army\Helmets\Operator_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Helmet\53rd_Custom_Helmet_Cherry_Woodland.paa",
				"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Helmet\53rd_Custom_Visor_Cherry.paa"
			};
		};
    };
    //Armor
	class 53rd_Hephaestus_Custom_MSR_Cherryy_Urban: Uniform_Base
    {
		author="Body&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Custom Armor (Cherryy / Urban)";
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
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Urban.paa",
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Urban.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Custom_Veh_Cherryy_Urban";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Desert
	class 53rd_Hephaestus_Custom_MSR_Cherryy_Desert: Uniform_Base
	{
		author="Body&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Custom Armor (Cherryy / Desert)";
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
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Desert.paa",
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Desert.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Custom_Veh_Cherryy_Desert";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Woodland
	class 53rd_Hephaestus_Custom_MSR_Cherryy_Woodland: Uniform_Base
	{
		author="Body&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Custom Armor (Cherryy / Woodland)";
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
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Woodland.paa",
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Woodland.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Custom_Veh_Cherryy_Woodland";
			containerClass="Supply100";
			mass=80;
		};
	};
	//Winter
	class 53rd_Hephaestus_Custom_MSR_Cherryy_Winter: Uniform_Base
	{
		author="Cherryy&Scarecrow";
		scope=2;
		scopeArsenal=2;
		side=1;
		allowedSlots[]={901};
		displayName="[53rd] Hephaestus Custom Armor (Cherryy / Winter)";
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
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Winter.paa",
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Winter.paa",
			};
			uniformType = "Neopren";
			uniformClass="53rd_Hephaestus_Custom_Veh_Cherryy_Winter";
			containerClass="Supply100";
			mass=80;
		};
	};
	class haloinf_Marine_Soldier_base_F;
	//Urban
	class 53rd_Hephaestus_Custom_Veh_Cherryy_Urban: haloinf_Marine_Soldier_base_F
    {
	    {
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Custom Armor (Cherryy / Urban)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Urban.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Urban.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_Custom_MSR_Cherryy_Urban";
			uniformType = "Neopren";
			linkedItems[]=
			{
				"HaloInf_Marine_WDL_UNSC_headgear",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"
			};
	    };
    };
	//Desert
	class 53rd_Hephaestus_Custom_Veh_Cherryy_Desert: haloinf_Marine_Soldier_base_F
	{
        {
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Custom Armor (Cherryy / Desert)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Desert.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Desert.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_Custom_MSR_Cherryy_Desert";
			uniformType = "Neopren";
			linkedItems[]=
			{
				"HaloInf_Marine_WDL_UNSC_headgear",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"
			};
	    };
    };
	//Woodland
	class 53rd_Hephaestus_Custom_Veh_Cherryy_Woodland: haloinf_Marine_Soldier_base_F
	{
        {
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Custom Armor (Cherryy / Woodland)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Woodland.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Woodland.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_Custom_MSR_Cherryy_Woodland";
			uniformType = "Neopren";
			linkedItems[]=
			{
				"HaloInf_Marine_WDL_UNSC_headgear",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"
			};
	    };
    };
	//Winter
	class 53rd_Hephaestus_Custom_Veh_Cherryy_Winter: haloinf_Marine_Soldier_base_F
    {
	    {
			scope=2;
			scopeCurator=0;
			scopeArsenal=2;
			side=1;
			displayName="[53rd] Hephaestus Custom Armor (Cherryy / Winter)";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Top\Cherryy_Top_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Pants\Cherryy_Pants_Winter.paa",
            "53rd_SC_aux\Armor\Hephaestus Customs\Cherryy\Armor\Cherryy_Armor_Winter.paa",
			};
			model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
			uniformClass="53rd_Hephaestus_Custom_MSR_Cherryy_Winter";
			uniformType = "Neopren";
			linkedItems[]=
			{
				"HaloInf_Marine_WDL_UNSC_headgear",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"
			};
	    };
    };
};
class cfgvehicles
{
};




