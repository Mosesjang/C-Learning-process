#include <stdio.h>
#include <string.h>

      struct Player{
            char name [50];
            int stat;
      };

      int changePlayerName(struct Player *tr, const char *newName){
            strcpy(tr->name, newName);

            return 0;
      }

      int main(){

            struct Player player1 = {"kim", 50};
            struct Player *ptr = &player1;
            printf("Name: %s\nStat: %d", ptr ->name, ptr ->stat);

            changePlayerName(&player1, "nigga");
            printf("\nName: %s", ptr ->name);

            return 0;
      }