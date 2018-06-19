#pragma config(Sensor, port2,  touchLED,       sensorVexIQ_LED)
#pragma config(Sensor, port5,  bumper,         sensorVexIQ_Touch)
#pragma config(Sensor, port8,  gyro,           sensorVexIQ_Gyro)
#pragma config(Sensor, port11, lightSensor,    sensorVexIQ_ColorGrayscale)
#pragma config(Motor,  motor7,          leftMotor,     tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor12,         rightMotor,    tmotorVexIQ, PIDControl, reversed, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*------------------------------------------------------------------------------------------------
This program will ........
------------------------------------------------------------------------------------------------*/

task main()
{
	while(true)
	{
		// Move forward at half power for 1.5 seconds
		setMotorSpeed(leftMotor, 50);			//Set the leftMotor (motor1) to half power forward (50)
		setMotorSpeed(rightMotor, 50);  	//Set the rightMotor (motor6) to half power forward (50)
		sleep(1500);											//Wait for 1.5 seconds before continuing on in the program.
	}
}