#include <stdio.h>

void printArray (const int a[], size_t t);
void bubbleSorting (int *const a, const size_t t);

int main (void)
{
  int array[] = { 6, 2, 4, 8, 10, 12, 89, 68, 45, 37, 46, 54, 21 };
  int tam = sizeof (array) / sizeof (array[0]);

  printf ("# Elementos: %d\n", tam);
  printArray (array, tam);
  bubbleSorting (array, tam);

  puts ("Arreglo Ordenado:");
  //   bubbleSorting (array, tam);
  printArray (array, tam);
}

void printArray (const int _array[], size_t t)
{
  for (size_t i = 0; i < t; i++)
    {
      printf ("%d ", _array[i]);
    }
  puts ("");
}

void bubbleSorting (int *const _array, const size_t t)
{
  void swap (int *ptrE1, int *ptrE2); // prototype

  for (size_t i = 0; i < t - 1; i++)
    {
      for (size_t j = 0; j < t - 1; j++)
        {
          if (_array[j] > _array[j + 1])
            {
              swap (&_array[j], &_array[j + 1]);
            }
        }
    }
}

/*
    C enforces information hiding between functions, so swap don't
    have access to individual elements in bubbleSorting by default
*/
void swap (int *ptrE1, int *ptrE2)
{
  int tmp = *ptrE1;
  *ptrE1 = *ptrE2;
  *ptrE2 = tmp;
}