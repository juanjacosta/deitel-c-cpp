/*
    Definiciones de las funciones miembro de la clase Hora
*/

#include <iostream>

using std::cout;

#include "D16_ejm03_hora.h"

Hora::Hora()                        // El constructor hora inicializa en cero a cada
{                                   // dato miembro. Garantiza que todos los objetos 
    hora = minuto = segundo = 0;    // de Hora inician en un estado consistente
}


void Hora::estableceHora(int h, int m, int s)   // definicion de la función establece hora
{                                               // esta establece un nuevo valor de Hora 
  hora = (h >= 0 && h < 24) ? h : 0;            // por medio de la hora militar. Realiza
  minuto = (m >= 0 && m <= 60) ? m : 0;         // verificaciones de validacion de los 
  segundo = (s >= 0 && s < 60) ? s : 0;         // valores de los datos. Establece en cero
}                                               // a los valores invalidos

void Hora::imprimeMilitar()                     // definción de la función imprimeMilitar
{
  cout << (hora < 10 ? "0" : "") << hora << ":"
       << (minuto < 10 ? "0" : "") << minuto;
}

void Hora::imprimeEstandar()                    // definicion de la funcion imprimeEstandar
{
  cout << ((hora == 0 || hora == 12) ? 12 : hora % 12)
       << ":" << (minuto < 10 ? "0" : "") << minuto
       << ":" << (segundo < 10 ? "0" : "") << segundo
       << (hora < 12 ? " AM" : " PM");
}