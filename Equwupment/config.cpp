class CfgPatches {
	class 53rd_equwupment {
		units[] = 
        {
			"53rd_CopiumItem"
        };
		weapons[] = 
        {
			"53rd_Copium"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class ace_medical_treatment
{
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
	class Copium: Morphine
	{
		displayName="Copium";
		displayNameProgress="My Man Just Needs to Cope tbh...";
		condition="ace_medical_treatment_advancedMedication";
		allowedSelections[]=
		{
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
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