#include <stdio.h>

int main(){
      int x = 10;

      int *p = &x;

      printf("x value: %d\n", x);
      printf("x address: %p\n", (void*)&x);
      printf("p value(address): %p\n", (void*)p);
      printf("value pointed by p: %d\n", *p);

      return 0;
}
