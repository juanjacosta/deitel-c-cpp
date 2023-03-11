#include <stdio.h>

int main()
{
  char c;
  char texto[80];
  int i = 0;
  
  puts("Introduzca una linea de texto: ");
  
  while ((c = getchar()) != '\n'){
    texto[i++] = c;
  }
  texto[i] = '\0';
  
  puts("Texto ingresado: ");
  puts(texto);
  
  
  return 0;
}