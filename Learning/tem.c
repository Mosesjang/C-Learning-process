#include <stdio.h>
#include <stdlib.h>
      int main(){
            int *playerNum;
            int count = 5;
            int size = count * sizeof(*playerNum);
            playerNum = malloc(size);


            for(int x = 0; x < count; x++){
                  
                  printf("Enter player Numbers: ");
                  scanf("%d", &playerNum[x]);

            }
            
            for(int x = 0; x < count; x++){
                  printf("\nplayer Number: %d", playerNum[x]);
            }

            size = 11* sizeof(*playerNum);
            int *newPlayerNum = realloc(playerNum, size);

            if(newPlayerNum == NULL){
                  printf("Unsuccessful try again");
            }
            else{
                  printf("Successful");
                  playerNum = newPlayerNum;
            }

            free(playerNum);

            
            

            return 0;
      }