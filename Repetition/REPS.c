#include <stdio.h>
#include <string.h>

void nameInputFunc(char (*ptr)[50], int count);
void printName(char (*ptr)[50], int count);
void searchName(char (*ptr)[50], int count);

int main(){
      int count = 5;
      char names[5][50];
      

      nameInputFunc(names, count);
      printName(names, count);
      searchName(names, count);


      return 0;
}

void nameInputFunc(char (*ptr)[50], int count){

      printf("\n===== Name List Manager =====\n");
      printf("Enter 5 names\n");

      for(int x = 0; x < count; x++){

      printf("Enter name %d:", x + 1);
      scanf("\n%s", ptr[x]);

      }

}

void printName(char (*ptr)[50], int count){

      for(int x = 0; x < count; x++){
             printf("\nName %d: %s", x + 1, ptr[x]);
      }
     
}

void searchName(char (*ptr)[50], int count){
      char choice[50];
      int found = 0;
      printf("\nSearch Name: ");
      scanf("%s", choice);
      for(int x = 0; x < count; x++){
           int result = strcmp(ptr[x], choice);
           if(result == 0){
            printf("Found at position %d\n", x + 1);
            found = 1;
            break;
           }
      }

      if(found == 0){
            printf("Name not found");
      }
}