#include <stdio.h>
#include <stdint.h>

#define LED_ENABLE (1 << 0)
#define MOTOR_ENABLE (1 << 1)
#define SENSOR_ENABLE (1 << 2)

void enable(uint8_t *reg, uint8_t mask);
void disable(uint8_t *reg, uint8_t mask);
void isEnable(uint8_t *reg, uint8_t mask);

int main(){

      uint8_t control = 0;
      
      // Enable LED & Motor
      enable(&control, LED_ENABLE);
      enable(&control, MOTOR_ENABLE);
      printf("%d\n", control);

      // Disable Motor
      disable(&control, MOTOR_ENABLE);
      printf("%d\n", control);
      

      //Checking led
      isEnable(&control, LED_ENABLE);

      
      return 0;
}

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