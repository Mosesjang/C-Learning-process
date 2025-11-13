#include <stdio.h>

            int Num1;
            int Num2;
            char sym;
            int ans;

               // calculate
      int addition(int Num1, int Num2) {
            return Num1 + Num2;
      }
      int multiplication(int Num1, int Num2) {
            return Num1 * Num2;
      }
      int division(int Num1, int Num2) {
            return Num1 / Num2;
      }
      int subtraction(int Num1, int Num2) {
            return Num1 - Num2;
      }


      int main (){

            char msg[] = "Enter first number: ";
            char msg1[] = "Enter second number: ";
            char msg2[] = "Choose operation (+, -, *, /): ";

            // get input
            printf("%s", msg);
            scanf("%d", &Num1);
            printf("%s", msg1);
            scanf("%d", &Num2);
            printf("%s", msg2);
            scanf(" %c", &sym);

            if(sym == '+') {
                  ans = addition(Num1, Num2);
            }
            else if (sym == '-')
            {
                  ans = subtraction(Num1, Num2);
            }
            else if (sym == '*')
            {
                  ans = multiplication(Num1, Num2);
            }
            else if (sym == '/')
            {
                 ans = division(Num1,Num2);
            }
            else{
                  printf("invalid symbol");
            } 

            printf("%d", ans);
            return 0;
      }


    

