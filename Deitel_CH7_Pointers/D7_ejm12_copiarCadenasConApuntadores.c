/*
    Programa : D7_ejm12_copiarCadenasConApuntadores.c
    Propósito: Escribir un programa que muestre el uso de la notacion de arreglos 
               con apuntadores mediante dos funciones que copian uno a uno los 
               elementos de un arreglo en otro.

               Ejm Deitel - Cap 7 - Ejm 7.20 - pg 255
    Fecha    : 24/09/2019
 */

#include <stdio.h>

void copia1(char *s1, const char *s2);  // prototipo 
void copia2(char *s1, const char *s2);  // prototipo 


int main()
{
    char cadena1[10];           // crea el arreglo cadena1 
    char *cadena2 = "Hola";     // crea un apuntador a una cadena 
    char cadena3[10];           // crea el arreglo cadena3 
    char cadena4[] = "Adios";   // crea un apuntador a una cadena 

    copia1(cadena1, cadena2);
    printf("cadena1 = %s\n", cadena1);

    copia2(cadena3, cadena4);
    printf("cadena3 = %s\n", cadena3);

    return 0;
}

void copia1(char *s1, const char *s2)
{
    int i;                                          // copia s2 en s1 con el uso 
                                                    // de la notacion de arreglos 
    for (i = 0; (s1[i] = s2[i]) != '\0'; i++){
        ;                                           // No realiza tarea alguna en el cuerpo 
    }
}

void copia2(char *s1, const char *s2)               // copia s2 en s1 con el uso de la 
{                                                   // notacion de apuntadores 
    for (; (*s1 = *s2) != '\0'; s1++, s2++){
        ;                                           // No realiza tarea alguna en el cuerpo 
    }
}