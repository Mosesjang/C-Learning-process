#include <stdio.h>

int add(int a, int b){ return a + b; }
int sub(int a, int b){ return a - b; }


int main(){

      int (*func)(int, int);

      func = add;
      printf("addition: %d\n", func(20,1));

      func = sub;
      printf("subtract: %d", func(20,1));

      return 0;
}