#include <SimpleHCSR04.h>

SimpleHCSR04 ping(12, 13); // create SimpleHC-SR04 object using digital pin 12 as trigger and 13 as echo

// Distance data is returned as a long
long centimeters = 0; 
long inches = 0;
long raw = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  ping.update(); // calling update() will get data from ping sensor
  centimeters = ping.getCentimeters(); // getCentimeters will return a converted value of the distance in cm.
  //inches = ping.getInches(); // getInches will return a converted value of the distance in in.
  //raw = ping.getRaw(); // // getRaw will return the raw numeric value of distance.

  Serial.println(centimeters);
  delay(10);
}



