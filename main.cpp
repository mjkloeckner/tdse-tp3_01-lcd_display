//=====[Libraries]=============================================================

#include "mbed.h"
#include "smart_home_system.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    printf("Hello, World!\n");
    smartHomeSystemInit();
    while (true) {
        smartHomeSystemUpdate();
    }
}