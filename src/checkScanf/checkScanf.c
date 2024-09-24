// file: src/checkScanf/checkScanf.c
#include <stdio.h>

int main(void) {

  int input = 0;

  printf("Geben Sie bitte eine ganze Zahl ein: ");
  int check = scanf("%d", &input);
  printf("Anzahl Wert(e): %d \n", check);

  if( check != 1 ) {
    printf("Eingabefehler! \n");
    return 1;
  }

  printf("input: %d\n", input);

  return 0;
}
