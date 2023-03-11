/*
    Programa : D8_ejm06_conversionCadenaALong.c 
    Proposito: Utilizar la funcion de conversion de cadenas atol() de la biblioteca 
               general de utilidades stdlib.h
               La funcion atol() convierte su argumento, una cadena de digitos que  
               representa un entero largo, a un valor long. La funcion devuelve un valor 
               long. Si el valor convertido no puede representarse, por ejemplo, si el 
               primer caracter de la cadena no es un digito, el comportamiento de la 
               funcion atoi es indefinido. 
               Deitel Cap 8 - Ejemplo 8.8 - pg. 296   
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long l;              // variable para almacenar la cadena convertida 

    l = atol("1000000");

    printf("%s%d\n%s%d\n",
           "La cadena \"1000000\" convertida a long es ", l, 
           "El valor convertido, dividido entre 2 es  ", l / 2);

    return 0;
}