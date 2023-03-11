/*
    snprintf pertenece a las FUNCIONES DE ENTRADA/SALIDA de 
    la biblioteca estandar
    
    int snprintf(char *str, size_t n, const char *format, ...);

    Equivalente a printf, excepto que la salida se almacena 
    en el arreglo str, en lugar de imprimirse en la pantalla,
    el parámetro n define la capacidad máxima arreglo str.

    Si la cadena resultante fuera más larga que n - 1 
    caracteres, los caracteres restantes se descartan y 
    no se almacenan, sino que se cuentan para el valor 
    devuelto por la función.

    Un caracter nulo de terminación se agrega automáticamente 
    después del contenido escrito.

    Después del parámetro de formato, la función espera al 
    menos tantos argumentos adicionales como sea necesario 
    para el formato. 

    @param str: pointer to a buffer where the resulting C-string 
          is stored. The buffer should be large enough to 
          contain the resulting string

    @param n: Máximo número de bytes a ser usados en el buffer.
        La cadena generada tiene una longitud de máximo 
        n - 1 caracteres, dejando espacio para adicionar 
        el caracter de terminación nulo. 
        size_t es un tipo integral sin signo

    @param format: C string that contains a format string that 
             follows the same specifications as format in 
             printf (see printf for details).
    
    @param ... : (aditional arguments)
           Depending on the format string, the function may 
           expect a sequence of additional arguments, each 
           containing a value to be used to replace a format 
           specifier in the format string (or a pointer to a 
           storage location, for n). There should be at least 
           as many of these arguments as the number of values 
           specified in the format specifiers. Additional 
           arguments are ignored by the function.
*/

#include <stdio.h>

int main()
{
    char buffer[100];
    int cx;

    cx = snprintf(buffer, 100, "The half of %d is %d", 60, 60/2);
    printf("%d\n", cx);

    if (cx > 0 && cx < 100)
        snprintf(buffer + cx, 100 - cx,", and the half of that is %d.", 60/2/2);

    puts(buffer);

    return 0;
}