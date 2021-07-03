/*
	Name:       Timer.h
	Created:	1/7/2021 8:28:30 p. m.
	Author:     Sergio Antozzi
*/
#include "SSCC.h"
#ifndef _TIMER_h
#define _TIMER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class TimerClass
{
 protected:
	 unsigned long ini;
	

 public:
	void inicio();
	unsigned long getMilisegundos();
	unsigned long getSegundos();
	unsigned long getCentesimas();
	SSCC getSSCC();




	


};


#endif

