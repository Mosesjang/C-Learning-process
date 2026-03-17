#include <stdio.h>
#include <stdint.h>
#include "bitops.h"
#include "led.h"


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

      // led
      ledOn();
      ledOff();

      // Tasks

      control = 0;
      SET_BIT(control, 0);
      SET_BIT(control, 2);

      printf("\n%d\n", control);

      CLEAR_BIT(control, 0);
      printf("\n%d\n", control);

      
      return 0;
}