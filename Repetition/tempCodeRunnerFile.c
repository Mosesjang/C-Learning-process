#include <stdio.h>

int main(){
      unsigned char reg = 0b00101001;

      for(int x = 0; x < 8; x++){
            if(reg &(1 << x)){
                  printf("Bit %c is ON", x);
            }
            else{
                  printf("Bit %c is OFF", x);
            }

      }

      return 0;
}