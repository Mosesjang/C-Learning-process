#include <stdio.h>

int add(int a, int b){ return a + b;}
int sub(int a, int b){ return a - b;}

int operation(int (*f)(int, int), int a, int b){
      printf("%d\n", f(a, b));
}
 int main(){
      operation(add, 20, 1);
      operation(sub, 20, 1);

      return 0;
 }