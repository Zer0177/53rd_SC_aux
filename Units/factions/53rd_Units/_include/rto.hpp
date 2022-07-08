class 1st_meu_11th_stb_rto_reserve_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Reserve) RTO";
    
    linkedItems[] = {
        "11_RTO_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "11_RTO_Armor", "11_Helmet_Recruit", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    weapons[] = {"OPTRE_MA5C_AC","OPTRE_M319s","Throw","Put"};
    respawnWeapons[] = {"OPTRE_MA5C_AC","OPTRE_M319s","Throw","Put"};
    magazines[] = {
        
        MACRO_MAG_x10(OPTRE_32Rnd_762x51_Mag_Tracer),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {
        MACRO_MAG_x10(OPTRE_32Rnd_762x51_Mag_Tracer),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };
    backpack = "MEU_11th_OPTRE_ANPRC_521_Black_AI";
    editorSubcategory = "MEU_Men";
};

class 1st_meu_11th_stb_rto_hades_unit:1st_meu_11th_stb_rto_reserve_unit
{
    displayName = "(Hades) RTO";
    
    linkedItems[] = {
        "Hades_RTO_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Hades_RTO_Armor", "Hades_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Hades";
};

class 1st_meu_11th_stb_rto_typhon_unit:1st_meu_11th_stb_rto_reserve_unit
{
    displayName = "(Typhon) RTO";
    
    linkedItems[] = {
        "Typhon_RTO_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Typhon_RTO_Armor", "Typhon_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Typhon";
};

class 1st_meu_11th_stb_rto_3rd_unit:1st_meu_11th_stb_rto_reserve_unit
{
    displayName = "(Artemis) RTO";
    
    linkedItems[] = {
        "3rd_RTO_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "3rd_RTO_Armor", "3_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Artemis";
};

class 1st_meu_11th_stb_rto_4th_unit:1st_meu_11th_stb_rto_reserve_unit
{
    displayName = "(Apollo) RTO";
    
    linkedItems[] = {
        "4th_RTO_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "4th_RTO_Armor", "4_Helmet_slotted", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    editorSubcategory = "MEU_Men_Apollo";
};