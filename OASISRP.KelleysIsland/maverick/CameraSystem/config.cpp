#define true 1
#define false 0

class camera_system_config {

	class keybindings {
		// Keycodes can be found at https://community.bistudio.com/wiki/DIK_KeyCodes
		viewCameraKey						= 38; //L
		requireShift						= true; //Hold shift key
		requireControl						= false; //Hold control key
		requireAlt							= false; //Hold alt key

		exitKey								= 38; //L
		turnLeftKey							= 30; //A
		turnRightKey						= 32; //D
		lookUpKey							= 17; //W
		lookDownKey							= 31; //D
		previousCameraKey					= 16; //Q
		nextCameraKey						= 18; //E
	};

	class general {
		cameraObject						= "Land_Projector_01_F";
		cameraLimit			 				= 4; // Number of active cameras allowed at once
		cameraLimitText						= "You already have the max amount of active cameras";

		placeCameraText						= "Place Camera";
		pickupCameraText					= "Pick up camera";

		viewingCameraText					= "You are viewing camera #%1";

		angleClampNegative					= -80; //Should not be less than -80	or more than -10
		angleClampPositive					= +80; //Should not be larger than 80 or less than 10

		dirClampLeft						= 80; //Recommended at 80 and the same value as dirClampRight
		dirClampRight						= 80; //Recommended at 80 and the same value as dirClampLeft
	};
};