#include <stdio.h>
#include <stdint.h>

void toggleBit(uint8_t *reg, int bit);

int main(){

      uint8_t reg = 0b00000000;

      reg |= (1 << 0)| (1 << 1);
      printf("%d\n", reg);

      //turn off motor 
       reg &= ~(1 << 1);
      printf("%d\n", reg);

      // check motor state
      if(reg & (1 << 2)){
            printf("ON");
      }
      else{
            printf("OFF");
      }

      return 0;
}
