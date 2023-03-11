/*
    Programa : D8_ejm01_funcionesIsDigitIsAlphaIsAlnumIsXdigit.c
    Propósito: Mostrar el uso de las funciones de manipulación de 
               caracteres isdigit, isalpha, isalnum e isxdigit - pg. 291
            -  isdigit() determina si su argumento es un dígito (0-9)
            -  isalpha() determina si su argumento es una letra mayuscula
               (A-Z), o una letra minuscula (a-z)
            -  isalnum() determina si su argumento es una letra mayuscula, 
               una letra minuscula o un digito
            - isxdigit() determina si su argumento es un digito hexadecimal 
              (A-F, a-f, 0-9)
    Fecha    : 06/08/2019
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("=====================================================\n");
	printf("\tBibliotecas de manipulación de caracteres\n");
	printf("=====================================================\n");

    printf("%s\n%s%s\n%s%s\n\n", "De acuerdo con isdigit: ",
        isdigit('8') ? "8 es un " : "8 no es un ", "digito",
        isdigit('#') ? "# es un " : "# no es un ", "digito");
    
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
           "De acuerdo con isalpha:",
           isalpha('A') ? "A es una " : "A no es una ", "letra",
           isalpha('b') ? "b es una " : "b no es una ", "letra",
           isalpha('&') ? "& es una " : "& no es una ", "letra",
           isalpha('4') ? "4 es una " : "4 no es una ", "letra");

    printf("%s\n%s%s\n%s%s\n%s%s\n\n",
           "De acurdo con isalnum: ",
           isalnum('A') ? "A es un " : "A no es un ",
           "digito o una letra",
           isalnum('8') ? "8 es un " : "8 no es un ",
           "digito o una letra",
           isalnum('#') ? "# es un " : "# no es un ",
           "digito o una letra");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
           "De acuerdo con isxdigit:",
           isxdigit('F') ? "F es un " : "F no es un ",
           "digito hexadecimal",
           isxdigit('J') ? "J es un " : "J no es un ",
           "digito hexadecimal",
           isxdigit('7') ? "7 es un " : "7 no es un ",
           "digito hexadecimal",
           isxdigit('$') ? "$ es un " : "$ no es un ",
           "digito hexadecimal",
           isxdigit('f') ? "f es un " : "f no es un ",
           "digito hexadecimal");

    return 0;
}