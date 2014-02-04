/*
SimpleHCSR04.h
A simple interface to the HC-SR04 "Ping" sensor that returns distance data in raw or converted (inches and centimeters) values. No more, no less. 
Based off the example from here: http://www.instructables.com/id/Simple-Arduino-and-HC-SR04-Example/

Sam Sheffield (hello@samsheffield.com)
*/

#ifndef SimpleHCSR04_h
#define SimpleHCSR04_h

#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class SimpleHCSR04{
  public:
    SimpleHCSR04(int triggerPin, int echoPin); 
    long getInches();
    long getCentimeters();
    long getRaw();
    void update();

  private:
    int _triggerPin;
    int _echoPin;

    long _raw;
    long _inches;
    long _centimeters;
};

#endif