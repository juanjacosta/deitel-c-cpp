/*
    Programa : D7_ejm06_intentoDeModificarUnApuntadorCteADatoNoCte.c
    Propósito: Mostrar el error que emite el compilador al intentar modificar la direccion 
               de memoria a la que apunta ptr, el cual es un apuntador constante a un dato 
               no constante, es decir, un apuntador que siempre apunta a la misma ubicacion 
               de memoria, y el dato en esa ubicacion puede modificarse a traves del 
               apuntador.  

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
    int x;
    int y;

    int *const ptr = &x;    // ptr es un apuntador constante a un entero que se puede modificar
                            // a traves de ptr, pero ptr siempre apunta a la misma ubicacion 
                            // de memoria.
                            
    *ptr = 7;       // permitido: *ptr no es const
    // ptr = &y;       // error: ptr es const; no se puede asignar una nueva direccion 

    printf("ptr = %d\n", *ptr);
    printf("ptr = %p\n", ptr);

    return 0;       
}