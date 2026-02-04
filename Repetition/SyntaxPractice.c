#include <stdio.h>
#include <stdlib.h>

typedef struct{
      int id;
      float value;
      char name[50];
}Sensor;

int getSenInfo(Sensor *s, int start, int count);
void printInfo(Sensor *s, int count);

int main(){
      int start = 0;
      int choice;
      printf("How many Sensor? ");
      scanf("%d", &choice);

      Sensor *s = malloc(choice * sizeof(Sensor));

      
     start = getSenInfo(s, start, choice);
      printInfo(s, choice);

      // Add more 
      int more;
      printf("How much more? ");
      scanf("%d", &more);

      choice += more;

      Sensor *m = realloc(s, choice * sizeof(Sensor));
       if (!m) {
            free(s);
            return 1;
        }
      s = m;

      printf("%d", start);

      getSenInfo(s, start, choice);
      printInfo(s, choice);

      free(s);

      return 0;
}

int getSenInfo(Sensor *s, int start, int count){
      printf("\n===== Sensor Manager =====\n");
      for(int x = start; x < count; x++){
            printf("Enter Sensor %d\n", x+1);
            printf("Name: ");
            scanf("%s", s[x].name);
            printf("ID: ");
            scanf("%d", &s[x].id);
            printf("Value: ");
            scanf("%f", &s[x].value);

            x = count;
            return x;
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

