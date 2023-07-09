//왼쪽 모터 속도 제어 : 기본 파워(10) + (경계값-현재 센서값)*비례상수
setMotorSpeed(lm, 10+(50-getColorReflectd(c2))*1.5);

//오른쪽 모터 속도 제어 : 기본 파워(10) - (경계값-현재 센서값)*비례상수
setMotorSpeed(rm, 10-(50-getColorReflectd(c2))*1.5);


//진동이 심할 경우 비례 상수를 줄이면 됨