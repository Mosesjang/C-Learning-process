#include <stdio.h>
#include <string.h>

      int add(int x, int y);
      int sub(int x, int y);
      int mult(int x, int y);

 int main(){
      char userInput[100];
      int x;
      int y;

      printf("Choose your operator: "
            "\n1.addition"
            "\n2.subtraction"
            "\n3.mutliplication"
            "\n Choice: ");
            scanf("%s", userInput);

            int (*funPrt)(int, int);

      if(strcmp(userInput, "add") == 0 ){

            funPrt = add;

            printf("\nEnter firstNum: ");
            scanf("%d", &x);
            printf("\n Enter SecondNum: ");
            scanf("%d", &y);

       printf("result: %d",funPrt(x, y));
      }
      else if(strcmp(userInput,"sub") == 0){

            
            funPrt = sub;
            
            printf("\nEnter firstNum: ");
            scanf("%d", &x);
            printf("\n Enter SecondNum: ");
            scanf("%d", &y);

            printf("result: %d",funPrt(x, y));
      }
            else if(strcmp(userInput,"mult") == 0){

            funPrt = mult;
            
            printf("\nEnter firstNum: ");
            scanf("%d", &x);
            printf("\n Enter SecondNum: ");
            scanf("%d", &y);
            
            printf("result: %d",funPrt(x, y));
      }

      

      return 0;

 }

 int add(int x, int y){

      return x+y;
 }

  int sub(int x, int y){

      return x-y;
 }

 int mult(int x , int y){

      return x*y;
 }

 // what i learned:
 // an array is a pointer so you dont need it address when doing stuff like scanf
 // strcmp is use to compare 2 strings