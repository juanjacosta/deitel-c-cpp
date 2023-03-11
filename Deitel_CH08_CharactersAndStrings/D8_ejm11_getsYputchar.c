/*
    gets y putchar son funciones de ENTRADA/SALIDA de la 
    biblioteca estándar 

        int *gets( char *s );

    Lee el siguiente caracter de la entrada estándar y lo 
    coloca en el arreglo s hasta que encuetra un caracter 
    de nueva línea o fin de archivo. Agrega un caracter de 
    terminación nulo al arreglo 

        int putchar (int c);
    
    Imprime el caracter almacenado en c 

*/

#include <stdio.h>

void inverso(const char * const ptrS);

int main()
{
    char enunciado[80];                 // crea un arreglo de caracteres 

    printf("Introduzca una linea de texto:\n");

    gets(enunciado);                    // utiliza gets para leer una línea de texto 

    printf("Linea Ingresada: %s\n", enunciado);

    printf("Linea al reves : ");
    inverso(enunciado);
    printf("\n");
    
    return 0;
}

/* inverso es una funcion recursiva */
void inverso(const char * const ptrS)
{
    /* si es el final de la cadena */
    if (ptrS[0] == '\0'){                   // caso base 
        return;             
    }
    /* si no es el final de la cadena */
    else {
        inverso(&ptrS[1]);                  // paso recursivo
        putchar(ptrS[0]);                   // utiliza putchar para desplegar los caracteres 
    }
}