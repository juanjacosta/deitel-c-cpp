/*
    Programa : D3_ejr3-28_error.c
    Proposito: Determinar el error que imprime el 
               programa

    Error: total no declarado
*/

#include <stdio.h>

int main(void)
{
    int x = 1;
    int y = 0;
    int total = 0; // linha adicionada

    while (x <= 5)
    {
        total += x * x;
        printf("%d\n", x * x);
        ++x;
    }
    printf("Total is %d\n", total);
}
