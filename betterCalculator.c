#include <stdio.h>
#include <stdlib.h>

int main(){

  double num1, num2;
  char operator; 

  printf("Enter a number: ");
  scanf ("%lf", &num1);

  printf("Enter an operator: ");
  scanf(" %c", &operator);

  printf("Enter a second number");
  scanf("%lf", &num2);

  if (operator == '+'  ){
    printf("%f", num1 + num2);
  } else if ( operator == '-' ){
    printf("%f", num1 - num2);
  } else if (operator == '*') {
    printf("%f", num1 * num2);
  } else if (operator == '/'){
    printf("%f", num1 / num2);
  } else {
    printf("Invalid operator");
  }

  return 0; 
}