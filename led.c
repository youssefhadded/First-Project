#include "led.h"
#include <stdio.h>

// On simule l'état de la LED (0 = éteinte, 1 = allumée)
static uint8_t led_state = 0;

void LED_Init(void) {
    led_state = 0;
    printf("LED initialisée. Etat = OFF\n");
}

void LED_On(void) {
    led_state = 1;
    printf("LED = ON\n");
}

void LED_Off(void) {
    led_state = 0;
    printf("LED = OFF\n");
}

void LED_Toggle(void) {
    led_state = !led_state;
    printf("LED toggled -> Etat = %s\n", led_state ? "ON" : "OFF");
}