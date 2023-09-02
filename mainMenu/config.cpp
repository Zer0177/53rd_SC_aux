class CfgPatches
{
	class mainmenu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Enoch_Loadorder",
			"cba_main",
			"OPTRE_Core",
			"19th_Fleet_Armor"
		};
	};
};
class CfgWorlds
{
	class CAWorld;
	class Altis: CAWorld
	{
		cutscenes[]=
		{
			"mymainmenu"
		};
	};
	class Stratis: CAWorld
	{
		cutscenes[]=
		{
			"mymainmenu"
		};
	};
	class Enoch: CAWorld
	{
		cutscenes[]=
		{
			"mymainmenu"
		};
	};
	class VR: CAWorld
	{
		cutscenes[]=
		{
			"mymainmenu"
		};
	};
	initWorld="Stratis";
	demoWorld="Stratis";
};
class CfgMissions
{
	class Cutscenes
	{
		class mymainmenu
		{
			directory="mainMenu\scenes\mainmenu.stratis";
		};
	};
};
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	enableDisplay=0;
	delete Spotlight;
	class controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
	};
};
class cfgMods
{
	author="TheMetalJacket0";
	timepacked="1688480023";
};
