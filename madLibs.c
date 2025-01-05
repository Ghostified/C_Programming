#include <stdio.h>
#include <stdlib.h>

int main () {

  char color [50];
  char pluralNoun [35];
  char celebrityF[45];
  char celebrityL[45];

  printf("Enter a color \n");
  scanf("%s", color);
  printf("\n");

  printf("Enter a pluralNoun \n");
  scanf("%s", pluralNoun);
  printf("\n");

  printf("Enter a celebrity name: \n");
  scanf("%s%s", celebrityF, celebrityL);
  printf("\n");

  printf("Roses are %s \n", color);
  printf("%s are blue \n", pluralNoun);
  printf("I love %s %s! \n", celebrityF, celebrityL);

  return 0;
}