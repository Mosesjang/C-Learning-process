#include <stdio.h>

int  addition(int randNum[]);
int randNum[100] = {10,20};
 
int main(){

      printf("Sum = %d", addition(randNum));

      return 0;
}

int addition(int ranNum[]){

      return randNum[0] + randNum[1];
}