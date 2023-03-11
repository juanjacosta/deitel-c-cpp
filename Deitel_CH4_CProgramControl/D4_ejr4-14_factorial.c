/*
    Programa : D4_ejr4-14_factorial.c
    Propósito: Escriba un programa que evalúe los factoriales de los 
               enteros de 1 a 5. Imprima los resultados de manera 
               tabular.

        Obs:   La función factorial se utiliza a menudo en problemas
               de probabilidad. El factorial de un entero positivo n,
               n!, es igual al producto de los enteros positivos de 1 
               a n.     

    Pregunta:  Qué dificultad debe usted prever al calcular el factorial
               de 20?
    Respuesta: Que dependiendo del tipo de dato que use va a soportar um 
               tamaño em memoria e valores determinados

               Tipo    Tamanho
               int     4 bytes
               float   4 bytes   
*/

#include <stdio.h>
#define TAM 20

int main()
{
    printf("====================================\n");
    printf("\tCalculo de Factorial\n");
    printf("====================================\n");

    int i;
    double factorial = 1.0;

    for (i = 1; i <= TAM ; i++){
        factorial *= i;
        printf("Factorial %d = %.2f\n", i, factorial);
    }

    return 0;
}