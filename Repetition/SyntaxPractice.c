#include <stdio.h>

typedef struct{
      int age;
      float score;
      char name[50];
}Student;

void getStudentInpt(Student *s, int count);

int main(){
      int studentAmt;
      printf("How many student? ");
      scanf("%d", &studentAmt);



      return 0;
}

void getStudentInpt(Student *s, int count){

      printf("\n===== Student Info Manager =====\n");
      for(int x = 0; x < count; x++){
            printf("Enter student %d: ", x + 1);
            printf("Name: ");
            scanf("%s", s[x].name);
            printf("Age: ");
            scanf("%d", &s[x].age);
            printf("ID: ");
            scanf("%f", &s[x].score);
      }
}