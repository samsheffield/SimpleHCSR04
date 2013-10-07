SimpleHCSR04
============

A simple interface to the HC-SR04 "Ping" sensor that returns distance data in raw or converted (inches and centimeters) values. No more, no less. 
Based off the example from here: http://www.instructables.com/id/Simple-Arduino-and-HC-SR04-Example/


Installation:

To install this library, place the unzipped folder in your Arduino/libraries folder. If the folder does not exist, create it first.


Usage:

SimpleHCSR04(trigger pin, echo pin) - When creating a SimpleHCSR04 object you must provide the numbers of the trigger and echo pins.

void update() - used to get current distance data.

long getInches() - returns the distance value in inches.

long getCentimeters() - returns the distance value in centimeters.

long getRaw() - returns the distance as a raw value.


See example sketch for full usage.
