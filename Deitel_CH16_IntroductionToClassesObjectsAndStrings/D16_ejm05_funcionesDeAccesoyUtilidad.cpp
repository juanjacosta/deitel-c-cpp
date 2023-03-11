/*
 Programa : D16_ejm05_funcionesDeAccesoyUtilidad.cpp
 Proposito: Mostrar la idea de una funcion de utilidad (tambien llamada funcion de ayuda).
            La cual es una funcion que no es parte de una interfaz publica de la clase, en 
            vez de ello, es una funcion miembro privada que permite la operacion de las 
            funciones miembro publicas de la clase. La idea de las funciones de utilidad
            no es que las utilicen los clientes de una clase 
Fecha     : 27/08/2019

Ejecutar con: 

g++ D16_ejm05_funcionesDeAccesoyUtilidad.cpp D16_ejm05_vendedor.cpp -o D16_ejm05_funcionesDeAccesoyUtilidad
 */
#include "D16_ejm05_vendedor.h"

int main()
{
    Vendedor v;                     // crea el objeto v de Vendedor

    v.obtieneVentasDelUsario();     // observe el codigo secuencial simple
    v.imprimeVentasAnuales();       // no hay estructuras de control en main 

    return 0;
}