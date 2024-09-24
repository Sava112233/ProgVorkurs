// file: src/elementAssign/elementAssign.c
#include <stdio.h>
#include <stdlib.h>
#define ANZAHL 11

int main(void) {
  unsigned int iFeld[ANZAHL];
  // Index quadriert
  for (unsigned int i = 0; i < ANZAHL; i++) {
     iFeld[i]=i*i;
  }
  // Werte ausgeben
  for (unsigned int i = 0; i < ANZAHL; i++) {
     printf("iFeld[%2d] = %3d\n", i, iFeld[i]);
  }
  return EXIT_SUCCESS;
}
