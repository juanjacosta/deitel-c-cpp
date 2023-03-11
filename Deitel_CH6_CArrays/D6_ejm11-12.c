#include <stdio.h>
#define TAM 5

void modifyArray(int b[], size_t size);
void modifyElement(int e);
void printArray(const int b[], size_t size);

int main(void)
{
    int a[TAM] = {0, 1, 2, 3, 4};

    puts("Effects of passing entire array by reference:");

    puts("The values of the original array are:");
    printArray(a, TAM);
    puts("The values of the modified array are:");
    modifyArray(a, TAM);

    puts("\nEffects of passing array element by value:");
    printf("The value of a[3] is %d\n", a[3]);
    modifyElement(a[3]);
}

void modifyArray(int b[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        b[i] *= 2;
    }
    printArray(b, size);
}

void modifyElement(int e)
{
    e *= 2;
    printf("Value in modifyElement is %d\n", e);
}

void printArray(const int b[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", b[i]);
        // printf("%d ", b[i] *= 2);    // tratar de modificar um valor const gera erro:
    }
    puts("");
}