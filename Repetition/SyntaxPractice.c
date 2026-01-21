#include <stdio.h>
#include <stdlib.h>

typedef struct{
      int id;
      float Value;
      char name[50];
}Sensor;

void getSenInput(Sensor *s, int amount);
void printSenData(Sensor *s, int amount);

int main(){
      int amount;
      printf("How many sensors? ");
      scanf("%d", &amount);

      Sensor *s = malloc(amount * sizeof(Sensor));
      if(!s) return 1;

      getSenInput(s, amount);
      printSenData(s, amount);

      free(s);

      return 0;
}

void getSenInput(Sensor *s, int amount){
      printf("\n===== Sensor Info =====\n");
      for(int x = 0; x < amount; x++){
            printf("Enter Sensor %d info:\n", x+1);
            printf("Name: ");
            scanf("%s", s[x].name);
            printf("ID: ");
            scanf("%d", &s[x].id);
            printf("Value: ");
            scanf("%f", &s[x].Value);
      }
}

void printSenData(Sensor *s, int amount){
      printf("\n----- Display Sensors -----\n");
      for(int x = 0; x < amount; x++){
            printf("%d. ID: %d | Name: %s | Value: %.2f\n",
                  x + 1, s[x].id, s[x].name, s[x].Value);
      }
}