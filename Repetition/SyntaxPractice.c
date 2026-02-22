#include <stdio.h>



int main(){

      // Create File
      FILE *fptr;
      fptr = fopen("MyName.txt", "w");
      
      //write something in myfile

      fprintf(fptr, "Hello World");
      // close file
      close(fptr);

      // Read file 
      char myString[100];
      fptr = fopen("MyName.txt", "r");  
      


      return 0;
}