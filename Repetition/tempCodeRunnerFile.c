#include <stdio.h>

int main(){
      unsigned char reg = 0;
      reg|= (4 >> 1);
      printf("bit 1 turn on: %d", reg);

      return 0;
}