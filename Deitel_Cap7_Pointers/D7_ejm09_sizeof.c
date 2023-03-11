/*
    El operador sizeof es el operador más común en C. Es un operador unario 
    en tiempo de compilación (ou seja que NO implica sobrecarga alguna en 
    tiempo de ejecución) y se usa para calcular el tamanho en memoria de su
    operando, es decir, sizeof devuelve la cantidad de memoria asignada por 
    el sistema a su operando. 

    El operador sizeof se puede aplicar a cualquier tipo de dato, nombre 
    de variable o expresión.

    El número de BYTES que se utilizan para almacenar un tipo de dato en 
    particular puede variar entre sistemas. 
    
    Se utiliza paréntesis, sizeof(), si se pasa un TIPO de dato como operando.
    Si se proporciona un nombre de variable no se requieren paréntesis.

    Programa : D7_ejm09_sizeof.c
    Propósito: Mostrar el uso del operador sizeof para determinar el 
               tamanho en bytes de un arreglo (o de cualquier otro
               tipo de dato) durante la compilacion de un programa.  

               Ejm Deitel - Cap 7 - Ejm 7.16 - pg 250
    Fecha    : 24/09/2019
 */

#include <stdio.h>

size_t obtieneTamanio(float *ptr);

int main()
{
    float arreglo[20];

    printf("El numero de bytes en el arreglo es %d"
           "\nEl numero de bytes devueltos por obtieneTamanio es %d\n",
           sizeof(arreglo), obtieneTamanio(arreglo));

    return 0;
}

size_t obtieneTamanio(float *ptr)
{
    return sizeof(*ptr);
}