#include <AFMotor.h>
#define lefts A0
#define rights A1

AF_DCMotor motor1(1,MOTOR12_1KHZ);
AF_DCMotor motor2(2,MOTOR12_1KHZ);
AF_DCMotor motor3(3,MOTOR34_1KHZ);
AF_DCMotor motor4(4,MOTOR34_1KHZ);

void setup(){
motor1.setSpeed(120);
motor2.setSpeed(120);
motor3.setSpeed(120);
motor4.setSpeed(120);

pinMode(lefts,INPUT);
pinMode(rights,INPUT);
Serial.begin(9600);

}

void loop(){
Serial.println(analogRead(lefts));
Serial.println(analogRead(rights));

if(analogRead(lefts)<=400 && analogRead(rights) <=400){
motor1.run(FORWARD);
motor2.run(FORWARD);
motor3.run(FORWARD);
motor4.run(FORWARD);
}

else if(analogRead(lefts)<=400 && !analogRead(rights) <=400){
motor1.run(FORWARD);
motor2.run(FORWARD);
motor3.run(BACKWARD);
motor4.run(BACKWARD);
}

else if(!analogRead(lefts)<=400 && analogRead(rights) <=400){
motor1.run(BACKWARD);

motor2.run(BACKWARD);
motor3.run(FORWARD);
motor4.run(FORWARD);
}

else if(!analogRead(lefts)<=400 && !analogRead(rights) <=400){
motor1.run(RELEASE);
motor2.run(RELEASE);
motor3.run(RELEASE);
motor4.run(RELEASE);
}

}
