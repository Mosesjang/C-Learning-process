#include <stdio.h>

 struct Owner{
            char firstName[100];
            char lastName[100];
      };

      struct Car{
            char model[100];
            int year;
            struct Owner owner;
      };

     
      int main(){

            struct Owner person = {"JOHN", "EDISON"};
            struct Car car1 = {"Toyota", 1975, person};
            
            printf("%s -> %d\n", car1.model, car1.year);
            printf("Owner: %s %s\n", car1.owner.firstName, car1.owner.lastName);
            return 0;
      }