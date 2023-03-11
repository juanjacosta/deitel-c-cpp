/*
    Programa : D8_ejm03_funcionesIsspaceIscntrlIspunctIsprintIsgraph.c
    Propósito: Mostrar el uso de las funciones de manipulación de 
               caracteres isspace, iscntrl, ispunct, isprint e isgraph - pg. 293
            -  isspace() determina si su argumento es uno de los caracteres de espacio
               en blanco(' '), avance de pagina('\f'), nueva linea('\n'), retorno de 
               carro ('\r'), tabulador horizontal('\t') o tabulador vertical ('\v')
            -  iscntrl() determina si su argumento es uno de los siguientes caracteres 
               de control: tabulador horizontal ('\t'), tabulador vertical('\v'), avance
               de pagina ('\f'), alerta ('\a'), retroceso ('\b'), retorno de carro ('\r')
               o nueva linea ('\n').
            -  ispunct() determina si su argumento es un caracter de impresion diferente del 
               espacio, un digito o una letra, tal como $, #, (,), [, ], {, }, ;, : o %
            - isprint() determina si su argumento es un caracter que puede desplegarse en 
              pantalla (incluso el caracter de espacio)
            - isgraph() evalua los mismos caracteres que isprint, sin embrago, no incluye el 
              caracter espacio.
    Fecha    : 01/10/2019
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%s\n%s%s%s\n%s%s%s\n%s%s\n\n",
           "De acuerdo con isspace: ",
           "Nueva linea", isspace('\n') ? " es un " : " no es un  ",
           "caracter espacio en blanco", "tabulador horizontal",
           isspace('\t') ? " es un " : " no es un ",
           "caracter espacio en blanco", 
           isspace('%') ? " % es un " : " % no es un ",
           "caracter de espacio en blanco");

    printf("%s\n%s%s%s\n%s%s\n\n", "De acuerdo con iscntrl: ",
           "Nueva linea", iscntrl('\n') ? " es un " : " no es un ",
           "caracter de control", iscntrl('$') ? "$ es un " :
           "$ no es un ", "control character");

    printf("%s\n%s%s\n%s%s\n%s%s\n\n",
           "De acuerdo con ispunct: ",
           ispunct(';') ? "; es un " : "; no es un ",
           "caracter de puntuacion",
           ispunct('Y') ? "Y es un " : "Y no es un ",
           "caracter de puntuacion",
           ispunct('#') ? "# es un " : "# no es un ",
           "caracter de puntuacion");

    printf("%s\n%s%s\n%s%s%s\n\n", "De acuerdo con isprint:",
           isprint('$') ? "$ es un" : "$ no es un ",
           "caracter de impresion",
           "Alerta", isprint('\a') ? " es un " : " no es un ",
           "caracter de impresion");

    printf("%s\n%s%s\n%s%s%s\n", "De acuerdo con isgraph:",
           isgraph('Q') ? "Q es un" : "Q no es un ",
           "caracter de impresion diferente a un espacio",
           "Espacio", isgraph(' ') ? " es un " : " no es un ",
           "caracter de impresion diferente a un espacio");

    return 0;
} 