#pragma config(Sensor, in4,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in5,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, dgtl2,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl4,  leftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           rightMotor,    tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           armMotor,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          leftMotor,     tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task auton() {
	boolean allianceColor = false;
	int blue = 500;
	int red = 700;
	if (allianceColor) {
		if (SensorValue[lineFollower] == blue) {
		}
	}
	else {
		if (SensorValue[lineFollower] == red) {
		}
	}


}
