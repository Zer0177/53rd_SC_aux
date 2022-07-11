class CfgPatches
{
	class 53rd_groups
	{
		author="53rd Aux Team";
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]=
        {
        };
		weapons[]=
        {
        };
	};
};
class CfgGroups
{
	class West
	{
		class 53rd_groups
		{
			name="[53rd] Unit Compositions";
			class 53rd_groups_Hephaestus_Platoon
			{
				dlc="53rd";
				name="Hephaestus";
				class 53rd_Hephaestus_squad
				{
					name="Squad (x3 teams)";
					side=1;
					faction="53rd_faction";
					rarityGroup=0.30000001;
					class Group_leader
					{
						side=1;
						vehicle="53rd_sl_Hephaestus_unit";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Group_medic
					{
						side=1;
						vehicle="53rd_corpman_Hephaestus_unit";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class ft1_leader
					{
						side=1;
						vehicle="53rd_cpl_Hephaestus_unit";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class ft1_ar
					{
						side=1;
						vehicle="53rd_autorifleman_Hephaestus_unit";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class ft1_gl
					{
						side=1;
						vehicle="53rd_gl_Hephaestus_unit";
						rank="PRIVATE";
						position[]={15,-10,0};
					};
					class ft1_at
					{
						side=1;
						vehicle="53rd_rifleman_at_Hephaestus_unit";
						rank="PRIVATE";
						position[]={20,-10,0};
					};
					class ft2_leader
					{
						side=1;
						vehicle="53rd_cpl_Hephaestus_unit";
						rank="CORPORAL";
						position[]={25,-5,0};
					};
					class ft2_ar
					{
						side=1;
						vehicle="53rd_autorifleman_Hephaestus_unit";
						rank="PRIVATE";
						position[]={30,-10,0};
					};
					class ft2_mk
					{
						side=1;
						vehicle="53rd_gl_Hephaestus_unit";
						rank="PRIVATE";
						position[]={35,-10,0};
					};
					class ft2_at
					{
						side=1;
						vehicle="53rd_marksman_Hephaestus_unit";
						rank="PRIVATE";
						position[]={40,-10,0};
					};
					class ft3_leader
					{
						side=1;
						vehicle="53rd_cpl_Hephaestus_unit";
						rank="CORPORAL";
						position[]={45,-5,0};
					};
					class ft3_ar
					{
						side=1;
						vehicle="53rd_autorifleman_Hephaestus_unit";
						rank="PRIVATE";
						position[]={50,-10,0};
					};
					class ft3_gl
					{
						side=1;
						vehicle="53rd_gl_Hephaestus_unit";
						rank="PRIVATE";
						position[]={55,-10,0};
					};
					class ft3_aa
					{
						side=1;
						vehicle="53rd_rifleman_aa_Hephaestus_unit";
						rank="PRIVATE";
						position[]={60,-10,0};
					};
				};
				class 53rd_Hephaestus_sent1
				{
					name="Sentry (Marksmen)";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_marksman_Hephaestus_unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_smg_Hephaestus_unit";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class 53rd_Hephaestus_sent2
				{
					name="Sentry (Sniper)";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_sniper_Hephaestus_unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_smg_Hephaestus_unit";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class 53rd_Hephaestus_squad_aa
				{
					name="x2 AA";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_rifleman_aa_Hephaestus_unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_rifleman_aa_Hephaestus_unit";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class 53rd_Hephaestus_squad_at
				{
					name="x2 AT";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_rifleman_at_Hephaestus_unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_rifleman_at_Hephaestus_unit";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class 53rd_Hephaestus_aa_at
				{
					name="x2 AA/x2 AT";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_rifleman_aa_Hephaestus_unit";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_rifleman_at_Hephaestus_unit";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="53rd_rifleman_aa_Hephaestus_unit";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="53rd_rifleman_at_Hephaestus_unit";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
			};
			class 53rd_groups_Athena_platoon
			{
				dlc="53rd";
				name="Athena";
				class 53rd_Athena_squad
				{
					name="Squad (x3 teams)";
					side=1;
					faction="53rd_faction";
					rarityGroup=0.30000001;
					class Group_leader
					{
						side=1;
						vehicle="53rd_sl_Athena_unit";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Group_medic
					{
						side=1;
						vehicle="53rd_corpman_Athena_unit";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class ft1_leader
					{
						side=1;
						vehicle="53rd_cpl_Athena_unit";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class ft1_ar
					{
						side=1;
						vehicle="53rd_autorifleman_Athena_unit";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class ft1_gl
					{
						side=1;
						vehicle="53rd_gl_Athena_unit";
						rank="PRIVATE";
						position[]={15,-10,0};
					};
					class ft1_at
					{
						side=1;
						vehicle="53rd_rifleman_at_Athena_unit";
						rank="PRIVATE";
						position[]={20,-10,0};
					};
					class ft2_leader
					{
						side=1;
						vehicle="53rd_cpl_Athena_unit";
						rank="CORPORAL";
						position[]={25,-5,0};
					};
					class ft2_ar
					{
						side=1;
						vehicle="53rd_autorifleman_Athena_unit";
						rank="PRIVATE";
						position[]={30,-10,0};
					};
					class ft2_mk
					{
						side=1;
						vehicle="53rd_gl_Athena_unit";
						rank="PRIVATE";
						position[]={35,-10,0};
					};
					class ft2_at
					{
						side=1;
						vehicle="53rd_marksman_Athena_unit";
						rank="PRIVATE";
						position[]={40,-10,0};
					};
					class ft3_leader
					{
						side=1;
						vehicle="53rd_cpl_Athena_unit";
						rank="CORPORAL";
						position[]={45,-5,0};
					};
					class ft3_ar
					{
						side=1;
						vehicle="53rd_autorifleman_Athena_unit";
						rank="PRIVATE";
						position[]={50,-10,0};
					};
					class ft3_gl
					{
						side=1;
						vehicle="53rd_gl_Athena_unit";
						rank="PRIVATE";
						position[]={55,-10,0};
					};
					class ft3_aa
					{
						side=1;
						vehicle="53rd_rifleman_aa_Athena_unit";
						rank="PRIVATE";
						position[]={60,-10,0};
					};
				};
				class 53rd_Athena_sent1
				{
					name="Sentry (Marksmen)";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_marksman_Athena_unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_smg_Athena_unit";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class 53rd_Athena_sent2
				{
					name="Sentry (Sniper)";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_sniper_Athena_unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_smg_Athena_unit";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class 53rd_Athena_recon
				{
					name="Recon";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_recon_Athena_unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_recon_Athena_unit";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class 53rd_Athena_squad_aa
				{
					name="x2 AA";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_rifleman_aa_Athena_unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_rifleman_aa_Athena_unit";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class 53rd_Athena_squad_at
				{
					name="x2 AT";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_rifleman_at_Athena_unit";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_rifleman_at_Athena_unit";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class 53rd_Athena_aa_at
				{
					name="x2 AA/x2 AT";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_rifleman_aa_Athena_unit";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_rifleman_at_Athena_unit";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="53rd_rifleman_aa_Athena_unit";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="53rd_rifleman_at_Athena_unit";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class 53rd_Athena_cqc
				{
					name="Breacher Team";
					side=1;
					faction="53rd_faction";
					class Unit0
					{
						side=1;
						vehicle="53rd_shotgun_Athena_unit";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="53rd_shotgun_Athena_unit";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="53rd_smg_Athena_unit";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="53rd_autorifleman_Athena_unit";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
			};
		};
	};
};
