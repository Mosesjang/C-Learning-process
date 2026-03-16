#ifndef BITOPS_H
#define BITOPS_H


#include <stdint.h>

#define LED_ENABLE (1 << 0)
#define MOTOR_ENABLE (1 << 1)
#define SENSOR_ENABLE (1 << 2)


void enable(uint8_t *reg, uint8_t mask);
void disable(uint8_t *reg, uint8_t mask);
void isEnable(uint8_t *reg, uint8_t mask);

#endif