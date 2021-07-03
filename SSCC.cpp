/*
	Name:       SSCC.cpp
	Created:	1/7/2021 8:28:30 p. m.
	Author:     Sergio Antozzi
*/

#include "SSCC.h"


SSCC::SSCC(unsigned long milis) {
	seg = milis / 1000;
	mil = milis % 1000;
	dec = mil / 100;
	cen = mil / 10;

}
unsigned long SSCC::getSeg(){
	return seg;
}
unsigned long SSCC::getDec(){
	return dec;
}
unsigned long SSCC::getCen(){
	return cen;
}


/*
unsigned int SSCC::setSeg(unsigned int seg){}
unsigned int SSCC::setDec(unsigned int dec){}
unsigned int SSCC::setCen(unsigned int cen){}
unsigned int SSCC::setMil(unsigned int mil){}
*/


