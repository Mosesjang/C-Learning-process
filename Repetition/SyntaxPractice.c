#include <stdio.h>
#include <stdlib.h>

int add(int a, int b){ return a + b;};
int sub(int a, int b){ return a - b;};

int main(){

      int (*f)(int, int);

      f = add;

      printf("%d", f(5, 10));

      f = sub;

      printf("%d\n", f(5, 10));


      return 0;
}
