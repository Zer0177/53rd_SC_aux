class CfgPatches {
	class Hephaestus_Uniforms {
		units[] = 
        {
            "53rd_Hephaestus_BDU_V_Slim"
        };
		weapons[] = 
        {
            "53rd_Hephaestus_BDU_Slim"
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
	class VES_BDU_R_Evolved_Slim;

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
class 53rd_Hephaestus_BDU_R_Slim: VES_BDU_R_Evolved_Slim
    {
        dlc="53rd";
		scope=2;
		author="Ithias";
		displayName="[53rd] Combat Uniform Rolled";
		picture="\optre_unsc_units\army\icons\army_uniform";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply120";
			mass=40;
			uniformType = "Neopren";
			uniformModel="";
			uniformClass="53rd_Hephaestus_BDU_R_V_Slim";
		};
	};
};


class CfgVehicles
{
class VES_BDU_V_Evolved_Slim;
class VES_BDU_R_V_Evolved_Slim;

	
class 53rd_Hephaestus_BDU_V_Slim: VES_BDU_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_Slim";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO",
			"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO"
		};
	};
class 53rd_Hephaestus_BDU_R_V_Slim: VES_BDU_R_V_Evolved_Slim
	{
		scope=1;
        uniformclass="53rd_Hephaestus_BDU_R_Slim";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Uniforms\V_BDU_R_Evolved_CO",
            "V_FZ_Armor\Data\Uniforms\V_BDU_R_Evolved_CO"
        };
	};
};