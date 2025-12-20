#include <stdio.h>
#include <string.h>

int nameInputFunc(char userInput[5][50]);
int namePrintFunc(char userInput[5][50]);
int searchName(char userInput[5][50]);



int main(){

      char userInput[5][50];

      nameInputFunc(userInput);
      namePrintFunc(userInput);
      searchName(userInput);

      return 0;
}

int nameInputFunc(char name[5][50]){

      printf("\n===== Name List Manager =====\n");
      printf("Enter 5 names \n");

      for(int x = 0; x < 5; x++){
            printf(" Enter name %d: ", x + 1);
            scanf("%s", name[x]);
      }

      return 0;
}

int namePrintFunc(char userInput[5][50]){

      printf("\n----- Stored Names -----\n");

      for(int x = 0; x < 5; x++){
            printf("%d. %s\n", x + 1, userInput[x]);
      }
      
      return 0;
}

int searchName(char userInput[5][50]){
      char name[50];
      int found = 0;
      printf("Search Name: ");
      scanf("%s", name);

      for(int x = 0; x < 5; x++){
           int result = strcmp(name, userInput[x]);
           if(result == 0){
            printf("%s is located at %d\n", name, x + 1);
            found = 1;
            break;
           }

      }
      if(found == 0){
            printf("Not found\n");
      }

}