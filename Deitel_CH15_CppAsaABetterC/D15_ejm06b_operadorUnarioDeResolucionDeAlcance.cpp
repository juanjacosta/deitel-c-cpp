/*
 Programa : ejm_06_operadorUnarioDeResolucionDeAlcance.cpp
 Proposito: Mostrar el uso del operador unario de resolución de alcance
 */

#include <iostream>

using std::cout;
using std::endl;
using std::ios;

#include <iomanip>

using std::setprecision;
using std::setiosflags;
using std::setw;

const double PI = 3.141592265358979;

int main()
{
  const float PI = static_cast < float > ( ::PI ); // se crea una copia temporal en punto flotante de ::PI

  cout << "====================================================" << endl;
  cout << "Operador Unario de resolucion de alcance" << endl;
  cout << "====================================================" << endl;
  
  cout << setprecision(20)                                    // Aqui se indica que la constante PI  
       << "Valor local float de PI   = " << PI                // de tipo float va a imprimirse con  
       << "\nValor global double de PI = " << ::PI << endl;   // 20 digitos de precision

  cout << setw(28) << "Valor float local de PI = "    // setw(28) hace  que el valor de salida se imprima 
       << setiosflags( ios::fixed | ios::showpoint )  // en un ancho de campo de 28 posiciones. Los argumentos 
       << setprecision(10) << PI << endl;             // de setiosflag indican que la constante PI se imprima
                                                      // como un valor de punto fijo con un punto decimal y
                                                      // setprecision(10) hace que se imprima con 10 digitos
  cout << "=========================="                // de precision
          "==========================" << endl;

  return 0;
}
/*
 Cuando se utiliza setprecision, el valor impreso se redondea para indicar el numero de posiciones
 decimales, aunque el valor en memoria permanece intacto.
 
 El manipulador de flujo setiosflag(ios::fixed | ios::showpoint) establece dos opciones de formato
 de salida. 
 
 La opcion ios::fixed ocasiona que se despliegue un valor de punto flotante en formato
 de punto fijo (lo contrario a la notacion cientifica). 
 
 La opcion ios::showpoint fuerza al punto decimal y a los ceros restantes a la derecha del punto 
 decimal a que se impriman.
 */
