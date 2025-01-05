#include <stdio.h>
#include <stdlib.h>

//allow the user to guess a secret number untill they get it right
int gameEngine(int guess, int attempts);
int guess = 0;
int attempts = 1;

int main()
{

  gameEngine(guess, attempts);
 
  return 0;
}

int gameEngine (int guess, int attempts){

  int secretNumber = 6;
  

  while (attempts <=  3){

    printf("Attempt %d: Enter a number: " ,attempts);
    scanf("%d", &guess); 

    if (guess == secretNumber){
      printf("You win \n");
      return 1;
    }

    attempts++;
  

  }
  printf("You ran out of attempts, try again \n");
  return 0;
  }

