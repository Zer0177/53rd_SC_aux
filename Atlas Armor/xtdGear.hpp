class XtdGearModels
{
	class CfgWeapons
	{
		class Atlashelms
		{
			label = "Atlas Helmets";
			author = "Body";
			options[] = {"Type"};
			
			class Type
			{
				label = "Type";
				values[] = {"Normal","NormalV","Medic","MedicV","Scout"};
				class Normal
				{
					label = "Normal";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class NormalV
				{
					label = "NormalV";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class MedicV
				{
					label = "MedicV";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Scout
				{
					label = "Scout";
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
		class 53rd_Ranger_CH252_NV
		{
		model = "Atlashelms";
		Type = "NormalV";
		};
		class 53rd_Ranger_CH252_MD:53rd_Ranger_CH252_NV
		{
		Type = "MedicV";
		};
		class 53rd_Ranger_CH252_NML
		{
		model = "Atlashelms";
		Type = "Normal";
		};
		class 53rd_HaloInf_Marine_WDL_UNSC_NV_headgear:53rd_Ranger_CH252_NML
		{
		Type = "Medic";
		}; 
		class Ranger_Scout
		{
		model = "Atlashelms";
		Type = "Scout";
		};
		

	};
};