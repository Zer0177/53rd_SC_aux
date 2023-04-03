class XtdGearModels
{
	class CfgWeapons
	{
		class HephaestusHelm
		{
			label = "Hephaestus Helmets";
			author = "Ithias";
			options[] = {"Helm_Camo","Type","dp"};
			
			class Helm_Camo
			{
				label = "Helm Camo";
				values[] = {"Urban","Woodland","Desert","Snow"};
				changeingame = 1;
                changedelay  = 0;
				class Urban
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Desert
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Snow
				{
					label = "Snow";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class Type
			{
				label = "Type";
				values[] = {"Vac","SPC","Normal"};
				class Vac
				{
					label = "Vac Sealed";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class SPC
				{
					label = "Vac Sealed SPC+";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Normal
				{
					label = "Normal";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class dp
			{
				label = "Polarization";
				values[] = {"yes","no"};
				changeingame = 1;
                changedelay  = 0;
				class yes
				{
					label = "Yes?";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class no
				{
					label = "no.";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class HephaestusHelmMedical
		{
			label = "Hephaestus Medical Helmets";
			author = "Fixer";
			options[] = {"Helm_Camo","Type","dp"};
			
			class Helm_Camo
			{
				label = "Helm Camo";
				values[] = {"Urban","Woodland","Desert","Snow"};
				changeingame = 1;
                changedelay  = 0;
				class Urban
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Desert
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Snow
				{
					label = "Snow";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class Type
			{
				label = "Type";
				values[] = {"Vac","SPC","Normal"};
				class Vac
				{
					label = "Vac Sealed";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class SPC
				{
					label = "Vac Sealed SPC+";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Normal
				{
					label = "Normal";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class dp
			{
				label = "Polarization";
				values[] = {"yes","no"};
				changeingame = 1;
                changedelay  = 0;
				class yes
				{
					label = "Yes?";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class no
				{
					label = "no.";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
        };
		class HephaestusVest
		{
			label = "Hephaestus Vests";
			author = "Ithias";
			options[] = {"Vest_Camo","Type"};
			
			class Vest_Camo
			{
				label = "Vest Camo";
				values[] = {"Urban","Woodland","Desert","Snow"};
				changeingame = 1;
                changedelay  = 0;
				class Urban
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Desert
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Snow
				{
					label = "Snow";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class Type
			{
				label = "Type";
				values[] = {"Rifleman","Specialist","TL","SL","Medic","JTAC"};
				class Rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Specialist
				{
					label = "Specialist";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class TL
				{
					label = "Team Lead";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class SL
				{
					label = "Squad Lead";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class JTAC
				{
					label = "JTAC";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
    };
};
class XtdGearInfos
{
    class CfgWeapons 
    {
        //helmets
		class 53rd_Helmet_Vac_Sealed_Rifleman_Urban
		{
		model = "HephaestusHelm";
		Helm_Camo = "Urban";
		Type = "Vac";
        dp="yes";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Urban:53rd_Helmet_Vac_Sealed_Rifleman_Urban
		{
		Type = "SPC";
		};
		class 53rd_Helmet_Normal_Urban:53rd_Helmet_Vac_Sealed_Rifleman_Urban
		{
		Type = "Normal";
		};
		class 53rd_Helmet_Vac_Sealed_Rifleman_Urban_dp
		{
		model = "HephaestusHelm";
		Helm_Camo = "Urban";
		Type = "Vac";
        dp="no";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Urban_dp:53rd_Helmet_Vac_Sealed_Rifleman_Urban_dp
		{
		Type = "SPC";
		};
        
		class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland
		{
		model = "HephaestusHelm";
		Helm_Camo = "Woodland";
		Type = "Vac";
        dp="yes";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Woodland:53rd_Helmet_Vac_Sealed_Rifleman_Woodland
		{
		Type = "SPC";
		};
		class 53rd_Helmet_Normal_Woodland:53rd_Helmet_Vac_Sealed_Rifleman_Woodland
		{
		Type = "Normal";
		};
		class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland_dp
		{
		model = "HephaestusHelm";
		Helm_Camo = "Woodland";
		Type = "Vac";
        dp="no";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Woodland_dp:53rd_Helmet_Vac_Sealed_Rifleman_Woodland_dp
		{
		Type = "SPC";
		};
        
		class 53rd_Helmet_Vac_Sealed_Rifleman_Desert
		{
		model = "HephaestusHelm";
		Helm_Camo = "Desert";
		Type = "Vac";
        dp="yes";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Desert:53rd_Helmet_Vac_Sealed_Rifleman_Desert
		{
		Type = "SPC";
		};
		class 53rd_Helmet_Normal_Desert:53rd_Helmet_Vac_Sealed_Rifleman_Desert
		{
		Type = "Normal";
		};
		class 53rd_Helmet_Vac_Sealed_Rifleman_Desert_dp
		{
		model = "HephaestusHelm";
		Helm_Camo = "Desert";
		Type = "Vac";
        dp="no";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Desert_dp:53rd_Helmet_Vac_Sealed_Rifleman_Desert_dp
		{
		Type = "SPC";
		};
        
		class 53rd_Helmet_Vac_Sealed_Rifleman_Snow
		{
		model = "HephaestusHelm";
		Helm_Camo = "Snow";
		Type = "Vac";
        dp="yes";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Snow:53rd_Helmet_Vac_Sealed_Rifleman_Snow
		{
		Type = "SPC";
		};
		class 53rd_Helmet_Normal_Snow:53rd_Helmet_Vac_Sealed_Rifleman_Snow
		{
		Type = "Normal";
		};
		class 53rd_Helmet_Vac_Sealed_Rifleman_Snow_dp
		{
		model = "HephaestusHelm";
		Helm_Camo = "Snow";
		Type = "Vac";
        dp="no";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Snow_dp:53rd_Helmet_Vac_Sealed_Rifleman_Snow_dp
		{
		Type = "SPC";
		};
        
        //medical helmets
		class 53rd_Helmet_Vac_Sealed_Rifleman_Urban_Medical
		{
		model = "HephaestusHelmMedical";
		Helm_Camo = "Urban";
		Type = "Vac";
        dp="yes";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Urban_Medical:53rd_Helmet_Vac_Sealed_Rifleman_Urban_Medical
		{
		Type = "SPC";
		};
		class 53rd_Helmet_Normal_Urban_Medical:53rd_Helmet_Vac_Sealed_Rifleman_Urban_Medical
		{
		Type = "Normal";
		};class 53rd_Helmet_Vac_Sealed_Rifleman_Urban_Medical_dp
		{
		model = "HephaestusHelmMedical";
		Helm_Camo = "Urban";
		Type = "Vac";
        dp="no";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Urban_Medical_dp:53rd_Helmet_Vac_Sealed_Rifleman_Urban_Medical_dp
		{
		Type = "SPC";
		};
        
		class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland_Medical
		{
		model = "HephaestusHelmMedical";
		Helm_Camo = "Woodland";
		Type = "Vac";
        dp="yes";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Woodland_Medical:53rd_Helmet_Vac_Sealed_Rifleman_Woodland_Medical
		{
		Type = "SPC";
		};
		class 53rd_Helmet_Normal_Woodland_Medical:53rd_Helmet_Vac_Sealed_Rifleman_Woodland_Medical
		{
		Type = "Normal";
		};
		class 53rd_Helmet_Vac_Sealed_Rifleman_Woodland_Medical_dp
		{
		model = "HephaestusHelmMedical";
		Helm_Camo = "Woodland";
		Type = "Vac";
        dp="no";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Woodland_Medical_dp:53rd_Helmet_Vac_Sealed_Rifleman_Woodland_Medical_dp
		{
		Type = "SPC";
		};
        
		class 53rd_Helmet_Vac_Sealed_Rifleman_Desert_Medical
		{
		model = "HephaestusHelmMedical";
		Helm_Camo = "Desert";
		Type = "Vac";
        dp="yes";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Desert_Medical:53rd_Helmet_Vac_Sealed_Rifleman_Desert_Medical
		{
		Type = "SPC";
		};
		class 53rd_Helmet_Normal_Desert_Medical:53rd_Helmet_Vac_Sealed_Rifleman_Desert_Medical
		{
		Type = "Normal";
		};
		class 53rd_Helmet_Vac_Sealed_Rifleman_Desert_Medical_dp
		{
		model = "HephaestusHelmMedical";
		Helm_Camo = "Desert";
		Type = "Vac";
        dp="no";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Desert_Medical_dp:53rd_Helmet_Vac_Sealed_Rifleman_Desert_Medical_dp
		{
		Type = "SPC";
		};
        
		class 53rd_Helmet_Vac_Sealed_Rifleman_Snow_Medical
		{
		model = "HephaestusHelmMedical";
		Helm_Camo = "Snow";
		Type = "Vac";
        dp="yes";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Snow_Medical:53rd_Helmet_Vac_Sealed_Rifleman_Snow_Medical
		{
		Type = "SPC";
		};
		class 53rd_Helmet_Normal_Snow_Medical:53rd_Helmet_Vac_Sealed_Rifleman_Snow_Medical
		{
		Type = "Normal";
		};
		class 53rd_Helmet_Vac_Sealed_Rifleman_Snow_Medical_dp
		{
		model = "HephaestusHelmMedical";
		Helm_Camo = "Snow";
		Type = "Vac";
        dp="no";
		};
		class 53rd_Helmet_Vac_Sealed_SPC_Snow_Medical_dp:53rd_Helmet_Vac_Sealed_Rifleman_Snow_Medical_dp
		{
		Type = "SPC";
		};
        
        //armors
		class 53rd_Armor_Rifleman_Urban
		{
		model = "HephaestusVest";
		Vest_Camo = "Urban";
		Type = "Rifleman";
		};
		class 53rd_Armor_Specialist_Urban:53rd_Armor_Rifleman_Urban
		{
		Type = "Specialist";
		};
		class 53rd_Armor_TL_Urban:53rd_Armor_Rifleman_Urban
		{
		Type = "TL";
		};
		class 53rd_Armor_SL_Urban:53rd_Armor_Rifleman_Urban
		{
		Type = "SL";
		};
		class 53rd_Armor_Medic_Urban:53rd_Armor_Rifleman_Urban
		{
		Type = "Medic";
		};
		class 53rd_Armor_JTAC_Urban:53rd_Armor_Rifleman_Urban
		{
		Type = "JTAC";
		};

		class 53rd_Armor_Rifleman_Woodland
		{
		model = "HephaestusVest";
		Vest_Camo = "Woodland";
		Type = "Rifleman";
		};
		class 53rd_Armor_Specialist_Woodland:53rd_Armor_Rifleman_Woodland
		{
		Type = "Specialist";
		};
		class 53rd_Armor_TL_Woodland:53rd_Armor_Rifleman_Woodland
		{
		Type = "TL";
		};
		class 53rd_Armor_SL_Woodland:53rd_Armor_Rifleman_Woodland
		{
		Type = "SL";
		};
		class 53rd_Armor_Medic_Woodland:53rd_Armor_Rifleman_Woodland
		{
		Type = "Medic";
		};
		class 53rd_Armor_JTAC_Woodland:53rd_Armor_Rifleman_Woodland
		{
		Type = "JTAC";
		};

        
		class 53rd_Armor_Rifleman_Desert
		{
		model = "HephaestusVest";
		Vest_Camo = "Desert";
		Type = "Rifleman";
		};
		class 53rd_Armor_Specialist_Desert:53rd_Armor_Rifleman_Desert
		{
		Type = "Specialist";
		};
		class 53rd_Armor_TL_Desert:53rd_Armor_Rifleman_Desert
		{
		Type = "TL";
		};
		class 53rd_Armor_SL_Desert:53rd_Armor_Rifleman_Desert
		{
		Type = "SL";
		};
		class 53rd_Armor_Medic_Desert:53rd_Armor_Rifleman_Desert
		{
		Type = "Medic";
		};
		class 53rd_Armor_JTAC_Desert:53rd_Armor_Rifleman_Desert
		{
		Type = "JTAC";
		};

        
		class 53rd_Armor_Rifleman_Snow
		{
		model = "HephaestusVest";
		Vest_Camo = "Snow";
		Type = "Rifleman";
		};
		class 53rd_Armor_Specialist_Snow:53rd_Armor_Rifleman_Snow
		{
		Type = "Specialist";
		};
		class 53rd_Armor_TL_Snow:53rd_Armor_Rifleman_Snow
		{
		Type = "TL";
		};
		class 53rd_Armor_SL_Snow:53rd_Armor_Rifleman_Snow
		{
		Type = "SL";
		};
		class 53rd_Armor_Medic_Snow:53rd_Armor_Rifleman_Snow
		{
		Type = "Medic";
		};
		class 53rd_Armor_JTAC_Snow:53rd_Armor_Rifleman_Snow
		{
		Type = "JTAC";
		};
	};
};