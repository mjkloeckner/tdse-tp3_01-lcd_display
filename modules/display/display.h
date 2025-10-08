#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include <stdint.h>

void displayInit();
 
void displayCharPositionWrite( uint8_t charPositionX, uint8_t charPositionY );

void displayStringWrite( const char * str );

#endif // _DISPLAY_H_