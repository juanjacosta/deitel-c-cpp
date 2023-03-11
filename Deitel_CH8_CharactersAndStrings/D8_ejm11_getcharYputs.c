/*
    getchar y puts son funciones de ENTRADA/SALIDA de la 
    biblioteca estándar 

        int getchar( void );

    Lee el siguiente caracter de la entrada estándar y lo 
    devuelve como un entero 

        int puts (const char *s);
    
    Imprime la cadena s seguida por el caracter de nueva linea 

*/

#include <stdio.h>

int main()
{
    char c;                 /* variable para almacenar los caracteres
                               introducidos por el usuario */
    char enunciado[80];     // crea un arreglo de caracteres 
    int i = 0;              // inicializa el contador i 

    /* indica al usuario que introduzca una linea de texto */
    puts("Introduzca una linea de texto: ");

    /* utiliza getchar para leer cada caracter */
    while ((c = getchar()) != '\n'){
        enunciado[i++] = c;
    }

    enunciado[i] = '\0';

    /* utiliza puts para desplegar el enunciado */
    puts("\nLa linea introducida es: ");
    puts(enunciado); 

    return 0;
}