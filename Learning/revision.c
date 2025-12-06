#include <stdio.h>

      typedef enum{
                  brightness,
                  angle
            }Mode;
      typedef struct{
            
                  int brightness;
                  int angle;
            }Led;

            Led led1;

            int getUserInput();
            int brightnessControl(Led *sPtr);
            int angleControl(Led *sPtr);

            char continueInput;

      int main(){

            do{getUserInput();
            }
            while(continueInput == 'x');
            

            return 0;
      }

      int getUserInput(){
            int choice;
            printf("\n\n===== Led Menu =====\n1.brightness\n2.Angle\n");
            printf("Select a MODE(1 or 2): ");
            scanf("%d", &choice);
            printf("done");

            switch(choice){
                  case 1:
                  brightnessControl(&led1);
                  break;
                  
                  case 2:
                  angleControl(&led1);
                  break;

                  default:
                  printf("invaild input");
            }
      }

      int brightnessControl(Led *sPtr){
            
            printf("Brightness is at %d percent\n", sPtr-> brightness);
            printf("\nChange brightness Level: ");
            scanf("%d", &sPtr -> brightness);
            printf("New Brightness: %d%%", sPtr -> brightness);

            printf("\nEnter x -> menu: ");
            scanf(" %c", &continueInput);
      }

      int angleControl(Led *sPtr){
            printf("\nAngle is at %d degree", sPtr ->angle);
            printf("\nChange Angle: ");
            scanf("%d", &sPtr -> angle);
            printf("New Angle: %d degree\n", sPtr -> angle);

            printf("Enter x -> menu: ");
            scanf(" %c", &continueInput);
      }

      // The difference between a function Pointer and using a pointer to pass a struct(member) to a function is that 
      // a function pointer points to the whole fuction to run(or saves the pointer address) while the futher is points
      // to the struct address and can access the members.