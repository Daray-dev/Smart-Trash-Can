#include <Arduino.h>
#include <Servo.h>

int servoPin = 7;
const int pingPin = 8;
const int echoPin = 9;


Servo Servo1;

long microsecondsToInches(long microseconds);
long microsecondsToCentimeters(long microseconds);

void setup() {
 
 Serial.begin(9600);
 Servo1.attach(servoPin);

 pinMode(pingPin, OUTPUT);
 pinMode(echoPin, INPUT);

}

void loop() {
 
  long duration, inches, cm;


  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);


  duration = pulseIn(echoPin, HIGH);

  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  

  if (inches >= 2) {
  
  Servo1.write(0);
  delay(50);

  } else {
  Servo1.write(90);
  delay(4000);
}
}

long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
  

