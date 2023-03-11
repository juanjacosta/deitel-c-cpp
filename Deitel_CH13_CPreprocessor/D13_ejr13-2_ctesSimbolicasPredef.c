/*
    Programa : D13_ejr13-2_ctesSimbolicasPredef.c
    Propósito: Escriba un programa que imprima los valores de
               las constantes simbólicas predefinidas
*/
#include <stdio.h>

int main()
{
    printf("Número de línea: %d\n", __LINE__);
    printf("Nombre archivo fuente:\n%s\n", __FILE__);
    printf("Fecha compilación: %s\n", __DATE__);
    printf("Hora compilación : %s\n", __TIME__);

    return 0;
}