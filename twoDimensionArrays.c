#include <stdio.h>
#include <stdlib.h>

//two dimensional array;

int main (){

  int numbers[3][10] = {
      {0,1, 2, 3, 4, 5, 6, 7, 8, 9},
      {10, 11, 12, 13, 14, 15, 16, 17, 18, 19},
      {20, 21, 22, 23, 24, 25, 26, 27, 28, 29}
      };

  //printf("%d \n", numbers[1][1]);

  int i , j;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 10; j++){
      printf("%d,", numbers[i][j]);
    }
    printf("\n");
  }

  return 0;
}