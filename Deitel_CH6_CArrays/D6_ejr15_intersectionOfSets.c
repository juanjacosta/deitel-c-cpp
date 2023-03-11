/**
 * @file D6_ejr15_intersectionOfSets.c
 * @brief Use one-dimensional array to solve the following problem:
 *        Read in twho sets of numbers, each having 10 numbers. After
 *        reading all values, display the unique elements common to both
 *        sets of numbers.
 */

#include <stdio.h>

#define SET1 10
#define SET2 10
#define SIZE (SET1 + SET2)

void printArray(int a[], int s, int c);
void setIntersection(int a[], int s);

int main(void)
{
  int i, j, array[SIZE] = {0};

  printf("Enter %d elements of set 1:\n", SET1);
  for (i = 0; i < SET1; i++)
  {
    scanf("%d", &array[i]);
  }
  puts("\nSet 1:");
  printArray(array, SET1, 0);

  printf("\nEnter %d elements of set 2:\n", SET1);
  for (j = 0; j < SET2; j++)
  {
    scanf("%d", &array[j + i]);
  }
  puts("\nSet 2:");
  printArray(array, SET2, i);

  puts("\nIntersection:");
  setIntersection(array, SIZE);
}

void printArray(int a[], int s, int c)
{
  for (size_t i = 0; i < s; i++)
  {
    printf("%d ", a[i + c]);

    if (i % 5 == 0)
    {
      puts("");
    }
  }
  puts("");
}

void setIntersection(int a[], int s)
{
  int i, j;

  for (i = 0; i < s; i++)
  {
    for (j = 0; j < i; j++)
    {
      if (a[j] == a[i])
      {
        printf("%d ", a[j]);
      }
    }
  }
  puts("");
}