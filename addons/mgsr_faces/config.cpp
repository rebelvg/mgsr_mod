#include "CfgPatches.hpp"

class CfgFaces {
	class Default
	{
		class Custom;
	};
	
	class Man_A3: Default
	{
		class WhiteHead_01;
		class WhiteHead_12;
		
		class mgsr_snakeface: WhiteHead_12
		{
			author = "Rebel / Shlomo";
			displayname = "MGSR: Snakeface";
			texture = "\mgsr_faces\data\mgsr_snakeface.paa";
			material = "\mgsr_faces\data\mgsr_snake.rvmat";
			identityTypes[] = {};
		};
		
		class mgsr_skullface: WhiteHead_01
		{
			author = "Rebel / Shlomo";
			displayname = "MGSR: Skullface";
			texture = "\mgsr_faces\data\mgsr_skullface.paa";
			textureHL = "\mgsr_faces\data\mgsr_skullface_body.paa";
			textureHL2 = "\mgsr_faces\data\mgsr_skullface_body.paa";
			identityTypes[] = {};
		};
		
		class mgsr_snakeface_camo: WhiteHead_12
		{
			author = "Rebel / Shlomo";
			displayname = "MGSR: Snakeface Camo";
			texture = "\mgsr_faces\data\mgsr_snakeface_camo.paa";
			material = "\mgsr_faces\data\mgsr_snake_camo.rvmat";
			identityTypes[] = {};
		};
	};
};
