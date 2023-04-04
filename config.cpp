/// https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide ///
/// Equipment list macros definition ///

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

#include "Functions\CfgFunctions.hpp"
class CfgPatches {
	class black_body {
		units[] = 
        {
            "53rd_Bulldog_RV",
            "53rd_M1015_RV_mule",
			"53rd_Bulldog_Panzer"
        };
		weapons[] = 
        {
			"53rd_MA37",
			"53rd_MA37GL",
			"53rd_MA32",
			"53rd_MA32GL",
			"H_HelmetCrew_B",
			"53rd_HelmetCrew_B",
			"53rd_Boonie_gry",
			"53rd_UNSC_PatrolCap",
			"53rd_Cap",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
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
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
    class VES_CH252A_dp;
	class OPTRE_UNSC_CH252D_Helmet_Base;
	class H_Booniehat_khk;
	class OPTRE_UNSC_PatrolCap_Army;
	class OPTRE_CPD_Cap;
	
//Stetson
    class ItemCore;
    class InventoryItem_Base_F;

	class DAR_Stetson_53rd: ItemCore
	{
		scope = 1;
		scopeArsenal = 1;
		weaponPoolAvailable = 1;
		displayName = "[53rd] Stetson";
		author = "Richards.D/Ithias";
		picture = "\DAR_Stetson\UI\icon_h_stetson_ca.paa";
		model = "\DAR_Stetson\DAR_Stetson";
		hiddenSelectionsTextures[] = {"\53rd_SC_Aux\tex\Soft caps\Stetson_co_53rd.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\DAR_Stetson\DAR_Stetson";
			modelSides[] = {3,1};
			armor = 40;
			passThrough = 0.1;
			hiddenSelectionsTextures[] = {"\53rd_SC_Aux\tex\Soft caps\Stetson_co_53rd.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	

//Berets
    class H_HelmetB;

    class 53rd_Beret_Hephaestus: H_HelmetB
	{
		author="Bohemia Interactive";
		scope=2;
		scopeArsenal = 2;
		displayName="[53rd] Beret (Hephaestus)";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca";
		model="a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Hephaestus.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="a3\characters_f_epb\BLUFOR\headgear_beret02";
			hiddenSelections[]=
			{
				"Camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=40;
					passThrough=0.5;
				};
			};
		};
	};
    class 53rd_Beret_Hephaestus_med: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Medical)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\Hephaestus_Medical_Beret_V1.paa"
		};
	};
    class 53rd_Beret_Hephaestus_med_led: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Medical Leader)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\Hephaestus_Medical_Beret_Leader_V1.paa"
		};
	};
    class 53rd_Beret_Athena: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Athena)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Athena.paa"
		};
	};
    class 53rd_Beret_Tart: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Tartarus)";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_Beret_Tartarus.paa"
		};
	};	
    class 53rd_Beret_Volare: 53rd_Beret_Hephaestus
	{
		displayName="[53rd] Beret (Volare)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Beret_Volare.paa"
		};
	};

//Boonie
    class 53rd_Boonie_gry: H_Booniehat_khk
	{
		author="53rd Strike Company";
		scope = 2;
		scopeArsenal = 2;
		displayName="(53rd) Boonie Hat (Urban)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model="\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_booniehat_grey.paa"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitPointName="HitHead";
				armor=40;
				passThrough=0.5;
			};
		};
	};
	class 53rd_Boonie_Winter: H_Booniehat_khk
	{
		author="53rd Strike Company";
		scope = 2;
		scopeArsenal = 2;
		displayName="(53rd) Boonie Hat (Winter)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model="\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_booniehat_winter_co.paa"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitPointName="HitHead";
				armor=40;
				passThrough=0.5;
			};
		};
	};
	
	
