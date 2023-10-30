#include <iostream>
#include <cstdlib>

using namespace std;

class Persona{
    private:    // Atributos
        string nombre;
        int edad;

    public:     // metodos
        Persona(string, int);   // Constructor
        void mostrarPersona();
};

class Alumno : public Persona{
    private:     // Atributos
        string codigoAlumno;
        float notaFinal;
    public:     // metodos  
        Alumno(string, int, string, float);     // Contructor de la clase Alumno
        void mostrarAlumno();
};


// Constructor de la clase Persona (Superclase)
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

// Constructor de la clase Alumno (clase heredada)
Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad)
{
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

void Persona::mostrarPersona()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}


void Alumno::mostrarAlumno()
{
    mostrarPersona();
    cout << "Codigo Alumno: " << codigoAlumno << endl;
    cout << "Nota Final: " << notaFinal << endl;
 }

int main()
{
    Alumno a1("Juan", 35, "1234", 4.8);
    a1.mostrarAlumno(); 

    return 0;
}