/*
    Programa : D5_ejr5-13_numerosAleatorios.c
    Proposito: Escriba instrucciones que asignen enteros de manera 
               aleatoria a la variable n en los siguientes rangos:
               
               a) 1 <= n <= 2
               b) 1 <= n <= 100
               c) 0 <= n <= 9
               d) 1000 <= n <= 1112
               e) -1 <= n <= 1
               f) -3 < n <= 11
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, c, d, e, f;

    a = b = c = d = e = f = 0;

    srand(time(NULL));

    a = 1 + (rand() % 2);
    b = 1 + (rand() % 100);
    c = rand() % 9;
    d = (rand() % 112 + 1000);
    e = -1 + (rand() % 1);
    f = -3 + (rand() % 11);

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e, f);

    return 0;
}