#include <stdio.h>

typedef struct{
      int id;
      int age;
      char name[50];
}Classroom;


int main(){
      int choice;
      printf("How many students? ");
      scanf("%d", choice);

      Classroom students[choice];


      return 0;
}

void getName(Classroom *s, int count){
      printf("\n===== Student Manager =====\n");
      for(int x = 0; x < count; x++){
            s->id = x+1;
            printf("\nEnter student %d name: ", x+1);
            scanf("%s", s->name);
            printf("Enter student %d age: ", x+1);
            scanf("%d", s->age);
      }
}

void printName(Classroom *s, int count){
      printf("\n----- Student Info -----\n");
      printf("ID: %d | Name: %s | Age: %d",
            s->id, s->name, s->age);
}