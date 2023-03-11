/*
    Programa : D7_ejm03_apuntadorNoConstanteADatoConstante.c
    Propósito: Escribir un programa que muestre como modificar un apuntador no constante a un 
               dato constante, con un programa que imprime una cadena, caracter por caracter.
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
               Ejm Deitel - Cap 7 - Ejm 7.11 - pg 243
    Fecha    : 23/09/2019
 */

#include <stdio.h>

void imprimeCaracteres(const char *ptrS);

int main()
{
    char cadena[] = "imprime los caracteres de una cadena";

    printf("La cadena es: \n");
    imprimeCaracteres(cadena);
    printf("\n");

    return 0;
}

void imprimeCaracteres(const char *ptrS)
{
    for (; *ptrS != '\0'; ptrS++){
        printf("%c", *ptrS);
    }
}