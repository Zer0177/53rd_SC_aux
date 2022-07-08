class 1st_meu_11th_stb_corpman_hades_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Hades) Corpsman";
    
    linkedItems[] = {
        "Hades_Corpsman_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Hades_Corpsman_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    weapons[] = {"OPTRE_M7","Throw","Put"};
    respawnWeapons[] = {"OPTRE_M7","Throw","Put"};
    magazines[] = {
        MACRO_MAG_x10(OPTRE_48Rnd_5x23mm_Mag_FMJ),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {
        MACRO_MAG_x10(OPTRE_48Rnd_5x23mm_Mag_FMJ),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };
    
    icon = "iconManMedic";
    backpack = "MEU_11th_OPTRE_UNSC_Rucksack_Medic_AI";
};

class 1st_meu_11th_stb_corpman_typhon_unit:1st_meu_11th_stb_corpman_hades_unit
{
    displayName = "(Typhon) Corpsman";
    
    linkedItems[] = {
        "Typhon_Corpsman_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Typhon_Corpsman_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Typhon";
};

class 1st_meu_11th_stb_corpman_3rd_unit:1st_meu_11th_stb_corpman_hades_unit
{
    displayName = "(Artemis) Corpsman";
    
    linkedItems[] = {
        "3rd_Corpsman_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "3rd_Corpsman_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Artemis";
};

class 1st_meu_11th_stb_corpman_4th_unit:1st_meu_11th_stb_corpman_hades_unit
{
    displayName = "(Apollo) Corpsman";
    
    linkedItems[] = {
        "4th_Corpsman_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "4th_Corpsman_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Apollo";
};