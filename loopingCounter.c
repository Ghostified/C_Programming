#include <stdio.h>
#include <stdlib.h>

int main (){
  
  // int i = 0;
  // while (i <= 5){
  //   printf("%d \n" , i);
  //   i++;
  // }

  int i;
  for (int i = 0; i <= 1000 ; i++){
    printf("%d\n", i);
    i = i + 9;
  }

  return 0;
}