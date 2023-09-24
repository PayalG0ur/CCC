#include <PS4Controller.h>

void setup()
{
  Serial.begin(115200);
  PS4.begin("78:e3:6d:0b:45:de");
  Serial.println("Ready.");
}
void loop()
{
  if (PS4.isConnected())
  {
    if ( PS4.data.button.l2 ) {
      Serial.print("l2 button at ");
      Serial.println(PS4.data.analog.button.l2, DEC);
       int l2 = (PS4.data.analog.button.l2, DEC);
      l2 = map ((PS4.data.analog.button.l2, DEC),0,255,0,180);
    }
    if ( PS4.data.button.r2 ) {
      Serial.print("r2 button at ");
      Serial.println(PS4.data.analog.button.r2, DEC);
       int r2 = (PS4.data.analog.button.r2, DEC);
      r2 = map ((PS4.data.analog.button.r2, DEC),0,255,0,180);
    }

    if ( PS4.event.analog_move.stick.lx ) 
    {
      Serial.print("Left Stick x at ");
      Serial.println(PS4.data.analog.stick.lx, DEC);
      int lx = (PS4.data.analog.stick.lx, DEC);
      lx = map ((PS4.data.analog.stick.lx, DEC),0,255,0,180);
    }
    if ( PS4.event.analog_move.stick.ly ) 
    {
      Serial.print("Left Stick y at ");
      Serial.println(PS4.data.analog.stick.ly, DEC);
      int ly = (PS4.data.analog.stick.ly, DEC);
      ly = map ((PS4.data.analog.stick.ly, DEC),0,255,0,180);
    }
    if ( PS4.event.analog_move.stick.rx )   
    {
      Serial.print("Right Stick x at ");
      Serial.println(PS4.data.analog.stick.rx, DEC);
      int rx = (PS4.data.analog.stick.rx, DEC);
      rx = map ((PS4.data.analog.stick.rx, DEC),0,255,0,180);
    }
    if ( PS4.event.analog_move.stick.ry )
    {
      Serial.print("Right Stick y at ");
      Serial.println(PS4.data.analog.stick.ry, DEC);
      int ry = (PS4.data.analog.stick.ry, DEC);
      ry = map ((PS4.data.analog.stick.ry, DEC),0,255,0,180);
    }
    Serial.print("Battey = ");
    Serial.print(PS4.data.status.battery, DEC);
    Serial.println(" / 16");

    Serial.println();
    delay(1000);

  }
}
