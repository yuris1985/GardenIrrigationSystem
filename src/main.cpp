#include <Arduino.h>

void setup()
{
   delay( 2000 );
   Serial.begin( 115200 );

   Serial.println( "start" );
}

void loop()
{
   delay( 1000 );
   Serial.println( millis() );
}
