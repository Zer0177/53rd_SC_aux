class 1st_meu_11th_stb_gl_reserve_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Reserve) Grenadier";
    
    linkedItems[] = {
        "11_GL_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "11_GL_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    weapons[] = {"OPTRE_MA5CGL","Throw","Put"};
    respawnWeapons[] = {"OPTRE_MA5CGL","Throw","Put"};
    magazines[] = {
        MACRO_MAG_x10(OPTRE_32Rnd_762x51_Mag_Tracer),
        MACRO_MAG_x6(3Rnd_HE_Grenade_shell),
        MACRO_MAG_x5(OPTRE_1Rnd_Smoke_Grenade_shell),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {
        MACRO_MAG_x10(OPTRE_32Rnd_762x51_Mag_Tracer),
        MACRO_MAG_x3(3Rnd_HE_Grenade_shell),
        MACRO_MAG_x5(OPTRE_1Rnd_Smoke_Grenade_shell),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };
    editorSubcategory = "MEU_Men";
    icon = "iconManExplosive";
};

class 1st_meu_11th_stb_gl_hades_unit:1st_meu_11th_stb_gl_reserve_unit
{
    displayName = "(Hades) Grenadier";
    
    linkedItems[] = {
        "Hades_GL_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Hades_GL_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Hades";
};

class 1st_meu_11th_stb_gl_typhon_unit:1st_meu_11th_stb_gl_reserve_unit
{
    displayName = "(Typhon) Grenadier";
    
    linkedItems[] = {
        "Typhon_GL_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Typhon_GL_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Typhon";
};

class 1st_meu_11th_stb_gl_3rd_unit:1st_meu_11th_stb_gl_reserve_unit
{
    displayName = "(Artemis) Grenadier";
    
    linkedItems[] = {
        "3rd_GL_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "3rd_GL_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Artemis";
};

class 1st_meu_11th_stb_gl_4th_unit:1st_meu_11th_stb_gl_reserve_unit
{
    displayName = "(Apollo) Grenadier";
    
    linkedItems[] = {
        "4th_GL_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "4th_GL_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Apollo";
};