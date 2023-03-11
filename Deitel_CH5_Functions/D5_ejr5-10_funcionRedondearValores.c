/*
    Programa : D5_ejr5-1-_funcionRedondearValores.c
    Propósito: Una aplicación de la función floor es la de redondear un valor 
              al entero más cercano. La instrucción:

              y = floor(x + .5);

             redondea el numero x al entero más cercano, e asigna el resultado a y. 
             Escriba un programa que lea varios números y utilice la instrucción
             anterior para redondear estos números al entero más cercano. Por cada 
             uno de los números procesados, imprima el número original y el número 
             redondeado.

    NOTA: Para solucionar error de "referência não definida para "floor":
              Append -lm to the end of your gcc command 

              gcc -Wall arquivo.c -o arquivo -lm
*/

#include <stdio.h>
#include <math.h>

#define TAM 5

int main()
{
    float num = 0;
    int cont = 0;
    float y = 0;
    
    printf("==================================\n");
    printf("\tIngrese valores\n");
    printf("==================================\n");

    while (cont < TAM)
    {
        printf("numero %d : ", cont + 1);
        scanf("%f", &num);

        y = floor(num + .5);

        printf("floor(%.2f) = %.2f\n", num, y);
        cont++;

        printf("\n");
    }

    printf("==================================\n");
    return 0;
}