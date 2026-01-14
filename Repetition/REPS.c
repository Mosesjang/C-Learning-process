#include <stdio.h>

int main(){

      int x[4] = {3,6,5,4};

      printf("%d\n", x[0]);
      for(int i = 0; i < 4; i++){
            printf("\n%d", *(x + i));
            printf("done");
      }

      return 0;
}
