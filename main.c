#include "led.h"
#include <unistd.h>  // pour sleep()

int main(void) {
    LED_Init();

    for (int i = 0; i < 5; i++) {
        LED_Toggle();
        sleep(1);  // attendre 1 seconde
    }

    LED_Off();
    return 0;
}
