#include <stdio.h>
#include <stdint.h>
#include "bitops.h"

#define LED_ENABLE (1 << 0)
#define MOTOR_ENABLE (1 << 1)
#define SENSOR_ENABLE (1 << 2)

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