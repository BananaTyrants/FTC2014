#include "JoystickDriver.c"

task main()
{
	while(1) {
			getJoystickSettings(joystick);
			writeDebugStreamLine("Buttons:%d", joystick.joy1_Buttons);
	}
}
