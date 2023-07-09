while(SensorValue[sonar] < 20) //장애물과의 거리가 20cm 이하일 때
{
	setMotorSpeed(lm, 50);
	setMotorSpeed(rm, 50);
}