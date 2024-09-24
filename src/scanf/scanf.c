// file: src/scanf/scanf.c
#include <stdio.h>

int main(void)
{
  int a;
  float x;
  scanf("%i", &a);
  scanf("%f", &x);
  printf("\na=%d, x=%f\n", a, x);
  printf("Adresse von x: %p\n", &x);
  printf("Inhalt der Speicherzelle: %f\n", x);
  return 0;
}
