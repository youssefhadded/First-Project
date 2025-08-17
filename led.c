#include "led.h"
#include <stdio.h>

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

uint8_t LED_GetState(void) {
    return led_state;
}
