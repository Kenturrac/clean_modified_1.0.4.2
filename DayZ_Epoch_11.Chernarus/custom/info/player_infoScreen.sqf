/*
	Written by:
	Kenturrac
*/
[] spawn {
	waitUntil {!isNil "dayz_animalCheck"};

	waituntil {!isnull (finddisplay 46)};
	(finddisplay 46) displayaddeventhandler ["keydown","_this call infoScreen_buttons; false;"];
	diag_log ["Kenturracs Server Info Screen enabled."];
};

infoScreen_buttons = {
	if (!dialog) then {
		switch (_this select 1) do {
			//F1 key
			case 59: 
			{	
				createDialog "f1_DialogScreen";
			};
		};
	};
};