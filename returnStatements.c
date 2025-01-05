#include <stdio.h>
#include <stdlib.h>

// when returning value should be on top of the main method
double cube(double num){
  double result = num * num * num;
  return result;
}


int main () {
  double myNum;
  printf("Enter a number: \n");
  scanf("%lf", &myNum);
  printf("Answer: %f", cube(myNum));
return 0;
}

