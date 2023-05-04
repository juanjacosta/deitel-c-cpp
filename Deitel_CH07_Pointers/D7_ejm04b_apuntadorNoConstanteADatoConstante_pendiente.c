#include <stdio.h>

void printArray(const int a[], size_t t);

int main(void)
{
  int array[] = {6, 2, 4, 8, 10, 12, 89, 68, 45, 37, 46, 54, 21};
  int tam = sizeof(array) / sizeof(array[0]);

  printArray(array, tam);
}

void printArray(const int a[], size_t t)
{
  for (size_t i = 0; i < t; i++)
  {
    printf("%d ", a[i]);
  }
  puts("");
}