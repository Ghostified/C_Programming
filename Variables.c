#include <stdio.h>
#include <stdlib.h>

int main () {

  char characterName[] = "Tom";
  int characterAge = 75;

  printf("There was once a man named %s\n",characterName);
  printf("He was %d years old \n", characterAge);

characterAge = 70;

  printf("He really liked his name %s\n", characterName);
  printf("But he did not like being %d\n", characterAge);

  return 0;
}