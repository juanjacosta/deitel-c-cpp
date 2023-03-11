/**
 * @file D6_ejr14_unionOfSets.c
 * @brief Use one-dimensional arrays to solve the following problem. Read
 *        in two sets of numbers, each having 10 numbers. After reading
 *        all values, display all the unique elements in the collection
 *        of both sets of numbers. Use the smallest possible array to
 *        solve this problem.
 */

#include <stdio.h>
#define SET1 10
#define SET2 10
#define SIZE (SET1 + SET2)

void printArray(int a[], int s);

int main(void)
{
  int i, j, array[SIZE] = {0};

  printf("Enter %d numbers:\n", SET1);

  for (i = 0; i < SET1; i++)
  {
    scanf("%d", &array[i]);
  }
  puts("Array entered:");
  printArray(array, SIZE);

  printf("Enter another %d numbers:\n", SET2);
  for (j = 0; j < SET2; j++)
  {
    scanf("%d", &array[j + i]);
  }

  puts("Main array entered:");
  printArray(array, SIZE);
}

void printArray(int a[], int s)
{
  for (size_t i = 0; i < s; i++)
  {
    printf("%d ", a[i]);

    if (i % 4 == 0)
    {
      puts("");
    }
  }
  puts("");
}