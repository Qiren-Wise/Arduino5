#include <Servo.h>

Servo servo_9;

void setup() {
  // put your setup code here, to run once:
  pinMode(5,INPUT);
pinMode(8,OUTPUT);
servo_9.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(5) == false)
  {
    
      for (int i =1;i<=180;i = i + (1))
      {
        digitalWrite(8,LOW);
        servo_9.write(i);
        delay(10);
        }
      
        for (int i=180;i<=1;i = i-(1))
        {
          servo_9.write(i);
          delay(10);
          }
  
  }else{
            digitalWrite(8,HIGH);
            servo_9.write(90);
            delay(0);
            }
}
