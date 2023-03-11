#include <stdio.h>
#include <string.h>

int main()
{
  char cadena[] = "Este es un enunciado con 7 tokens";
  char *ptrToken;
  
  printf("La cadena a dividir en tokens es \"%s\"\n\nLos Tokens son:\n", cadena);
  
  ptrToken = strtok(cadena, " ");
  
  while (ptrToken != NULL){
    printf("%s\n", ptrToken);
    ptrToken = strtok(NULL, " ");
  }
  
  return 0;
}