#include <stdio.h>
#include <string.h>

typedef struct{
      char name[20];
      int (*opr)(int, int);
}operation;

int add(int a, int b){ return a + b; }
int sub(int a, int b){ return a - b; }
int mult(int a, int b){ return a * b; }

void execute(operation *o, int a, int b){
      printf("Operation: %s: ", o->name);
      printf("\nAns = %d", o->opr(a,b));
}

int main(){
      int a;
      int b;
      int choice;

      operation op[3] = {
            {"Addition", add},
            {"Substraction", sub},
            {"Multiplication", mult}
      };

      printf("\n%s = 0\n%s = 1\n%s = 2\n Enter: ", op[0].name, op[1].name, op[2].name);
      scanf("%d", &choice);

      if(choice < 0 || choice > 2){
            printf("Invalid Input");
            return 1;
      }

      printf("Enter first number: ");
      scanf("%d", &a);
      printf("\nEnter Second number: ");
      scanf("%d", &b);
      


      execute(&op[choice], a, b);




      return 0;
}