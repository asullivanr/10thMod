if (!isServer) exitWith {};

params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]]		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)


];

_air_001 = [];
_air_002 = [];

_ground_001 = [];
_ground_002 = [];


switch _mode do
{

};


this addAction ["Spawn Terra Pelican", 
 { 
  if (surfaceIsWater position Spawn_PadSide3) then 
  { 
   _pad1 = getPosASL Spawn_PadSide3; 
   _dir = getDir Spawn_PadSide3; 
         _veh = createVehicle 
          [ 
              "O_TE_Terra_Pelican_01", _pad1, 
              [], 
              0, 
              "NONE" 
          ]; 
         _veh setDir _dir; 
      } 
       else 
     { 
      _pad1 = getPosATL Spawn_PadSide3; 
      _dir = getDir Spawn_PadSide3; 
         _veh = createVehicle 
          [ 
              "O_TE_Terra_Pelican_01", 
              _pad1, 
              [], 
              0, 
              "NONE" 
          ];         
         _veh setDir _dir; 
    }; 
   } 
]; 