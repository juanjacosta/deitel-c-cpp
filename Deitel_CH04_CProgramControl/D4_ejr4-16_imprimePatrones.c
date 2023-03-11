/*
    Programa : D4_ejr4-16_imprimePatrones.c
    Propósito: Escriba un programa que imprima los patrones siguientes de manera
               separada, uno debajo del otro. Utilice ciclos for para generar los
               patrones. Todos los asteriscos (*) deben imprimirse mediante una 
               sola instrucción printf de la forma printf("*"); (esto provoca que
               los asteriscos se impriman uno al lado del otro). Pista: Los dos 
               últimos patrones requieren que cada línea comience con el número 
               apropiado de espácios en blanco.
*/

#include <stdio.h>

int main()
{
    printf("====================================\n");
    printf("\tImpresión de Patrones\n");
    printf("====================================\n");

    int i, j, l;

    for (i = 1; i <= 10; i++){

        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (i = 10; i >= 1; i--){

        for (j = i; j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (i = 10; i >= 1; i--){
        
        for (l = 0; l <= 10 - i; l++){
            printf(" ");
        }

        for (j = i; j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (i = 1; i<= 10; i++){

        for (l = 10; l >= i; l--){
            printf(" ");
        }

        for (j = 1; j <= i; j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}