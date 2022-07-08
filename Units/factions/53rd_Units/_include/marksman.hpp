class 1st_meu_11th_stb_marksman_reserve_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Reserve) Marksman";
    
    linkedItems[] = {
        "11_Marksman_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "11_Marksman_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    weapons[] = {"MEU_OPTRE_Commando_Black_AI","Throw","Put"};
    respawnWeapons[] = {"MEU_OPTRE_Commando_Black_AI","Throw","Put"};
    magazines[] = {
        MACRO_MAG_x10(Command_20Rnd_65_TracerR_Mag),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {
        MACRO_MAG_x10(Command_20Rnd_65_TracerR_Mag),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };
    editorSubcategory = "MEU_Men";
    icon = "iconManRecon";
    
};

class 1st_meu_11th_stb_marksman_hades_unit:1st_meu_11th_stb_marksman_reserve_unit
{
    displayName = "(Hades) Marksman";
    
    linkedItems[] = {
        "Hades_Marksman_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Hades_Marksman_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Hades";
};

class 1st_meu_11th_stb_marksman_typhon_unit:1st_meu_11th_stb_marksman_reserve_unit
{
    displayName = "(Typhon) Marksman";
    
    linkedItems[] = {
        "Typhon_Marksman_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Typhon_Marksman_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Typhon";
};

class 1st_meu_11th_stb_marksman_3rd_unit:1st_meu_11th_stb_marksman_reserve_unit
{
    displayName = "(Artemis) Marksman";
    
    linkedItems[] = {
        "3rd_Marksman_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "3rd_Marksman_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Artemis";
};

class 1st_meu_11th_stb_marksman_4th_unit:1st_meu_11th_stb_marksman_reserve_unit
{
    displayName = "(Apollo) Marksman";
    
    linkedItems[] = {
        "4th_Marksman_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "4th_Marksman_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Apollo";
};