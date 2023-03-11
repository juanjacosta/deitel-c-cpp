#include <stdio.h>

// Constantes de enumeración para representar los meses del anio
enum meses{
    ENE = 1, FEB, MAR, ABR, MAY, JUN, JUL, AGO, SEP, OCT, NOV, DIC
};

int main()
{
    enum meses mes;     // puede contener cualquiera de los 12 meses 

    // inicializa arreglo de apuntadores
    const char *nombreMes[] = {"", "Enero", "Febrero", "Marzo", "Abril", "Mayo", 
    "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    // Ciclo a través de los meses 
    for (mes = ENE; mes <= DIC; mes++){
        printf("%2d%11s\n", mes, nombreMes[mes]);
    }

    return 0;
}