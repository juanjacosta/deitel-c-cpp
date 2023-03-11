/*
  Esta función pertenece a las FUNCIONES DE BUSQUEDA de la 
  biblioteca de manipulación de cadenas 

  const char *strstr(const char *s1, const char *s2);

        char *strstr(const char *s1, const char *s2);

        char *strstr(      char *s1, const char *s2);

  Localiza la primera ocurrencia en la cadena s1 de la cadena s2.
  Si se localiza la cadena, se devuelve un apuntador a la cadena 
  en s1. De lo contrario se devuelve un apuntador NULL.

  Los terminadores '\0' no son comparados
*/


#include <stdio.h>
#include <string.h>

int main()
{
    const char *url = "http://192.168.0.201/metodos/configuraLiberacao?sentidoHorarioLiberado=N&sentidoAntiHorarioLiberado=N";
    const char *delimitadorPath = "?";

    char *buffer;

    printf("Cadena 1: %s\nCadena 2: %s\n", url, delimitadorPath);
    buffer = strstr(url, delimitadorPath);
    printf("buffer: %s\n", buffer);

    return 0;
}