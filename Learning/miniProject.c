#include <stdio.h>
      struct Motor{
            int speed;
            float voltage;
            char status[20]; // On and off
      };

      int getMotorValue(struct Motor *c){
            printf("Enter speed: ");
            scanf("%d", &c ->speed);
            printf("Enter volatage: ");
            scanf("%f", &c ->voltage);
            printf("Enter status: ");
            scanf("%s", c ->status);
            return 0;
      }

      int main(){
            struct Motor m1;


            getMotorValue(&m1);
            struct Motor *Ptr = &m1;

            printf("Speed: %drpm\nVoltage: %.2fv\nStatus: %s", Ptr ->speed, Ptr ->voltage, Ptr ->status);

            return 0;
      }