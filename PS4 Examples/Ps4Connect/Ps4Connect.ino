#include <PS4Controller.h>

void setup()
{
    Serial.begin(9600);
    PS4.begin("78:e3:6d:0b:45:de");
    Serial.println("Ready.");
}

void loop()
{
  if (PS4.isConnected()){
    Serial.println("Connected!");
  }

  delay(3000);
}
