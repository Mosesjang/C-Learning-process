#include <stdio.h>
#include <string.h>

struct Classroom{
      int id;
      int age;
      char name[50];
};

int main(){
      
      struct Classroom students[3];

      printf("\n===== Classroom Manager =====\n");

      for(int x = 0; x < 3; x++){
            printf("\nEnter student %d age: ", x + 1);
            scanf("%d", &students[x].age);
            printf("Enter student %d name: ", x + 1);
            scanf("%s", students[x].name);
            
      }

      // print student list
      printf("\n----- Student List -----\n");
      for(int x = 0; x < 3; x++){
            students[x].id = x + 1;

            printf("ID: %d | Name: %s | Age: %d\n", 
                  students[x].id, 
                  students[x].name, 
                  students[x].age);

      }

      return 0;
}

