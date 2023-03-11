/*
    Programa : D4_ejr4-11_menorDeVariosEnteros.c
    Propósito: Escriba un programa que encuentre el menor de 
               varios enteros. Suponga que el primer valor a 
               leer especifica el número de valores restantes.

               ALGORITMO:
               Recibir un número de valores enteros definido por 
               el primer valor ingresado, y calcular el menor de 
               todos ellos. 

               MEJORAMIENTO:

               Definir variables 
                    variable para recibir valores 
                    variable para almacenar el 1er valor 
                    variable para almacenar valor más pequeno
                    variable de contador que define el númeor de valores ingresados 

               incializar variables 
                    variable para recibir valores en 0

               ingresar valores
                    el primer valor va a definir cuantos numeros se va a ingresar 

               encontrar el menor valor 
                    asumir que el 1er valor va a ser el menor y comparar con cada valor
                    ingresado. Si alguno es menor, toma su lugar y así sucesivamente. 

               imprimir el menor valor 
*/
#include <stdio.h>

int main()
{
    int valRef, num, min, i;

    num = i = 0;

    printf("valor %d: ", i + 1);
    scanf("%d", &valRef);
    min = valRef;

   for (i = 1; i < valRef - 1; i++)
    {
        // printf("i: %d\n", i);

        printf("valor %d: ", i + 1);
        scanf("%d", &num);

        if (num < min)
        {
            min = num;
        }
    }
    printf("Menor: %d\n", min);

    return 0;
}