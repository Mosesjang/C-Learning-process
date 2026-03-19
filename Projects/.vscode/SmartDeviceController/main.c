#include <stdio.h>
#include <stdint.h>

typedef struct{
      char deviceName[50];
      uint8_t deviceState;
}DeviceInfo;

int connectDevices(DeviceInfo *s, int count);
int addSmartDevice(DeviceInfo *s, int choice, int deviceType, const char *one, const char *two, const char *three);

int main (){
      //declare struct
      DeviceInfo s[10];
      // Variables
      int choice;
      int deviceType;
      //constants
      const char one[] = "LIGHT";
      const char two[] = "MOTOR";
      const char three[] = "SENSOR";

      //main code start here
      printf("\n1. Add Smart Device"
             "\n2. Control Device\n"
             "\nEnter: ");
      scanf("%d", &choice);
      if(choice == 1){
            addSmartDevice(s, choice, deviceType, one, two, three);
      }
      else if(choice == 2){
            // run Control Device
      }
      else{
            printf("Invalid Input!!\ntry again");
      }

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
            scanf("%c",)
            break;
      
      case 2:
            printf("\nName your motor: \n");
            printf("%s 2: ", two);
      
      case 3:
            printf("\nName your sensor: \n");
            printf("%s 3: ", three);

      default:
            break;
      }

      return 0;
}
