#include <stdio.h>
#include <stdint.h>
#include "bitops.h"

void enable(uint8_t *reg, uint8_t mask){
      *reg |= mask;
}

void disable(uint8_t *reg, uint8_t mask){
      *reg &= ~ mask;
}

void isEnable(uint8_t *reg, uint8_t mask){
      if(*reg & mask){
            printf("LED ON\n");
      }
      else{
            printf("LED OFF\n");
      }
}