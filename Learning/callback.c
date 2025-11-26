#include <stdio.h>

      int add(int a, int b){return a + b;}

      int calculate( int x, int y, int (*funcPtr)(int, int)){
            return funcPtr(x, y);
      }


      int main(){
            printf("%d", calculate(4,5, add));


            return 0;

      }