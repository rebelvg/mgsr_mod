#include "CfgPatches.hpp"

class CfgWeapons {
	class ItemCore;
	class HeadgearItem;
	
	class mgsr_eyepatch: ItemCore {
		author="Rebel / Facel";
		scope = 2;
		displayName = "MGSR: Eyepatch";
		model = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
		picture = "\mgsr_eyepatch\UI\gear_mgsr_eyepatch_x_ca";
		
		class ItemInfo: HeadgearItem {
			mass = 2;
			uniformModel = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
			modelSides[] = {3, 1};
			armor = 1.5;
			passThrough = 0.8;
		};
	};
};

class CfgGlasses {
	class None;
	
	class mgsr_eyepatch_goggles: None
	{
		author="Rebel / Facel";
		mass = 2;
		displayname = "MGSR: Eyepatch";
		model = "\mgsr_eyepatch\mgsr_eyepatch.p3d";
		picture = "\mgsr_eyepatch\UI\gear_mgsr_eyepatch_x_ca";
		identityTypes[]={};
		
		ACE_Overlay = "\mgsr_eyepatch\eyepatch_overlay.paa";
		ACE_OverlayCracked = "\mgsr_eyepatch\eyepatch_overlayCracked.paa";
		ACE_Resistance = 1;
		ACE_Protection = 1;
	};
};
