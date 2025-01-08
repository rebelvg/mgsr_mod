#include "CfgPatches.hpp"

class CfgWeapons
{
	class HelmetBase;
	class HeadgearItem;

	class mgsr_eyepatch : HelmetBase
	{
		author = "Rebel / Facel";
		scope = 2;
		displayName = "MGSR: Eyepatch";
		model = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
		picture = "\mgsr_eyepatch\UI\gear_mgsr_eyepatch_x_ca";

		class ItemInfo : HeadgearItem
		{
			allowedSlots[] = {801, 901, 701, 605};
			mass = 2;
			uniformModel = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
			modelSides[] = {6};
		};
	};
};

class CfgGlasses
{
	class None;

	class mgsr_eyepatch_goggles : None
	{
		author = "Rebel / Facel";
		mass = 2;
		displayName = "MGSR: Eyepatch";
		model = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
		picture = "\mgsr_eyepatch\UI\gear_mgsr_eyepatch_x_ca";
		identityTypes[] = {};

		ACE_Overlay = "\mgsr_eyepatch\eyepatch_overlay.paa";
		ACE_OverlayCracked = "\mgsr_eyepatch\eyepatch_overlayCracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 1;
	};
};
