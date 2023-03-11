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
    
    Programa : D7_ejm10_sizeofTiposDeDatos02.c
    Propósito: Calcular el numero de bytes que se utilizan para almacenar cada uno 
               de los tipos de datos estandares. Los resultados pueden variar entre 
               computadoras. 

               Ejm Deitel - Cap 7 - Ejm 7.17 - pg 251
    Fecha    : 23/05/2020
 */

#include <stdio.h>

int main()
{
    char c;
    short s;
    int i;
    unsigned int ui;
    long l;
    float f;
    double d;
    long double ld;
    int arreglo[20];        // arreglo de 20 elementos
    int *ptr = arreglo;     // apuntador a arreglo de 20 elementos 

    printf("sizeof c = %lu byte\t\tsizeof(char)  = %lu byte\n", sizeof c, sizeof(char));
    printf("sizeof s = %lu bytes\t\tsizeof(short) = %lu bytes\n", sizeof s, sizeof(short));
    printf("sizeof i = %lu bytes\t\tsizeof(int)   = %lu bytes\n", sizeof i, sizeof(int));
    printf("sizeof ui = %lu bytes\t\tsizeof(unsigned int)   = %lu bytes\n", sizeof ui, sizeof(unsigned int));
    printf("sizeof l = %lu bytes\t\tsizeof(long)  = %lu bytes\n", sizeof l, sizeof(long));
    printf("sizeof f = %lu bytes\t\tsizeof(float) = %lu bytes\n", sizeof f, sizeof(float));
    printf("sizeof d = %lu bytes\t\tsizeof(double)= %lu bytes\n", sizeof d, sizeof(double));
    printf("sizeof ld = %lu bytes\tsizeof(long double) = %lu bytes\n", sizeof ld, sizeof(long double));
    printf("sizeof arreglo = %lu\nsizeof ptr = %lu", sizeof arreglo, sizeof ptr);

    return 0;
}