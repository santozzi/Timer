/*
    Name:       Timer.cpp
    Created:	1/7/2021 8:28:30 p. m.
    Author:     Sergio Antozzi
*/

#include "Timer.h"



void TimerClass::inicio() {
    ini = millis();
}
unsigned long TimerClass::getMilisegundos() {
    return (millis() - ini);
}
unsigned long TimerClass::getSegundos() {
    return (millis() - ini)/1000;
}
unsigned long TimerClass::getCentesimas() {
    return (millis() - ini) / 100;
}
SSCC TimerClass::getSSCC() {
    return SSCC(millis()-ini);

}



  



