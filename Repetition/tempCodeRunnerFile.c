#include <stdio.h>
#include <stdlib.h>

typedef struct{
      int id;
      float value;
      char name[50];
}Sensor;

void getSenInfo(Sensor *s, int start, int count);
void pSenInfo(Sensor *s , int count);

int main(){
      int choice;
      int oldCount;
      printf("How many sensor? ");
      scanf("%d", &choice);

      Sensor *s = malloc(choice * sizeof(Sensor));

      getSenInfo(s, oldCount, choice);
      pSenInfo(s, choice);

      // Add more

      int more;
      printf("How much more? ");
      scanf("%d", &more);

      choice = oldCount;
      choice += more;

      // Reallocate
      Sensor *tem = realloc(s, choice * sizeof(Sensor));

      if(!tem){
            return 1;
      }

      s = tem;

      getSenInfo(s, oldCount, choice);
      pSenInfo(s, choice);

      free(s);




      return 0;
}

void getSenInfo(Sensor *s, int start, int count){
      printf("\n===== Sensor Manager =====\n");

      for(int x = start; x < count; x++){
            printf("Enter sensor %d:\n", x+1);
            printf("Name: ");
            scanf("%s", s[x].name);
            printf("ID: ");
            scanf("%d", &s[x].id);
            printf("Value: ");
            scanf("%f", &s[x].value);
      }
}

void pSenInfo(Sensor *s, int count){
      printf("\n----- Sensor Info -----\n");

      for(int x = 0; x < count; x++){
            printf(" - Sensor %d: Name: %s | ID: %d | Value: %.2f ", 
                  x+1, s[x].name, s[x].id, s[x].value);
      }
}