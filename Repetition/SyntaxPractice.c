#include <stdio.h>

typedef struct{
      int age;
      float score;
      char name[50];
}Student;

void getStudentInpt(Student *s, int count);

int main(){

      // get number of students
      int studentAmt;
      printf("How many student? ");
      scanf("%d", &studentAmt);

      //creat a struct array for each student
       Student s[studentAmt];

       // get student input
       getStudentInpt(s, studentAmt);
       
       // Creat a file
       FILE *fptr;
       fptr = fopen("MyName.txt", "w");
       if(!fptr){
            printf("Unable to open file");
            return 1;
       }
      for(int x = 0; x < studentAmt; x++){

             fprintf(fptr, "Name: %s\nAge: %d\nScore: %.2f",s[x].name, s[x].age, s[x].score);
       }
       // close file
       fclose(fptr);

       // Write student data in file
       char myString[100];
       fptr = fopen("MyName.txt", "r");
       if(!fptr){
            printf("Unable to open file");
            return 1;
       }

       // print file info in terminal
       while(fgets(myString, 100, fptr)){
            printf("%s", myString);
       }

       




      return 0;
}

void getStudentInpt(Student *s, int count){

      printf("\n===== Student Info Manager =====\n");
      for(int x = 0; x < count; x++){
            printf("Enter student %d:\n", x + 1);
            printf("Name: ");
            scanf("%s", s[x].name);
            printf("Age: ");
            scanf("%d", &s[x].age);
            printf("Score: ");
            scanf("%f", &s[x].score);
      }
}