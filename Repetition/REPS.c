#include <stdio.h>
#include <stdlib.h>

typedef struct{
      int id;
      float Value;
      char name[50];
}Sensors;

void getSensorInfo(Sensors *s, int amount);
void printInfo(Sensors *s, int amount);

int main(){
      int amount = 0;
      printf("How many Sensors? ");
      scanf("%d", &amount);

      Sensors *s = malloc(amount * sizeof(Sensors));
      if(!s) return 1;

      getSensorInfo(s, amount);
      printInfo(s, amount);

      free(s);

      return 0;
}

void getSensorInfo(Sensors *s, int amount){
      printf("\n===== Sensors Info =====\n");
      for(int x = 0; x < amount; x++){
            printf("Enter Sensor %d Info:\n", x + 1);
            printf("Name: ");
            scanf("%s", s[x].name);
            printf("ID: ");
            scanf("%d", &s[x].id);
            printf("Value: ");
            scanf("%f", &s[x].Value);

      }
}

void printInfo(Sensors *s, int amount){
      printf("----- Display Sensor Data -----\n");
      for(int x = 0; x < amount; x++){
            printf("%d. ID: %d | Name: %s | Value: %.2f\n",
                  x +1, s[x].id, s[x].name, s[x].Value);
      }
}