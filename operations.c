#include <stdio.h>
#include <stdlib.h>

int main () {

  printf("%f \n", 5.0 - 4.7);
  printf("%f \n", 5.0 + 4.7);
  printf("%f \n", 5 * 4.7);
  printf("%f \n", 5 / 4.7);
  printf("%d \n", 5 / 4);
  printf("%f \n", 5 / 4.0);

  int myNum = 6;
  printf("The variable is:  %d \n", myNum);

  //complex mathematical functions
  printf ("%f\n",pow(4,3) );
  printf("%f\n", sqrt(64));
  printf("%f\n", ceil(36.5678));
  printf("%f\n", floor(36.5678));

  return 0;
}