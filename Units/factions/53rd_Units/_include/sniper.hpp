class 1st_meu_11th_stb_sniper_reserve_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Reserve) Sniper";
    
    linkedItems[] = {
        "11_Sniper_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "11_Sniper_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    weapons[] = {"MEU_OPTRE_SRS99D_AI","Throw","Put"};
    respawnWeapons[] = {"MEU_OPTRE_SRS99D_AI","Throw","Put"};
    magazines[] = {
        MACRO_MAG_x10(OPTRE_4Rnd_145x114_Mag_APFSDST),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {
        MACRO_MAG_x10(OPTRE_4Rnd_145x114_Mag_APFSDST),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };

    icon = "iconManRecon";

    camouflage = 0.4;
    sensitivity = 4;
    threat[] = {1.5,0.1,0.1};
    editorSubcategory = "MEU_Men";
};

class 1st_meu_11th_stb_sniper_hades_unit:1st_meu_11th_stb_sniper_reserve_unit
{
    displayName = "(Hades) Sniper";
    
    linkedItems[] = {
        "Hades_Sniper_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Hades_Sniper_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Hades";
};

class 1st_meu_11th_stb_sniper_typhon_unit:1st_meu_11th_stb_sniper_reserve_unit
{
    displayName = "(Typhon) Sniper";
    
    linkedItems[] = {
        "Typhon_Sniper_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Typhon_Sniper_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Typhon";
};

class 1st_meu_11th_stb_sniper_3rd_unit:1st_meu_11th_stb_sniper_reserve_unit
{
    displayName = "(Artemis) Sniper";
    
    linkedItems[] = {
        "3rd_Sniper_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "3rd_Sniper_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Artemis";
};

class 1st_meu_11th_stb_sniper_4th_unit:1st_meu_11th_stb_sniper_reserve_unit
{
    displayName = "(Apollo) Sniper";
    
    linkedItems[] = {
        "4th_Sniper_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "4th_Sniper_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Apollo";
};