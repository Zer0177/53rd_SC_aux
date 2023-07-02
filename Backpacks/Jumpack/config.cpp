/*class CfgPatches    
{   
    class 53rd_Jumpacks    
    {   
        author="UR MOM";  
        requiredAddons[]=   
        {   
            "NSM_patch_end"
        };  
        requiredVersion=0.1;    
        units[]={   
        };  
        weapons[]={};   
        vehicles[]={    
            "53rd_Hephaestus_Jumpack"
        };  
    };  
};  
class CfgVehicles   
{   
    class NSM_neutral_XD_1_backpack;    
    class 53rd_Hephaestus_Jumpack: NSM_neutral_XD_1_backpack
    {
		dlc="53rd Aux";
        scope = 2;
        scopeCurator=2;
        author = "Namenai / Ithias";
        displayname = "[53rd] Jumpack";
        NSM_jumppack_is_jumppack = 1;
        NSM_jumppack_spam_delay = 1;
        NSM_jumppack_energy_capacity = 200; 
        NSM_jumppack_recharge = 5;
        NSM_jumppack_jump_types[] = {
            {
                "Forward Jump",// Name of jump
                {
                    15,     //forward velo(0)
                    7,     //verticle velo(1)
                    20,     //cost(2)
                    0,      //angle(3)
                    0,      //directional(4)(no=0,yes=1)?
                    0       //can prone jump(5)(no=0,yes=1)?
                }
            },
        };
        NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}}; 
        NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
        maximumload = 350;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
    };
};