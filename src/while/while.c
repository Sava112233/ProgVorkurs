
// file: src/while/while.c
#include <stdio.h>

int main ()
{
  float zahl, summe=0.0;

  while (summe < 100.0)
  {
    printf ("Zahl eingeben: ");
    scanf ("%f", &zahl);
    summe = summe + zahl;
  }
  printf ("Summe = %f", summe);
}
