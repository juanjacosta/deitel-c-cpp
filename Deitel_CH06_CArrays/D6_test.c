#include <stdio.h>

void printArray(int b[], size_t size);
void burbleSorting(int b[], size_t size);

int main(void)
{
    int a[7] = {0};
    int tam;

    tam = sizeof(a) / sizeof(a[0]);
    printf("Size of array: %d\n", tam);

    printArray(a, tam);

    puts("Arreglo Ordenado:");
    burbleSorting(a, tam);
}

void printArray(int b[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", b[i]);
    }
    puts("");
}

void burbleSorting(int b[], size_t size)
{
    for (unsigned int i = 1; i < size; i++)
    {
        for (size_t j = 0; j < size - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                int tmp = b[j + 1];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }
        }
    }
}