#include <stdio.h>
#include <string.h>

int nameInputFunc(char (*ptr)[50], int count);

int main(){
      int count = 5;
      char names[5][50];
      

      nameInputFunc(names, count);

      return 0;
}

int nameInputFunc(char (*ptr)[50], int count){

      printf("\n===== Name List Manager =====\n");
      printf("Enter 5 names\n");

      for(int x = 0; x < count; x++){

      printf("Enter name %d:", x + 1);
      scanf("\n%s", ptr[x]);

      }

      return 0;
}
