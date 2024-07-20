//if (!isServer) exitWith {};

params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]]		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)


];

padLocation = _importPad;


utilities_001 = [];
utilities_001_name = ["1","2","3","The Kart"];

air_001 = [];
air_001_name = [];

air_002 = [];
air_002_name = [];

ground_001 = [];
ground_001_name = [];
ground_002 = [];
ground_002_name = [];

switch (_mode) do
{
    //case (_mode = "utilities"): {};
    //case (_mode = "Air1"): {};
    //case (_mode = "Air2"): {};
    //case (_mode = "Air3"): {};
    //case (_mode = "Air4"): {};

    //{code} forEach Array
};


this addAction ["Spawn Terra Pelican", {
    if (surfaceIsWater position padLocation) then
    {
    _pad = getPosASL padLocation;
    _dir = getDir padLocation;
    _veh = createVehicle [
            "O_TE_Terra_Pelican_01", _pad,
            [],
            0,
            "NONE"
        ];
        _veh setDir _dir;
    }
    else
    {
    _pad = getPosATL padLocation;
    _dir = getDir padLocation;
    _veh = createVehicle [
            "O_TE_Terra_Pelican_01",
            _pad,
            [],
            0,
            "NONE"
        ];
        _veh setDir _dir;
    };
}
];