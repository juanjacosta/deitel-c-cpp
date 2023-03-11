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
    
    Programa : D7_ejm10_sizeofDeCadaTipoDeDato.c
    Propósito: Calcular el numero de bytes que se utilizan para almacenar cada uno 
               de los tipos de datos estandares. Los resultados pueden variar entre 
               computadoras. 

               Ejm Deitel - Cap 7 - Ejm 7.17 - pg 251
    Fecha    : 24/09/2019
 */
#include <stdio.h>

int main()
{
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    int arreglo[20];        // crea arreglo de 20 elementos int 
    int *ptr = arreglo;     // crea apuntador al arreglo 

    printf("    sizeof c = %d\tsizeof(char)  = %d\n "
           "   sizeof s = %d\tsizeof(short) = %d\n"
           "    sizeof i = %d\tsizeof(int)   = %d\n"
           "    sizeof l = %d\tsizeof(long)  = %d\n"
           "    sizeof f = %d\tsizeof(float) = %d\n" 
           "    sizeof d = %d\tsizeof(double) = %d\n"
           "    sizeof ld = %d\tsizeof(long double) = %d\n"
           "    sizeof arreglo = %d\n"
           "    sizeof ptr = %d\n",
           sizeof c, sizeof (char), sizeof s, sizeof (short), sizeof i, 
           sizeof(int), sizeof l, sizeof(long), sizeof f,
           sizeof(float), sizeof d, sizeof(double), sizeof ld, 
           sizeof(long double), sizeof arreglo, sizeof ptr);


    return 0;
}