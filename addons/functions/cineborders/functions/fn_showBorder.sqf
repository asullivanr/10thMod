/*
    tenthed_fnc_showBorder
    Runs locally on a client.

    Params:
    0: STRING - Text to show
    1: NUMBER - Duration (seconds)
    2: NUMBER - Transition time (seconds)
    3: BOOL   - Hide HUD
    4: STRING - Music class (CfgMusic) optional
    5: STRING - Exit sound class (CfgSounds) optional
*/

params [
    ["_text", "Toll Road, Please Slow Down", [""]],
    ["_duration", 15, [0]],
    ["_transition", 1.5, [0]],
    ["_hideHUD", true, [true]],
    ["_music", "", [""]],
    ["_exitSound", "border_out", [""]]
];

[_text, _duration, _transition, _hideHUD, _music, _exitSound] spawn
{
    params ["_text", "_duration", "_transition", "_hideHUD", "_music", "_exitSound"];

    disableSerialization;

    "tenthed_cinemaBorder" cutRsc ["RscCinemaBorder", "PLAIN"];

    private _borderDialog = uiNamespace getVariable ["RscCinemaBorder", displayNull];
    if (isNull _borderDialog) exitWith {};

    private _borderTop = _borderDialog displayCtrl 100001;
    private _borderBottom = _borderDialog displayCtrl 100002;

    private _height = 0.125 * safeZoneH;
    private _offset = 0.1;

    if (_hideHUD) then { showHUD false; };

    if (_music isNotEqualTo "") then {
        playMusic _music;
    };

    _borderTop ctrlSetPosition [safeZoneX - _offset, safeZoneY - _height - _offset, safeZoneW + 2 * _offset, _height + _offset];
    _borderBottom ctrlSetPosition [safeZoneX - _offset, safeZoneY + safeZoneH, safeZoneW + 2 * _offset, _height + _offset];
    { _x ctrlCommit 0 } forEach [_borderTop, _borderBottom];

    _borderTop ctrlSetPosition [safeZoneX - _offset, safeZoneY - _offset, safeZoneW + 2 * _offset, _height + _offset];
    _borderBottom ctrlSetPosition [safeZoneX - _offset, safeZoneY + safeZoneH - _height, safeZoneW + 2 * _offset, _height + _offset];
    { _x ctrlCommit _transition } forEach [_borderTop, _borderBottom];

    waitUntil {
        uiSleep 0.05;
        ctrlCommitted _borderTop && ctrlCommitted _borderBottom
    };

    [_text, 0.95, 1.2, 11, 2, 0, 789] spawn BIS_fnc_dynamicText;

    uiSleep _duration;

    _borderTop ctrlSetPosition [safeZoneX - _offset, safeZoneY - _height - _offset, safeZoneW + 2 * _offset, _height + _offset];
    _borderBottom ctrlSetPosition [safeZoneX - _offset, safeZoneY + safeZoneH, safeZoneW + 2 * _offset, _height + _offset];
    { _x ctrlCommit _transition } forEach [_borderTop, _borderBottom];

    waitUntil {
        uiSleep 0.05;
        ctrlCommitted _borderTop && ctrlCommitted _borderBottom
    };

    "tenthed_cinemaBorder" cutText ["", "PLAIN"];

    if (_exitSound isNotEqualTo "") then {
        playSound _exitSound;
    };

    if (_hideHUD) then { showHUD true; };
};
