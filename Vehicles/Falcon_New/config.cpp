	class CfgPatches
	{
		class 53rd_Vehicles_Air_Falcon_II
		{
			units[]=
			{
				"53rd_CMA_falcon",
				"53rd_UNSC_falcon_armed,"
			};
			weapons[]={};
			requiredVersion=0.1;
			requiredAddons[]={};
			magazines[]={};
		};
	};
	class CfgVehicles
	{
		class OPTRE_UNSC_falcon;
		class OPTRE_UNSC_falcon_armed_S;
		class 53rd_CMA_falcon: OPTRE_UNSC_falcon
		{
			editorPreview="\OPTRE_Core\Data\logo_ca.paa";
			displayName="[53rd] UH-144 Jay  (Unarmed)";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			forceInGarage=1;
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_Rotary";
			crew="53rd_Volare_airmen_unit";
			tf_range=25000;
			tf_isolatedAmount=0.40000001;
			tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
			tf_hasLRradio=1;
			enableRadio=1;
			weapons[]=
			{
				"OPTRE_M638",
				"CMFlareLauncher",
				"Laserdesignator_pilotCamera"
			};
			magazines[]=
			{
				"OPTRE_2000Rnd_20mm_HE",
				"OPTRE_2000Rnd_20mm_HE",
				"168Rnd_CMFlare_Chaff_Magazine",
				"Laserbatteries"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Main_co.paa",
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Attachments_co.paa",
				"\optre_vehicles_air\falcon\data\falcon_interior_co.paa"
			};
		};
		class 53rd_UNSC_falcon_armed: OPTRE_UNSC_falcon_armed_S
		{
			editorPreview="\OPTRE_Core\Data\logo_ca.paa";
			displayName="[53rd] UH-144 Jay  (Armed)";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			forceInGarage=1;
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_Rotary";
			crew="53rd_Volare_airmen_unit";
			tf_range=25000;
			tf_isolatedAmount=0.40000001;
			tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
			tf_hasLRradio=1;
			enableRadio=1;
			weapons[]=
			{
				"OPTRE_M638",
				"CMFlareLauncher",
				"Laserdesignator_pilotCamera"
			};
			magazines[]=
			{
				"OPTRE_2000Rnd_20mm_HE",
				"OPTRE_2000Rnd_20mm_HE",
				"168Rnd_CMFlare_Chaff_Magazine",
				"Laserbatteries"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Main_co.paa",
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Attachments_co.paa",
				"\optre_vehicles_air\falcon\data\falcon_interior_co.paa"
			};
		};
	};
