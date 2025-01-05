#include <stdio.h>
#include <stdlib.h>

char grader(char studentsGrade);
int main()
{
  char studentsGrade;
  printf("Enter your grade: ");
  scanf(" %c", &studentsGrade);
  // printf("Your grade is: %s", &yourGrade , grader(yourGrade)); 

  grader(studentsGrade);
  return 0;
}

char grader (char studentsGrade){

  switch (studentsGrade)
  {
  case 'A':
    printf("You did awesome");
    break;
  case 'B':
    printf("Well done");
    break;
  case 'C':
    printf("Above Average");
    break;
  case 'D':
    printf("Pass");
    break;
  case 'E':
    printf("Fail");
    break;
  default:
    printf("Enter a valid grade");
    break;
  }

  return studentsGrade; 
}