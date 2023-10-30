#include <iostream>
#include <cstdlib>

using namespace std;

class Animal{
      int edad;

   public:
      Animal(int);
      virtual void comer();
};

class Humano : public Animal{
   private:
      string nombre;

   public:
      Humano(int, string);
      void comer();
};

class Perro : public Animal{
   private:
      string nombre, raza;
   
   public:
      Perro(int, string, string);
      void comer();
};

Animal::Animal(int _edad)
{
   edad = _edad;
}

Humano::Humano(int _edad, string _nombre) : Animal(_edad)
{
   nombre = _nombre;
}

Perro::Perro(int _edad, string _nombre, string _raza) : Animal(_edad)
{
   nombre = _nombre;
   raza = _raza;
}

void Animal::comer()
{
   cout << "yo como ";
}

void Humano::comer()
{
   cout << "Soy un humano y ";
   Animal::comer(); 
   cout << "en una mesa, sentado en una silla" << endl; 
}

void Perro::comer()
{
   cout << "Soy un perro y ";
   Animal::comer(); 
   cout << "en el suelo, con mi plato" << endl;
}

int main() 
{
   Animal *animales[2];
   animales[0] = new Perro(5, "Bok", "PitBull");
   animales[1] = new Humano(18, "Juan");

   animales[0]->comer();
   animales[1]->comer();

   return 0;
}