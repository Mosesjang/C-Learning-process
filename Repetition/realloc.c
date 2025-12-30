#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getName(char(*name)[50], int count, int startAt);
int addMoreName(void);
void printName(char(*name)[50], int count);

int main(){
      int count;
      int startAt = 0;

      printf("\n===== Name List Manager =====\n");
      printf("\nHow many names? ");
      scanf("%d", &count);

      char (*name)[50] = malloc(count * sizeof(*name));
      getName(name, count, startAt);
      startAt = count;

      // first section done
      
      int more = addMoreName();

      if(more > 0){
            count += more;
            char (*newName)[50] = realloc(name, count * sizeof(*name));
            if(newName == NULL){
                  printf("reallocation was unsuccessful\n");
            }
            else{
                  printf("successfully reallocated\n\n");
                  name = newName;
                  
            }

            getName(name, count, startAt);
            printName(name, count);
      }
      else{
            printName(name, count);
      }
      free(name);


      return 0;
}

void getName(char(*name)[50], int count, int startAt){
      for(startAt; startAt < count; startAt++){
      printf("Enter name %d: ", startAt + 1);
      scanf("%s", name[startAt]);
      }

}

int addMoreName(void){

      int choice = 0;
      printf("\nDo you want to add more names? (1 = yes, 0 = no): ");
      scanf("%d", &choice);

      if(choice == 1){
            int more;
            printf("How many more? ");
            scanf("%d", &more);
            return more;
      }
      else{
            return 0;
      }


}

void printName(char(*name)[50], int count){
      printf("\n----- Stored Names -----\n");
      for(int x = 0; x < count; x++){
            printf("%d. %s\n", x, name[x]);
      }
}