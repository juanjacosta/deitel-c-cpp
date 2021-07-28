/*
    Programa : D4_ejr4-7_secuenciaDeValores.c
    Proposito: Escriba instrucciones for que impriman las 
               siguientes secuencias de valores 
               a) 1, 2, 3, 4, 5, 6, 7
               b) 3, 8, 13, 18, 23
               c) 20, 14, 8, 2, -4, -10
               d) 19, 27, 35, 43, 51

    Fecha    : 05/06/2020
*/

#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 7; i++)
    {
        if (i == 7)
        {
            printf("%d\n", i);
            break;
        }
        printf("%d, ", i);
    }

    for (i = 3; i <= 23; i += 5)
    {
        if (i == 23)
        {
            printf("%d\n", i);
            break;
        }
        printf("%d, ", i);
    }

    for (i = 20; i >= -10; i -= 6)
    {
        if (i == -10)
        {
            printf("%d\n", i);
            break;
        }
        printf("%d, ", i);
    }

    for (i = 19; i <= 51; i += 8)
    {
        if (i == 51)
        {
            printf("%d\n", i);
            break;
        }
        printf("%d, ", i);
    }

    return 0;
}