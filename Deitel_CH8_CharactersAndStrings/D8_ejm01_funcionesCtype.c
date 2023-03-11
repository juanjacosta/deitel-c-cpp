#include <stdio.h>
#include <ctype.h>

int main()
{
  char c;
  printf("Caracter: ");
  scanf("%c", &c);
  
  if(isdigit(c)){
    printf("%c es un digito\n", c);
  }
  if(isalpha(c)){
    printf("%c es una letra\n", c);
  }
  if(!isalnum(c)){
    printf("%c no es una letra, ni un dígito ni un numero\n", c);
  }
  if(isxdigit(c)){
    printf("%c es un digito hexadecimal\n", c);
  }  
  return 0;
}