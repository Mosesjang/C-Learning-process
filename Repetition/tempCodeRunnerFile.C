#include <stdio.h>
int main(){
      int *count;
      count = malloc(sizeof(*count));
      char (*name)[50] = malloc(sizeof(char[5][50]));
      return 0;
}