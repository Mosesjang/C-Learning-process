#include <stdio.h>

int main(){
      unsigned char reg = 0;
      reg|= (1 << 7)| (1 << 4)|(1 << 3)|(1<<0);
      printf("bit 1 turn on: %d", reg);

      return 0;
}