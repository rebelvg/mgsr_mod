if (isClass (configFile >> "CfgPatches" >> "ace_interact_menu")) then {
    _action = ["mgsr_putHeadBagOnAction", "Put Headbag On", "mgsr_headbag\headbag_icon.paa", {[_target, _player] spawn mgsr_headbag_fnc_putHeadbagOn}, {('mgsr_headbag' in items _player || 'mgsr_headbag_goggles' in items _player) && (_target getVariable ['ace_captives_isSurrendering', false] || _target getVariable ['ace_captives_isHandcuffed', false]) && (alive _target)}] call ace_interact_menu_fnc_createAction;
    ["CAManBase", 0, ["ACE_Head"], _action, true] call ace_interact_menu_fnc_addActionToClass;
};
