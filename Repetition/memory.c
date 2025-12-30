#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getName(char (*name)[50], int count);
void printName(char (*name)[50], int count);
int searchName(char (*name)[50], int count);

int main(){
      int count;

      printf("Enter amount of names: ");
      scanf("%d", &count);

      char(*name)[50] = malloc(count * sizeof(*name));
      if(name == NULL){
            printf("memory allocation failed\n");
            return 1;
      }
      
      getName(name, count);
      printName(name, count);
      int pos = searchName(name, count);

      if(pos != -1){
            printf("found at %d", pos);
      }
      else{
            printf("name does not exist");
      }

      free(name);
      return 0;
}

void getName(char (*name)[50], int count){
      printf("Enter Names:\n");
      for(int x = 0; x < count; x++){
            printf("Name %d:", x + 1);
            scanf("%s", name[x]);
      }

}

void printName(char(*name)[50], int count){
      printf("\n===== List of names =====\n");
      for(int x = 0; x < count; x++){
            printf("Name %d: %s\n", x + 1, name[x]);
      }
}

int searchName(char (*name)[50], int count){
      char choice[50];
      printf("\nSearch Name: ");
      scanf("%s", choice);

      for(int x = 0; x < count; x++){
            int result = strcmp(name [x], choice);
            if(result == 0){
                  return x + 1;
            }
      }

      return -1;
}

// things learned: 1. allocate 2d array with pointer char (*ptr)[fix number] = malloc(count * sizeof(*name));
// Number 2: you can use return multiple times, plus you can create a variable that stores function return value.