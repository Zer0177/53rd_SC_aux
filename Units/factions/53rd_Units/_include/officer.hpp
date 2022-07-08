class 1st_meu_11th_stb_officer_hades_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Hades) Officer";
    
    linkedItems[] = {
        "Hades_Officer_Armor", "Hades_beret", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Hades_Officer_Armor", "Hades_beret", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    weapons[] = {"MEU_OPTRE_M6G_AI","Throw","Put"};
    respawnWeapons[] = {"MEU_OPTRE_M6G_AI","Throw","Put"};
    magazines[] = {
        MACRO_MAG_x10(OPTRE_8Rnd_127x40_Mag_APT),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {
        MACRO_MAG_x10(OPTRE_8Rnd_127x40_Mag_APT),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };

    icon = "iconManLeader";
};

class 1st_meu_11th_stb_officer_typhon_unit:1st_meu_11th_stb_officer_hades_unit
{
    displayName = "(Typhon) Officer";
    
    linkedItems[] = {
        "Typhon_Officer_Armor", "Typhon_beret", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Typhon_Officer_Armor", "Typhon_beret", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Typhon";
};

class 1st_meu_11th_stb_officer_3rd_unit:1st_meu_11th_stb_officer_hades_unit
{
    displayName = "(Artemis) Officer";
    
    linkedItems[] = {
        "3rd_Officer_Armor", "Aether_beret", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "3rd_Officer_Armor", "Aether_beret", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    editorSubcategory = "MEU_Men_Artemis";
};

class 1st_meu_11th_stb_officer_4th_unit:1st_meu_11th_stb_officer_hades_unit
{
    displayName = "(Apollo) Officer";
    
    linkedItems[] = {
        "4th_Officer_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "4th_Officer_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Apollo";
};