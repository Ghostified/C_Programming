#include <stdio.h>
#include <stdlib.h>

//pointer is a type of data in a program and its a memory address: 

int main (){
  int age = 30;
  double gpa = 3.4;
  char grade = 'B';

  //create a pointer variable , then inside the pointer variable store the physical memory address  of any variable

  int *pAge = &age;
  double *pGpa = &gpa;
  char *pGrade = &grade;

  printf("The memory adress of the integer age is:  %p\n" , &age);

  printf("%p\n", pAge);  // prints out the memory adresss
  printf("%d\n", *pAge);  // dereferencing the pointer, outputs 30
  printf("%d\n", *&age); //dereferencing shorthand

  return 0;
}