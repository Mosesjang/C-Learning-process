#include <stdio.h>

int add(int a, int b){ return a + b; }
int sub(int a, int b){ return a - b; }
int mult(int a, int b){ return a * b; }


int main(){
      int choice;
      int a = 20;
      int b = 1;

      int (*func[3])(int, int) = {add, sub, mult};

      printf("Addition = 0 | Subtraction = 1 | multiplication 2");
      printf("Enter desired operation: ");
      scanf("%d", &choice);

      if(choice < 0 || choice > 2){ 
            printf("Invalid Input");
            return 1;
      }

      printf("%d", func[choice](a,b));




      

      return 0;
}