/*
    Programa : D5_ejr5-14_conjuntosAleatorios.c 
    Propósito: Para cada uno de los siguientes conjuntos de 
               enteros, escriba una instrucción individual 
               que imprima un número aleatorio de conjuntos.

               a) 2, 4, 6, 8, 10
               b) 3, 5, 7, 9, 11
               c) 6, 10, 14, 18, 22
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, a, b, c;

    i = a = b = c = 0;

    srand(time(NULL));

    // a) 2, 4, 6, 8, 10
    for (i = 2; i <= 10; i++)
    {
        a = ((rand() % 4) * 2 + 2);
        printf((i < 10) ? "%d, " : "%d\n", a);
    }

    // b) 3, 5, 7, 9, 11
    for (i = 3; i <= 11; i++)
    {
        b = ((rand() % 6) * 2 + 1);
        printf((i < 11) ? "%d, " : "%d\n", b);
    }

    // c) 6, 10, 14, 18, 22
    for (i = 6; i <= 22; i+=4)
    {
        c = ((rand() % 6) * 2 + 4);
        printf((i < 22) ? "%d, " : "%d\n", c);
    }

    return 0;
}