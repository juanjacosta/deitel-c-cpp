/*
    Programa : D3_ejr3-25_tabla.c
    Propósito: Escribir un programa que utilice ciclos para imprimir
               la siguiente tabla de valores

            N      10*N     100*N    1000*N

            1        10       100      1000
            2        20       200      2000
            3        30       300      3000
            4        40       400      4000
            5        50       500      5000
            6        60       600      6000
            7        70       700      7000
            8        80       800      8000
            9        90       900      9000
            10       100      1000     10000      
*/

#include <stdio.h>

int main()
{
    int N;

    printf("====================================\n");
    printf("%s%10s%10s%10s\n\n", "N", "10*N", "100*N", "1000*N");

    for (N = 1; N <= 10; N++){
        printf("%d%10d%10d%10d\n", N, 10*N, 100*N, 1000*N);
    }

    printf("====================================\n");

    return 0;
}