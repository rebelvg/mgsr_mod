#include "CfgPatches.hpp"

class CfgWeapons {
	class HelmetBase;
	class HeadgearItem;

	class mgsr_headbag: HelmetBase {
		author = "Rebel / Facel";
		scope = 2;
		displayName = "MGSR: Headbag";
		model = "\mgsr_headbag\mgsr_headbag.p3d";
		picture = "\mgsr_headbag\UI\gear_mgsr_headbag_x_ca";

		class ItemInfo: HeadgearItem {
			allowedSlots[] = {801, 901, 701, 605};
			mass = 5;
			uniformModel = "\mgsr_headbag\mgsr_headbag.p3d";
			modelSides[] = {6};
		};
	};
};

class CfgGlasses {
	class None;

	class mgsr_headbag_goggles: None
	{
		author = "Rebel / Facel";
		mass = 5;
		displayName = "MGSR: Headbag";
		model = "\mgsr_headbag\mgsr_headbag.p3d";
		picture = "\mgsr_headbag\UI\gear_mgsr_headbag_x_ca";
		identityTypes[]={};

		ACE_Overlay = "\mgsr_headbag\headbag_overlay.paa";
		ACE_OverlayCracked = "\mgsr_headbag\headbag_overlayCracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 1;
	};
};

class CfgFunctions {
	class mgsr_headbag
	{
		class functions
		{
			file = "mgsr_headbag\functions";
            class init {postInit = 1;};
			class putHeadbagOn {};
		};
	};
};
