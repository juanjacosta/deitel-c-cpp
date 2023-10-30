/*
    Ejercicio 3: Realice un programa en C++, de tal
    manera que se construya una solución para la 
    jerarquia (herencia) de clases mostrada en la 
    siguiente figura.

                Persona
                /    \
              /        \
        Empleado    Estudiante
                        |
                    Universitario
*/

#include <iostream>
#include <cstdlib>

using namespace std;

class Persona{
    private:    // Atributos
        string nombre;
        int edad;
    public:     // Metodos
        Persona(string, int);   // constructor superclase
        void mostrarPersona();
};


class Empleado : public Persona{
    private:    // Atributos 
        string cargo;
        float salario;

    public:     // Metodos
        Empleado(string, int, string, float);   // Constructor clase heredada
        void mostrarEmpleado();
};

class Estudiante : public Persona{
    private:    // Atributos
        int codigo;
        float nota;

    public:
        Estudiante(string, int, int, float);
        void mostrarEstudiante();
};

class Universitario : public Estudiante{
    private:    // Atributos 
        string universidad;
        string facultad;

    public:     // Metodos
        Universitario(string, int, int, float, string, string); // Constructor clase heredada 
        void mostrarUniversitario();
};

// Constructor superclase Persona
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

// Constructor clase heredada Empleado
Empleado::Empleado(string _nombre, int _edad, string _cargo, float _salario) : Persona(_nombre, _edad)
{
    cargo = _cargo;
    salario = _salario;
}

// Constructor clase heredada Estudiante
Estudiante::Estudiante(string _nombre, int _edad, int _codigo, float _nota) : Persona(_nombre, _edad)
{
    codigo = _codigo;
    nota = _nota;
}

// Constructor clase heredada Universitario
Universitario::Universitario(string _nombre, int _edad, int _codigo, float _nota, string _universidad, string _facultad) : Estudiante(_nombre, _edad, _codigo, _nota)
{
    universidad = _universidad;
    facultad = _facultad;
}

// Metodo publico Superclase
void Persona::mostrarPersona()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

// Metodo publico clase heredada
void Empleado::mostrarEmpleado()
{
    mostrarPersona();
    cout << "Cargo: " << cargo << endl;
    cout << "Salario: " << salario << endl;
}

// metodo publico clase heredada Estudiante
void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    cout << "Codigo: " << codigo << endl;
    cout << "Nota: " << nota << endl;
}

// metodo publico clase heredada Universitario
void Universitario::mostrarUniversitario()
{
    mostrarEstudiante();
    cout << "Universidad: " << universidad << endl;
    cout << "Facultad: " << facultad << endl;
}

int main()
{
    Persona p1("Maria", 6);
    Empleado e1("Juan", 35, "CEO", 12500);
    Estudiante s1("Sandra", 34, 2020113456, 10.0);
    Universitario u1("Antonia", 18, 2032012345, 10.0, "PUC Rio", "Engenharia Eletrica");

    cout << "Objeto de clase Persona" << endl;
    p1.mostrarPersona();
    cout << "\n";

    cout << "Objeto de clase Empleado" << endl;
    e1.mostrarEmpleado();
    cout << "\n";

    cout << "Objeto de clase Estudiante" << endl;
    s1.mostrarEstudiante();
    cout << "\n";

    cout << "Objeto de clase Universitario" << endl;
    u1.mostrarUniversitario();
    cout << "\n";

    return 0;
}