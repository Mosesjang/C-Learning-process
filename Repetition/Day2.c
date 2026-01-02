#include <stdio.h>
#include <string.h>

struct Classroom{
      int id;
      int age;
      char name[50];
};

int main(){
      int choice = 0;
      printf("How many students? ");
      scanf("%d", &choice);

      struct Classroom students[choice];

      printf("\n===== Student Manager =====\n");

      for(int x = 0; x < choice; x++){
            printf("\nEnter student %d name: ", x +1);
            scanf("%s", students[x].name);
            printf("Enter student %d age: ", x+1);
            scanf("%d", &students[x].age);
      }

      printf("\n----- Student Records -----\n");
      for(int x = 0; x < choice; x++){
            students[x].id = x + 1;
            printf("Id: %d | Name: %s | Age: %d\n", 
                  students[x].id, 
                  students[x].name, 
                  students[x].age);
      }

      return 0;
}
