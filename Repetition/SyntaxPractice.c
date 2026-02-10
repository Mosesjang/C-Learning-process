#include <stdio.h>

int add(int a, int b){ return a + b; }
int sub(int a, int b){ return a - b; }

int operation(int (*f)(int, int), int x, int y){
      printf("result = %d\n", f(x,y));
}


int main(){
      
      operation(add, 10, 40);
      operation(sub, 10, 40);

      return 0;
}