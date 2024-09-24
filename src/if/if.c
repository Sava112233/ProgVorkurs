
// file: src/if/if.c

#include <stdio.h>

int main ()
{
  int x, y;
  scanf ("%i", &x);
  scanf ("%i", &y);

  if (x > y)
  {
    printf ("x = %d > y = %d\n", x, y);
  }
}
