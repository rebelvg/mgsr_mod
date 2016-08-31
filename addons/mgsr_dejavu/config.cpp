#include "CfgPatches.hpp"

class CfgVehicles {
	class C_man_1;

	class mgsr_snake_ps1: C_man_1 {
		author="Rebel / Facel";
		_generalMacro = "mgsr_snake_ps1";
		scope = 2;
		displayName = "MGSR: Snake (PS1)";
		nakedUniform = "U_BasicBody";
		uniformClass = "mgsr_suit_ps1";
		model = "\mgsr_dejavu\mgsr_solid.p3d";
		modelSides[] = {0, 1, 2, 3};
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_dejavu\data\mgsr_solid.paa"};
		
		headgearList[] = {};
		
		identityTypes[] = {"LanguageENG_F", "Head_Euro", "NoGlasses"};

		linkedItems[] = {};
		respawnLinkedItems[] = {};
	};
};

class CfgWeapons {
	class U_C_Poloshirt_blue;
	class UniformItem;
	
	class mgsr_suit_ps1: U_C_Poloshirt_blue {
		author="Rebel / Facel";
		scope = 2;
		displayName = "MGSR: Sneaking Suit (PS1)";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mgsr_dejavu\data\mgsr_solid.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "mgsr_snake_ps1";
			containerClass = "Supply20";
			mass = 40;
		};
	};
};

class CfgHeads {
	class NATOHead_A3;
	
	class mgsr_solid_head_ps1: NATOHead_A3 {
		model = "\mgsr_dejavu\mgsr_solid_head.p3d";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
};

class CfgFaces {
	class Default
	{
		class Custom;
	};
	
	class Man_A3: Default
	{
		class WhiteHead_01;
		
		class mgsr_solid_face_ps1: WhiteHead_01 {
			author="Rebel / Facel";
			displayname = "MGSR: Solid Snake (PS1)";
			texture = "\mgsr_dejavu\data\mgsr_solid.paa";
			head = "mgsr_solid_head_ps1";
			identityTypes[] = {};
		};
	};
};