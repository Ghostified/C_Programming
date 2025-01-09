#include <stdio.h>
#include <stdlib.h>

// Reading a file in c
/*
File modes:
w - write, create a new file or overwrite a new file
a - append a file
r -  read the file
*/

int main (){

  char line[255];
  FILE *fpointer = fopen("/home/ghost/Projects/C_Programming/employee.txt", "r"); //reading the file contents

  fgets(line, 255, fpointer); // read the first line of the file
  printf("%s \n", line);  // print the first line

  fgets(line, 255, fpointer); // read the second line of the file
  printf("%s\n", line);         // print the second line

  fclose(fpointer);

  return 0;
}
