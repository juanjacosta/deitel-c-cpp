/*
 Programa : D16_ejm04_erroAlAccederAmiembrosPrivadosDeLaClase.cpp
 Proposito: Mostrar que los miembros privados de la clase solo son accesibles a traves
            de la interfaz de la clase publica por medio de las funciones miembro publicas.
            Cuando el Programa se compila genera dos errores que establecen que el miembro 
            privado especificado en cada instruccion no esta accesible. En este archivo se
            incluye "D16_ejm03_hora.h" y se compila con "D16_ejm03_hora.cpp" del ejemplo 
            anterior
 Fecha    : 27/08/2019

 Ejecutar con :
 
 g++ D16_ejm04_errorAlAccederaMiembrosPrivadosDeLaClase.cpp D16_ejm03_hora.cpp  -o D16_ejm04_errorAlAccederaMiembrosPrivadosDeLaClase 
 */
#include <iostream>

using std::cout;

#include "D16_ejm03_hora.h"

int main()
{
    Hora h;

    h.hora = 7;     // Error 'Hora::hora' no esta accesible

    cout << "minuto = " << h.minuto;    // Error: 'Hora::minuto' no esta accesible 

    return 0;
}