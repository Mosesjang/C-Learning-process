#include <stdio.h>

      int balanceFunction(int balance);
      int depositFunction(int balance);


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
                  printf("Wrong password, try again: ");
            }

            do{    
            printf("\n===== ATM MENU =====\n"
                  "1. Check Balance\n"
                  "2. Deposit Money\n"
                  "3. Withdraw Money\n"
                  "4. Exit\n"
                  "Enter choice: ");
            scanf("%d", &userActivityChoiceInput);

            
            switch(userActivityChoiceInput){
                  
                  case 1:
                  //check Balance fucntion
                  balanceFunction(balance);
                  break;

                  case 2:
                  //check Balance fucntion
                  depositeFunction(balance);
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

      int balanceFunction(int balance){
            printf("%d", balance);
            return 0;
      }
      
      int depositeFunction(int balance){
            int depositeAmount = 0;
            printf("Enter deposite amount: ");
            scanf("%d", depositeAmount);

            return balance + depositeAmount;
      }