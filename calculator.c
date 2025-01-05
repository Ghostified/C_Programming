#include <stdio.h>
#include <stdlib.h>

int main ()
{
  double num1;
  double num2;

  printf("Enter the first number: ");
  scanf("%lf", &num1);
  printf("\n");

  printf("Enter a second number: ");
  scanf("%lf", &num2);
  printf("\n");

  double result = num1 + num2;
  printf("The result is: %f\n", result);
  printf("\n");

  return 0;
}