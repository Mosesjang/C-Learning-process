#include <stdio.h>

int main(){
      unsigned char reg = 0b00101001;


      //Toggling a bit 
      reg ^= (1 << 3);

      //Turning OFF a bit
      reg &= ~(1 << 0);
      reg &= ~(1 << 5);
      

      //Turning ON a bit
      //reg |= (1 << 1);

      // Checking if a bit is ON
      for(int x = 0; x < 8; x++){
            if(reg &=(1 << x)){
                  printf("Bit %d is ON\n", x);
            }
            else{
                  printf("Bit %d is OFF\n", x);
            }

      }



      return 0;
}