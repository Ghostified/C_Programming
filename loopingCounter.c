#include <stdio.h>
#include <stdlib.h>

int main (){
  
  // int i = 0;
  // while (i <= 5){
  //   printf("%d \n" , i);
  //   i++;
  // }

  int luckyNumbers [] = {1,2,3,4,5,6,6,7,8,9};
  int i = 0;
  for (int i = 0; i <= 10 ; i++){
    printf("%d\n", luckyNumbers[i]);
  }

  return 0;
}