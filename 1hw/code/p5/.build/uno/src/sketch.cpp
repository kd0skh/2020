#include <Arduino.h>
void setup();
void loop();
#line 1 "src/sketch.ino"
union data
{
  unsigned char temp;
  unsigned int time;
};

void setup()
{
  //d
  Serial.begin(9600);
}


void loop()
{
union data myData;
myData.time = 0xFCAB;
//myData.time = 0x0;
myData.temp = 0x0;
//myData.temp = 0xFCAB;
  Serial.print("Address of myData.time: ");
  Serial.println( (int)&myData.temp,HEX);
  Serial.print("Address of myData.temp: ");
  Serial.println( (int)&myData.time,HEX);
  Serial.println();
  Serial.print("Value of myData.time: ");
  Serial.println(myData.time,HEX);
  Serial.print("Value of myData.temp: ");
  Serial.println(myData.temp,HEX);
  while(1){}
}