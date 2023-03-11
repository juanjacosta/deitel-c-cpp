/*  Programa : D3_ejr04_sumaEnterosWhile.c
    Proposito: Escriba un programa que calcule la suma de los enteros de 1 a 10. Utilice
                un ciclo while para hacer un ciclo con las instrucciones para el calculo
                y el incremento. El ciclo debera terminar cuando el valor de x sea 11
    Fecha    : 23/08/2019
 */

#include <stdio.h>
#define TAM 10

int main()
{
    int num = 1, suma = 0;

    printf("===========================\n");
    printf("\tSuma enteros\n");
    printf("===========================\n");

    while (num <= TAM){
        suma += num;
        
        if (num < TAM)
            printf("%d + ", num);
        else
            printf("%d = %d\n", num, suma);

        num++;
    }

    printf("La suma es: %d\n", suma);

    return 0;
}