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
 */

#include <stdio.h>

int main()
{
    char a = 'S';
    double b = 4.65;

    printf("Size of variable a   : %lu byte\n", sizeof a);
    printf("Size if an expression: %lu bytes\n", sizeof(a + b));

    int s = (int)(a + b);
    printf("Size of explicity converted expression: %lu\n", sizeof s);

    return 0;
}