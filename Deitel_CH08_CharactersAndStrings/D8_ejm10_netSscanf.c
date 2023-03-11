/*
    sscanf pertenece a las FUNCIONES DE ENTRADA/SALIDA de 
    la biblioteca estandar

    int sscanf(char *s, const char *format, ...);

    Equivalente a scanf, excepto que la entrada se lee desde 
    el arreglo s, en lugar de leerlo desde el teclado.
    
    @param s: cadena que la función procesa como fuente para recuperar 
        los datos

    @param format: cadena con el formato que recibe scanf 

    @param ...: Dependiendo de la cadena de formato, la función puede 
          esperar una secuencia de argumentos adicionales, cada 
          uno con un puntero al almacenamiento asignado donde la 
          interpretación de los caracteres extraídos se almacena 
          con el tipo apropiado. 
          Debe haber tantos argumentos como el número de valores
          almacenados por los especificadores de formato. 
          Argumentos adicionales son ignorados por la función. 
*/

#include <stdio.h>

int main()
{
    char sentence[] = "Rudolph is 12 years old";
    char str[20];
    int i;

    sscanf(sentence, "%s %*s %d", str, &i);
    printf("%s -> %d\n", str, i);

    return 0;
}