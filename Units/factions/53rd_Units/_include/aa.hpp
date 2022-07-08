class 1st_meu_11th_stb_rifleman_aa_hades_unit: 1st_meu_11th_stb_rifleman_hades_unit
{
   
    displayName = "(Hades) Rifleman AA";

    backpack = "OPTRE_UNSC_Rucksack_M41";
    weapons[] = {"OPTRE_MA5C_AC","launch_B_Titan_tna_F","Throw","Put"};
    respawnWeapons[] = {"OPTRE_MA5C_AC","launch_B_Titan_tna_F","Throw","Put"};
    magazines[] = {
        MACRO_MAG_x10(OPTRE_32Rnd_762x51_Mag_Tracer),
        MACRO_MAG_x3(Titan_AA),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };
    respawnMagazines[] = {
        MACRO_MAG_x10(OPTRE_32Rnd_762x51_Mag_Tracer),
        MACRO_MAG_x3(Titan_AA),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };
    editorCategory = "MEU_11th_stb_faction";
    editorSubcategory = "MEU_Men_Hades";

    icon = "iconManAT";

};	

class 1st_meu_11th_stb_rifleman_aa_typhon_unit:1st_meu_11th_stb_rifleman_aa_hades_unit
{
    displayName = "(Typhon) Rifleman AA";
    
    linkedItems[] = {
        "Typhon_Rifleman_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Typhon_Rifleman_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Typhon";
};

class 1st_meu_11th_stb_rifleman_aa_3rd_unit:1st_meu_11th_stb_rifleman_aa_hades_unit
{
    displayName = "(Artemis) Rifleman AA";
    
    linkedItems[] = {
        "3rd_Rifleman_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "3rd_Rifleman_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Artemis";
};

class 1st_meu_11th_stb_rifleman_aa_4th_unit:1st_meu_11th_stb_rifleman_aa_hades_unit
{
    displayName = "(Apollo) Rifleman AA";
    
    linkedItems[] = {
        "4th_Rifleman_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "4th_Rifleman_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Apollo";
};