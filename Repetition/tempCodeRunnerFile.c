#include <stdio.h>

typedef struct{
      int age;
      float gpa;
      char name[50];
}Students;

void getStudentInfo(Students *s, int count);

int main(){
      int choice;
      printf("How many student? ");
      scanf("%d", &choice);

      Students s[choice];

      //get student  information
      getStudentInfo(s, choice);


      FILE *sInfo;

      // Create a file
      sInfo = fopen("StudentInfo.txt", "w");
      if(!sInfo){
            printf("File was unable to open");
            return 1;
      }
      for(int x = 0; x < choice; x++){
      fprintf(sInfo, "Name: %s \nAge: %d\nGPA: %.2f\n\n",
             s[x].name, s[x].age, s[x].gpa);
      }

      // close the file
      fclose(sInfo);

      //Read file
      char buffer[100];

      sInfo = fopen("StudentInfo.txt", "r");
      if(!sInfo){
            printf("File was unable to open");
            return 1;
      }
      while(fgets(buffer, 100, sInfo) !=NULL){

             printf("%s", buffer);
      }

      //Close the file
      fclose(sInfo);

      return 0;
}

void getStudentInfo(Students *s, int count){
      for(int x = 0; x < count; x++){
            printf("\nEnter student %d: \n", x+1);
            printf("Name: ");
            scanf("%s", s[x].name);
            printf("Age: ");
            scanf("%d", &s[x].age);
            printf("GPA: "); 
            scanf("%f", &s[x].gpa);
      }

}