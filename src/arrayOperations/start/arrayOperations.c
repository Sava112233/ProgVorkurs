// file: arrayOperations/start/arrayOperations.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void printArray(const int a[], int num)
{
  printf("Array: ");
  for (unsigned int i = 0; i < num; i++)
    printf("%2d ", a[i]);
  printf("\n");
}

int main()
{
  /* Define and initialize array a */
  int a[6] = {0};
  /* Calculate number of elements in a */
  unsigned int num = sizeof(a) / sizeof(a[0]);

  /* input of values*/
  printf("Input of %d elements:\n", num);
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &a[i]);
  }
  printArray(a, num);

  /* determine minimum */
  int minVal = a[0];
  for (unsigned int i = 1; i < num; i++)
    if (a[i] < minVal)
      minVal = a[i];
  printf("Minimum: %d\n", minVal);

  /* determine minimum using a function */

  /* determine maximum using a function */

  /* calculate average value using a function */

  return 0;
}
