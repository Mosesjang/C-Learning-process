#include <stdio.h>
#include <stdlib.h>
#include <string.h>

      struct Car{
            char brand[50];
            int year;
      };

      int main(){

            struct Car *Ptr = (struct Car*) malloc(2 * sizeof(struct Car));

            // Check if allocation was successful
            if (Ptr == NULL){
                  printf("Memory allocation failed.\n");
                  return 1;
            }

            strcpy(Ptr->brand, "honde");
            Ptr->year = 2022;

            // print values 
            printf("%s\n", Ptr->brand);
            printf("%d", Ptr->year);

            // free 
            free(Ptr);


            

            return 0;
      }