
/*
    Name:       EjemploTimer.ino
    Created:	1/7/2021 8:28:30 p. m.
    Author:     Sergio Antozzi
*/

#include "SSCC.h"
#include "Timer.h"

TimerClass temporizador;

void setup()
{
   
 
    Serial.begin(9600);

}

// Add the main program code into the continuous loop() function
void loop()
{
    temporizador.inicio();
    delay(589555);
    Serial.println("Segundos: ");
    Serial.println(temporizador.getSSCC().getSeg());
    Serial.println("Decimas: ");
    Serial.println(temporizador.getSSCC().getDec());
    Serial.println("Centecimas: ");
    Serial.println(temporizador.getSSCC().getCen());


}
