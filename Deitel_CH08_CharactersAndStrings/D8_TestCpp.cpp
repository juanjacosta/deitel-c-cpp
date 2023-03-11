#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Ingresa caracter: ";
    cin >> c;

    if(ispunct(c)){
        cout << c << " es un caracter de impresion" << endl;
    } else {
        cout << c  << " no es un caracter de impresion" << endl;
    }

    return 0;
}