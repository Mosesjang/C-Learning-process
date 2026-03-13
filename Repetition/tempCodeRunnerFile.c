#include <stdio.h>
#include <stdint.h>

#define LED_ENABLE (1 << 0)
#define MOTOR_ENABLE (1 << 1)
#define SENSOR_ENABLE (1 << 2)

int main(){

      uint8_t control = 0;
      
      // Enable LED
      control |= LED_ENABLE; 
      printf("%d\n", control);


      // Enable sensor
      control |= SENSOR_ENABLE;
      printf("%d\n", control);

      //Disable LED
      control &= ~LED_ENABLE;
      printf("%d\n", control);
      

      return 0;
}