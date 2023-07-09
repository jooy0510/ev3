//직진
task main(){
	serMotorSpeed(rm, 70); //오른쪽 모터 값을 70으로 지정
	setMotorSpeed(lm, 70); //왼쪽 모터 값을 70으로 지정
	sleep(1000); //상태를 1초간 유지
}

//오른쪽으로 커브 턴
task main(){
	serMotorSpeed(rm, 70);
	setMotorSpeed(lm, 0);
	sleep(1000); 
}

//왼쪽으로 커브 턴
task main(){
	serMotorSpeed(rm, 0);
	setMotorSpeed(lm, 70);
	sleep(1000); 
}