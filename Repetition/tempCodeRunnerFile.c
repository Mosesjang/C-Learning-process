#include <stdio.h>
#include <stdint.h>

void setBit(uint8_t *reg, int bit);
void clearBit(uint8_t *reg, int bit);
void checkBit(uint8_t *reg, int bit);


int main(){
      // // Exercise 1: clear bit 4
      // uint8_t reg = 0b10110110;

      // reg &= ~(1 << 4);
      // printf("%d\n", reg);

      // Exercise 2: Set bit 7
      // uint8_t reg = 0b01001100;
      
      // reg |= (1 << 7);
      // printf("%d\n", reg);

      //Exercise 3: Toggle bit 2
      // uint8_t reg = 0b11100010;

      // reg ^= (1 << 2);
      // printf("%d\n", reg);

      // Exercuse 4: write a set bit function;

      // uint8_t reg = 0;
      // setBit(&reg, 3);
      // printf("%d\n", *reg);

      // uint8_t reg = 0b11111111;
      // clearBit(&reg, 5);
      // printf("%d\n", *reg);

      // checkBit(&reg, 3);
      //       printf("%d\n",reg);
      //       printf("bit On\n");

      return 0;
}

void setBit(uint8_t *reg, int bit){
      *reg |= (1 << bit);

}

void clearBit(uint8_t *reg, int bit){
      *reg &= ~(1 << bit);

}

void checkBit(uint8_t *reg, int bit){
      if( *reg & (1 << bit)){
      }

}
