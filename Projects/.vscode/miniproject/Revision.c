#include<stdio.h>

      int studentNumInput;
      int studentNum;
      int Score[100];
      int highestScore;
      int lowestScore;
      int total = 0;
      char end;

      float AverageFunc(int sum, int count);
      int highestScoreFunc();
      int lowestScoreFunc();

 int main (){
     
       do{
            
      printf("How many students?: ");
      scanf("%d", &studentNumInput);

      for(int i = 0; i < studentNumInput; i++)
      {
            printf("Enter Score for student %d: ", i);
            scanf("%d", &Score[i]);
            total += Score[i]; 
      }

      printf("Average is: %.2f", AverageFunc(total, studentNumInput));
      printf("\nHighest Score is: %d", highestScoreFunc(Score));
      printf("\nLowest Number is: %d", lowestScoreFunc(Score));

       printf("\nRerun 'r', exit 'x': ");
       scanf(" %c", &end);
       }
       while(end == 'r');
      
      
      return 0;
 }

 float AverageFunc(int sum, int count){

      return (float)sum/studentNumInput;
 }
 
 int highestScoreFunc(){
      
      int highest = Score[0];
      for(int i = 0; i < studentNumInput; i++){
            if(highest < Score[i]){
                  highest = Score[i];
            }
      }
      
      return highest;
 }

 int lowestScoreFunc(){
      
  int lowest = Score [0]; 
      for(int i = 0; i < studentNumInput; i++){
            if(lowest > Score[i]){
                  lowest = Score[i];
            }

      }
      return lowest;
 }

 // Average and Highest number works but lowest is print highest number.
 // Understood parameter in a function.
