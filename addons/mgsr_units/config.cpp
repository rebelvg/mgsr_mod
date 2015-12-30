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
		units[] = {"mgsr_civ_01"};
        weapons[] = {"mgsr_civ_01_uniform"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F"};
	};
};

class CfgVehicles {
	class Civilian_F;

	class mgsr_civ_01 : Civilian_F {
		author="Rebel / Facel / Shlomo";
		_generalMacro = "mgsr_civ_01";
		scope = 2;
		displayName = "MGSR: Prisoner";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_civ_01_uniform";
		model = "\mgsr_units\mgsr_robe.p3d";

		linkedItems[] = {};
		respawnLinkedItems[] = {};
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
		author="Rebel / Facel / Shlomo";
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
};
