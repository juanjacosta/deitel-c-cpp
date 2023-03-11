/*
    Programa : D8_ejm05_conversionCadenaAEntero.c 
    Proposito: Utilizar la funcion de conversion de cadenas atoi() de la biblioteca 
               general de utilidades stdlib.h
               La funcion atoi() convierte su argumento, una cadena de digitos que  
               representa un numero entero, a un valor int. La funcion devuelve un valor 
               int. Si el valor convertido no puede representarse, por ejemplo, si el 
               primer caracter de la cadena no es un digito, el comportamiento de la 
               funcion atoi es indefinido. 
               Deitel Cap 8 - Ejemplo 8.7 - pg. 296   
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;              // variable para almacenar la cadena convertida 

    i = atoi("2593");

    printf("%s%d\n%s%d\n",
           "La cadena \"2593\" convertida a int es ", i, 
           "El valor convertido menos 593 es ", i - 593);

    return 0;
}