/**
 * @file D6_ejr12_arrayOperations.c
 * @brief Write loops that perform each of the following one-dimensional array
 *        operations:
 *        a) Read the 20 elements of double array sales from the keyboard.
 *        b) Add 1000 to each of the 75 elements of double array allowance.
 *        c) Initialize the 50 elements of integer array numbers to zero.
 *        d) Print the 10 values of integer array GPA in column format
 */

#include <stdio.h>
#define SIZE_R 2
#define SIZE_C 5
#define SIZE (2 * 5)

void printArray(int a[][SIZE_C]);
void printColumnFormat(int a[], int s);

int main()
{
  int sales[SIZE_R][SIZE_C] = {0};

  // a)
  printf("Enter %d elements of type int:\n", SIZE);
  for (size_t i = 0; i < SIZE_R; i++)
  {
    for (size_t j = 0; j < SIZE_C; j++)
    {
      scanf("%d", &sales[i][j]);
    }
  }
  puts("\nSales array entered");
  printArray(sales);

  // b)
  for (size_t i = 0; i < SIZE_R; i++)
  {
    for (size_t j = 0; j < SIZE_C; j++)
    {
      sales[i][j] += 1000;
    }
  }
  puts("\nsales array + 1000");
  printArray(sales);

  // c)
  int arrayNumbers[50] = {0};

  // d)
  puts("\nColumn array Numbers");
  printColumnFormat(arrayNumbers, 50);
}

void printArray(int a[][SIZE_C])
{
  for (size_t i = 0; i < SIZE_R; i++)
  {
    for (size_t j = 0; j < SIZE_C; j++)
    {
      printf("%d ", a[i][j]);

      if (j % 5 == 0)
      {
        puts("");
      }
    }
  }
  puts("");
}

void printColumnFormat(int a[], int s)
{
  for (size_t i = 0; i < s; i++)
  {
    printf("%d\n", a[i]);
  }
}