#include <stdio.h>
#include <stdint.h>

#define SET_BIT(var, pos) ((var) |= (1 << (pos)))
#define CLEAR_BIT(var, pos) ((var) &= ~(1 << (pos)))
#define CHECK_BIT(var, pos) ((var) & (1 << (pos)))

typedef struct{
      char deviceName[50];
      uint8_t deviceState;
}DeviceInfo;

void controlDevice(DeviceInfo *s, uint8_t reg);
int addSmartDevice(DeviceInfo *s, int choice, int deviceType, const char *one, const char *two, const char *three);

int main (){
      uint8_t reg = 0; 
      char conti;

      //declare struct
      DeviceInfo s[10];
      // Variables
      int choice;
      int deviceType;
      //constants
      const char one[] = "LIGHT";
      const char two[] = "MOTOR";
      const char three[] = "SENSOR";

      // loop code
      do{
                  //main code start here
      printf("\n1. Add Smart Device"
             "\n2. Control Station\n"
             "\nEnter: ");
      scanf("%d", &choice);
      if(choice == 1){
            addSmartDevice(s, choice, deviceType, one, two, three);
      }
      else if(choice == 2){
            // run Control Device
            controlDevice(s, reg);
      }
      else{
            printf("Invalid Input!!\ntry again");
      }

      printf("Enter * to return to menu: ");
      while(getchar() != '\n');
      scanf("%c", &conti);
      } while (conti == '*');


      return 0;
}

//Function for Add Smart Device menu
int addSmartDevice(DeviceInfo *s, int choice, int deviceType, const char *one,
                   const char *two, const char *three){
      printf("\nDevice Type: "
            "\n1. Light"
            "\n2. Motors"
            "\n3. Sensors\n"
            "\nEnter: ");
      scanf("%d", &deviceType);

      // switch for choices
      switch (deviceType)
      {
      case 1:
            printf("\nName your light: \n");
            printf("%s 1: ", one);
            scanf("%s", &s[0].deviceName);
            break;
      
      case 2:
            printf("\nName your motor: \n");
            printf("%s 2: ", two);
            scanf("%s", &s[1].deviceName);
            break;
      
      case 3:
            printf("\nName your sensor: \n");
            printf("%s 3: ", three);
            scanf("%s", &s[2].deviceName);
            break;

      default:
            break;
      }

      return 0;
}


void controlDevice(DeviceInfo *s, uint8_t reg){
      printf("\n------- Control Panel --------\n");
      for(int x = 0; x < 3; x++){
            printf("%s: %d", s[1].deviceName, CHECK_BIT(reg, 0));
      }

}
