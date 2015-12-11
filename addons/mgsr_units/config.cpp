enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class CfgPatches {
	class mgsr_units {
		units[] = {};
        weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};

class CfgVehicles {
	class Civilian_F;

	class mgsr_civ_01 : Civilian_F {
		author="Rebel / Shlomo";
		_generalMacro = "mgsr_civ_01";
		scope = 2;
		displayName = "MGSR: Prisoner";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_civ_01_uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_civ_01.paa"};

		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
	};
	
	class mgsr_civ_02 : Civilian_F {
		author="Rebel / Shlomo";
		_generalMacro = "mgsr_civ_02";
		scope = 2;
		displayName = "MGSR: Prisoner (Bloody Texture)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_civ_02_uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_civ_02.paa"};

		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
	};
	
	class mgsr_civ_03 : Civilian_F {
		author="Rebel / Shlomo";
		_generalMacro = "mgsr_civ_03";
		scope = 2;
		displayName = "MGSR: Prisoner (Bloody Stomach)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_civ_03_uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\mgsr_units\data\mgsr_civ_03.paa"};

		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
	};
};

class CfgWeapons {
		class InventoryItem_Base_F;
		class ItemCore;
		
		class UniformItem: InventoryItem_Base_F
		{
			type = 801;
		};
		class Uniform_Base: ItemCore
		{
			scope = 0;
			allowedSlots[] = {901};
		};
	
	class mgsr_civ_01_uniform : Uniform_Base {
		author="Rebel / Shlomo";
		scope = 2;
		displayName = "MGSR: Yellow Polo/Shorts";
		picture = "\A3\characters_f\data\UI\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_civ_01";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_civ_02_uniform : Uniform_Base {
		author="Rebel / Shlomo";
		scope = 2;
		displayName = "MGSR: Yellow Polo/Shorts with Blood";
		picture = "\A3\characters_f\data\UI\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_civ_02";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	
	class mgsr_civ_03_uniform : Uniform_Base {
		author="Rebel / Shlomo";
		scope = 2;
		displayName = "MGSR: Yellow Polo/Shorts with Bloody Stomach";
		picture = "\A3\characters_f\data\UI\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_civ_03";
			containerClass = "Supply20";
			mass = 40;
		};
	};
};
