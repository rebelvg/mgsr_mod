class CfgPatches {
	class mgsr_units {
		units[] = {"mgsr_civ_01"};
		weapons[] = {"mgsr_civ_01_uniform"};
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
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe.paa"};
		
		class EventHandlers {};
		headgearList[] = {};
		
		identityTypes[] = {"LanguageGRE_F", "Head_Greek", "NoGlasses"};
		
		linkedItems[] = {};
		respawnLinkedItems[] = {};
	};
	
	class mgsr_civ_02: mgsr_civ_01 {
		author="Rebel / Facel";
		_generalMacro = "mgsr_civ_02";
		displayName = "MGSR: Prisoner (Dirty Uniform)";
		uniformClass = "mgsr_robe_dirty";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe_dirty.paa"};
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
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe.paa"};
		
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
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_robe_dirty.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_civ_02";
			containerClass = "Supply20";
			mass = 40;
		};
	};
};
