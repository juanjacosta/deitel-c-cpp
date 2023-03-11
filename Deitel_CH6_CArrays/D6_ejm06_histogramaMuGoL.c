#include <stdio.h>
#define TAM 10

int main(void)
{
    int a[TAM] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};

    for (size_t i = 0; i < TAM; i++)
    {
        printf("%u\t%d\n", i + 1, a[i]); // %u para imprimir unsigned int
    }

    for (size_t i = 0; i < TAM; i++)
    {
        for (size_t j = 1; j <= a[i]; j++)
        {
            printf("%c", '*');
        }
        puts("");
    }
}