#include <iostream>
#include <cstdlib>

using namespace std;

class Persona{
    private:            // Atributos
        int edad;
        string nombre;
    
    public:             // metodos
        Persona(int, string);   // Constructor      
        void leer();
        void correr();
};

// Constructor, sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer()
{
    cout << "Soy " << nombre << " y estoy leyendo un libro" << endl;
}

void Persona::correr()
{
    cout << "Soy " << nombre << " y estoy corriendo una maraton y tengo " << edad << " anios" << endl;
}

int main()
{
    Persona p1 = Persona(20, "Juan");
    Persona p2(6, "Maria");
    Persona p3(34, "Sandra");

    p1.leer();
    p2.correr();
    p3.leer();
    p3.correr();

    return 0;
}