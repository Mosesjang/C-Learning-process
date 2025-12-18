#include <stdio.h>
#include <string.h>

int main(){
      char name[5][20];

      printf("===== Name List Manager =====\n");
      printf("Enter 5 names\n");

      for(int x = 0; x < 5; x++){
            printf("Enter Name %d: ", x+1);
            scanf("%s", name[x]);     

      }
      printf("\n------ Stored Names ------\n");

      for(int x = 0; x < 5; x++){
           int num = x + 1;
            printf("%d. %s\n", num, name[x]);
      }


      char search[20];
      printf("\nEnter a name to search: ");
      scanf("%s", search);

      int found;
      for(int x = 0; x < 5; x++){
          int result = strcmp(name[x], search);
          
          if(result == 0){
            printf("Result: Found at position %d", x + 1);
            found = 1;
          }
            else if(found != 1 && x == 5){
            printf("Name not found");
      }
            
      }

      return 0;
}