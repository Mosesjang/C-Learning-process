#include <stdio.h>
#include <string.h>

struct Classroom{
      int id;
      int age;
      char name[50];
};

int main(){

      struct Classroom students[3] = {
            {3, 20, "Moses"},
            {3, 25, "Esther"},
            {3, 28, "Emmanuel"}
      };


      for(int x = 0; x < 3; x++){
            printf("ID: %d | Name: %s| Age: %d", 
                  students[x].id, 
                  students[x].name, 
                  students[x].age);
      }
      return 0;
}