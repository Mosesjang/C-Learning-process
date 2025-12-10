#include <stdio.h>
#include <stdlib.h>
     int main(){

          int* Ptr = calloc(4,sizeof(Ptr));
          *Ptr = 67;
          Ptr[1] = 69;

               printf("\nYour number is: %d,", *Ptr);
               printf("\nYour number is: %d,", Ptr[1]);

          free(Ptr);

          return 0;
     }