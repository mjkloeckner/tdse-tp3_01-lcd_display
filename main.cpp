#include "mbed.h"
#include "display.h"

int main()
{
    displayInit();
    displayStringWrite("Hello, World!");

    while (true) {
        ;
    }
}