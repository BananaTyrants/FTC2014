#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     HTIRS,          sensorHiTechnicIRSeeker1200)
#pragma config(Motor,  mtr_S1_C1_1,     frontRightMotor, tmotorTetrix, openLoop, reversed, driveRight)
#pragma config(Motor,  mtr_S1_C1_2,     frontLeftMotor, tmotorTetrix, openLoop, driveLeft)
#pragma config(Motor,  mtr_S1_C2_1,     backRightMotor, tmotorTetrix, openLoop, reversed, driveRight)
#pragma config(Motor,  mtr_S1_C2_2,     backLeftMotor, tmotorTetrix, openLoop, driveLeft)
#pragma config(Motor,  mtr_S1_C3_1,     centerMotor,   tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     drawerMotor,   tmotorTetrix, openLoop, encoder)
#pragma config(Servo,  srvo_S1_C4_1,    draggerServo,         tServoStandard)
#pragma config(Servo,  srvo_S1_C4_2,    clickerServo,         tServoNone)
#pragma config(Servo,  srvo_S1_C4_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_6,    servo6,               tServoNone)
//*!!Code automatically generated by the amazing Gautam               !!*//


#include "JoystickDriver.c"
void initializeRobot() {
	return;
}
void autonomous ()
{

		motor[frontLeftMotor] = 100;
		motor[frontRightMotor] = 100;
		motor[backLeftMotor] = 100;
		motor[backRightMotor] = 100
		;
		wait1Msec(3000);
		motor[frontLeftMotor] = 0;
		motor[frontRightMotor] = 0;
		motor[backLeftMotor] = 0;
		motor[backRightMotor] = 0;
}
task main()
{
	initializeRobot();
	waitForStart();
	autonomous();
}
