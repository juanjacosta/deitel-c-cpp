/*
    Programa : D4_ejr4-10_promedioDeEnteros.c
    Proposito: Escriba un programa que calcule e imprima el promedio 
               de varios enteros. Suponga que el último valor que lee 
               la instrucción scanf es el centinela 999. Una secuencia
               de entrada típica podria ser
               10    8     11     7     9       9999

               ALGORITMO:
               CIMA: Calcular e imprimir el promedio de un número indefinido
                     de enteros ingresados por el usuario.

                MEJORAMIENTO

                Definir Variables
                    variable que recibira los valores enteros 
                    contador 
                    variable que sumara los valores ingresados 
                    variable que recibirá el cálculo del promedio 

                Inicializar Variables
                    Inicializar contador en 0
                    Inicializar variable suma en 0
                Ingresar valores enteros 

                Mientras no se ingrese el valor centinela 
                    Calcular el promedio de los valores ingresados: es
                    decir, sumar el valor ingresado y dividirlo entre el   
                    # de valores que se hayan ingresado hasta ese momento

                    Ingresar valor entero 
                    Salir del ciclo cuando se ingresa el valor centinela 
                Imprimir el promedio de los valores ingresados 
*/

#include <stdio.h>

int main()
{
    int num, cont, suma;
    float prom;

    cont = suma = 0;
    
    printf("Ingrese valores enteros: ");
    scanf("%d", &num);

    while ( num != 9999)
    {
        cont += 1;
        suma += num;
        prom = suma / cont;

        printf("Ingrese valores enteros: ");
        scanf("%d", &num);
    }

    printf("Promedio: %.2f\n", prom);

    return 0;
}