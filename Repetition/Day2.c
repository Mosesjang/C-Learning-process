#include <stdio.h>

// 10% annual compound interest calculator

struct CompInterest{
      int InInvestment;
      int MC; //montly contribution
      int LoT; // length of time in years;
};

void getInputs(struct CompInterest cases[], int scene);
int calInterest(struct CompInterest cases[], int scene);
void printResult(float Result, int scene);

int main(){

      int choice;
      scanf("%d", &choice);

      struct CompInterest cases[choice];

      getInputs(cases, choice);
      float result = calInterest(cases, choice);
      printResult(result, choice);




      return 0;
}

void getInputs(struct CompInterest cases[], int scene){
      for(int x = 0; x < scene; x++){
            printf("Enter Initial Investment(scene %d): ", x + 1);
            scanf("%d", &cases[x].InInvestment);
            printf("Enter Monthly Contribution(sence %d): ", x + 1);
            scanf("%d", &cases[x].MC);
            printf("Length of Time in Years(scene %d): ", x + 1);
            scanf("%d", &cases[x].LoT);
      }

}

int calInterest(struct CompInterest cases[0], int scene){
            float total = cases->InInvestment;
            for(int y = 0; y < cases[0].LoT; y++){
              total += cases->MC * 12;
              total += total * 0.1;
            }

            return total;
}

void printResult(float Result, int scene){
      printf("\n----- Total Invesment -----\n");
      for(int x = 0; x < scene; x++){
            printf("%f", Result);
      }
}