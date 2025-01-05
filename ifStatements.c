#include <stdio.h>
#include <stdlib.h>

//if statements are used to make decisions

double maxValue(double num1, double num2, double num3);  //function prototyping 
double num1;
double num2;
double num3;

    int main()
{

  printf("The answer is: %f", maxValue(num1, num2, num3));

  if (3 < 2 || 3 >  5){
    printf("True");
  } else {
    printf("False");
  }

  return 0; // return statement breaks out of the main function
}

//function that takes two numbers and determines which is the maximum value

double maxValue(double num1, double num2, double num3){

  
  printf("Enter a number: ");
  scanf("%lf", &num1);

  printf("Enter a second number: ");
  scanf("%lf", &num2);

  printf("Enter a third number: ");
  scanf("%lf", &num3);

  double result;
  if (num1 >= num2 && num1 >= num3){
    result = num1;
  } else if (num2 >= num3 && num2 >= num1){
    result = num2;
  }else {
    result = num3;
  }
  return result;
}