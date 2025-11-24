#include <stdio.h>

      int add(int a, int b);

      int main(){

            int (*pointer)(int, int) = add;
            int result = pointer(4,5);
            
            printf("%d", result);


            return 0;
      }
      int add(int a, int b){

            return a+b;
      }