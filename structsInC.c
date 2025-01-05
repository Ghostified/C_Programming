#include <stdio.h>
#include <stdlib.h>
//Structs is a data structure  used to model real world objects like a class
//in the parantheses the attributes of the  object are defined 
//struct is a template 

struct Student{
  char name [50];
  char major [50];
  int age;
  double gpa; 

};

int main (){

  struct Student student1; 
  student1. age = 24; 
  student1.gpa = 3.2;
  strcpy(student1.major, "Computer Science");
  strcpy(student1.name, "Branson");

  printf(" %s \n", student1.name);
  printf(" %s \n", student1.major);
  printf(" %f \n", student1.age);
  printf(" %d \n", student1.age);

  struct Student student2;
  student2.age = 220;
  student2.gpa = 4.8;
  strcpy(student2.name, "Albus");
  strcpy(student2.major, "cloud computing");


  printf(" %s \n", student2.name);
  printf(" %s \n", student2.major);
  printf(" %d \n", student2.age);
  printf(" %f \n", student2.gpa);

  // printf(student1);


  return 0; 
}