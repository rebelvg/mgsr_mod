#include "CfgPatches.hpp"

class CfgVehicles {
	class Bag_Base;

	class mgsr_poncho_wet: Bag_Base {
		author = "Rebel / Facel";
		scope = 2;
		displayName = "MGSR: Poncho (Wet)";
		model = "\mgsr_poncho\mgsr_poncho.p3d";
		picture = "\mgsr_poncho\UI\gear_mgsr_poncho_x_ca";
		maximumLoad = 60;
		mass = 30;

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_poncho\data\mgsr_poncho.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_poncho\data\mgsr_poncho.rvmat"};
	};

	class mgsr_poncho_dry: mgsr_poncho_wet {
		author = "Rebel / Facel";
		displayName = "MGSR: Poncho (Dry)";

		hiddenSelectionsMaterials[] = {"\mgsr_poncho\data\mgsr_poncho_dry.rvmat"};
	};
};

class CfgWeapons {
	class Vest_Camo_Base;
	class VestItem;

	class mgsr_poncho_wet_vest: Vest_Camo_Base {
		author = "Rebel / Facel";
		_generalMacro = "mgsr_poncho_wet_vest";
		scope = 2;
		displayName = "MGSR: Poncho (Wet)";
		picture = "\mgsr_poncho\UI\gear_mgsr_poncho_x_ca";
		model = "\mgsr_poncho\mgsr_poncho.p3d";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_poncho\data\mgsr_poncho.paa"};
		hiddenSelectionsMaterials[] = {"\mgsr_poncho\data\mgsr_poncho.rvmat"};

		class ItemInfo: VestItem
		{
			uniformModel = "\mgsr_poncho\mgsr_poncho.p3d";
			containerClass = "Supply60";
			mass = 30;

			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\mgsr_poncho\data\mgsr_poncho.paa"};
			hiddenSelectionsMaterials[] = {"\mgsr_poncho\data\mgsr_poncho.rvmat"};
		};
	};

	class mgsr_poncho_dry_vest: mgsr_poncho_wet_vest {
		author = "Rebel / Facel";
		_generalMacro = "mgsr_poncho_dry_vest";
		displayName = "MGSR: Poncho (Dry)";

		hiddenSelectionsMaterials[] = {"\mgsr_poncho\data\mgsr_poncho_dry.rvmat"};

		class ItemInfo: VestItem
		{
			uniformModel = "\mgsr_poncho\mgsr_poncho.p3d";
			containerClass = "Supply60";
			mass = 30;

			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\mgsr_poncho\data\mgsr_poncho.paa"};
			hiddenSelectionsMaterials[] = {"\mgsr_poncho\data\mgsr_poncho_dry.rvmat"};
		};
	};
};
