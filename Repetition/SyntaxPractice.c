#include <stdio.h>
#include <stdlib.h>

typedef struct{
      int age;
      int id;
      char name[50];
}KidJangs;

void getKidInfo(KidJangs *s, int start, int count);
void printInfo(KidJangs *s , int count);

int main(){
      int oldCount = 0;
      int kidNum;
      printf("How many children do you have? ");
      scanf("%d", &kidNum);

      KidJangs *s = malloc(kidNum * sizeof(KidJangs));

      getKidInfo(s, oldCount, kidNum);
      printInfo(s, kidNum);

      // add more
      int more;
      printf("How many more? ");
      scanf("%d", &more);

      oldCount = kidNum;
      kidNum += more;

      KidJangs *m = realloc(s, kidNum * sizeof(KidJangs));

      if(!m){
            return 1;
      }

      s = m;

      getKidInfo(s, oldCount, kidNum);
      printInfo(s, kidNum);
      
      free(s);

      return 0;
}

void getKidInfo(KidJangs *s,int start, int count){
      printf("\n===== Kids Manager =====\n");
      printf("Enter you kids info -> \n");
      
      for(int x = start; x < count; x++){
            printf("Kid %d: ", x+1);
            printf("Name: ");
            scanf("%s", s[x].name);
            printf("Age: ");
            scanf("%d", &s[x].age);
            printf("ID: ");
            scanf("%d", &s[x].id);
      }

}

void printInfo(KidJangs *s, int count){
      printf("\n---------------------------------------------------------------\n");
      printf("    Comfirm if the inputed information is correct   \n\n");
      
      for(int x = 0; x < count; x++){
            printf(" - Kid %d: ID: %d | Name: %s | Age: %d\n",
                  x+1, s[x].id, s[x].name, s[x].age);
      }
}
