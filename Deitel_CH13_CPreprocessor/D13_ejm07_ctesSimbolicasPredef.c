/*
    programa : D13_ejm07_ctesSimbolicasPredef.c
    Propósito: Mostrar las constantes simbólicas predefinidas del C de ANSI
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n",__LINE__);
    printf(__FILE__"\n");
    printf(__DATE__"\n");
    printf(__TIME__"\n");
    
    return 0;
}