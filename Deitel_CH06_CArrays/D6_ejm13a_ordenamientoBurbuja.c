#include <stdio.h>

void printArray(int a[], size_t t);
void bubbleSorting(int a[], size_t t);

int main()
{
    int array[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37, 46, 54, 21};
    int tam = sizeof(array) / sizeof(array[0]);

    printf("Size array: %d\n", tam);
    printArray(array, tam);
    puts("Arreglo Ordenado:");
    bubbleSorting(array, tam);
    printArray(array, tam);
}

void printArray(int a[], size_t t)
{
    for (size_t i = 0; i < t; i++)
    {
        printf("%d ", a[i]);
    }
    puts("");
}

void bubbleSorting(int a[], size_t t)
{
    for (size_t i = 1; i < t; i++)
    {
        for (size_t j = 0; j < t - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}