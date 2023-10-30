#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setprecision;
using std::setiosflags;
using std::ios;

#include "D16_ejm05_vendedor.h"

Vendedor::Vendedor()                // La funcion constructor inicializa el arreglo
{
    for (int i = 0; i < 12; i++){
        ventas[i] = 0.0;
    }
}

void Vendedor::obtieneVentasDelUsario()       // Funcion para obtener 12 cifras de ventas del usuario 
{                                   // desde el teclado
    double montoVentas;

    for (int i = 1; i <= 12; i++){
        cout << "Introduce el monto de las ventas de un mes " << i << ": ";
        cin >> montoVentas;
        estableceVentas(i, montoVentas);
    }
}

void Vendedor::estableceVentas(int mes, double monto)    // Funcion para establecer una de 12 cifras 
{                                                   // de ventas mensuales. Observe que el valor 
    if (mes >= 1 && mes <= 12 && monto > 0)         // del mes debe ser de 0 a 11 
        ventas[mes -1] = monto;
    else
        cout << "Mes o monto de ventas no valido" << endl;
}

void Vendedor::imprimeVentasAnuales()               // Imprime el total de las ventas anuales 
{
    cout << setprecision(2)
         << setiosflags( ios::fixed | ios::showpoint)
         << "\nEl total de las ventas anuales es: $"
         << totalVentasAnuales() << endl;
}

double Vendedor::totalVentasAnuales()
{
    double total = 0.0;

    for (int i = 0; i < 12; i++)
        total += ventas[i];
    
    return total;
}