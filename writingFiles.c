#include <stdio.h>
#include <stdlib.h>

//writing a file in c
/*
File modes:
w - write, create a new file or overwrite a new file
a - append a file
r -  read the file 
*/

int main (){
  FILE *fpointer = fopen("/home/ghost/Projects/C_Programming/employee.txt", "w"); // create a file in write mode in the filepath

  // fprintf - function to put info in the file created 
  fprintf (fpointer, "Jim - Developer\n Ghost - Engineer\n Branson - DevOps");

  fclose(fpointer);
  printf("File written successfully");
  
  return 0;
}
