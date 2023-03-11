/*
    Programa : D5_ejr5-17_funcionMultiplo.c
    Propósito: Escriba una función múltiplo que determine para un par de enteros,
               si el segundo es múltiplo del primero. La función debe tomar dos 
               argumentos enteros y devolver 1 (verdadero) si el segundo es 
               múltiplo del primero, y de lo contrario 0 (falso). Utilice esta
               función en un programa que introduzca una serie de pares enteros.
*/

#include <stdio.h>

int multiplo(int _n1, int _n2);

int main()
{
    int n1, n2;

    printf("Introduzca 2 numeros enteros:\n");
    scanf("%d%d", &n1, &n2);

    printf("%d %s %d\n", n2, multiplo(n1, n2) != 0 ? "Es multiplo de " : "No es múltiplo de", n1);

    return 0;
}

int multiplo(int _n1, int _n2)
{
    if (_n1 % _n2 == 0){

        return 1;
    }
    else {
        return 0;
    }
}