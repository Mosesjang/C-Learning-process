#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
      int id;
      float value;
      char name[50];
}Sensor;

int main(){

      Sensor *sPtr = malloc(sizeof(Sensor));

      sPtr->id = 1;
      sPtr->value = 264.4;
      strcpy(sPtr->name, "Temperature");

      printf("ID: %d | Type: %s | Value: %.2f",
            sPtr->id, sPtr->name, sPtr->value);

      return 0;
}