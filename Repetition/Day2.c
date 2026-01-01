#include <stdio.h>
#include <string.h>

struct Classroom{
      int id;
      int age;
      char name[50];
};

int main(){

      int count = 0;

      printf("How many students? ");
      scanf("%d", &count);

      struct Classroom students[count];

      for(int x = 0; x < count; x++){
            printf("Enter student %d name: ", x+1);
            scanf("%s", students[x].name);
            printf("Enter student %d age: ", x+1);
            scanf("%d", &students[x].age);
      }

      printf("\n----- Student List -----\n");

      for(int x = 0; x < count; x++){

            students[x].id = x + 1;

            printf("ID: %d | Name: %s | Age: %d\n", 
                  students[x].id, 
                  students[x].name, 
                  students[x].age);
      }
      return 0;
}
