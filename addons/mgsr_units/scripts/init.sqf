_unit = _this select 0;

if (isServer) then {	
	{
		_random = floor random 10;
		_unit setObjectTextureGlobal [_x, format ["\mgsr_units\ins\%1.paa", _random]];
	} foreach [1, 2, 3, 4, 5];
};
