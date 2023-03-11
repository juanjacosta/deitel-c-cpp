/*
    Programa : D7_ejm07_intetoDeModificarUnApuntadorCteADataCte.c
    Propósito: Mostrar el menor privilegio de acceso que lo tiene un apuntador constante 
               a un dato constante. Este apuntador apunta a la misma dirección de memoria,
               y no se puede modificar el dato en dicha ubicacion de memoria. Esta es la 
               manera como se debe pasar un arreglo a una funcion que solo ve el arreglo 
               mediante la notacion de subindices de arreglos y que no lo modifica.  

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
               Ejm Deitel - Cap 7 - Ejm 7.13 - pg 246
    Fecha    : 23/09/2019
 */

#include <stdio.h>

int main()
{
    int x = 5;
    int y;

    const int *const ptr = &x;  // ptr es un apuntador constante a un entero constante, ptr 
                                // siempre apunta a la misma ubicacion; el entero en esa 
                                // ubicacion no se puede modificar. 
    
    *ptr = 7;   // error: *ptr es const; no se puede asignar un nuevo valor 
    ptr = &y;   // error: ptr es const; no se puede asignar una nueva direccion 

    return 0;
}