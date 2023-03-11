/*
    Programa : D7_ejm03_apuntadorNoConstanteADatoNoConstante.c
    Propósito: Escribir un programa que muestre el nivel mas alto de acceso a datos, que 
               es un apuntador no constante a un dato no constante, con un programa que 
               convierta una cadena a mayusculas.
               Existen seis posibilidades de utilizar (o no) const con parametros de 
               funciones: dos mediante el paso de parametros por valor y cuatro mediante
               el paso de parametros por referencia. Para elegir una de las seis posibilidades
               el principio del menor privilegio debe er la guia.
               Entre las cuatro posibilidades de const para el paso de parametros por 
               referencia o apuntadores se tiene: un apuntdor no constante a un dato no
               constante; un apuntador constante a un dato no constante; un apuntador no 
               constante a un dato constante, y un apuntador constante a un dato constante.
               Cada una de las cuatro combinaciones proporciona diferentes privilegios de 
               acceso. 
               Ejm Deitel - Cap 7 - Ejm 7.10 - pg 242
    Fecha    : 23/09/2019
 */

#include <stdio.h>
#include <ctype.h>

void convierteAMayusculas(char *ptrS);

int main()
{
    char cadena[] = "caracteres y $32.98";
    printf("la cadena antes de la conversion es: %s\n", cadena);

    convierteAMayusculas(cadena);

    printf("La cadena despues de la conversion es: %s\n", cadena);

    return 0;
}

void convierteAMayusculas(char *ptrS)
{
    while( *ptrS != '\0'){
        if (islower(*ptrS)){
            *ptrS = toupper(*ptrS);
        }
        ++ptrS;
    }
}