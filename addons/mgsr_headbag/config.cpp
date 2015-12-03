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
	class mgsr_headbag {
		units[] = {};
        weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};

class CfgWeapons {
	class ItemCore;
	class HeadgearItem;

	class mgsr_headbag : ItemCore {
		author="rebel / shlomo";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MGSR: Headbag";
		model = "\mgsr_headbag\mgsr_headbag.p3d";
		picture = "\mgsr_headbag\UI\gear_mgsr_headbag_x_ca";

		class ItemInfo : HeadgearItem {
			mass = 5;
			uniformModel = "\mgsr_headbag\mgsr_headbag.p3d";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.8;
		};
	};
};

class CfgGlasses {
    class None;
	
	class mgsr_headbag_goggles: None
    {
		author="rebel / shlomo";
		mass = 5;
        displayname = "MGSR: Headbag (goggles slot)";
        model = "\mgsr_headbag\mgsr_headbag.p3d";
		picture = "\mgsr_headbag\UI\gear_mgsr_headbag_x_ca";
		identityTypes[]={};
    };	
};
