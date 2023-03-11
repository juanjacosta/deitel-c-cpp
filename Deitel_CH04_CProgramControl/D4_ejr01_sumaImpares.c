/*
    Programa : D4_ejr01_sumaImpares.c
    Proposito: Escriba una instruccion o conjunto de instrucciones para realizar 
               las siguientes tareas:
               a) Sume los enteros impares entre 1 y 99, utilizando una instruccion for. 
                  Suponga que las variables enteras suma y cuenta ya fueron declaradas.
                b) Imprima el valor 333.546372 en un ancho de campo de 15 caracteres con 
                   precisiones de 1, 2, 3, 4 y 5. Justifique hacia la izquierda la salida.
                   Cuales son los valores que despliega?
                c) Calcule el valor de 2.5 elevado a la tercera potencia, utilizando la 
                   funcion pow(). Imprima el resultado con una precision de 2, en un ancho
                   de campo de 10 posiciones. Cual es el valor que despliega? 15.62
                d) Imprima los enteros del 1 al 20 utilizando un ciclo while y la variable 
                   contador x. Suponga que la variable x ya fue declarada pero no inicializada.
                   Imprima solo 5 enteros por linea.
                e) Repita el item (d) utilizando una instruccion for 
                Ejercicio 4.3 - Deitel pg. 118
    Fecha    : 29/08/2019 
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int suma = 0, cuenta, x, y;
    double valor = 333.546372;
    float  c = 2.5;

    printf("======================================================================\n");
    printf("\ta) Suma de Enteros Impares\n");
    printf("======================================================================\n");

    for (cuenta = 1; cuenta <= 99; cuenta += 2){
        suma += cuenta;
        if (cuenta < 99){
            printf("%d + ", cuenta);

            if (cuenta % 5 == 0)
                printf("\n");
        } else {
            printf("%d = %d\n", cuenta, suma);
        }
    }
    printf("Suma: %d\n", suma);

    printf("======================================================================\n");
    printf("\tb) Imprime 333.546372 con diferentes precisiones y justificado\n");
    printf("======================================================================\n");

    printf("%-15.1f%30s\n", valor, "Precision de 1");
    printf("%-15.2f%30s\n", valor, "Precision de 2");
    printf("%-15.3f%30s\n", valor, "Precision de 3");
    printf("%-15.4f%30s\n", valor, "Precision de 4");
    printf("%-15.5f%30s\n", valor, "Precision de 5");

    printf("======================================================================\n");
    printf("\tc) Calcule el valor de 2.5 elevado a la tercera potencia\n");
    printf("======================================================================\n");

    printf("%10.2f\n", pow(c, 3));

    printf("======================================================================\n");
    printf("\td) Imprime numeros 1 a 20 ciclo while\n");
    printf("======================================================================\n");

    x = 0;
    while(++x <= 20){
        printf("%d", x);

        if (x % 5 == 0)
            printf("\n");
        else
            printf("\t");
        //x++;    
    }

    printf("======================================================================\n");
    printf("\te) Imprime numeros 1 a 20 ciclo for\n");
    printf("======================================================================\n");

    for (y = 1; y <= 20; y++){
        printf("%d", y);

        if (y % 5 == 0)
            printf("\n");
        else 
            printf("\t");
    }

    return 0;
}