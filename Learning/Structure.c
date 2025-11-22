#include <stdio.h>

      struct Sensor{
            int temp;
            char color[100];
      };

      int main(){
            struct Sensor no1 = {25, "Green"};
            struct Sensor no2 = {30, "Red"};

            printf("Temp: %d, Indication: %s", no1.temp, no1.color);
            printf("\nTemp: %d, Indication: %s", no2.temp, no2.color);
            

            return 0;
      }