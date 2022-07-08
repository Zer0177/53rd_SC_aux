class 1st_meu_11th_stb_autorifleman_reserve_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Reserve) Autorifleman";
    
    linkedItems[] = {
        "11_AutoRifleman_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "11_AutoRifleman_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    weapons[] = {"OPTRE_M73_AC","Throw","Put"};
    respawnWeapons[] = {"OPTRE_M73_AC","Throw","Put"};
    magazines[] = {
        MACRO_MAG_x10(OPTRE_200Rnd_95x40_Box_Tracer),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {
        MACRO_MAG_x10(OPTRE_200Rnd_95x40_Box_Tracer),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };
    editorSubcategory = "MEU_Men";
    icon = "iconManMG";
};

class 1st_meu_11th_stb_autorifleman_hades_unit:1st_meu_11th_stb_autorifleman_reserve_unit
{
    displayName = "(Hades) Autorifleman";
    
    linkedItems[] = {
        "Hades_AutoRifleman_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Hades_AutoRifleman_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Hades";
};

class 1st_meu_11th_stb_autorifleman_typhon_unit:1st_meu_11th_stb_autorifleman_reserve_unit
{
    displayName = "(Typhon) Autorifleman";
    
    linkedItems[] = {
        "Typhon_AutoRifleman_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Typhon_AutoRifleman_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Typhon";
};

class 1st_meu_11th_stb_autorifleman_3rd_unit:1st_meu_11th_stb_autorifleman_reserve_unit
{
    displayName = "(Artemis) Autorifleman";
    
    linkedItems[] = {
        "3rd_AutoRifleman_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "3rd_AutoRifleman_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Artemis";
};

class 1st_meu_11th_stb_autorifleman_4th_unit:1st_meu_11th_stb_autorifleman_reserve_unit
{
    displayName = "(Apollo) Autorifleman";
    
    linkedItems[] = {
        "4th_AutoRifleman_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "4th_AutoRifleman_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Apollo";
};