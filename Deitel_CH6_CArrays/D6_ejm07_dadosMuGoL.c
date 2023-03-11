#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LADOS 7
#define TIROS 12

int main(void)
{
    unsigned int face = 0;
    unsigned int freq[LADOS] = {0};

    srand(time(NULL));

    for (size_t i = 1; i <= TIROS; i++)
    {
        face = 1 + rand() % 6;
        freq[face]++;
    }

    for (size_t i = 1; i < LADOS; i++)
    {
        printf("%u\t%d\t", i, freq[i]); // %u para imprimir unsigned int

        for (size_t j = 1; j <= freq[i]; j++)
        {
            printf("%c", '*');
        }
        puts("");
    }
}