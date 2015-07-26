#include "myPoint.h"





myPoint::~myPoint(void)
{
}

myPoint myPoint::rect(float x, float y){
	return myPoint(x, y);
}

myPoint myPoint::polar(float x, float y){
	return myPoint(x * 3, y * 3);
}
