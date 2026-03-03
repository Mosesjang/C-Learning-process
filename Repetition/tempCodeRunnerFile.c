#include <stdio.h>

int main(){

      FILE *ptr;
      ptr = fopen("HelloWorld.txt", "w");
      fprintf(ptr,"hello");

      //close
      fclose(ptr);

      return 0;
}