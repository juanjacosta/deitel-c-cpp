/*
    Programa: D4_ejm09_instruccionContinue.c
    Propósito: Mostrar el uso de la instruccion continue para alterar el flujo de control
               de una instruccion de repeticion, while, for, do...while, o de seleccion
               multiple switch...case   
               La instruccion continue cuando se ejecuta en una instruccion while, for o 
               do...while, evita las instrucciones restantes del cuerpo de esa instruccion
               de control y ejecuta la siguiente iteracion del ciclo. En una instruccion
               while y do...while, la evaluacion de continuacion de ciclo se evalua 
               inmediatemente despues de que se ejecuta la instruccion continue.  
    Fecha    : 29/08/2019
 */

#include <stdio.h>

int main()
{
    int x;

    printf("============================================\n");
    printf("\tInstruccion switch...case\n");
    printf("=============================================\n");

    for (x = 1; x <= 10; x++){

        if (x == 5){
            continue;
        }

        printf("%d ", x);   // despliega el valor de x
    }

    printf("\nUtiliza continue para ignorar la impresion del valor 5\n");

    return 0;
}