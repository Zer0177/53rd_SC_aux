class CfgPatches {
	class Backpacks {
		units[] = 
        {
            "",
			""
        };
		weapons[] = 
        {
            "",
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"

class CfgVehicles
{
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ANPRC_521_Green;
    class OPTRE_ANPRC_515;
	class OPTRE_UNSC_Rucksack_Medic;
	class OPTRE_UNSC_Rucksack_Heavy;
	class OPTRE_ONI_Researcher_Suitcase;
	class B_Parachute;
	
	
   class OPTRE_UNSC_Rucksack_53rd: OPTRE_UNSC_Rucksack
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Basic)";
        maximumLoad=300;
        mass=1;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "B_Addons",
            "B_Medic",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa"
        };
    }; 

    
	class 53rd_ANPRC_515: OPTRE_ANPRC_515
    {
        displayName = "[53rd] AN/PRC-515 (LR)";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad=300;
    };
    class OPTRE_UNSC_Rucksack_53rd_Athena_LR: OPTRE_UNSC_Rucksack
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (NCO)";
        maximumLoad=300;
        mass=1;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "B_Addons",
            "B_Medic",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd_Basic_With_LR.paa"
        };
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
    }; 
   /* class OPTRE_UNSC_Rucksack_53rd_Athena_LRPARA: OPTRE_UNSC_Rucksack
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (NCO+Chute)";
        maximumLoad=300;
        mass=1;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "B_Addons",
            "B_Medic",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd_Basic_With_LR.paa"
        };
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
		backpackSimulation="ParachuteSteerable";
		ParachuteClass="Steerable_Parachute_F";
        ace_reserveParachute = "OPTRE_UNSC_Rucksack_53rd_Athena_LRPARA";
        ace_hasReserveParachute = 1;
    }; 
	*/
    class OPTRE_ANPRC_521_Green_53rd: OPTRE_ANPRC_521_Green
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] AN/PRC-521 (LR)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa",
			"53rd_SC_Aux\tex\Backpacks\CommoPack_CO_53rd.paa"
        };
        descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        maximumLoad=300;
    };
    class OPTRE_UNSC_Rucksack_Heavy_53rd: OPTRE_UNSC_Rucksack_Heavy
    {
		author="53rd AUX Team";
        dlc="53rd AUX";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Heavy)";
        maximumLoad=450;
        mass=1;
        hiddenSelections[]=
        {
            "camo",
            "B_Medic",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa"
        };
    }; 
    class OPTRE_UNSC_Rucksack_Medic_53rd: OPTRE_UNSC_Rucksack_Medic
    {
        dlc="53rd AUX";
        author="Ithias";
        scope=2;
        scopeCurator=2;
        displayName="[53rd] Rucksack (Medical)";
        maximumLoad=400;
        mass=1;
        hiddenSelections[]=
        {
            "camo",
            "B_Addons",
            "B_Radio"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_Aux\tex\Backpacks\Soft_Backpack_co_53rd.paa"
        };
    }; 
    class 53rd_Hardcase_Medic_NCO: OPTRE_ONI_Researcher_Suitcase
    {
		author="53rd AUX Team";
        dlc="53rd AUX";
        scope=2;
        scopeArsenal=2;
        displayName="[53rd] Satchel (Medical NCO)";
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
            "53rd_SC_Aux\tex\Backpacks\research_bag_CO_Medical.paa"
        };
        maximumLoad=400;
		mass=1;
    };
	class 53rd_ANPRC_Body_515: OPTRE_ANPRC_515
	{
		author="53rd AUX Team";
        dlc="53rd AUX";
		picture="\OPTRE_weapons\backpacks\icons\como_pack.paa";
		displayName="[53rd] AN/PRC-515 (Body)";
		descriptionShort="AN/PRC-515<br>ODST Long Range Radio<br>25km Effective Range";
		model="\OPTRE_weapons\backpacks\como_ruck.p3d";
		maximumLoad=300;
		mass=1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Equipment\como_pack_Body_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class 53rd_LR_Parachute: B_Parachute
	{
		author="53rd Aux";
		scope=2;
		displayName="[53rd] Parachute (LR)";
		maximumLoad=0;
		mass=1;
		tf_isolatedAmount=0.64999998;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="anarc210_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=120000;
        tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
		backpackSimulation="ParachuteSteerable";
		ParachuteClass="Steerable_Parachute_F";
        ace_reserveParachute = "53rd_LR_Parachute";
        ace_hasReserveParachute = 1;
	};

};