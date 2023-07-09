while(SensorValue[Touch] == 1) //터치 센서를 누르면
{
	setMotorSpeed(lm, 50); 
	setMotorSpeed(rm, 50);
}