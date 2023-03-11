/*
    Programa : D5_ejr5-18_funcionImpar.c
    Propósito: Escriba un programa que introduzca una serie de enteros,
               y los pase uno a la vez, a una función llamada impar que
               utilice el operador módulo para determinar si un entero
               es impar. La función debe tomar un argumento entero y 
               devolver 1 si el entero es impar o 0 si no lo es.

               OBS: En Linux EOF = Ctrl d  
*/

#include <stdio.h>

int impar(int n);

int main()
{
    int num;

    printf("Ingrese numero: ");

    while ((scanf("%d", &num)) != EOF)
    {
        printf("%s\n", impar(num) ? "Impar" : "No impar");

        printf("Ingrese numero: ");
    }

    return 0;
}

int impar(int n)
{
    if (!(n % 2 == 0)){

        return 1;
    }
    else {

        return 0;
    }
}