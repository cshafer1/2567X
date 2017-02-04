#pragma config(Sensor, dgtl1,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  liftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  Sonar,          sensorSONAR_cm)
#pragma config(Motor,  port2,           Leftclaw,      tmotorVex393_MC29, openLoop, encoderPort, None)
#pragma config(Motor,  port3,           Leftdrive,     tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port4,           lift1,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           lift2,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           lift3,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           lift4,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           Rightdrive,    tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           Rightclaw,     tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "LCD.h"
#include "Tasks.h"
#include "BackgroundTasks.h"
//This code is for the VEX cortex platform
//FOR TESTING MARK OUT THIS FROM HERE------------------------
#pragma platform(VEX2)

//Select Download method as "competition"
#pragma competitionControl(Competition)


//Main competition background code...do not modify!
//#include "Vex_Competition_Includes.c"
//TO HERE-----------------------------------------------------
/**
*
*Desc: Resets encoder account
*
**/
void pre_auton(){

	SensorValue[rightEncoder] = 0;
	SensorValue[leftEncoder] = 0;
	SensorValue[liftEncoder] = 0;
	//bStopTasksBetweenModes = true;
	lcdSetup();
}
/**
*
*Desc: Uses switch statement to read from LED and choose appropriate auton method
*
*/
task autonomous(){
	switch(getCount()){
	case 0:
		auton_left();
		break;
	case 1:
		Auton_Right_Star();
		break;
	case 2:
		auton_leftcube();
		break;
	case 3:
		auton_rightcube();
		break;
	case 4:
		auton_right();
		break;
	case 6:
		Auton_Left_Star();
		break;
	}

}
/**
*
*desc: user control task.
*/
task usercontrol(){
	userControl();
}


//for comp mark out from here-------------------

task main(){
pre_auton();
	Auton_Right_Star();

}

/*TO HERE----------------------------------------------------------------
*/
