class CfgPatches {
	class 53rd_Custom_Helmet_BigBen
	{
			units[] = 
			{};
			weapons[] = 
			{};
			requiredVersion = 0.100000;
			requiredAddons[] = {};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class HaloInf_Marine_WDL_NV_headgear;
	class HaloInf_Marine_WDL_headgear;
	class OPTRE_UNSC_Commando_Helmet;
	
	
	/////HELMETS/////
		class 53rd_Commando_BigBen: OPTRE_UNSC_Commando_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Custom Helmet (Big Ben)";
			model="OPTRE_UNSC_Units\Army\commando_helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Armor\Volare_Customs\BigBen\53rd_BigBen_Helmet.paa",
				"53rd_SC_aux\Armor\Volare_Customs\BigBen\53rd_BigBen_Visor.paa",
			};
		};
};