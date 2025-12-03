#include <stdio.h>
      typedef enum {
            ON,
            OFF
      }Value;
      typedef union {
            int brightness;
            int blinkRate;
      }ledValue;

      typedef struct {
            int number;
            char name[50];
      }myStruct;

       int main(){

            Value state = ON;
            if (state == ON){
                  printf("it is ON\n");
            }

            ledValue hey;
            hey.brightness =75;
            printf("%d\n",hey.brightness);

            myStruct house = {10};
            printf("%d", house.number);


            return 0;
       }