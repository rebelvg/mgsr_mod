class CfgPatches {
	class mgsr_units {
		units[] = {"mgsr_civ_01", "mgsr_civ_02"};
		weapons[] = {"mgsr_civ_01_uniform", "mgsr_robe_dirty"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F"};
	};
};

class CfgVehicles {
	class C_man_1;

	class mgsr_civ_01: C_man_1 {
		author="Rebel / Facel";
		_generalMacro = "mgsr_civ_01";
		scope = 2;
		displayName = "MGSR: Prisoner";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_civ_01_uniform";
		model = "\mgsr_units\mgsr_robe.p3d";
		modelSides[] = {0, 1, 2, 3};
		
		hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe.paa", "\mgsr_units\ins\9.paa", "\mgsr_units\ins\4.paa", "\mgsr_units\ins\7.paa", "\mgsr_units\ins\0.paa", "\mgsr_units\ins\2.paa"};
		
		class EventHandlers {
			class mgsr_units
			{
				init = "_this execVM '\mgsr_units\scripts\init.sqf'";
			};
		};
		
		headgearList[] = {};
		
		identityTypes[] = {"LanguageENG_F", "Head_Euro", "NoGlasses"};

		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"mgsr_units\data\mgsr_robe.rvmat",
				"mgsr_units\data\w1_mgsr_robe.rvmat",
				"mgsr_units\data\w2_mgsr_robe.rvmat",

				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};

		linkedItems[] = {};
		respawnLinkedItems[] = {};
	};
	
	class mgsr_civ_02: mgsr_civ_01 {
		author="Rebel / Facel";
		_generalMacro = "mgsr_civ_02";
		displayName = "MGSR: Prisoner (Dirty Uniform)";
		uniformClass = "mgsr_robe_dirty";
		
		hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe_dirty.paa", "\mgsr_units\ins\8.paa", "\mgsr_units\ins\2.paa", "\mgsr_units\ins\1.paa", "\mgsr_units\ins\1.paa", "\mgsr_units\ins\3.paa"};
	};
};

class CfgWeapons {
	class U_C_Poloshirt_blue;
	class UniformItem;
	
	class mgsr_civ_01_uniform: U_C_Poloshirt_blue {
		author="Rebel / Facel";
		scope = 2;
		displayName = "MGSR: Prisoner Robe";
		picture = "\A3\characters_f\data\UI\icon_U_Citizen_ca.paa";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_civ_01";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_robe_dirty: mgsr_civ_01_uniform {
		author="Rebel / Facel";
		displayName = "MGSR: Prisoner Robe Dirty";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_civ_02";
			containerClass = "Supply20";
			mass = 40;
		};
	};
};
