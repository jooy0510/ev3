if(getColorReflected(c2) > 50) //반사광이 큼 -> 흰색
{
	setMotorSpeed(lm, 50);
	setMotorSpeed(rm, 0);
}
else if(getColorReflectd(c2) < 35) //반사광이 작음 -> 검정색
{
	setMotorSpeed(lm, 0);
	setMotorSpeed(rm, 50);
}
else //둘 다 아님 -> 직진
{
	setMotorSpeed(lm, 50);
	setMotorSpeed(rm, 50);
}