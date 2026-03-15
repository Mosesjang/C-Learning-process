#include <stdio.h>

int main(){
      char star = '*';

      for(int x = 1; x < 4; x++){
            for(int j = 2 * x - 1; j <= 0; j++){
                  printf("*");
            };

      };


      return 0;
}