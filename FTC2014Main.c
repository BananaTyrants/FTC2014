#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTMotor)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     frontLeftMotor, tmotorTetrix, openLoop, driveLeft)
#pragma config(Motor,  mtr_S1_C1_2,     backLeftMotor, tmotorTetrix, openLoop, driveLeft)
#pragma config(Motor,  mtr_S1_C2_1,     frontRightMotor, tmotorTetrix, openLoop, driveRight)
#pragma config(Motor,  mtr_S1_C2_2,     backRightMotor, tmotorTetrix, openLoop, driveRight)
#pragma config(Motor,  mtr_S1_C3_1,     centerMotor,   tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     scissorMotor,  tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_1,     pickupMotor,   tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_2,     motorK,        tmotorTetrix, openLoop)
//*!!Code automatically generated by the amazing Gautam               !!*//

#include "JoystickDriver.c"
//Hey you're looking at Gautam's code! Make sure to upload to git regularly or I shall become murderously cantankerous//
//BTW MAEK SURE U TSET TEH COAD BFORE U PUT IT ON TEH GIT!
/* TO DO List: Please TEST and check off items
	1. Make basic drive and deadzone functions actually work
	2. Functionify
	3. Encoder support
	4. Scissor lift & Pickup support
	5. Actual autonomous code
*/
//======================================= THIS IS A SEPARATOR =====================================================
/* If you have free time (which you shouldn't), you can:
	1. Make a LOLCODE to ROBOTC interpreter
	2. Teach younger programmers to code
	3. Take over the world
	4. Fix grammer
*/

// Constants are defined here. Is anyone listening?
#define scissorUpButton 6
#define scissorDownButton 5
#define pickupUpButton 1
#define pickupDownButton 2
// Constants are no longer defined here

// VERSION 1.0.5 Untested code due to slow mechanical people, but it does compile.

void basicDrive(TJoystick joystick)
{
	if (joystick.joy1_y1 <= -10 || joystick.joy1_y1 >= 10) {
			motor[frontLeftMotor] = joystick.joy1_y1;
			motor[frontRightMotor] = joystick.joy1_y2;
			motor[backLeftMotor] = joystick.joy1_y1;
			motor[backRightMotor] = joystick.joy1_y2;
		} //end if

		else {

			motor[frontLeftMotor] = 0;
			motor[frontRightMotor] = 0;
			motor[backLeftMotor] = 0;
			motor[backRightMotor] = 0;

		} //end else

		if (joystick.joy1_x1 <= -10 || joystick.joy1_x1 >= 10) {

			motor[centerMotor] = joystick.joy1_x1;

		} //end if
		else {
			motor[centerMotor] = 0;
		} //end else
} //end function: basicDrive

void peripherals (TJoystick joystick)
{
	if (joy2Btn(scissorUpButton))
	{

	} else if (joy2Btn(scissorDownButton))
	{

	}

	if (joy2Btn(pickupUpButton))
	{

	} else if (joy2Btn(pickupDownButton))
	{

	}
} //end function: peripherals

task main()
{
	while (1) {
		getJoystickSettings(joystick);
		basicDrive(joystick);
		peripherals(joystick);
	} //end while
} //end task
