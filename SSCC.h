// SSCC.h
/*
	Name:       SSCC.h
	Created:	1/7/2021 8:28:30 p. m.
	Author:     Sergio Antozzi
*/
#ifndef _SSCC_h
#define _SSCC_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class SSCC
{
 protected:
	 unsigned long seg;
	 unsigned long dec;
	 unsigned long cen;
	 unsigned long mil;
public:
	SSCC(unsigned long milis);
	unsigned long getSeg();
	unsigned long getDec();
	unsigned long getCen();

/*
	unsigned int setSeg(unsigned int seg);
	unsigned int setDec(unsigned int dec);
	unsigned int setCen(unsigned int cen);
	unsigned int setMil(unsigned int mil);
	*/



};



#endif

