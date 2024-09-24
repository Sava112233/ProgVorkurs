// file: src/function/function.c
#include <stdio.h>

double calcPerimeter( double radius ) {
  double pi = 3.14159;
  double result = 2 * radius * pi;

  return result;
}

int main()
{
  double r = 1;

  while (r >= 0) {
    printf("Geben Sie einen Wert für den Radius ein.\n");
    printf("Negativer Wert beendet Programm.\n");

    int check = scanf("%lf", &r);
    if (check != 1) {
      printf("Eingabefehler!\n");
      return 1;
    }
    if (r >= 0) {
      double perimeter = calcPerimeter( r );
      printf("Radius %lf, Umfang: %lf\n", r, perimeter);
    }
  }
  printf("Negativen Wert für Radius eingegeben!\n");
  return 0;
}
