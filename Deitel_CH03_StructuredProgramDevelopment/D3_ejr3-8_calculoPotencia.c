/*  Programa : D3_ejr05_calculaPotencia.c
    Proposito: Escribir un programa que calcule x a la potencia y. El programa debe de tener 
               una instruccion de repeticion while
                Ejercicio 3.7 e 3.8 Deitel - pg. 77
    Fecha    : 23/08/2019
 */

#include <stdio.h>

int main()
{
    int x = 0, y = 0, i = 1, potencia = 1;

    printf("================================================\n");
    printf("\tCalculo de Potencia\n");
    printf("================================================\n");

    printf("Introducir la base de la potencia     : ");
    scanf("%d", &x);

    printf("Introducir el exponente de la potencia: ");
    scanf("%d", &y);

    while(i <= y){     
        potencia *= x;
        i++;
    }
    printf("%d exponente %d = %d\n",x, y, potencia);
}

