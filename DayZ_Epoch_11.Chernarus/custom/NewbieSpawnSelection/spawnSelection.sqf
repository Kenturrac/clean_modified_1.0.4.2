/*
	Written by:
	Kenturrac
*/

private ["_humanity","_position","_counter","_ok","_searchSpotToSpawnPlayer","_SpawnLocations_Index","_SpawnLocations_Item","_spawnPosition","_spawnInnerRadius","_spawnOuterRadius","_noOthersNear","_positionIsZero","_isIsland"];

_humanity = player getVariable ["humanity",0];

if ((_humanity < 5000) AND (_humanity > 0)) then {

	diag_log ("NewbieSpawnSelection: Initiate");

	// create Dialog and wait for player input
	_ok = createDialog "newbieSpawnSelection_dialog";
	spawnSelect = -2;
	waitUntil {sleep 0.1; spawnSelect != -2};

	if (spawnSelect >= 0) then {

		diag_log ("NewbieSpawnSelection: spawnSelect: " +str(spawnSelect));

		//spawn player
		_searchSpotToSpawnPlayer = true;
		_counter = 0;
		while {_counter < 20 and _searchSpotToSpawnPlayer} do {
			
			// find selected event spawnpoint
			_SpawnLocations_Index = spawnSelect;
			_SpawnLocations_Item = spawnLocations_NewbieArea select _SpawnLocations_Index;
			_spawnPosition = _SpawnLocations_Item select 0;
			_spawnInnerRadius = _SpawnLocations_Item select 1;
			_spawnOuterRadius = _SpawnLocations_Item select 2;

			//debug messages
			diag_log ("NewbieSpawnSelection: _spawnLocations_Index: " + str(_SpawnLocations_Index));
			diag_log ("NewbieSpawnSelection: _spawnLocations_Item: " + str(_SpawnLocations_Item));
			diag_log ("NewbieSpawnSelection: _spawnPosition: " + str(_spawnPosition));
			diag_log ("NewbieSpawnSelection: _spawnInnerRadius: " + str(_spawnInnerRadius));
			diag_log ("NewbieSpawnSelection: _spawnOuterRadius: " + str(_spawnOuterRadius));

			_position = ([(_spawnPosition),(_spawnInnerRadius),(_spawnOuterRadius),10,0,2000,spawnShoremode] call BIS_fnc_findSafePos);
			diag_log ("NewbieSpawnSelection: _position: " + str(_position));

			_noOthersNear = count (_position nearEntities ["Man",5]) == 0;
			_positionIsZero = ((_position select 0) == 0) and ((_position select 1) == 0);
			
			//Check if spawnspot is on a small island - Otmel check
			_pos 		= _position;
			_isIsland	= false;
			for [{_w=0},{_w<=150},{_w=_w+2}] do {
				_pos = [(_pos select 0),((_pos select 1) + _w),(_pos select 2)];
				if(surfaceisWater _pos) exitWith {
					_isIsland = true;
				};
			};
			
			//Stop while-loop, if you found a good spawn location 
			if ((_noOthersNear and !_positionIsZero) and !_isIsland) then {
				_searchSpotToSpawnPlayer = false;
				diag_log ("NewbieSpawnSelection: Found a spawn location.");
			} else {
				diag_log ("NewbieSpawnSelection: Haven't found a spawn location yet. _noOthersNear: " +str(_noOthersNear) + "/ _positionIsZero: " +str(_positionIsZero) + "/ _isIsland: " +str(_isIsland));
			};
			_counter = _counter + 1;
		};

		_position = [_position select 0,_position select 1,0];
		player setPosATL _position;
	};
};