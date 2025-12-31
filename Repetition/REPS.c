#include <stdio.h>
#include <string.h>



typedef struct {
      int id;
      int age;
      char name[50];
}Person;

int getName(Person student[], int count);
void printName(Person student[], int count);

int main(){

      int choice = 0;
      printf("\n===== Student Manager ======\n");
      printf("How many students? ");
      scanf("%d", &choice);

      Person student[choice];
      student[choice].id = choice + 1;
      

      // Get student name
      getName(student, choice);
      printName(student, choice);

}

int getName(Person student[], int count){
      
      for(int x = 0; x < count; x++){
            printf("\nEnter student %d name: ", x+1);
            scanf("%s", student[x].name);

            printf("Enter student %d age: ", x+1);
            scanf("%d", &student[x].age);
      }

}

void printName(Person student[], int count){
      printf("\n----- Student List -----\n");
      for(int x = 0; x < count; x++){
            printf("\nID: %d| Name: %s | Age: %d", x + 1, student[x].name, student[x].age);
      }

}
      