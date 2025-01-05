#include <stdio.h>
#include <stdlib.h>

int main (){

  int age = 40;
  double score = 3.8;
  // float weight = 30.3;
  char grade = 'A';
  char phrase[] = "Computer Science";


  //Printf - allows to print output on the screen 
  printf ("Hello\n World \n");
  printf("Hello \"\" World \n");
  printf("This is my age: %d\n" , age);
  printf("My favorite %s  is %d\n", "number", 19 );
  printf("The value of  %s  is %f \n", "pie", 3.147 );
  printf ("The score is: %c\n", grade );

  return 0;
}