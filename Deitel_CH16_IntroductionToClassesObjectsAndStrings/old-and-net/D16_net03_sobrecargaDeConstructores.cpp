#include <iostream>
#include <cstdlib>

using namespace std;

class Fecha{
    private:    // Atributos
        int dia, mes, anio; 

    public:     // Metodos
        Fecha(int, int, int);   // Constructor 1
        Fecha(long);            // Constructor 2
        void mostrarFecha();
};

// Constructor 1
Fecha::Fecha(int _dia, int _mes, int _anio) 
{
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

// Constructor 2
Fecha::Fecha(long fecha)
{
    anio = int(fecha/10000);                    // Extraer el anio
    mes = int((fecha - anio * 10000) / 100);    // Extraer el mes 
    dia = int(fecha - anio * 10000 - mes * 100);// Extraer el dia 
}

void Fecha::mostrarFecha()
{
    cout << "La fecha es ";
    if (dia < 10)
         cout << "0" << dia << "/";
    else
        cout << dia << "/";

    if (mes < 10)
        cout << "0" << mes << "/";
    else
        cout << mes << "/";

    cout << anio << endl;
}

int main()
{
    Fecha hoy(17, 1, 2020);
    Fecha ayer(20200116);

    hoy.mostrarFecha();
    ayer.mostrarFecha();

    return 0;
}