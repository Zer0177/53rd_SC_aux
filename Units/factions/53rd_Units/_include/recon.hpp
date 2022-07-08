class 1st_meu_11th_stb_recon_reserve_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Reserve) Recon";
    
    linkedItems[] = {
        "11_Sniper_Armor", "11_Recon_Helmet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "11_Sniper_Armor", "11_Recon_Helmet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    weapons[] = {"MEU_OPTRE_M58S_AI","Throw","Put"};
    respawnWeapons[] = {"MEU_OPTRE_M58S_AI","Throw","Put"};
    magazines[] = {
        MACRO_MAG_x10(OPTRE_42Rnd_95x40_Mag_Tracer),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {
        MACRO_MAG_x10(OPTRE_42Rnd_95x40_Mag_Tracer),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };

    icon = "iconManRecon";

    camouflage = 0.5;
    sensitivity = 8;
    threat[] = {1.2,0.1,0.1};

    backpack = "OPTRE_ANPRC_515";
    editorSubcategory = "MEU_Men";
};

class 1st_meu_11th_stb_recon_hades_unit:1st_meu_11th_stb_recon_reserve_unit
{
    displayName = "(Hades) Recon";
    
    linkedItems[] = {
        "Hades_Sniper_Armor", "11_Recon_Helmet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Hades_Sniper_Armor", "11_Recon_Helmet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Hades";
};

class 1st_meu_11th_stb_recon_typhon_unit:1st_meu_11th_stb_recon_reserve_unit
{
    displayName = "(Typhon) Recon";
    
    linkedItems[] = {
        "Typhon_Sniper_Armor", "11_Recon_Helmet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Typhon_Sniper_Armor", "11_Recon_Helmet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Typhon";
};

class 1st_meu_11th_stb_recon_3rd_unit:1st_meu_11th_stb_recon_reserve_unit
{
    displayName = "(Artemis) Recon";
    
    linkedItems[] = {
        "3rd_Sniper_Armor", "11_Recon_Helmet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "3rd_Sniper_Armor", "11_Recon_Helmet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    editorSubcategory = "MEU_Men_Artemis";
};

class 1st_meu_11th_stb_recon_4th_unit:1st_meu_11th_stb_recon_reserve_unit
{
    displayName = "(Apollo) Recon";
    
    linkedItems[] = {
        "4th_Sniper_Armor", "11_Recon_Helmet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "4th_Sniper_Armor", "11_Recon_Helmet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Apollo";
};