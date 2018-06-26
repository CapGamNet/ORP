while {true} do {
	titleText ["", "BLACK OUT"];
	disableUserInput true;
	hint "You are not allowed to join this server please go to forums.oasisroleplay.com to register.";
	sleep 5;
	titleText ["", "BLACK IN"];
	disableUserInput false;
	failMission "end1";
};