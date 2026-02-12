#include <stdio.h>

int add(int a, int b){ return a + b;}
int sub(int a, int b){ return a - b;}
int mult(int a, int b){ return a * b;}

int main(){
      int a = 10;
      int b = 5;

      int (*oper[3])(int, int) = {add, sub, mult};


      int choice;
      printf("Enter 0 for add\n Enter 1 for subtraction\n Enter 2 for multiplication\n Enter: ");
      scanf("%d", &choice);

      if(choice < 0 || choice > 2){
            printf("Invalid Input!!");
            return 1;
      }

      printf("\n Result = %d", oper[choice](a, b));


      return 0;
}