#ifndef BITOPS_H
#define BITOPS_H


#include <stdint.h>

#define LED_ENABLE (1 << 0)
#define MOTOR_ENABLE (1 << 1)
#define SENSOR_ENABLE (1 << 2)


void enable(uint8_t *reg, uint8_t mask);
void disable(uint8_t *reg, uint8_t mask);
void isEnable(uint8_t *reg, uint8_t mask);

// new tasks
#define SET_BIT(reg, bit) ((reg) |= (1 << (bit)))
#define CLEAR_BIT(reg, bit) ((reg) &= ~(1 << (bit)))
#define TOGGLE_BIT(reg, bit) ((reg) ^= (1 << (bit)))
#define CHECK_BIT(reg, bit) ((reg) & (1 << (bit)))

#endif