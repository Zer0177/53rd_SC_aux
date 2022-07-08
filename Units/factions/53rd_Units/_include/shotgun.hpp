class 1st_meu_11th_stb_shotgun_reserve_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Reserve) Shotgun";
    
    linkedItems[] = {
        "11_SG_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "11_SG_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    weapons[] = {"MEU_OPTRE_M45TAC_AI","Throw","Put"};
    respawnWeapons[] = {"MEU_OPTRE_M45TAC_AI","Throw","Put"};
    magazines[] = {
        MACRO_MAG_x5(OPTRE_12Rnd_8Gauge_Pellets),
        MACRO_MAG_x5(OPTRE_12Rnd_8Gauge_Slugs),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {
        MACRO_MAG_x5(OPTRE_12Rnd_8Gauge_Pellets),
        MACRO_MAG_x5(OPTRE_12Rnd_8Gauge_Slugs),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };
    editorSubcategory = "MEU_Men";
};

class 1st_meu_11th_stb_shotgun_hades_unit:1st_meu_11th_stb_shotgun_reserve_unit
{
    displayName = "(Hades) Shotgun";
    
    linkedItems[] = {
        "Hades_SG_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Hades_SG_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Hades";
};

class 1st_meu_11th_stb_shotgun_typhon_unit:1st_meu_11th_stb_shotgun_reserve_unit
{
    displayName = "(Typhon) Shotgun";
    
    linkedItems[] = {
        "Typhon_SG_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Typhon_SG_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Typhon";
};

class 1st_meu_11th_stb_shotgun_3rd_unit:1st_meu_11th_stb_shotgun_reserve_unit
{
    displayName = "(Artemis) Shotgun";
    
    linkedItems[] = {
        "3rd_SG_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "3rd_SG_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Artemis";
};

class 1st_meu_11th_stb_shotgun_4th_unit:1st_meu_11th_stb_shotgun_reserve_unit
{
    displayName = "(Apollo) Shotgun";
    
    linkedItems[] = {
        "4th_SG_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "4th_SG_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Apollo";
};