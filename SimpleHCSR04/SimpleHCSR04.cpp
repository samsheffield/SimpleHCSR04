/*
SimpleHCSR04.cpp
A simple interface to the HC-SR04 "Ping" sensor that returns distance data in raw or converted (inches and centimeters) values. No more, no less. 
Based off the example from here: http://www.instructables.com/id/Simple-Arduino-and-HC-SR04-Example/

Sam Sheffield (hello@samsheffield.com)
*/

#include "SimpleHCSR04.h"

SimpleHCSR04::SimpleHCSR04(int triggerPin, int echoPin){
  _triggerPin = triggerPin;
  _echoPin = echoPin;
  pinMode(_triggerPin, OUTPUT);
  pinMode(_echoPin, INPUT);
}

void SimpleHCSR04::update(){
  digitalWrite(_triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(_triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_triggerPin, LOW);
  _raw = pulseIn(_echoPin, HIGH);
}

long SimpleHCSR04::getInches(){
  _inches = (_raw/2) / 74;
  return _inches;
}
long SimpleHCSR04::getCentimeters(){
  _centimeters = (_raw/2) / 29;
  return _centimeters;
}
long SimpleHCSR04::getRaw(){
  return _raw;
}