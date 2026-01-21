#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
      int id;
      float Value;
      char name[50];
}Sensor;

void getSenInput(Sensor *s, int amount, int plus);
void printSenData(Sensor *s, int amount);

int main(){
      int amount = 0;
      printf("How many sensors? ");
      scanf("%d", &amount);

      Sensor *s = malloc(amount * sizeof(Sensor));
      if(!s) return 1;

      getSenInput(s, 0, amount);
      printSenData(s, amount);
      // Ask for more Sensors
      int more;
      printf("How many more sensors? ");
      scanf("%d", &more);
      int newCount = amount + more;
      // Create space for more sensors
      Sensor *t = realloc(s, amount * sizeof(Sensor));
      s = t;
      getSenInput(s, amount, newCount);
      printSenData(s, newCount);



      free(s);

      return 0;
}

void getSenInput(Sensor *s, int amount, int plus){
      printf("\n===== Sensor Info =====\n");
      for(int x = amount; x < plus; x++){
            printf("Enter Sensor %d info:\n", x+1);
            printf("Name: ");
            scanf("%s", s[x].name);
            printf("ID: ");
            scanf("%d", &s[x].id);
            printf("Value: ");
            scanf("%f", &s[x].Value);
      }
}

void printSenData(Sensor *s, int count){
      printf("\n----- Display Sensors -----\n");
      for(int x = 0; x < count; x++){
            printf("%d. ID: %d | Name: %s | Value: %.2f\n",
                  x + 1, s[x].id, s[x].name, s[x].Value);
      }
}