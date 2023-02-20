/*class CfgPatches
{
	class 53rd_Launchers_NLAW
	{
		units[]={};
		weapons[]=
		{
			"53rd_NLAW"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
		author="53rd AUX Team";
	};
};
class CfgWeapons
	{
		class launch_RPG32_F;
		class 53rd_NLAW: launch_RPG32_F
		{
			author="Fireteam Zulu & Shadow & Body";
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] M48B 'Cricket' NLAW";
			baseWeapon="53rd_NLAW";
			model="\V_SO_Weapons\data\M48\M48B_Cricket";
			picture="\V_SO_Weapons\data\M48\M48B_Cricket";
			initSpeed=80;
			modelOptics="\OPTRE_Weapons\Rockets\M41_Optic";
			ODST_1="OPTRE_ODST_HUD_AmmoCount_RL";
			Glasses="OPTRE_GLASS_HUD_AmmoCount_RL";
			Eye="OPTRE_EYE_HUD_AmmoCount_RL";
			HUD_BulletInARows=1;
			HUD_TotalPosibleBullet=1;
			magazines[]=
			{
				"OPTRE_1Rnd_50x137_HEAT",
				"OPTRE_1Rnd_50x137_HE",
				"OPTRE_1Rnd_50x137_PEN",
				"OPTRE_1Rnd_50x137_THERMO",
				"OPTRE_1Rnd_50x137_Tekcirc"
			};
			magazineWell[]={};
		};
	};
