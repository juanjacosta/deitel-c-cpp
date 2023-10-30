/*
 Programa : D16_ejm01_claseHoraOperadorCondicionalTernario.cpp
 Proposito: Mostrar la definicion de una clase, sus metodos, constructor e instancia de 
            objetos de la clase
 Fecha    : 19/08/2019 
 */

#include <iostream>

using std::cout;
using std::endl;

class Hora                                //definición de la clase Hora
{
  public:
    Hora();                               // Constructor
    void estableceHora(int, int, int);    //Establece hora, minuto, segundo
    void imprimeMilitar();                // imprime hora en formato militar
    void imprimeEstandar();               // imprime hora en formato estándar

  private:
    int hora;       // 0 - 23
    int minuto;     // 0 - 59
    int segundo;    // 0 - 59
};                                        // fin de la clase hora

Hora::Hora()                              // El constructor Hora inicializa en cero
{                                         // a cada dato miembro. Garantiza que todos
  hora = minuto = segundo = 0;            // los objetos de Hora inicien en un estado
}                                         // consistente

void Hora::estableceHora(int h, int m, int s)   // definicion de la función establece hora
{
  hora = (h >= 0 && h < 24) ? h : 0;
  minuto = (m >= 0 && m <= 60) ? m : 0;
  segundo = (s >= 0 && s < 60) ? s : 0;
}

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

int main()
{
  Hora h;           // Instancia el objeto de la clase Hora
  
  cout << "=============================================================" << endl;
  cout << "La hora militar inicial es : ";
  h.imprimeMilitar();
  cout << "\nLa hora estandar inicial es: ";
  h.imprimeEstandar();

  h.estableceHora(13, 27, 6);
  cout << "\n\nLa hora militar despues de establece hora es: ";
  h.imprimeMilitar();
  cout << "\nLa hora estandar despues de establece hora es: "; 
  h.imprimeEstandar();

  h.estableceHora(99, 99, 99);                  // intenta establecer valores inválidos
  cout << "\n\nDespues de intentar establecer valores invalidos: "
       << "\nHora militar: ";
  h.imprimeMilitar();
  cout << "\nHora estandar: ";
  h.imprimeEstandar();
  cout << endl;

  cout << "\n=============================================================" << endl;

  return 0;
}

