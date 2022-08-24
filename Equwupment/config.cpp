class CfgPatches {
	class 53rd_equwupment {
		units[] = 
        {
			"53rd_CopiumItem"
        };
		weapons[] = 
        {
			"53rd_Copium",
			"53rd_r_biofoam",
			"53rd_r_medigel"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
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
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction";
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
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction";
		items[]=
		{
			"53rd_r_medigel"
		};
	};
	class nr_biofoam: OPTRE_Biofoam
	{
		displayName="Biofoam";
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction";
		items[]=
		{
			"53rd_biofoam"
		};
	};
	class nr_medigel: OPTRE_Medigel
	{
		displayName="Medigel";
		callbackSuccess="F53rd_fnc_treatmentBandageAndPainReduction";
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
};