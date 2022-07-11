class CfgPatches {
	class 53rd_MGS {
		units[] = {"53rd_MGS_01D","53rd_MGS_01E"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles
{
	class B_AFV_Wheeled_01_up_cannon_F;
	class B_AFV_Wheeled_01_cannon_F;
	class 53rd_MGS_01D: B_AFV_Wheeled_01_cannon_F
    {
        displayName="[53rd] MGS-53D Cougar";
        author="Body";
        dlc = "53rd";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        editorCategory = "53rd_cat_faction";
        editorSubCategory = "53rd_Tank";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "camo3",
            "CamoNet",
            "CamoSlat"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Vehicles\Timberwolf\MGS_MC_B_Grey.paa",
            "53rd_SC_aux\Vehicles\Timberwolf\MGS_AR_Grey_Turret.paa",
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
            "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
            "a3\Armor_F\Data\cage_olive_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "LM_OPCAN3.0\BLU\UNSC\VEH\MGS1.rvmat",
            "LM_OPCAN3.0\BLU\UNSC\VEH\MGS2.rvmat"
        };
        crew="LM_OPCAN_UNSCA_Crewman_WDL";
        textureList[]=
        {
            "Army",
            1
        };
        class TextureSources
        {
            class Army
            {
                displayName="UNSC Army";
                author="$STR_A3_Bohemia_Interactive";
                textures[]=
                {
                    "53rd_SC_aux\Vehicles\Timberwolf\MGS_MC_B_Grey.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\MGS_AR_Grey_Turret.paa",
                    "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\camonet_NATO_Green_CO.paa",
                    "a3\Armor_F\Data\cage_olive_CO.paa"
                };
                factions[]=
                {
                    "53rd"
                };
            };
        };
    };
    class 53rd_MGS_01E: B_AFV_Wheeled_01_up_cannon_F
    {
        displayName="[53rd] MGS-53E Cougar";
        author="Body";
        dlc = "53rd";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Tank";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "CamoNet",
            "CamoSlat"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Vehicles\Timberwolf\MGS_MC_B_Grey.paa",
            "53rd_SC_aux\Vehicles\Timberwolf\MGS_AR_Grey_Turret.paa",
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",
            "53rd_SC_aux\Vehicles\Timberwolf\afv_wheeled_01_EXT3_Grey_CO.paa",
            "53rd_SC_aux\Vehicles\Timberwolf\afv_commander_tow_Grey_CO.paa",
            "53rd_SC_aux\Vehicles\Timberwolf\camonet_NATO_Green_CO.paa",
            "53rd_SC_aux\Vehicles\Timberwolf\afv_wheeled_01_EXT3_Grey_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "LM_OPCAN3.0\BLU\UNSC\VEH\MGS1.rvmat",
            "LM_OPCAN3.0\BLU\UNSC\VEH\MGS2.rvmat"
        };
        crew="LM_OPCAN_UNSCA_Crewman_WDL";
        textureList[]=
        {
            "Army",
            1
        };
        class TextureSources
        {
            class Army
            {
                displayName="UNSC Army";
                author="$STR_A3_Bohemia_Interactive";
                textures[]=
                {
                    "53rd_SC_aux\Vehicles\Timberwolf\MGS_MC_B_Grey.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\MGS_AR_Grey_Turret.paa",
                    "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\afv_wheeled_01_EXT3_Grey_CO.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\afv_commander_tow_Grey_CO.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\camonet_NATO_Green_CO.paa",
                    "53rd_SC_aux\Vehicles\Timberwolf\afv_wheeled_01_EXT3_Grey_CO.paa"
                };
                factions[]=
                    {
                        "53rd"
                    };
            };
        };
    };
};