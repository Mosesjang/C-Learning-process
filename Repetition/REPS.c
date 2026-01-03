#include <stdio.h>

typedef struct{
      int id;
      int age;
      char name[50];
}Classroom;

void getInput(Classroom students[], int count);
void printNames(Classroom student[], int count);

int main(){
      int choice;
      printf("\nHow many student? ");
      scanf("%d", &choice);

      Classroom students[choice];

      getInput(students, choice);
      printNames(students, choice);


      return 0;
}

void getInput(Classroom students[], int count){
      printf("\n===== Student Manager =====\n");
      
      for(int x = 0; x < count; x++){
            students[x].id = x+1;
            printf("\nEnter student %d name: ", x +1);
            scanf("%s", students[x].name);
            printf("Enter student %d age: ", x+1);
            scanf("%d", &students[x].age);
      }

}
 
void printNames(Classroom student[], int count){
      printf("\n----- Student Info -----\n");
      for(int x = 0; x < count; x++){
            printf("ID: %d | Name: %s | Age: %d\n", 
            student[x].id,
            student[x].name,
            student[x].age);
      }
}