/// https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide ///
/// Equipment list macros definition ///

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgPatches {
	class 53rd_equwupment {
		units[] = 
        {
			"53rd_CopiumItem",
			"53rd_Hardbox_Medical",
			"53rd_Hardbox_Resupply",
			"53rd_SupplyPod_Medical",
            "Item_53rd_anprc152l"
        };
		weapons[] = 
        {
			"53rd_Copium",
			"53rd_r_biofoam",
			"53rd_r_medigel",
            "53rd_anprc152l"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {"task_force_radio_items"};
	};
};

class ace_medical_treatment
{
    class Bandaging
    {
        class OPTRE_Biofoam;
        class OPTRE_Medigel;
        class r_biofoam: OPTRE_Biofoam {};
        class r_medigel: OPTRE_Medigel {};
        class nr_biofoam: OPTRE_Biofoam {};
        class nr_medigel: OPTRE_Medigel {};
    };
    class Medication
    {
		class Copium
		{
			painReduce=0.80000001;
			timeInSystem=180;
			timeTillMaxEffect=0.1;
			maxDose=10;
		};
    }; 
};

class ace_medical_treatment_actions
{
    class Morphine;
    class OPTRE_Biofoam;
    class OPTRE_Medigel;
	class Copium: Morphine
	{
		displayName="Copium";
		displayNameProgress="My Man Just Needs to Cope tbh...";
		condition="ace_medical_treatment_advancedMedication";
		allowedSelections[]=
		{
			"All"
		};
		items[]=
		{
			"53rd_Copium"
		};
		litter[]=
		{
			
			{
				"53rd_CopiumLitter"
			}
		};
	};
	class r_biofoam: OPTRE_Biofoam
	{
		displayName="[R] Biofoam";
		consumeItem=0;
		medicRequired="ace_medical_treatment_medicIV";
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction3";
		items[]=
		{
			"53rd_r_biofoam"
		};
	};
	class r_medigel: OPTRE_Medigel
	{
		displayName="[R] Medigel";
		consumeItem=0;
		medicRequired="ace_medical_treatment_medicIV";
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction3";
		items[]=
		{
			"53rd_r_medigel"
		};
	};
	class nr_biofoam: OPTRE_Biofoam
	{
		displayName="Biofoam";
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction2";
		items[]=
		{
			"53rd_biofoam"
		};
	};
	class nr_medigel: OPTRE_Medigel
	{
		displayName="Medigel";
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction2";
		items[]=
		{
			"53rd_medigel"
		};
	};
    
};

class cfgModels
{
    class cope
    {
        sectionsInherit="";
        sections[]={"camo"};
        skeletonName="";
    };
    class Unused_Cope
    {
        sectionsInherit="";
        sections[]={"camo"};
        skeletonName="";
    };
};

#include "\53rd_SC_aux\Equwupment\radio_ids.hpp"

class cfgWeapons 
{
    
    
    //medical
    class ACE_ItemCore;
    class OPTRE_Medigel;
    class OPTRE_Biofoam;
    class CBA_MiscItem_ItemInfo;
	class 53rd_Copium: ACE_ItemCore
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd] Copium";
		picture="\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model="\53rd_SC_aux\Equwupment\Unused_Cope";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\53rd_SC_aux\Equwupment\Copium_CO.paa"};
		descriptionShort="Desc_Short";
		descriptionUse="Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class 53rd_r_biofoam: OPTRE_Biofoam
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd](R) Biofoam";
	};
	class 53rd_r_medigel: OPTRE_Medigel
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd](R) Medigel";
	};
	class 53rd_biofoam: OPTRE_Biofoam
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd] Biofoam";
	};
	class 53rd_medigel: OPTRE_Medigel
	{
		scope=2;
		author="53rd Aux";
		displayName="[53rd] Medigel";
	};
	class tf_anprc152;
    class 53rd_anprc152l: tf_anprc152
    {
        author = "Raspu & Fixer";
        displayName = "[53rd] AN/PRC-152 w/ Link";
        descriptionShort = "AN/PRC-152 with Link to LR Pack";
        tf_range=120000;
    };
    TF_RADIO_IDS(53rd_anprc152l,[53rd] AN/PRC-152 w/ Link)
};


class CfgVehicles
{
    //medical
    class Item_Base_F;
    class ACE_MedicalLitterBase;
	class 53rd_CopiumItem: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="[53rd] Copium";
		author="53rd Aux";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_53rd_Copium
			{
				name="53rd_Copium";
				count=1;
			};
		};
	};
	class 53rd_CopiumLitter: ACE_MedicalLitterBase
	{
		model="\53rd_SC_aux\Equwupment\cope";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\53rd_SC_aux\Equwupment\Copium_CO.paa"};
	};
    //Radios
    
    class Item_tf_anprc152;
    class Item_53rd_anprc152l: Item_tf_anprc152
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[53rd] AN/PRC-152 w/ Link";
        author = "Nkey";
        vehicleClass = "Items";
        class TransportItems
        {
            class 53rd_anprc152l
            {
                name="53rd_anprc152l";
                count=1;
            };
        };
    };
    //Cargo Boxes
    class Box_NATO_Support_F;
	class 53rd_Hardbox_Medical: Box_NATO_Support_F
	{
		editorCategory = "53rd_cat_faction";
		scope=2;
		author="53rd aux";
		displayName="[53rd] Medical Hardbox";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		maximumLoad=1500;
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
            item_xx(ACE_packingBandage,50);
            item_xx(ACE_elasticBandage,50);
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
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
	};
	class 53rd_Hardbox_Resupply: Box_NATO_Support_F
	{
		editorCategory = "53rd_cat_faction";
		scope=1;
		author="53rd aux";
		displayName="[53rd] Resupply Hardbox";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		maximumLoad=1500;
		class TransportBackpacks
		{
            pack_xx(OPTRE_UNSC_Rucksack_53rd_Athena_LR,2);
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
            item_xx(ACE_packingBandage,50);
            item_xx(ACE_elasticBandage,50);
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
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
	};
    
    class OPTRE_Ammo_SupplyPod_Empty;
    class 53rd_SupplyPod_Medical: OPTRE_Ammo_SupplyPod_Empty
    {
		editorCategory = "53rd_cat_faction";
		scope=2;
        displayName = "[53rd] Supply Pod (Medical)";
		model="\OPTRE_misc\crates\Supply_pod.p3d";
		hiddenSelections[]=
		{
			"attach_Cover"
		};
        hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Crates\53rd_Medical_SupplyPod_co.paa"
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
            item_xx(ACE_packingBandage,50);
            item_xx(ACE_elasticBandage,50);
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
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
    };
};