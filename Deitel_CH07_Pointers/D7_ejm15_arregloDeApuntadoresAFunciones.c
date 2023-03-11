/*
    Programa : D7_ejm15_arregloDeApuntadoresAFunciones.c
    Proposito: Mostrar el uso de apuntadores a funciones mediante un Programa
               que crea un arreglo de apuntadores, el cual lo inicializa con los 
               nombres de 3 funciones, las cuales define  de manera generica,
               funcion1, funcion2 y funcion3, las cuales toman un argumento
               entero y no devuelven valor alguno. El programa solicita al 
               usuario que ingrese un valor entero entre 0 y 2, el cual se 
               utiliza como subindice del arreglo de apuntadores a funciones.


               Ejm Deitel - Cap 7 - Ejm 7.28 - pg 267
    Fecha    : 24/09/2019
 */

#include <stdio.h>

void funcion1(int a);
void funcion2(int b);
void funcion3(int c);

int main()
{
    /* Inicializa el arreglo de 3 apuntadores con funciones que toman un 
       argumento entero y devuelven void */
    
    void(*f[3])(int) = {funcion1, funcion2, funcion3};

    int eleccion;   // variable para almacenar la eleccion del usuario 

    printf("Introduzca un numero entre 0 y 2, 3 para terminar: ");
    scanf("%d", &eleccion);

    while (eleccion >= 0 && eleccion < 3){
        /* Invoca a la funcion en la ubicacion de la eleccion en el arreglo f,
        y pasa la eleccion como argumento*/
        (*f[eleccion])(eleccion);
        printf("Introduzca un numero entre 0 y 2, 3 para terminar: ");
        scanf("%d", &eleccion);
    }
    printf("Termina la ejecucion del programa\n");

    return 0;
}

void funcion1(int a)
{
    printf("Usted introdujo %d de manera que invoco a la funcion1\n\n", a);
}

void funcion2(int b)
{
    printf("Usted introdujo %d de manera que invoco a la funcion2\n\n", b);
}

void funcion3(int c)
{
    printf("Usted introdujo %d de manera que invoco a la funcion2\n\n", c);
}