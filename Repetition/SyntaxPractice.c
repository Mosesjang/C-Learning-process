#include <stdio.h>

int add(int a, int b){ return a + b;}
int sub(int a, int b){ return a - b;}



int main(){
      // declear      
      int (*opr[2])(int, int);

      // assign
      opr[0] = add;
      opr[1] = sub;

      //print

      for(int x = 0; x < 2; x++){
            printf("result: %d\n", opr[x](10, 20));
      }


      return 0;
}