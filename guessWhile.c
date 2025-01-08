#include <stdio.h>
#include <stdlib.h>

int main(){

  int secret = 5;
  int guess;

  while( guess != secret){
    printf("Enter a number: ");
    scanf("%d" , &guess);
    printf("Try again\n");
  }
  printf("You win");


  return 0; 
}