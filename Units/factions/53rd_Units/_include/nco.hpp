class 1st_meu_11th_stb_GySgt_reserve_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Reserve) GySgt";
    
    linkedItems[] = {
        "11_GYSGT_Armor", "11_Helmet_SGT", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "11_GYSGT_Armor", "11_Helmet_SGT", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };

    weapons[] = {"OPTRE_MA5C_AC","Throw","Put"};
    respawnWeapons[] = {"OPTRE_MA5C_AC","Throw","Put"};
    magazines[] = {
        MACRO_MAG_x10(OPTRE_32Rnd_762x51_Mag_Tracer),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
    respawnMagazines[] = {
        MACRO_MAG_x10(OPTRE_32Rnd_762x51_Mag_Tracer),
        MACRO_MAG_x2(OPTRE_M9_Frag),"OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"
    };

    icon = "iconManOfficer";
    backpack = "OPTRE_ANPRC_515";
    editorSubcategory = "MEU_Men";
};

// Hades
    class 1st_meu_11th_stb_ssgt_hades_unit:1st_meu_11th_stb_GySgt_reserve_unit
    {
        displayName = "(Hades) SSGT";
        
        linkedItems[] = {
            "Hades_GYSGT_Armor", "Hades_Helmet_SSGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "Hades_GYSGT_Armor", "Hades_Helmet_SSGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        editorSubcategory = "MEU_Men_Hades";
    };

    class 1st_meu_11th_stb_cpl_hades_unit:1st_meu_11th_stb_ssgt_hades_unit
    {
        displayName = "(Hades) Corporal";
        
        linkedItems[] = {
            "Hades_GYSGT_Armor", "Hades_Helmet_Cpl", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "Hades_GYSGT_Armor", "Hades_Helmet_Cpl", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
    };

    class 1st_meu_11th_stb_sgt_hades_unit:1st_meu_11th_stb_ssgt_hades_unit
    {
        displayName = "(Hades) Sgt";
        
        linkedItems[] = {
            "Hades_GYSGT_Armor", "Hades_Helmet_SGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "Hades_GYSGT_Armor", "Hades_Helmet_SGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
    };
//End

// Typhon
    class 1st_meu_11th_stb_ssgt_typhon_unit:1st_meu_11th_stb_GySgt_reserve_unit
    {
        displayName = "(Typhon) SSGT";
        
        linkedItems[] = {
            "Typhon_GYSGT_Armor", "Typhon_Helmet_SSGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "Typhon_GYSGT_Armor", "Typhon_Helmet_SSGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        editorSubcategory = "MEU_Men_Typhon";
    };

    class 1st_meu_11th_stb_sgt_typhon_unit:1st_meu_11th_stb_ssgt_typhon_unit
    {
        displayName = "(Typhon) SGT";
        
        linkedItems[] = {
            "Typhon_GYSGT_Armor", "Typhon_Helmet_SGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "Typhon_GYSGT_Armor", "Typhon_Helmet_SGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
    };

    class 1st_meu_11th_stb_cpl_typhon_unit:1st_meu_11th_stb_ssgt_typhon_unit
    {
        displayName = "(Typhon) Corporal";
        
        linkedItems[] = {
            "Typhon_GYSGT_Armor", "Typhon_Helmet_Cpl", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "Typhon_GYSGT_Armor", "Typhon_Helmet_Cpl", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
    };
//END

//3rd
    class 1st_meu_11th_stb_ssgt_3rd_unit:1st_meu_11th_stb_GySgt_reserve_unit
    {
        displayName = "(Artemis) SSGT";
        
        linkedItems[] = {
            "C_GYSGT_Armor", "3_Helmet_SSGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "C_GYSGT_Armor", "3_Helmet_SSGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        editorSubcategory = "MEU_Men_Artemis";
    };
    class 1st_meu_11th_stb_sgt_3rd_unit:1st_meu_11th_stb_ssgt_3rd_unit
    {
        displayName = "(Artemis) SGT";
        
        linkedItems[] = {
            "C_GYSGT_Armor", "3_Helmet_SGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "C_GYSGT_Armor", "3_Helmet_SGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
    };
    class 1st_meu_11th_stb_cpl_3rd_unit:1st_meu_11th_stb_ssgt_3rd_unit
    {
        displayName = "(Artemis) Corporal";
        
        linkedItems[] = {
            "C_GYSGT_Armor", "3_Helmet_Cpl", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "C_GYSGT_Armor", "3_Helmet_Cpl", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
    };
//end

//4th
    class 1st_meu_11th_stb_ssgt_4th_unit:1st_meu_11th_stb_GySgt_reserve_unit
    {
        displayName = "(Apollo) GySgt";
        
        linkedItems[] = {
            "D_GYSGT_Armor", "4_Helmet_SSGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "D_GYSGT_Armor", "4_Helmet_SSGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        editorSubcategory = "MEU_Men_Apollo";
    };
    class 1st_meu_11th_stb_sgt_4th_unit:1st_meu_11th_stb_ssgt_4th_unit
    {
        displayName = "(Apollo) SGT";
        
        linkedItems[] = {
            "D_GYSGT_Armor", "4_Helmet_SGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "D_GYSGT_Armor", "4_Helmet_SGT", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
    };
    class 1st_meu_11th_stb_cpl_4th_unit:1st_meu_11th_stb_ssgt_4th_unit
    {
        displayName = "(Apollo) Corporal";
        
        linkedItems[] = {
            "D_GYSGT_Armor", "4_Helmet_Cpl", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
        respawnLinkedItems[] = {
            "D_GYSGT_Armor", "4_Helmet_Cpl", 
            "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
        };
    };
//end