//Whatever common macros you might need, like formations
#define MACRO_UNIT_STUFF_TEXTURE_PATH 1st_meu_units\_textures
#define MACRO_UNIT_STUFF_KOSO_TEXTURE_PATH MACRO_UNIT_STUFF_TEXTURE_PATH\opfor\koso
#define MACRO_UNIT_STUFF_FRIDEN_TEXTURE_PATH MACRO_UNIT_STUFF_TEXTURE_PATH\opfor\friden


// squad x3 team
    #define MACRO_UNIT_GROUP_SQUAD_3x_TEAMS(classname,groupname,groupside,groupfaction,groupleader,medic,ft11,ft12,ft13,ft14,ft21,ft22,ft23,ft24,ft31,ft32,ft33,ft34)\
    class classname\
    {\
        name = groupname;\
        side = groupside;\
        faction = groupfaction;\
        rarityGroup = 0.3;\
        class Group_leader\
        {\
            side = groupside;\
            vehicle = groupleader;\
            rank = "SERGEANT";\
            position[] = {0,0,0};\
        };\
        class Group_medic\
        {\
            side = groupside;\
            vehicle = medic;\
            rank = "CORPORAL";\
            position[] = {5,0,0};\
        };\
        class ft1_leader\
        {\
            side = groupside;\
            vehicle = ft11;\
            rank = "CORPORAL";\
            position[] = {5,-5,0};\
        };\
        class ft1_ar\
        {\
            side = groupside;\
            vehicle = ft12;\
            rank = "PRIVATE";\
            position[] = {10,-10,0};\
        };\
        class ft1_gl\
        {\
            side = groupside;\
            vehicle = ft13;\
            rank = "PRIVATE";\
            position[] = {15,-10,0};\
        };\
        class ft1_at\
        {\
            side = groupside;\
            vehicle = ft14; \
            rank = "PRIVATE";\
            position[] = {20,-10,0};\
        };\
        class ft2_leader\
        {\
            side = groupside;\
            vehicle = ft21;\
            rank = "CORPORAL";\
            position[] = {25,-5,0};\
        };\
        class ft2_ar\
        {\
            side = groupside;\
            vehicle = ft22;\
            rank = "PRIVATE";\
            position[] = {30,-10,0};\
        };\
        class ft2_mk\
        {\
            side = groupside;\
            vehicle = ft23;\
            rank = "PRIVATE";\
            position[] = {35,-10,0};\
        };\
        class ft2_at\
        {\
            side = groupside;\
            vehicle = ft24;\
            rank = "PRIVATE";\
            position[] = {40,-10,0};\
        };\
        class ft3_leader\
        {\
            side = groupside;\
            vehicle = ft31;\
            rank = "CORPORAL";\
            position[] = {45,-5,0};\
        };\
        class ft3_ar\
        {\
            side = groupside;\
            vehicle = ft32;\
            rank = "PRIVATE";\
            position[] = {50,-10,0};\
        };\
        class ft3_gl\
        {\
            side = groupside;\
            vehicle = ft33;\
            rank = "PRIVATE";\
            position[] = {55,-10,0};\
        };\
        class ft3_aa\
        {\
            side = groupside;\
            vehicle = ft34;\
            rank = "PRIVATE";\
            position[] = {60,-10,0};\
        };\
    };
//end

// sentry 2 men
    #define MACRO_UNIT_GROUP_SENTRY(classname,groupname,groupside,groupfaction,sent1,sent2)\
    class classname\
    {\
        name = groupname;\
        side = groupside;\
        faction = groupfaction;\
        class Unit0\
        {\
            side = groupside;\
            vehicle = sent1;\
            rank = "CORPORAL";\
            position[] = {0, 0, 0};\
        };\
        class Unit1\
        {\
            side = groupside;\
            vehicle = sent2;\
            rank = "PRIVATE";\
            position[] = {5, -5, 0};\
        };\
    };
//end

// Specialty group
    #define MACRO_UNIT_GROUP_4_MAN_SPECIAL(classname,groupname,groupside,groupfaction,unit1,unit2,unit3,unit4)\
    class classname\
    {\
        name = groupname;\
        side = groupside;\
        faction = groupfaction;\
        class Unit0\
        {\
            side = groupside;\
            vehicle = unit1;\
            rank = "SERGEANT";\
            position[] = {0, 0, 0};\
        };\
        class Unit1\
        {\
            side = groupside;\
            vehicle = unit2;\
            rank = "CORPORAL";\
            position[] = {5, -5, 0};\
        };\
        class Unit2\
        {\
            side = groupside;\
            vehicle = unit3;\
            rank = "PRIVATE";\
            position[] = {-5, -5, 0};\
        };\
        class Unit3\
        {\
            side = groupside;\
            vehicle = unit4;\
            rank = "PRIVATE";\
            position[] = {10, -10, 0};\
        };\
    };
//end
            