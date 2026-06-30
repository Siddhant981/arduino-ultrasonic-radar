#include <Servo.h>

Servo servo_9; 

int trigPin = 10; 
int echoPin = 8; 
int ledPin = 11; 

int distance; 
long duration; 
int angle =0; 

void setup() 
{ 
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(ledPin, OUTPUT); 

servo_9.attach(9); 
Serial.begin(9600); 

} 

void loop() { 

for (angle =0; angle <= 180; angle++) { 

servo_9.write(angle); 
delay(30); 

digitalWrite(trigPin,LOW); 
delayMicroseconds(2); 
digitalWrite(trigPin,HIGH); 
delayMicroseconds(10); 
digitalWrite(trigPin,LOW); 

duration = pulseIn(echoPin,HIGH); 
distance = duration * 0.034 / 2; 

Serial.print("Angle: "); 
Serial.print(angle); 
Serial.print(" | Distance; "); 
Serial.print(distance); 
Serial.println("cm"); 

for (angle =180; angle >= 0; angle--) { 

servo_9.write(angle); 
delay(30); 

digitalWrite(trigPin, LOW); 
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(trigPin, LOW); 

duration = pulseIn(echoPin, HIGH); 
distance = duration * 0.034 / 2; 

Serial.print("Angle: "); 
Serial.print(angle); 
Serial.print(" | Distance; "); 
Serial.print(distance); 
Serial.println("cm"); 

if (distance > 0 && distance <= 100) { 

digitalWrite(ledPin, HIGH); 

} 
else 
{ 
digitalWrite(ledPin, LOW); 
} 
} 
} 
} 
