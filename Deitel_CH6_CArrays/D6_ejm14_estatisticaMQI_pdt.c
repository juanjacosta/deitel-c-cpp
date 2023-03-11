/**
 * @file D6_ejm14_estatisticaMQI.c
 * @brief Cálculo de média, moda, mediana
 *
 */

#include <stdio.h>
#define SIZE 99
#define FREQ 10

void printArray(const unsigned int a[], const unsigned int s);

int main()
{

    unsigned int response[SIZE] =
        {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
         7, 8, 9, 5, 9, 8, 6, 8, 7, 8,
         6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
         7, 8, 9, 5, 9, 8, 4, 8, 7, 8,
         6, 7, 8, 2, 8, 7, 8, 9, 8, 9,
         7, 8, 6, 8, 3, 8, 2, 8, 5, 3,
         5, 6, 8, 2, 8, 7, 8, 9, 8, 9,
         7, 8, 8, 6, 9, 1, 7, 8, 7, 8,
         7, 4, 4, 2, 8, 7, 8, 7, 5, 6,
         4, 5, 9, 1, 6, 5, 7, 8, 7};

    unsigned int frequency[FREQ] = {0};
    int size_array = 0;

    puts("########################################");
    puts("### Medidas Numéricas:\n* Medidas de Localização ou de tendencia central");
    puts("\t-Média amostral\n"
         "\t-Moda amostral\n"
         "\t-Mediana amostral\n"
         "\t-Quartis, Decis e Percentis");
    puts("* Medidas de dispersão:");
    puts("########################################");

    size_array = sizeof(response) / sizeof(response[0]);
    printf("Size of array: %d\n", size_array);

    puts("### Original Array:");
    printArray(response, size_array);
}

void printArray(const unsigned int a[], const unsigned int s)
{
    for (size_t i = 0; i < s; i++)
    {
        printf("%d ", a[i]);

        if (i % 20 == 0)
        {
            puts("");
        }
    }
    puts("");
}