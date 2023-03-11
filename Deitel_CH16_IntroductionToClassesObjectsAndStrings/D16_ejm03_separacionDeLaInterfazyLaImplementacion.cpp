/*
 Programa : D16_ejm03_separacionDeLaInterfazyLaImplementacion.cpp
 Proposito: Mostrar uno de los principios fundamentales de la buena ingenieria de software
            que es separar la interfaz de la implementacion. Este programa consiste en 
            escribir 3 archivos fuente, el archivo de encabezado D16_ejm03_hora.h, en el 
            que se define la clase Hora, el archivo fuente D16_ejm03_hora.cpp, en el que 
            se definen las funciones miembro de la clase Hora y el codigo fuente 
            D16_ejm03_separacionDeLaInterfazyLaImplementacion.cpp en el que se define la 
            funcion main.
Fecha     : 27/08/2019

Ejecutar con: 

g++ D16_ejm03_separacionDeLaInterfazyLaImplementacion.cpp D16_ejm03_hora.cpp  -o D16_ejm03_separacionDeLaInterfazyLaImplementacion 
 */
#include <iostream>

using std::cout;
using std::endl;

#include "D16_ejm03_hora.h"

int main()
{
    Hora h;                             // instancia del objeto h de la clase hora

    cout << "La hora militar inicial es ";
    h.imprimeMilitar();
    cout <<  "\nLa hora estandar inicial es ";
    h.imprimeEstandar();

    h.estableceHora(13, 27, 6);
    cout << "\n\nLa hora militar despues de estableceHora es ";
    h.imprimeMilitar();
    cout << "\nLa hora estandar despues de estableceHora es ";
    h.imprimeEstandar();
    
    h.estableceHora(99, 99, 99);        // intenta establecer valores invalidos
    cout << "\n\nDespues de intentar establecer valores invalidos: "
         << "\nHora militar: ";
    h.imprimeMilitar();
    cout << "\nHora estandar: ";
    h.imprimeEstandar();
    cout << endl << endl;

    return 0;
}