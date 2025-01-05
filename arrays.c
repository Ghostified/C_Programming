#include <stdio.h>
#include <stdlib.h>

int main (){
  int myArray[]= {1,2,3,4,5,6,7,8};
  double luckyNumber[] = {23,34, 67,39,78,600, 56, 89};
  luckyNumber [3] = 200;
  myArray [1] = 100;

  //epty array
  int emptyArray[10];
  emptyArray [3] = 50;
  emptyArray [0] = 1;

  printf("%lf", luckyNumber[3]);
  printf("\n");
  printf("%d", myArray[0]);
  printf("\n");
  printf("%d", myArray[1]);
  printf("\n");
  printf("%d", emptyArray[3]);
  printf("\n");
  printf("%d", emptyArray[0]);

  return 0;
}