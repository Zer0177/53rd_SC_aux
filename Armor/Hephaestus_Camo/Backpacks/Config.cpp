	class CfgPatches
{
	class 53rd_Backpacks
	{
		units[]=
		{
			"Halo_Rucksack_01",
			"Halo_Rucksack_02",
			"Halo_LR",
		};
		weapons[]=
		{};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class CfgVehicles
{
    class ContainerSupply;
    class ReammoBox;
	class Bag_Base: ReammoBox
	{
	};
	class B_Carryall_Base: Bag_Base
	{
	};
	class 53rd_Rucksack_Urban: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack [Urban]";
		model="\Halo_marine_02\Backpacks\Rucksack";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Urban.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=200;
		mass=1;
	};
    class 53rd_Rucksack_Woodland: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack [Woodland]";
		model="\Halo_marine_02\Backpacks\Rucksack";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Woodland.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=200;
		mass=1;
	};
	class 53rd_Rucksack_Desert: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack [Desert]";
		model="\Halo_marine_02\Backpacks\Rucksack";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Desert.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=200;
		mass=1;
	};
	class 53rd_Rucksack_Winter: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack [Winter]";
		model="\Halo_marine_02\Backpacks\Rucksack";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Winter.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=200;
		mass=1;
	};
    //Heavy
	class 53rd_Rucksack_Heavy_Urban: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack Heavy [Urban]";
		model="\Halo_marine_02\Backpacks\Rucksack_pouches";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Urban.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Pouches.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		maximumLoad=350;
		mass=1;
	};
    	class 53rd_Rucksack_Heavy_Winter: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack Heavy [Winter]";
		model="\Halo_marine_02\Backpacks\Rucksack_pouches";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Winter.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Pouches.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		maximumLoad=350;
		mass=1;
	};
    	class 53rd_Rucksack_Heavy_Desert: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack Heavy [Desert]";
		model="\Halo_marine_02\Backpacks\Rucksack_pouches";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Desert.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Pouches.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		maximumLoad=350;
		mass=1;
	};
    	class 53rd_Rucksack_Heavy_Woodland: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Rucksack Heavy [Woodland]";
		model="\Halo_marine_02\Backpacks\Rucksack_pouches";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Woodland.paa",
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Ruck_Pouches.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		maximumLoad=350;
		mass=1;
	};
    //LR
	class 53rd_LR_Urban: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Long Range [Urban]";
		model="\Halo_marine_02\Backpacks\Longrange";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_LR_Urban.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=300;
		mass=1;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
    	class 53rd_LR_Woodland: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Long Range [Woodland]";
		model="\Halo_marine_02\Backpacks\Longrange";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_LR_Woodland.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=300;
		mass=1;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
    	class 53rd_LR_Desert: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Long Range [Desert]";
		model="\Halo_marine_02\Backpacks\Longrange";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_LR_Desert.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=300;
		mass=1;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
    	class 53rd_LR_Winter: B_Carryall_Base
	{
		author="Cherryy";
		mapSize=0.44999999;
		scope=2;
		displayName="53rd Long Range [Winter]";
		model="\Halo_marine_02\Backpacks\Longrange";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_LR_Winter.paa"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		maximumLoad=300;
		mass=1;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
    //Medic Satchel
        class OPTRE_ONI_Researcher_Suitcase;
        class 53rd_Hephaestus_Medical_Satchel: OPTRE_ONI_Researcher_Suitcase
    {
		author="53rd AUX Team";
        dlc="53rd AUX";
        scope=2;
        scopeArsenal=2;
        displayName="[53rd] Satchel (Medical)";
        tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Armor\Hephaestus_Camo\Backpacks\53rd_Medic_Satchel.paa"
        };
        maximumLoad=300;
		mass=1;
    };
};