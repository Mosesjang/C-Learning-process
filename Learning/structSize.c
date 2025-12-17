#include <stdio.h>

struct sixSeven{
      char a; // 1byte
      int b; // 4byte
      char c; // 1byte
};

int main(){
      printf("%zu byte", sizeof(struct sixSeven)); // print total size of struct

      return 0;
}


