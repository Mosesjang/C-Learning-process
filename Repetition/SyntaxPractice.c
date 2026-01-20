#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
      int id;
      float value;
      char name[50];
}Sensor;

void getSensorInfo(Sensor *sPtr,int amount);
void printInfo(Sensor *sPtr, int amount);

int main(){
      int amount = 0;
      printf("How many sensors? ");
      scanf("%d", &amount);

      Sensor *sPtr = malloc(amount * sizeof(Sensor));
      if(!sPtr) return 1;

      getSensorInfo(sPtr, amount);
      printInfo(sPtr, amount);
      
      free(sPtr);
      return 0;
}

void getSensorInfo(Sensor *sPtr,int amount){
      printf("\n===== Sensor Info Input ======\n");
      for(int x = 0; x < amount; x++){
            printf("\nInput Sensor %d Info\n", x +1);
            printf("Name: ");
            scanf("%s", sPtr[x].name);
            printf("ID: ");
            scanf("%d", &sPtr[x].id);
            printf("Value: ");
            scanf("%f", &sPtr[x].value);
      }


}

void printInfo(Sensor *sPtr, int amount){
      printf("\n----- Sensors Data -----\n");
      for(int x = 0; x < amount; x++){

            printf("%d. ID: %d | Name: %s | Value: %.2f\n",
                  x+1, sPtr[x].id, sPtr[x].name, sPtr[x].value);
      }
}