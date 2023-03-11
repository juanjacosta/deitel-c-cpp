/*
    Programa : D5_ejr5-19_cuadradoAsteriscos.c
    Propósito: Escriba una función que despliegue en el margen izquierdo
               de la pantalla un cuadrado sólido de asteriscos cuyas 
               medidas se especifiquen mediante el parámetro lado.
               Por ejemplo, si lado es 4, la función despliega: 

                ****
                ****
                ****
                ****
*/

#include <stdio.h>

void imprimeCuadrado(int l);

int main()
{
    int lado;

    printf("Lado: ");

    while ((scanf("%d", &lado)) != EOF)
    {
        imprimeCuadrado(lado);

        printf("Lado: ");
    }
     
    return 0;
}

void imprimeCuadrado(int l)
{
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}