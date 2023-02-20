class CfgPatches {
	class Hephaestus_Armor {
		units[] = 
        {
            "",
			""
        };
		weapons[] = 
        {
            "53rd_Hephaestus_BDU_Slim",
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class VES_BDU_Evolved_Slim;

//Uniform
class 53rd_Hephaestus_BDU_Slim: VES_BDU_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_V_Slim";
		};
	};
};


class CfgVehicles
{
class VES_BDU_V_Urban;

	
class 53rd_Hephaestus_BDU_V_Slim: VES_BDU_V_Urban
	{
		scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
        uniformclass="53rd_Hephaestus_BDU_Slim";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO",
			"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO"
		};
	};
};