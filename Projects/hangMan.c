#include <stdio.h>
#include <time.h>
#include <stdlib.h>


      enum length{
            MAX_WORD_LENGTH = 50,
            MAX_TRIES = 6
      };

      struct WordWithHInt {
            char word[MAX_WORD_LENGTH];
            char hint[MAX_WORD_LENGTH];
      };

      int main(){

            srand(time(NULL));

            struct WordWithHInt wordList[4] = {
                  {"elephant", "A large mammal with a trunk"},
                  {"pizza", "A popular Italian dish" },
                  {"beach", "Sandy sore by the sea"},
                  {"gay", "mentally and sexually confused person"},

            };

            int wordIndex = rand() % 4;
            
            const char* secretWord = wordList[wordIndex].word;
            const char* hint = wordList[wordIndex].hint;

            printf(" %s", hint);

            return 0;
      }