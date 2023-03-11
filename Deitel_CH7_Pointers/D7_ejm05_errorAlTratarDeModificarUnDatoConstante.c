/*
    Programa : D7_ejm03_errorAlTratarDeModificarUnDatoConstante.c
    Propósito: Mostrar el error que emite el compilador al intentar compilar una funcion que 
               recibe un apuntador no constante (ptrX) a un dato constante, e intenta 
               modificar el dato al que apunta ptrX.
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
               Ejm Deitel - Cap 7 - Ejm 7.12 - pg 244
    Fecha    : 23/09/2019
 */

#include <stdio.h>

void f(const int *ptrX);

int main()
{
    int y;
    
    f(&y);

    return 0;
}

void f(const int *ptrX)     // No se puede utilizar ptrX para modificar  
{                           // el valor de la variable a la cual apunta 
    *ptrX = 100;
}

