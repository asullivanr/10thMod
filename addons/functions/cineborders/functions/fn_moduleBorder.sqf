/*
    tenthed_fnc_moduleBorder
    Called by the Zeus module.

    _this params from Module_F function call:
    0: logic (the module object)
    1: units array (unused)
    2: activated bool
*/
params ["_logic", "_units", "_activated"];
if (!_activated) exitWith {};
if (isNull _logic) exitWith {};

// Wait until curator confirms execution via default attributes UI
[_logic] spawn
{
    params ["_logic"];

    waitUntil {
        uiSleep 0.1;
        isNull _logic || { _logic getVariable ["tenthed_cineborders_confirm", false] }
    };
    if (isNull _logic) exitWith {};

    private _text       = _logic getVariable ["tenthed_cineborders_text", "Toll Road, Please Slow Down"];
    private _duration   = _logic getVariable ["tenthed_cineborders_duration", 15];
    private _transition = _logic getVariable ["tenthed_cineborders_transition", 1.5];
    private _hideHUD    = _logic getVariable ["tenthed_cineborders_hidehud", true];
    private _music      = _logic getVariable ["tenthed_cineborders_music", ""];
    private _exitSound  = _logic getVariable ["tenthed_cineborders_exitsound", "border_out"];

    [_text, _duration, _transition, _hideHUD, _music, _exitSound] remoteExec ["tenthed_fnc_showBorder", 0, false];
};
