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
    
    if(islower(c)){
    printf("%c es una letra minuscula\n", c);
    printf("convertida a mayuscula : %c\n",    toupper(c));
    }
    else if(isupper(c)){
    printf("%c es una letra MAYUSCULA\n", c); 
    printf("convertida a minuscula : %c\n", tolower(c)); 
    }
  }
  if(!isalnum(c)){
    printf("%c no es una letra, ni un dígito ni un numero\n", c);
  }
  if(isxdigit(c)){
    printf("%c es un digito hexadecimal\n", c);
  } 
  else {
    printf("%c no es un digito hexadecimal\n", c);
  }
 if(isspace(c)){
    printf("%c es un espacio en blanco\n", c);
  } 
 if(iscntrl(c)){
    printf("%c es un caracter de control\n", c);
  } 
  if(ispunct(c)){
    printf("%c es un caracter de puntuacion\n", c);
  } 
 if(isprint(c)){
    printf("%c es un caracter de impresion\n", c);
  } 
  
  if(isgraph(c)){
    printf("%c es un caracter de impresion diferente de espacio en blanco\n", c);
  } 
  return 0;
}