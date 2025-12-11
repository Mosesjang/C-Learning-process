#include <stdio.h>
#include <stdlib.h>
      int main(){
            int *Ptr1, *Ptr2;
            int size = 2*sizeof(int);
            Ptr1 = malloc(size);
            printf("%p", Ptr1);

            size = 4*sizeof(*Ptr1);
            Ptr2 = realloc(Ptr1, size);
            printf("\n%p", Ptr2);

            if(Ptr2 == NULL){
                  printf("Unsuccessful");

            }
            else{
                  printf("\nYEAP!!!");
            }
            free(Ptr2);
            Ptr2 = NULL;

            return 0;
      }