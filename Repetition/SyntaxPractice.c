#include <stdio.h>

float percentage(int a, float b){return a * b;}
float total(int a, float b){return a + b;}


int main(){
      float (*operation)(int, float);

      operation = percentage;
      float tempSave = operation(1000000, 0.15);
      printf("net Gain = %.2f\n", tempSave);

      operation = total;
      printf("total = %.2f", operation(1000000, tempSave));


      return 0;
}