#include <stdio.h>
#include <stdlib.h>

typedef struct{
      int id;
      float value;
      char name[50];
}Sensor;

void getSenInfo(Sensor *s, int count);
void printInfo(Sensor *s, int count);

int main(){
      int choice;
      printf("How many Sensor? ");
      scanf("%d", &choice);

      Sensor *s = malloc(choice * sizeof(Sensor));

      getSenInfo(s, choice);
      printInfo(s, choice);

      return 0;
}

void getSenInfo(Sensor *s, int count){
      printf("\n===== Sensor Manager =====\n");
      for(int x = 0; x < count; x++){
            printf("Enter Sensor %d\n", x+1);
            printf("Name: ");
            scanf("%s", s[x].name);
            printf("ID: ");
            scanf("%d", &s[x].id);
            printf("Value: ");
            scanf("%f", &s[x].value);
      }
      
}

void printInfo(Sensor *s, int count){
      printf("\n----- Sensor Info -----\n");
      for(int x = 0; x < count; x++){
            printf("- Sensor: %d ", x+1);
            printf("ID: %d | Name: %s | Value: %.2f\n", 
                  s[x].id, s[x].name, s[x].value);
      }
}

