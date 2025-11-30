#include <stdio.h>
#include <string.h>
      char userInputString[50];
      int userInputInt;
      float userInputfloat;

struct sensorData{
      char  sensorName[50];
      float temperature;
      int sensorID;
};

int main(){

     struct sensorData sensor1;
     
     printf("===== SENSOR STATUS =====");
     printf("\nName: ");
     scanf("%s", userInputString);
     printf("Temparature: ");
     scanf("%f", &userInputfloat);
     printf("ID: ");
     scanf("%d", &userInputInt);
     
       strcpy(sensor1.sensorName, userInputString);
       sensor1.temperature = userInputfloat;
       sensor1.sensorID = userInputInt;

       printf("Name: %s", sensor1.sensorName);
       printf(",  Temp: %.2f", sensor1.temperature);
       printf(",  ID: %d", sensor1.sensorID);

      return 0;
}