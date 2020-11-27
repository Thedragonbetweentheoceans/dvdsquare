#include <AFMotor.h>
AF_Stepper motor1(400, 2);
AF_Stepper motor2(200, 1);

int data;
void setup() {


Serial.begin(9600); // set up Serial library at 9600 bps




}
void loop() {


while(Serial.available())
{
  data = Serial.read();
}

if(data == 'd')
{
motor1.setSpeed(50); 
motor1.step(400, FORWARD, SINGLE);

}
else if(data == 'a')
{
  motor1.setSpeed(50);
  motor1.step(400,BACKWARD, SINGLE); 
}

if(data == 'w')
{
motor2.setSpeed(50); 
motor2.step(200, FORWARD, SINGLE);

}
else if(data == 's')
{
  motor2.setSpeed(50); 
  motor2.step(200, BACKWARD, SINGLE);
}

}

