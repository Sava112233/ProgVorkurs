// file: arrayOperations/end/arrayOperations.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int findMax(const int a[], int num)
{
  int max = a[0];
  for (unsigned int i = 1; i < num; i++)
    if (a[i] > max)
      max = a[i];
  return max;
}

int findMin(const int a[], int num)
{
  int min = a[0];
  for (unsigned int i = 1; i < num; i++)
    if (a[i] < min)
      min = a[i];
  return min;
}

double calcAverage(const int a[], int num)
{
  double sum = a[0];
  for (unsigned int i = 1; i < num; i++)
    sum += a[i];
  return sum / num;
}

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

  // /* determine minimum */
  // int minVal = a[0];
  // for (unsigned int i = 1; i < num; i++)
  //   if (a[i] < minVal)
  //     minVal = a[i];
  // printf("Minimum: %d\n", minVal);

  /* determine minimum */
  int minVal = findMin(a, num);
  printf("Minimum: %d\n", minVal);

  /* determine maximum */
  int maxVal = findMax(a, num);
  printf("Maximum: %d\n", maxVal);

  /* calculate average value */
  float avg = calcAverage(a, num);
  printf("Average value %f:\n", avg);

  return 0;
}
