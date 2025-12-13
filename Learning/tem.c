#include <stdio.h>
#include <stdlib.h>
#include <string.h>


      struct student{
            int year;
            char name[50];
      };

      int main(){
            int count = 3;
            

            struct student *studentPtr;
            studentPtr = malloc(count * sizeof(*studentPtr));

            

            for(int x = 0; x < count; x++){
                  studentPtr[x].year = x + 1;
                  strcpy(studentPtr[x].name, "niggah");
            }

            for(int x = 0; x < count; x++){
                  printf("YEAR: %d, Name: ",studentPtr[x].year);
                  printf("%s\n",studentPtr[x].name);
            }
            

            return 0;
      }