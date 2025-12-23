#include <stdio.h>
#include <stdlib.h>


int main(){
      int count;

      printf("Enter amount of names: ");
      scanf("%d", &count);

      char(*name)[50] = malloc(count * sizeof(*name));
      return 0;
}