#include <stdio.h>
#include <stdlib.h>

int main(){

  int age;
  double gpa;
  char grade;
  char userName [] = "";
  char bothNames [] = "";
  //char userName[20];

 
  printf("Enter  your age: \n");
  scanf("%d", &age);
  printf("You are %d years  old \n", age);
  printf("\n");

  printf("Enter your grade:\n");
  scanf(" %c", &grade);
  printf("Your grade is: %c\n", grade);
  printf("\n");

  printf("Enter your gpa: \n");
  scanf("%lf", &gpa);
  printf("Your GPA is: %f \n" , gpa);
  printf("\n");

  printf("Enter your name: \n");
  scanf(" %s", userName );
  printf("Your name is :%s \n" ,userName);
  printf("\n");

  printf("Enter your full names : \n");
  fgets( bothNames,20, stdin);
  printf("Your name is :%s \n", bothNames);
  printf("\n");

  return 0;
}