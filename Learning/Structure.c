#include <stdio.h>
#include <string.h>

      struct Sensor{
            int temp;
            char color[100];
      };

      int main(){
            
            
            struct Sensor no1;
            struct Sensor no2;

            printf("Enter livingroom temp: ");
            scanf(" %d", &no1.temp);
            printf("\nEnter bedroom temp: ");
            scanf("%d", &no2.temp);

            if(no1.temp <= 25){
             strcpy(no1.color, "Green");
            }
            else{
                  strcpy(no1.color, "Red");
            }
            if(no2.temp <= 25){
             strcpy(no2.color, "Green");
            }
            else{
                  strcpy(no2.color, "Red");
            }
            printf("\nTemp: %d, Indication: %s", no1.temp, no1.color);
            printf("\nTemp: %d, Indication: %s", no2.temp, no2.color);
            

            return 0;
      }