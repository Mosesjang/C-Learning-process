#include <stdio.h>

      int addStudentFunc();

      struct studentInfo{
            char name[100];
            int age;
            float score;
      };
      struct studentInfo Student1;

      int main(){
            
            int userInput;

            do{
                        printf("\n\n===== MENU ===== \n1. Add Student\n2. Show Student"
                        "\n3. Exit \nChoice:");
                  scanf("%d", &userInput);
                  switch(userInput){
                        case 1:
                        addStudentFunc();
                        break;

                        case 2:
                        printf("\n\nStudent Info: \nName: %s", Student1.name);
                        printf("\nAge: %d", Student1.age);
                        printf("\nScore: %.2f", Student1.score);
                        break;

                        default:
                        printf("Invalid Input, try again");

                  }
            }
            while(userInput != 3);
          

            return 0;
      }

      int addStudentFunc(){
            printf("\nStudent Info: \nName: ");
            scanf("%s", Student1.name);
            printf("Age: ");
            scanf("%d", &Student1.age);
            printf("Score: ");
            scanf("%f", &Student1.score);
            
            return 0;
      }