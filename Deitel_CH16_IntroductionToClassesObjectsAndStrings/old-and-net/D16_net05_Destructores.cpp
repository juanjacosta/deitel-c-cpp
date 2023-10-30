#include <iostream>
#include <cstdlib>

using namespace std;

class Perro{
    private:
        string nombre, raza;

    public:
        Perro(string, string);  // Constructor
        ~Perro();               // Destructor
        void mostrarDatos();
        void jugar();
};

// Constructor
Perro::Perro(string _nombre, string _raza)
{
    nombre = _nombre;
    raza = _raza;
}

// Destructor
Perro::~Perro()
{

}

void Perro::mostrarDatos()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Raza: " << raza << endl;
}

void Perro::jugar()
{
    cout << "El perro " << nombre << " esta jugando" << endl;
}

int main()
{
    Perro p1("Bok", "Pitbull");

    p1. mostrarDatos();
    p1.jugar();
    p1.~Perro();        // Destruyendo el objeto

    return 0;
}