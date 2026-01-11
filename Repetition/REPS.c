#include <stdio.h>

typedef struct {
      int id;
      int age;
      char name[50];
}Classroom;

void getName(Classroom *s, int count);
void printName(Classroom *s, int count);
void searchID(Classroom *s, int count);

int main(){
      int choice;

      printf("How many students? ");
      scanf("%d", &choice);

      Classroom students[choice];

      getName(students, choice);
      printName(students, choice);
      searchID(students, choice);

      return 0;
}

void getName(Classroom *s, int count){
      printf("\n===== Student Manager =====\n");
      for(int x = 0; x < count; x++){
            s[x].id = x+1;
             printf("\nEnter student %d name: ", x + 1);
             scanf("%s", s[x].name);
             printf("Enter student %d age: ", x + 1);
             scanf("%d", &s[x].age);
      }

}
void printName(Classroom *s, int count){
      printf("\n----- Student Info -----\n");
      for(int x = 0; x < count; x++){
            printf("ID: %d | Name: %s | Age: %d\n", 
                  s[x].id, s[x].name, s[x].age);
      }
}

void searchID(Classroom *s, int count){
      int idInput;
      printf("\nSearch ID : ");
      scanf("%d", &idInput);

      for(int x = 0; x < count; x++){
            int temId = s[x].id;
            if(idInput == temId ){
                  printf("ID %d belongs to: \n", temId);
                  printf("ID: %d | Name: %s | Age: %d\n", 
                  s[x].id, s[x].name, s[x].age);
                  break;
            }
      }
}

