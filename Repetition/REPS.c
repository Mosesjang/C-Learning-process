#include <stdio.h>

typedef struct{
      int id;
      float value;
      char type[50];
}Sensor;

void getName(Sensor *t, int count);
void printName(Sensor *t, int count);


int main(){
      int choice;
      printf("How many sensors? ");
      scanf("%d", &choice);

      Sensor type[choice];

      getName(type, choice);
      printName(type, choice);


      return 0;
}

void getName(Sensor *t, int count){
      printf("\n===== Sensor Manager =====\n");
      for(int x = 0; x < count; x++){
            t[x].id = x+1;
            printf("Enter Sensor %d type: ", x+1);
            scanf("%s", t[x].type);
            printf("Enter Sensor %d Value: ", x+1);
            scanf("%.2f", &t[x].value);

      }
}

void printName(Sensor *t, int count){
      printf("\n----- Sensor Value ------\n");
      for(int x = 0; x < count; x++){
            printf("ID: %d| Type: %s| Value: %d\n", t[x].id, t[x].type, t[x].value);
      }
}