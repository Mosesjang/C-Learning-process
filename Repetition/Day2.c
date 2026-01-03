// Car selector
// feature: store car, scroll through car, select car.

#include <stdio.h>
#include <string.h>

typedef struct{
      int ID;
      char name[50];
}Cars;

void storeCars(Cars car[], int count);
void scrollFindCar(Cars car[], int count);

int main(){
      int choice;
      printf("How many cars do you want to store? ");
      scanf("%d", &choice);

      Cars car[choice];

      storeCars(car, choice);
      scrollFindCar(car, choice);



      return 0;
}

void storeCars(Cars car[], int count){
      printf("\n===== Car Manager =====\n");
      for(int x = 0; x < count; x++){
            car[x].ID = x+1;
            printf("\nEnter Car %d Name: ", x + 1);
            scanf("%s", car[x].name);

      }
      printf("%d Cars have been stored succesfully\n", count);
}

void scrollFindCar(Cars car[], int count){
      char dir;
      int currentState;
      int leftCount;

      printf("Enter f to scroll fwd, b for bwd: ");

      printf("\nCar %d: %s", car[0].ID, car[0].name);
      while(1){
            scanf(" %c", &dir);

            if(dir == 'f'){
                  for(int x = 1; x < count; x++){
                        printf("Car %d: %s  ", car[x].ID, car[x].name);
                        currentState = x;
                        

                  }
            }
            else if(dir == 'b'){
                  for(currentState; currentState > count; currentState--){
                        printf("Car %d: %s  ", car[currentState].ID, car[currentState].name);
                  }
            }

      }
      
}
