#include <stdio.h>

      int balanceFunction();
      int depositFunction();


      int main(){

            int passcode = 1234;
            int userPasscodeInput;
            int userActivityChoiceInput;
            int balance = 0;
            

            printf("Enter your 4-digit PIN: ");
            scanf("%d", &userPasscodeInput);
            if (userPasscodeInput == passcode){
                  printf("Access Granted!");
            }
            else{
                  while(userPasscodeInput != passcode){
                        printf("Wrong password, try again: ");
                        scanf("%d", &userPasscodeInput);
                  }    
            }

            do{    
            printf("\n\n===== ATM MENU =====\n"
                  "1. Check Balance\n"
                  "2. Deposit Money\n"
                  "3. Withdraw Money\n"
                  "4. Exit\n"
                  "Enter choice: ");
            scanf("%d", &userActivityChoiceInput);

            
            switch(userActivityChoiceInput){
                  
                  case 1:
                  //check Balance fucntion
                  balanceFunction(&balance);
                  break;

                  case 2:
                  //check Balance fucntion
                  depositFunction(&balance);
                  break;

                  case 3:
                  //check Balance fucntion
                  printf("3");
                  break;

            }

            }
            while(userActivityChoiceInput != 4);
            

            return 0;
      }

      int balanceFunction(int *balance){
            printf("\nYour balance is: $%d", *balance);
            return 0;
      }
      
      int depositFunction(int *balance){
            int depositAmount = 0;
            
            printf("Enter deposite amount: ");
            scanf("%d", &depositAmount);

            *balance += depositAmount;


            return 0;
      }