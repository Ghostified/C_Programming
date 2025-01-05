#include <stdio.h>
#include <stdlib.h>

int main (){

  printf("Top");
  printf("\n");
  sayHi();
  sayHello("Branson",34);
  sayHello("Ghost", 45);
  sayHello("Albus", 67);
  printf("Bottom");



  return 0;
}

// a block of code that performs a specific task
//Example function
void sayHi (){
  printf("Hello User \n");
  printf("\n");
}

void sayHello(char name[], int age){
  printf("Hello %s, you are %d\n", name, age);

}
