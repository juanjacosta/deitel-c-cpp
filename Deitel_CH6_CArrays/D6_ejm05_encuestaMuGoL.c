#include <stdio.h>
#define TAM 40
#define FQ 10

int main(void)
{
    int rptas[] = {10, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7,
                   6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    int freq[FQ] = {0};

    for (size_t i = 0; i < TAM; i++)
    {
        freq[rptas[i]]++;
    }

    for (size_t i = 1; i <= FQ; i++)
    {
        printf("%5u%10d\n", i, freq[i]); // %u para imprimir unsigned int
    }
}
