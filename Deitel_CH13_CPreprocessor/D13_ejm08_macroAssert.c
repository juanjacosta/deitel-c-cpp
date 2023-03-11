/*
    Programa : D13_ejm08_macroAssert.c
    Propósito: mostrar el uso de la macro assert para propósitos de depuración
*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// #define NDEPURAR

#define TAM 10


int main()
{
    for (int i = 0; i < TAM; i++)
    {
        printf("%d", i);
        assert(i <= 5);
    }
    
    return 0;
}