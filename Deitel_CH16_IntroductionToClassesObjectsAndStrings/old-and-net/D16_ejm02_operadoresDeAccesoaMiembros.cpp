/*
 Programa : D16_ejm02_operadoresDeAccesoaMiembros.cpp
 Proposito: Mostrar el acceso a los miembros de una clase mediante los operadores de 
            seleccion de miembros. En este ejemplo el dato miembro x se declara como 
            public solamente para mostrar la forma en que se accede a los miembros public 
            sin manipuladores (es decir, un nombre, una referencia o un apuntador)
 Fecha    : 27/08/2019 
 PRECAUCION: SE CONSIDERA UNA MALA PRACTICA DE PROGRAMACION USAR DATOS PUBLIC!!
 */
#include <iostream>

using std::cout;
using std::endl;

class Cuenta{
    public:
        int x;
        void imprime() {cout << x << endl;}
};

int main()
{
    Cuenta contador,                    // crea el objeto contador
           *ptrContador = &contador,    // apuntador hacia apuntador
           &refContador = contador;     // referencia hacia contador
    
    cout << "Asigna 7 a x e lo imprime utilizando el nombre del objeto: ";
    contador.x = 7;                     // asigna 7 al dato miembro x
    contador.imprime();                 // llama a la funcion miembro imprime


    cout << "Asigna 8 a x e lo imprime utilizando una referencia: ";
    refContador.x = 8;                   // asigna 8 al dato miembro x
    refContador.imprime();               // llama a la funcion miembro imprime


    cout << "Asigna 10 a x e lo imprime utilizando un apuntador: ";
    ptrContador->x = 10;                 // asigna 10 al dato miembro x
    ptrContador->imprime();                  // llama a la funcion miembro imprime

    return 0;
}