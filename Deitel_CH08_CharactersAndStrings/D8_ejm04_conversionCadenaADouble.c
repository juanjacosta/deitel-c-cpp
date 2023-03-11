/*
    Programa : D8_ejm04_conversionCadenaADouble.c 
    Proposito: Utilizar la funcion de conversion de cadenas atof() de la biblioteca 
               general de utilidades stdlib.h
               La funcion atof() convierte su argumento, una cadena que representa un 
               numero de punto flotante, a un valor double. La funcion devuelve un valor 
               double. Si el valor convertido no puede representarse, por ejemplo, si el 
               primer caracter de la cadena no es un digito, el comportamiento de la 
               funcion atof es indefinido. 
               Deitel Cap 8 - Ejemplo 8.6 - pg. 295   
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;           // variable para almacenar la cadena convertida 

    d = atof("99.0");

    printf("%s%.3f\n%s%.3f\n",
           "La cadena \"99.0\" convertida a double es ", d,
           "El valor convertido dividido entre 2 es ", d / 2);

    return 0;
}