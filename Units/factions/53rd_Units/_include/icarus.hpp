class 1st_meu_11th_stb_icarus_cadet_unit:1st_meu_11th_stb_rifleman_hades_unit
{
    displayName = "(Icarus) Cadet";
    
    linkedItems[] = {
        "Icarus_Cadet_Armor", "Icarus_Helmet_Cadet", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Icarus_Cadet_Armor", "Icarus_Helmet_Cadet", 
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
    editorSubcategory = "MEU_Men_Icarus";
    backpack = "B_Parachute";
};

class 1st_meu_11th_stb_icarus_ensign_unit:1st_meu_11th_stb_icarus_cadet_unit
{
    displayName = "(Icarus) WO";
    
    linkedItems[] = {
        "Icarus_Pilot_Ensign", "Icarus_Helmet_Pilot", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Icarus_Pilot_Ensign", "Icarus_Helmet_Pilot", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
};

class 1st_meu_11th_stb_icarus_officer_unit:1st_meu_11th_stb_icarus_cadet_unit
{
    displayName = "(Icarus) Officer";
    
    linkedItems[] = {
        "Icarus_Pilot_Officer", "Icarus_Helmet_Officer", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Icarus_Pilot_Officer", "Icarus_Helmet_Officer", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
};

class 1st_meu_11th_stb_icarus_fl_unit:1st_meu_11th_stb_icarus_cadet_unit
{
    displayName = "(Icarus) Flight Leader";
    
    linkedItems[] = {
        "Icarus_FL_Armor", "Icarus_Helmet_Flightleader", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Icarus_FL_Armor", "Icarus_Helmet_Flightleader", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
};

class 1st_meu_11th_stb_icarus_sl_unit:1st_meu_11th_stb_icarus_cadet_unit
{
    displayName = "(Icarus) Squadron Leader";
    
    linkedItems[] = {
        "Icarus_Pilot_Officer", "Icarus_Helmet_Squadronleader", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Icarus_Pilot_Officer", "Icarus_Helmet_Squadronleader", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
};

class 1st_meu_11th_stb_icarus_pilot_unit:1st_meu_11th_stb_icarus_cadet_unit
{
    displayName = "(Icarus) Pilot";
    
    linkedItems[] = {
        "Icarus_Pilot_Armor", "Icarus_Helmet_Pilot", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
    respawnLinkedItems[] = {
        "Icarus_Pilot_Armor", "Icarus_Helmet_Pilot", 
        "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "OPTRE_NVG", "", "", "", "", "", "", "", ""
    };
};