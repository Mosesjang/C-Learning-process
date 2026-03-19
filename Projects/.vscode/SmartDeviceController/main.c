#include <stdio.h>
#include <stdint.h>

typedef struct{
      char device[50];
      uint8_t deviceState;
}DeviceInfo;

int connectDevices(DeviceInfo *s, int count);
void addSmartDevice(int choice);

int main (){
      //declare struct
      DeviceInfo *s;

      int choice;
      printf("\n1. Add Smart Device "
             "\n2. Control Device\n"
             "\nEnter: ");
      scanf("%d", &choice);
      if(choice == 1){
            addSmartDevice(choice);
      }


      //Devices
      // printf("\n1. Light bulb"
      //        "\n2. Motor"
      //        "\n3. Temp Sensor");


      return 0;
}

//Function for Add Smart Device menu
void addSmartDevice(int choice){
      printf("\nDevice Type: "
            "\n1. Light"
            "\n2. Motors"
            "\n3. Sensors\n"
            "\nEnter: ");
      scanf("%d", &choice);

      // switch for choices
}
int connectDevices(DeviceInfo *s, int count){
      printf("Device Name: \n");
      scanf("%c", &s->device);

      return 0;
}