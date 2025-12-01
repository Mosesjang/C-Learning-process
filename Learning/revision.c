#include <stdio.h>
      float mult(float a, float b){return a * b;}

      float callbackfunct(float(*functPtr)(float, float), float x, float y){
            return functPtr(x,y);

      }

      int main(){

            float result;

            result = callbackfunct(mult, 5.0, 4.0);
            
            printf("%.2f", result);


            return 0;
      }