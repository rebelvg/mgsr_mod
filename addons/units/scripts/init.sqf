params ["_unit"];

if (isServer) then {
    {
        _unit setObjectTextureGlobal [_x, format ["\mgsr_units\ins\%1.paa", floor random 10]];
    } forEach [1, 2, 3, 4, 5];
};
