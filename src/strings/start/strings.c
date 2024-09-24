// file: src/strings/start/strings.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
  char hi[6];
  hi[0] = 'H';
  hi[1] = 'e';
  hi[2] = 'l';
  hi[3] = 'l';
  hi[4] = 'o';
  hi[5] = '\0';

  char everybody[] = "world!";
  char greeting[20] = "";
  strcat(greeting, hi);
  greeting[5] = ' ';
  char name[20] = {'\0'};
  printf("What's your name?\n");
  scanf("%s", name);
  strcat(greeting, name);

  printf("%s\n", hi);
  printf("%s\n", everybody);
  printf("%s\n", greeting);

  return EXIT_SUCCESS;
}