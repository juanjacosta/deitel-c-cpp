/*
    Programa : D4_ejr4-18_histogramas.c
    Propósito: Una interesante aplicación de las computadoras es dibujar gráficos 
               de barras (histogramas). Escriba un programa que lea cinco números
               (cada uno entre 1 y 30). Por cada número leído, su programa debe 
               imprimir una línea que contenga dicho número con asteriscos 
               adyacentes. Por ejemplo, si su programa lee el número 7, debe 
               imprimir *******.
*/

#include <stdio.h>

int main()
{
    int num, i, j;
    
    for (i = 1; i <= 5; i++)
    {
        printf("Ingresar numero (1 - 30)");
        scanf("%d", &num);

        if (num < 1 || num > 30)
        {
            printf("Error: Valor fuera de rango\n");
            i -=1;
        }

        else {

            for (j = 1; j <= num; j++)
            {
                printf("*");
            }

            printf("\n");     
        }
    }

    return 0;
}