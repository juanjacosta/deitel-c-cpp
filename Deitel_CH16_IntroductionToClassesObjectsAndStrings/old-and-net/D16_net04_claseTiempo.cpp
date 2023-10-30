/*
    Ejercicio 2: Construya una clase Tiempo que contenga los siguientes atributos: horas,
    minutos y segundos. Haga que la clase contenga 2 constructores, el primero debe tener 
    3 parametros Tiempo(int, int, int) y el segundo solo tendra un campo que seran los 
    segundos  desensamble el numero entero largo en horas, minutos y segundos. 
*/

#include <iostream>
#include <cstdio>

using namespace std;

class Tiempo{
    private:
        int horas, minutos, segundos;

    public:
        Tiempo(int, int, int);      // Constructor 1
        Tiempo(int);               // Constructor 2
        void imprimeHora();
};

// Constructor 1
Tiempo::Tiempo(int h, int m, int s)
{
    horas = h;
    minutos = m;
    segundos = s;
}

// Constructor 2
Tiempo::Tiempo(int t)
{
    horas = t / 3600;   // Extraer horas 
    t %= 3600;
    minutos = t / 60;   // Extraer minutos 
    segundos = t % 60;  // Extraer segundos 
}

void Tiempo::imprimeHora()
{
    cout << "La hora es " << horas << ":" << minutos << ":" << segundos << endl;
}

int main()
{
    Tiempo h1(12, 28, 50);
    Tiempo h2(55500);

    h1.imprimeHora();
    h2.imprimeHora();


    return 0;
}