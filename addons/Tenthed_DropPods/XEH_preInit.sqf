//Covenant
if (isClass(configFile >> "CfgPatches" >> "WBK_Halo_Alients")) then {
	//["ScifiSupportPlus_PlasmaTorpedo", "CHECKBOX", "Plasma Torpedo", ["Sci-fi Support PLUS", "Covenant (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_PlasmaTorpedoStrike", "CHECKBOX", "Plasma Torpedo Strike", ["Sci-fi Support PLUS", "Covenant (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_PlasmaBomb", "CHECKBOX", "Plasma Bomb", ["Sci-fi Support PLUS", "Covenant (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_PlasmaLanceStrike", "CHECKBOX", "Plasma Bomb", ["Sci-fi Support PLUS", "Covenant (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_PlasmaMortar", "CHECKBOX", "Plasma Mortar", ["Sci-fi Support PLUS", "Covenant (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_PlasmaStorm", "CHECKBOX", "Plasma Storm", ["Sci-fi Support PLUS", "Covenant (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_NeedleStorm", "CHECKBOX", "Needle Storm", ["Sci-fi Support PLUS", "Covenant (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_InsertionPod", "CHECKBOX", "Light Insertion Pod", ["Sci-fi Support PLUS", "Covenant (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_HeavyInsertionPod", "CHECKBOX", "Heavy Insertion Pod", ["Sci-fi Support PLUS", "Covenant (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_HunterInsertionPod", "CHECKBOX", "Hunter Insertion Pod", ["Sci-fi Support PLUS", "Covenant (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
};

//Flood
if (isClass(configFile >> "CfgPatches" >> "dev_flood_common")) then {
    //["ScifiSupportPlus_FloodDropPod", "CHECKBOX", "Flood Drop Pod", ["Sci-fi Support PLUS", "Flood (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
};

// UNSC
if (isClass(configFile >> "CfgPatches" >> "OPTRE_Core")) then {
	//["ScifiSupportPlus_Archer", "CHECKBOX", "Archer Missile", ["Sci-fi Support PLUS", "UNSC (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_ArcherBarrage", "CHECKBOX", "Archer Missile Barrage", ["Sci-fi Support PLUS", "UNSC (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_OrbitalAutocannon", "CHECKBOX", "Orbital Autocannon", ["Sci-fi Support PLUS", "UNSC (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_ShredderCannon", "CHECKBOX", "Shredder Cannon", ["Sci-fi Support PLUS", "UNSC (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
	//["ScifiSupportPlus_MACStrike", "CHECKBOX", "MAC Strike", ["Sci-fi Support PLUS", "UNSC (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;

    ["ScifiSupportPlus_InsertionPod", "CHECKBOX", "Ammo Supply Pod", ["[10th] Support modules", "[10th] UNSC (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
    ["ScifiSupportPlus_InsertionPod", "CHECKBOX", "Medical Supply Pod", ["[10th] Support modules", "[10th] UNSC (Zeus Modules)"], true, 1, {}, true] call CBA_fnc_addSetting;
};