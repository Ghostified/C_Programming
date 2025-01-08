#include <stdio.h>
#include <stdlib.h>

int main(){

  int secret = 5;
  int guess;
  int guessLimit = 3;
  int guessCount = 0;
  int outOfGuesses = 0; 

  while( guess != secret && outOfGuesses == 0){
    if (guessCount < guessLimit) {
      printf("Enter a number: ");
      scanf("%d", &guess);
      guessCount++;
    } else {
      outOfGuesses = 1;
      
    }
    
  }
  if (outOfGuesses == 1){
    printf("Out of guesses, you Loose \n");
  } else {
    printf("You win");
  }


  return 0; 
}