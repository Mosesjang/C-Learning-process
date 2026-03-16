#ifndef BITOPS_H
#define BITOPS_H


#include <stdint.h>

void enable(uint8_t *reg, uint8_t mask);
void disable(uint8_t *reg, uint8_t mask);
void isEnable(uint8_t *reg, uint8_t mask);

#endif