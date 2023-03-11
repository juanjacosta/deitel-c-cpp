/**
 * @file D_ejr11_selectionSort.c
 * @brief A selection sort algorithm for a one-dimensional array
 *        has the following steps:
 *        a) The smallest value in the array is found.
 *        b) It is swapped with the value in the first position
 *           of the array.
 *        c) The above steps are repeated for the rest of the array
 *           starting at the second position and
 *        Eventually the entire array is divided into two parts: the
 *        sub-array of items already sorted which is built up from left
 *        to right and is found at the beginning, and the sub-array of
 *        items remaining to be sorted, occupying the remainder of the
 *        array. Write a program that sorts an array of 10 integers using
 *        this algorithm.
 */

#include <stdio.h>
#include <stdlib.h>

void generateArray(int a[], int _size, int _min, int _max);
void printArray(const int a[], int _size);
void sortArray(int a[], int _size);

int main(void)
{
    int min, max;
    min = max = 0;

    printf("Minimum value: ");
    scanf("%d", &min);

    printf("Maximum value: ");
    scanf("%d", &max);

    int size = max - min;
    int array[size];

    generateArray(array, size, min, max);
    printArray(array, size);

    puts("Arreglo Ordenado");
    sortArray(array, size);
    printArray(array, size);
}

void generateArray(int a[], int _size, int _min, int _max)
{
    for (size_t i = 0; i < _size; i++)
    {
        a[i] = _min + rand() % _max;
    }
}

void printArray(const int a[], int _size)
{
    for (size_t i = 0; i < _size; i++)
    {
        printf("%d ", a[i]);

        if ((i % 10) == 0)
        {
            puts("");
        }
    }
    puts("");
}

void sortArray(int a[], int _size)
{
    int tmp = 0;
    for (size_t i = 1; i < _size; i++)
    {
        for (size_t j = 0; j < _size - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}