#include <stdio.h>
#include <string.h>

struct person{
      int id;
      int age;
      char name[50];
};

int main(){

      struct person students[3];

      students[0].id = 3;
      students[0].age = 20;
      strcpy(students[0].name, "Moses");
      
      students[1].id = 2;
      students[1].age = 25;
      strcpy(students[1].name, "esther");

      students[2].id = 1;
      students[2].age = 28;
      strcpy(students[2].name, "Emma");

      for(int x = 0; x < 3; x++){
            printf("ID: %d | Name: %s | Age: %d\n",
                   students[x].id,
                   students[x].name,
                   students[x].age);
      }
      return 0;
}