#include <iostream>
#include <cstdlib>

using namespace std;

class Punto{
    private:    // Atributos
        int x, y;

    public:     // Metodos
        Punto();    // Constructor
        void setPunto(int, int);
        int getPuntoX();
        int getPuntoY();

};

Punto::Punto()
{

}

// Establecemos valores a los atributos
void Punto::setPunto(int _x, int _y)
{
    x = _x;
    y = _y;
}

int Punto::getPuntoX()
{
    return x;
}
int Punto::getPuntoY()
{
    return y;
}

int main()
{
    Punto p1;

    p1.setPunto(15, 10);

    cout << p1.getPuntoX() << endl;
    cout << p1.getPuntoY() << endl;    

    return 0;
}