//Patrol
    class 53rd_UNSC_Cap_Black: OPTRE_UNSC_PatrolCap_Army
    {
        author="53rd";
        scope = 2;
        scopeArsenal = 2;
        displayName="[53rd] UNSC Cap (Black)";
        uniformModel="\OPTRE_UNSC_Units\Army\patrolcap.p3d";
        hiddenSelections[]=
        {
            "camo1",
            "hide_marines"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Soft caps\53rd_UNSC_Cap_grey.paa"
        };
    };
	class 53rd_UNSC_Cap_Woodland: OPTRE_UNSC_PatrolCap_Army
    {
        author="53rd";
        scope = 2;
        scopeArsenal = 2;
        displayName="[53rd] UNSC Cap (Woodland)";
        uniformModel="\OPTRE_UNSC_Units\Army\patrolcap.p3d";
        hiddenSelections[]=
        {
            "camo1",
            "hide_marines"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Soft caps\53rd_UNSC_Cap_Woodland.paa"
        };
    };
	class 53rd_UNSC_Cap_Urban: OPTRE_UNSC_PatrolCap_Army
    {
        author="53rd";
        scope = 2;
        scopeArsenal = 2;
        displayName="[53rd] UNSC Cap (Urban)";
        uniformModel="\OPTRE_UNSC_Units\Army\patrolcap.p3d";
        hiddenSelections[]=
        {
            "camo1",
            "hide_marines"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Soft caps\53rd_UNSC_Cap_winter.paa"
        };
    };
	class 53rd_UNSC_Cap_Desert: OPTRE_UNSC_PatrolCap_Army
    {
        author="53rd";
        scope = 2;
        scopeArsenal = 2;
        displayName="[53rd] UNSC Cap (Desert)";
        uniformModel="\OPTRE_UNSC_Units\Army\patrolcap.p3d";
        hiddenSelections[]=
        {
            "camo1",
            "hide_marines"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Soft caps\53rd_UNSC_Cap_Des.paa"
        };
    };
	
///////Caps
	class 53rd_Cap_Urban: OPTRE_CPD_Cap
	{
		dlc="53rd Aux Mod";
		scope = 2;
		scopeArsenal = 2;
		author="Article 2 Studios";
		displayName="[53rd] Soft Cap (Urban)";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_patrolcap_Urban_New_co.paa"
		};
	};
	 class 53rd_Cap_Woodland: OPTRE_CPD_Cap
	{
		dlc="53rd Aux Mod";
		scope = 2;
		scopeArsenal = 2;
		author="Article 2 Studios";
		displayName="[53rd] Soft Cap (Woodland)";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_patrolcap_Woodland_New_co.paa"
		};
	};
	class 53rd_Cap_Desert: OPTRE_CPD_Cap
	{
		dlc="53rd Aux Mod";
		scope = 2;
		scopeArsenal = 2;
		author="Article 2 Studios";
		displayName="[53rd] Soft Cap (Desert)";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_patrolcap_Des_New_co.paa"
		};
	};
    
    //Weapons
	class OPTRE_MA37
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_MA32
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_MA37GL
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_MA32GL
	{
		class WeaponSlotsInfo;
	};
    
    
	class 53rd_MA37: OPTRE_MA37
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA37A";
		baseWeapon="53rd_MA37";
		cursor="OPTRE_MA37";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST"
		};
    };
	class 53rd_MA37GL: OPTRE_MA37GL
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA37A + GL";
		baseWeapon="53rd_MA37GL";
		cursor="OPTRE_MA37";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST"
		};
    };
	class 53rd_MA32: OPTRE_MA32
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA32A";
		baseWeapon="53rd_MA32";
		cursor="OPTRE_MA32";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST"
		};
    };
	class 53rd_MA32GL: OPTRE_MA32GL
	{
		dlc="53rdAux";
		author="53rd Aux Team";
		displayName="[53rd] MA32A + GL";
		baseWeapon="53rd_MA32GL";
		cursor="OPTRE_MA37";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_60Rnd_762x51_Mag_AP",
			"TCF_60Rnd_762x51_Mag_APT",
			"TCF_60Rnd_762x51_Mag_JHP",
			"TCF_60Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"TCF_32Rnd_762x51_Mag_AP",
			"TCF_32Rnd_762x51_Mag_APT",
			"TCF_32Rnd_762x51_Mag_JHP",
			"TCF_32Rnd_762x51_Mag_JHPT",
			"TCF_32Rnd_762x51_Mag_SS",
			"TCF_32Rnd_762x51_Mag_SST"
		};
    };
};

