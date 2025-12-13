#include <stdio.h>
#include <stdlib.h>
      int main(){
            int *playerNum;
            int size = 11;
            playerNum = malloc(size * sizeof(*playerNum));


            for(int x = 0; x < size; x++){
                  
                  printf("Enter player Numbers: ");
                  scanf("%d", &playerNum[x]);

            }

            
            for(int x = 0; x < size; x++){
                  printf("\nplayer Number: %d", playerNum[x]);
            }

            
            

            return 0;
      }