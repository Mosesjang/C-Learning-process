#include <stdio.h>
      int sayHello(){
            printf("Hello Nigga");
      }
      int sayBye(){
            printf("\nBye");
      }

      int functCaller(int (*funcPtr)()){
            return funcPtr();
            
      }

      int main (){

            functCaller(sayHello);
            functCaller(sayBye);
            

            return 0;
      }