class CfgVehicles
{ //Bulldog
	class DMNS_Bulldog_FAV;
	class DMNS_Bulldog_LRV_AGL;
	class 53rd_Bulldog_RV: DMNS_Bulldog_FAV
	{
		dlc = "53rd";
		displayName="[53rd] RV Bulldog";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\gey-bulldog.paa"
        };
        ace_repair_canRepair = 1;
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;
		class TransportBackpacks
		{
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
            item_xx(53rd_anprc152l,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
                class 53rd_Weapon_Resupply
                {
                    type = "53rd_Weapon_Resupply";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_Grey: DMNS_Bulldog_FAV
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (Grey)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\grey-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_Heph: DMNS_Bulldog_LRV_AGL
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (Heph)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\heph-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_1_3: DMNS_Bulldog_FAV
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (1-3)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\1-3-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
	};
	class 53rd_Bulldog_Panzer: DMNS_Bulldog_LRV_AGL
	{
		dlc = "53rd";
		displayName="[53rd] Bulldog (Panzer)";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\bulldog\moron-bulldog.paa"
        };
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_MedicLR_53rd,2);
		};
		class TransportItems
		{
            item_xx(ACE_PlasmaIV,20);
            item_xx(ACE_plasmaIV_500,20);
            item_xx(53rd_Copium,40);
            item_xx(ACE_Tourniquet,20);
            item_xx(ACE_splint,20);
            item_xx(53rd_r_biofoam,3);
            item_xx(53rd_r_medigel,3);
            item_xx(53rd_biofoam,50);
            item_xx(ACE_packingBandage,40);
            item_xx(ACE_elasticBandage,40);
            item_xx(ACE_epinephrine,10);
            item_xx(ACE_adenosine,10);
            item_xx(ACE_surgicalKit,2);
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		ace_medical_isMedicalVehicle=1;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
    };
	class OPTRE_M1015_mule_repair_ins;
	class 53rd_M1015_RV_mule: OPTRE_M1015_mule_repair_ins
	{
		dlc = "53rd";
		displayName="[53rd] M1015 RV Mule";
		author="Fixer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
        side=1;
		faction="53rd_faction";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Motor";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Truck_02_kab_CO.paa",
            "53rd_SC_aux\tex\Truck_02_repair_CO.paa",
            "53rd_SC_aux\tex\Truck_02_int_CO.paa",
            "53rd_SC_aux\tex\Truck_02_chassis_CO.paa"
        };
        ace_repair_canRepair = 1;
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=1000;
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
		};
		class TransportItems
		{
            item_xx(53rd_Copium,20);
            item_xx(ITC_Land_B_AR2i_Packed,2);
            item_xx(OPTRE_Biofoam,20);
            item_xx(ChemicalDetector_01_watch_F,2);
            item_xx(Chemlight_blue,10);
            item_xx(ACE_Chemlight_HiBlue,10);
            item_xx(ACE_Chemlight_HiWhite,2);
            item_xx(ACE_Chemlight_IR,2);
            item_xx(ACE_EntrenchingTool,2);
            item_xx(ACE_Fortify,2);
            item_xx(OPTRE_Smartfinder,2);
            item_xx(OPTRE_M8_Flare_Blue,10);
            item_xx(Toolkit,2);
            item_xx(ACE_UAVBattery,2);
            item_xx(B_UavTerminal,2);
            item_xx(ACE_DefusalKit,2);
		};
		class TransportMagazines
		{
            mag_xx(DMNS_400Rnd_762x51_Mag_Tracer,2);
            mag_xx(APERSMineDispenser_Mag,3);
            mag_xx(C7_Remote_Mag,5);
            mag_xx(C12_Remote_Mag,2);
		};
		class TransportWeapons
		{
		};     
        ace_cargo_space = 16;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class 53rd_SupplyPod_Medical
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };   
	};
};
class CfgGlasses
{
};