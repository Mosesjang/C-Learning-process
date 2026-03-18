#include <stdio.h>

// macros
// #define BAD(x) x + x
//printf("%d\n", BAD(3*2); is bad because it just solve everything from left
// to right without solving x first because x is not prioritized using a parentheses

//solution:
#define GOOD(x) ((x) + (x))

int main(){
      printf("%d\n", GOOD(3 * 2));// now it solve for x first

      return 0;
}
