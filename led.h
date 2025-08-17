#ifndef LED_H
#define LED_H

#include <stdint.h>

// Prototypes
void LED_Init(void);
void LED_On(void);
void LED_Off(void);
void LED_Toggle(void);
uint8_t LED_GetState(void);   // 👈 ajout pour tester plus facilement

#endif
