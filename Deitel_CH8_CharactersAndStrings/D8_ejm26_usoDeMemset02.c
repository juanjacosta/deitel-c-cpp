/*
    memset pertenece a las FUNCIONES DE MEMORIA de la 
    biblioteca de manipulación de cadenas 

    void *memset(void *s, int c, size_t n);

    Copia c (convertido a unsigned char) dentro de los 
    primeros n caracteres del objeto al que apunta s. 
    Devuelve un apuntador al resultado.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char url[] = "http://192.168.0.201/metodos/configuraLiberacao?sentidoHorarioLiberado=N&sentidoAntiHorarioLiberado=N";
    char *metodos;

    metodos = strstr(url, "?");
    // puts(metodos);
    printf("Metodos: %s\n", metodos);

    memset(metodos, '-', 23);
    printf("Metodos: %s\n", metodos);

    return 0;
}