/*
    La función strchr busca la primera ocurrencia de un caracter
    en la cadena.

    Su prototipo es:

    char *strchr(const char *s, int c);

    Y localiza la primera ocurrencia del caracter c en la 
    cadena s. Si se localiza a c, se devuelve un apuntador 
    a c en s, de lo contrario se devuelve un apuntador NULL.  


*/

#include <stdio.h>
#include <string.h>

int main()
{
  const char *cadena = "Esta es una prueba";
  char caracter1 = 'a';
  char caracter2 = 'z';
  
  if (strchr(cadena, caracter1) != NULL){
    printf("\'%c\' se encuentra en \"%s\"", caracter1, cadena);
  } else{
    printf("\'%c\' no se encuentra en \"%s\"", caracter1, cadena);
  }
  printf("\n");
  if (strchr(cadena, caracter2) != NULL){
    printf("\'%c\' se encuentra en \"%s\"", caracter2, cadena);
  } else{
    printf("\'%c\' no se encuentra en \"%s\"", caracter2, cadena);
  }
  
  return 0;
}