#include <stdio.h>
#include <string.h>

int nameInputFunc();
int namePrintFunc();
int searchName();

char userInput[5][50];

int main(){

      nameInputFunc();
      namePrintFunc();
      searchName();

      return 0;
}

int nameInputFunc(){

      printf("\n===== Name List Manager =====\n");
      printf("Enter 5 names \n");

      for(int x = 0; x < 5; x++){
            printf(" Enter name %d: ", x + 1);
            scanf("%s", userInput[x]);
      }

      return 0;
}

int namePrintFunc(){

      printf("\n----- Stored Names -----\n");

      for(int x = 0; x < 5; x++){
            printf("%d. %s\n", x + 1, userInput[x]);
      }
      
      return 0;
}

int searchName(){
      char name[50];
      int found = 0;
      printf("Search Name: ");
      scanf("%s", name);

      for(int x = 0; x < 5; x++){
           int result = strcmp(name, userInput[x]);
           if(result == 0){
            printf("%s is located at %d\n", name, x);
            found = 1;
            break;
           }

      }
      if(found == 0){
            printf("Not found\n");
      }

}