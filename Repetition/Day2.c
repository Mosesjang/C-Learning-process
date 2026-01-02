#include <stdio.h>
#include <string.h>


struct Classroom{
      int id;
      int age;
      char name[50];
};

void getInput(struct Classroom students[], int count);
void printInputs(struct Classroom students[], int count);


int main(){
      int choice;
      printf("How many student? ");
      scanf("%d", &choice);

      struct Classroom students[choice];

      getInput(students, choice);
      printInputs(students, choice);



      return 0;
}

void getInput(struct Classroom students[], int count){
      printf("\n===== Student Manager =====\n");
      
      for(int x = 0; x < count; x++){
      students[x].id = x + 1;
      printf("Enter student %d name: ", x + 1);
      scanf("%s", students[x].name);
      printf("Enter student %d age: ", x + 1);
      scanf("%d", &students[x].age);
      }
      
}

void printInputs(struct Classroom students[], int count){

      printf("\n----- student info -----\n");
      
      for(int x = 0; x < count; x++){
            
            printf("ID: %d | Name: %s | Age: %d\n", 
            students[x].id,
            students[x].name,
            students[x].age);
      }
}
