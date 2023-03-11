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
    char url1[] = "http://192.168.0.201/metodos/status";
    char *url2 = "http://192.168.0.201/metodos/configuraLiberacao";
    const char url3[] = "http://192.168.0.201/metodos/liberaCatraca";

    char path[] = "metodos";
    char *metodo1 = strstr(url1, path);
    char *metodo2 = strstr(url2, path);
    char *metodo3 = strstr(url3, path);

    printf("URL 1: %s\n", url1);
    printf("URL 2: %s\n", url2);
    printf("URL 3: %s\n", url3);
    printf("\n");
    printf("Metodo 1: %s\n", metodo1);
    printf("Metodo 2: %s\n", metodo2);
    printf("Metodo 3: %s\n", metodo3);

    return 0;
}