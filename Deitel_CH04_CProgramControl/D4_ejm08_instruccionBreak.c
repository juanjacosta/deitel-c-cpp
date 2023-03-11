/*
    Programa: D4_ejm08_instruccionBreak.c
    Propósito: Mostrar el uso de la instruccion break para alterar el flujo de control
               de una instruccion de repeticion, while, for, do...while, o de seleccion
               multiple switch...case.
               La instruccion break cuando se ejecuta en una de las instrucciones 
               anteriores, ocasiona la salida inmediata de esa instruccion. La ejecucion
               del programa continua con la siguiente instruccion. Los usos comunes de 
               la instruccion break son: para salir de manera temprana de un ciclo, o 
               para saltar el resto de una instruccion switch.   
    Fecha    : 29/08/2019
 */
#include <stdio.h>

int main()
{
    int x;      

    printf("============================================\n");
    printf("\tInstruccion break\n");
    printf("=============================================\n");

    for (x = 1; x <= 10; x++){

        if (x == 5){
            break;          // rompe el ciclo solo si x es 5
        }

        printf("%d ", x);
    }
    
    printf("\nRompe el ciclo en x == %d\n", x);

    return 0;
}