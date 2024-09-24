// file: src/ifElse/ifElse.c

#include <stdio.h>

int main ()
{
  int x, y;
  scanf ("%i", &x);
  scanf ("%i", &y);

  printf("x = %d, y = %d\n", x, y);

  if (x > y)
  {
    printf ("x > y\n");
  }
  else
  {
    printf ("x <= y\n");
  }
}
