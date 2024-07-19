#include <Servo.h>   //servo library
Servo sg90;  
int echo = 7;   
int trig = 6;    
int servopin = 8;
int distance;
int duration;



void setup() {       
    sg90.attach(8);
    pinMode(trig, OUTPUT);  
    pinMode(echo, INPUT);  
  
} 


void loop() {
  digitalWrite(trig,0);
  delay(2);
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0); 
  duration = pulseIn(echo,1);
  distance = duration*0.034/2;

  
if ( distance<30 ) {   
 sg90.write(0);    
 delay(4500);
 Serial.print(distance);
}
 else{
  sg90.write(180);
  delay(50);
 }
}
